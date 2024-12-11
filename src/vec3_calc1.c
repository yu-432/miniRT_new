/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_calc1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:27:58 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/11 12:30:41 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hedear/miniRT.h"

t_vec3	vec3_add(t_vec3 a, t_vec3 b)
{
	t_vec3 res;

	res.x = a.x + b.x;
	res.y = a.y + b.y;
	res.z = a.z + b.z;
	return (res);
}

t_vec3	vec3_sub(t_vec3 a, t_vec3 b)
{
	t_vec3 res;

	res.x = a.x - b.x;
	res.y = a.y - b.y;
	res.z = a.z - b.z;
	return (res);
}

t_vec3	vec3_mul(t_vec3 a, t_vec3 b)
{
	t_vec3 res;

	res.x = a.x * b.x;
	res.y = a.y * b.y;
	res.z = a.z * b.z;
	return (res);
}

double	vec3_dot(t_vec3 a, t_vec3 b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}