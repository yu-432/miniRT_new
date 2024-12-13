/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:16:38 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/13 13:02:11 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minirt.h"

t_miniRT sample_input(void)
{
	t_miniRT res;
	
	res.width = 800;
	res.height = 800;
	////
	t_camera *camera = ft_calloc(1, sizeof(t_camera));
	camera->fov = 70;
	camera->nomal_vec.x = 0;
	camera->nomal_vec.y = 0;
	camera->nomal_vec.z = -5;
	////
	t_light *light = ft_calloc(1, sizeof(t_light));
	light->light_brightness = 0.6;
	light->position.x = -40;
	light->position.y = 50;
	light->position.z = 0;
	////
	t_ambient *ambient = ft_calloc(1, sizeof(t_ambient));
	ambient->color.red = 255;
	ambient->color.green = 255;
	ambient->color.blue = 255;
	ambient->ambient_lighting = 0.2;
	////
	t_sphere *sphere1 = ft_calloc(1, sizeof(t_sphere));
	sphere1->position.x = 0;
	sphere1->position.y = 0;
	sphere1->position.z = 5;
	sphere1->diametor = 1;
	sphere1->color.red = 255;
	sphere1->color.green = 0;
	sphere1->color.blue = 0;
	////
	t_obj *obj1 = ft_calloc(1, sizeof(t_obj));
	obj1->kind = SPHERE;
	obj1->obj = sphere1;
	obj1->next = NULL;
	////
	t_scene *scene = ft_calloc(1, sizeof(t_scene));
	scene->camera = camera;
	scene->ambient = ambient;
	scene->light = light;
	scene->objs = obj1;
	////
	res.scene = scene;
	return (res);
}