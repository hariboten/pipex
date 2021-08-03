#include <pipex.h>

int	main(int argc, char **argv, char **envp)
{
	t_px	px;
	int		ret;

	ret = px_init(&px, argc, argv, envp);
	if (is_error(ret))
		return (ERR_VAL);
	ret = pipex(&px);
	px_destroy(&px);
	return (ret);
}
