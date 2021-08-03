#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <libft.h>

# define ERR_PREFIX "pipex: "
# define ERR_VAL -1
# define INVFD -1
# define SPLIT_SEP ' '

# define MSG_INVARGNUM "pipex: invalid number of arguments"
# define MSG_FAILALLOC "pipex: failed to allocate memory"

typedef struct s_px t_px;
typedef struct s_com t_com;
typedef	enum e_err t_err;

struct s_com
{
	char	*filename;
	char	**argv;
	char	**envp;
	int		fdin;
	int		fdout;
};

struct s_px
{
	char	**envp;
	char	*input_file;
	char	*output_file;
	t_com	com1;
	t_com	com2;
};

enum e_err
{
	E_NOERR = 0,
	E_INVARGNUM,
	E_ALLOC,
	E_NULL
};

/*
 * pipex.c
 */
int		px_init(t_px *px, int argc, char **argv, char **envp);
int		pipex(t_px *px);
void	px_destroy(t_px *px);

/*
 * px_exec.c
 */
int		exec_com(const t_com *com);

/*
 * init_destroy.c
 */
int		px_init(t_px *px, int argc, char **argv, char **envp);
void	px_destroy(t_px *px);

/*
 * px_error.c
 */
int		px_error(int ret_val);
int		px_error_msg(t_err errno);
bool	is_error(int ret_val);
bool	is_error_p(void *p);

/*
 * px_utils.c
 */
void	vlst_clear(char **vlst);
bool	is_open(int fd);
bool	is_valid_arg_num(int argc);
bool	is_parent_proc(pid_t pid);

#endif
/* ifndef PIPEX_H */
