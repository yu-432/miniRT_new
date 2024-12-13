/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:12:49 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/13 13:01:58 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <strings.h>
#include <stdbool.h>
#include <fcntl.h>
#include "../libft/libft.h"
#include "../minilibx-linux/mlx.h"
#include "vec3_calc.h"

typedef struct s_color
{
	int	red;
	int green;
	int blue;
}	t_color;

typedef struct s_ray
{
	t_vec3 origin;
	t_vec3 direction;
}	t_ray;

typedef struct s_camera
{
	int fov;
	t_vec3 position;
	t_vec3 nomal_vec;
}	t_camera;

typedef struct s_light
{
	double light_brightness;
	t_vec3 position;
}	t_light;

typedef struct s_ambient
{
	double ambient_lighting;
	t_color	color;
}	t_ambient;

typedef enum s_obj_kind
{
	SPHERE,
	PLANE,
	CYLINDER
}	t_obj_kind;

typedef struct s_sphere
{
	t_vec3 position;
	double diametor;
	t_color color;
}	t_sphere;

typedef struct s_plane
{
	t_vec3 position;
	t_vec3 normal_vec;
	t_color color;
}	t_plane;

typedef struct s_cylinder
{
	t_vec3 position;
	t_vec3 normal_vec;
	double diametor;
	double height;
	t_color color;
}	t_cylinder;

typedef struct s_obj
{
	t_obj_kind kind;
	void *obj;
	struct s_obj *next;
}	t_obj;

typedef struct s_scene
{
	t_camera *camera;
	t_light *light;
	t_ambient *ambient;
	t_obj *objs;
}	t_scene;

typedef struct s_mlx
{
	void *mlx;
	void *win;
	void *img;
	char *addr;
	int bits_per_pixel;
	int line_length;
	int endian;
}	t_mlx;

typedef struct s_miniRT
{
	t_mlx	*mlx;
	t_scene *scene;
	int width;
	int height;
}	t_miniRT;

t_miniRT	sample_input(void);
int			xopen(const char *pathname, int flags);
void		*xmalloc(size_t size);
void		xclose(int fd);
void *xmlx_init(void);
void *xmlx_new_window(void *mlx, int width, int height, char *title);

# endif
