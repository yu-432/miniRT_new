/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_calc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:15:14 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/11 13:11:13 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_CALC_H
# define VEC3_CALC_H

#include "miniRT.h"

t_vec3	vec3_add(t_vec3 a, t_vec3 b);
t_vec3	vec3_sub(t_vec3 a, t_vec3 b);
t_vec3	vec3_mul(t_vec3 a, t_vec3 b);
double	vec3_dot(t_vec3 a, t_vec3 b);
t_vec3	vec_cross(t_vec3 a, t_vec3 b);
double vec_mag(t_vec3 a);
t_vec3 vec_normalize(t_vec3 a);

# endif