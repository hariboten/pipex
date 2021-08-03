#include <pipex.h>

int	exec_com(const t_com *com)
{
	return (execvp(com->filename, com->argv));
}
