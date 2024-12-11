/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_calc2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:30:51 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/11 12:56:45 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/miniRT.h"

t_vec3	vec_cross(t_vec3 a, t_vec3 b)
{
	t_vec3 res;

	res.x = a.y * b.z - a.z * b.y;
	res.y = a.x * b.z - a.z * b.x;
	res.z = a.x * b.y - a.y * b.x;
	return (res);
}

double vec_mag(t_vec3 a)
{
	return (sqrt(a.x * a.x + a.y * a.y + a.z * a.z));
}

t_vec3 vec_normalize(t_vec3 a)
{
	t_vec3 res;
	double mag;

	mag = vec_mag(a);
	res.x = a.x / mag;
	res.y = a.y / mag;
	res.z = a.z / mag;
	return (res);
}

