/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:02:44 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/13 12:46:01 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minirt.h"

void	*xmalloc(size_t size)
{
	void *res;

	res = malloc(size);
	if (!res)
	{
		ft_putstr_fd("miniRT: ", 2);
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	ft_memset(res, 0, size);
	return (res);
}

int xopen(const char *pathname, int flags)
{
	int res;

	res = open(pathname, flags);
	if (res == -1)
	{
		ft_putstr_fd("miniRT: ", 2);
		perror("open");
		exit(EXIT_FAILURE);
	}
	return (res);
}

void xclose(int fd)
{
	int res;

	res = close(fd);
	if (res == -1)
	{
		ft_putstr_fd("miniRT: ", 2);
		perror("close");
		exit(EXIT_FAILURE);
	}
}

void *xmlx_init(void)
{
	void *mlx;

	mlx = mlx_init();
	if (!mlx)
	{
		ft_putstr_fd("miniRT: ", 2);
		perror("mlx_init");
		exit(EXIT_FAILURE);
	}
	return (mlx);
}

void *xmlx_new_window(void *mlx, int width, int height, char *title)
{
	void *win;

	win = mlx_new_window(mlx, width, height, title);
	if (!win)
	{
		ft_putstr_fd("miniRT: ", 2);
		perror("mlx_new_window");
		exit(EXIT_FAILURE);
	}
	return (win);
}


