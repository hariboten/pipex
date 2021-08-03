#include <pipex.h>

int		set_param_com(t_com *com, const char *comstr, char **envp)
{
	com->envp = envp;
	com->argv = ft_split(comstr, SPLIT_SEP);
	if (is_error_p(com->argv))
		return (px_error_msg(E_ALLOC));
	com->filename = *com->argv;
	return (0);
}

void	init_com(t_com *com)
{
	com->argv = NULL;
	com->envp = NULL;
	com->filename = NULL;
	com->fdin = -1;
	com->fdout = -1;
}

void	destroy_com(t_com *com)
{
	if (is_open(com->fdin))
		close(com->fdin);
	if (is_open(com->fdout))
		close(com->fdout);
	vlst_clear(com->argv);
}

int		px_init(t_px *px, int argc, char **argv, char **envp)
{
	int		ret;

	if (!is_valid_arg_num(argc))
		return (px_error_msg(E_INVARGNUM));
	px->envp = envp;
	init_com(&px->com1);
	init_com(&px->com2);
	px->input_file = argv[1];
	px->output_file = argv[4];
	ret = set_param_com(&px->com1, argv[2], envp);
	if (is_error(ret))
		return (ERR_VAL);
	set_param_com(&px->com2, argv[3], envp);
	if (is_error(ret))
	{
		destroy_com(&px->com1);
		return (ERR_VAL);
	}
	return (0);
}

void	px_destroy(t_px *px)
{
	destroy_com(&px->com1);
	destroy_com(&px->com2);
}
