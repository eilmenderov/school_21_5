#include "../head_cub.h"

int	main(int argc, char **argv)
{
	t_opt	opt;

	if (argc != 2)
		puterror("incorrect arguments, need only one");
	ft_parcer(&opt, argv[1]);
	mlx_hook(opt.win, 17, 0l, closer, &opt);
	mlx_hook(opt.win, 2, 0, key_press, &opt);
	mlx_hook(opt.win, 3, 0, key_release, &opt);
	mlx_loop_hook(opt.mlx, draw_all, &opt);
	mlx_loop(opt.mlx);
}
