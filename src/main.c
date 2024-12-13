/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:36:38 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/13 14:52:07 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minirt.h"

t_mlx *init_mlx(t_miniRT *miniRT)
{
	t_mlx *mlx;

	mlx = xmalloc(sizeof(t_mlx));
	mlx->mlx = xmlx_init();
	mlx->win = xmlx_new_window(mlx->mlx, miniRT->width, miniRT->height, "miniRT");
	return (mlx);
}

bool drawing_loop(t_miniRT *miniRT)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < miniRT->width)
	{
		while (j < miniRT->height)
		{
			//Rayを求める
			//Rayとオブジェクトの交差判定をする
				//交差する場合
					//交差している物体の中で一番近い物体を求める
						//物体の情報t_intersectionを求める
					//交差している物体の色を求める
						//光の計算3種類
							//拡散反射光
							//鏡面反射光
							//環境光
					//色を描画する
				//交差しない場合
					//背景色(黒)を描画する
			j++;
		}
		i++;
	}
}

int main(void)
{
	t_miniRT miniRT;

	miniRT = sample_input();
	miniRT.mlx = init_mlx(&miniRT);
	drawing_loop(&miniRT);
	mlx_loop(miniRT.mlx->mlx);
}