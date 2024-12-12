/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:36:38 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/12 14:38:11 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniRT.h"

t_mlx *init_mlx(void)
{
	t_mlx *mlx;

	mlx = ft_calloc(1, sizeof(t_mlx));
	mlx->mlx = mlx_init();
	mlx->win = mlx_new_window();
	return (mlx);
}

int main(void)
{
	t_miniRT miniRT;

	miniRT = sample_input();
	miniRT.mlx = init_mlx();

	printf("hello\n");
}