#include "shell.h"

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
<<<<<<< HEAD
 *
 * Return: 0 on success, 1 on error
 */
=======
 * Return: 0 on success, 1 on error
 */

>>>>>>> ccbbc1eac0f01c1c9053b42788520ad73e7b3127
int main(int ac, char **av)
{
	info_t info[] = { INFO_INIT };
	int fd = 2;

	asm ("mov %1, %0\n\t"
<<<<<<< HEAD
		"add $3, %0"
		: "=r" (fd)
		: "r" (fd));
=======
			"add $3, %0"
			: "=r" (fd)
			: "r" (fd));
>>>>>>> ccbbc1eac0f01c1c9053b42788520ad73e7b3127

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_eputs(av[0]);
				_eputs(": 0: Can't open ");
				_eputs(av[1]);
				_eputchar('\n');
				_eputchar(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfd = fd;
<<<<<<< HEAD
	}
	populate_env_list(info);
	read_history(info);
	hsh(info, av);
=======
		populate_env_list(info);
		read_history(info);
		hsh(info, av);
	}
>>>>>>> ccbbc1eac0f01c1c9053b42788520ad73e7b3127
	return (EXIT_SUCCESS);
}
