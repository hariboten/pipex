
#include <pipex.h>

int		px_error(int ret_val)
{
	perror(ERR_PREFIX);
	return (ret_val);
}

int		px_error_msg(t_err errno)
{
	if (errno == E_INVARGNUM)
		ft_putendl_fd(MSG_INVARGNUM, 2);
	if (errno == E_ALLOC)
		ft_putendl_fd(MSG_FAILALLOC, 2);
	return(ERR_VAL);
}

bool	is_error(int ret_val)
{
	return (ret_val == ERR_VAL);
}

bool	is_error_p(void *p)
{
	return (p == NULL);
}
