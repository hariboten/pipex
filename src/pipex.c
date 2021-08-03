#include <pipex.h>

void	close_unuse_fd(t_px *px)
{
	close(px->com1.fdin);
	close(px->com1.fdout);
	close(px->com2.fdin);
	close(px->com2.fdout);
	px->com1.fdin = -1;
	px->com1.fdout = -1;
	px->com2.fdin = -1;
	px->com2.fdout = -1;
}

pid_t	launch_command(const t_com *com, int closefd)
{
	pid_t	pid;
	int		ret;

	pid = fork();
	if (is_parent_proc(pid))
	{
		if (is_error(pid))
			px_error(ERR_VAL);
		return (pid);
	}
	ret = dup2(com->fdin, STDIN_FILENO);
	if (is_error(ret))
		exit(px_error(ERR_VAL));
	ret = dup2(com->fdout, STDOUT_FILENO);
	if (is_error(ret))
		exit(px_error(ERR_VAL));
	close(com->fdin);
	close(com->fdout);
	close(closefd);
	ret = exec_com(com);
	exit(px_error(ERR_VAL));
}

int		open_fds(const t_px *px, t_com *com1, t_com *com2)
{
	int		pipe_fd[2];
	int		ret;

	com1->fdin = open(px->input_file, O_RDONLY);
	if (is_error(com1->fdin))
		return (px_error(ERR_VAL));
	com2->fdout = open(px->output_file, O_WRONLY | O_TRUNC | O_CREAT);
	if (is_error(com2->fdout))
		return (px_error(ERR_VAL));
	ret = pipe(pipe_fd);
	if (is_error(ret))
		return (px_error(ERR_VAL));
	com1->fdout = pipe_fd[1];
	com2->fdin = pipe_fd[0];
	return (0);
}

int		wait_for_child_procs(pid_t pid1, pid_t pid2)
{
	int		ret;
	int		status;

	ret = waitpid(pid1, &status, 0);
	if (is_error(ret))
		return (ERR_VAL);
	ret = waitpid(pid2, &status, 0);
	if (is_error(ret))
		return (ERR_VAL);
	return (0);
}

int		pipex(t_px *px)
{
	pid_t	pid1;
	pid_t	pid2;
	int		ret;

	ret = open_fds(px, &px->com1, &px->com2);
	if (is_error(ret))
		return (ERR_VAL);
	pid1 = launch_command(&px->com1, px->com2.fdin);
	pid2 = launch_command(&px->com2, px->com1.fdout);
	if (is_error(pid1) || is_error(pid2))
		return (ERR_VAL);
	close_unuse_fd(px);
	ret = wait_for_child_procs(pid1, pid2);
	if (is_error(ret))
		return (ERR_VAL);
	return (0);
}
