#include <pipex.h>

void	vlst_clear(char **vlst)
{
	char **iter;

	iter = vlst;
	while (*iter != NULL)
		free(*iter++);
	free(vlst);
}

bool	is_open(int fd)
{
	return (fd != INVFD);
}

bool	is_valid_arg_num(int argc)
{
	return (argc == 5);
}

bool	is_parent_proc(pid_t pid)
{
	return (pid != 0);
}
