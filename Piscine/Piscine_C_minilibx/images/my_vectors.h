/*
** my_vectors.h for my_vectors in /home/dupard_e/rendus/Piscine_C_minilibx/lines
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov  4 13:44:15 2014 Erwan Dupard
** Last update Thu Nov 13 18:19:12 2014 Erwan Dupard
*/

#ifndef _MY_VECTORS_H_
# define _MY_VECTORS_H_

# define ABS(c) (c >= 0 ? c : -c)

typedef struct	s_tabvect
{
  int		x;
  int		y;
  int		z;
}		t_tabvect;

typedef struct	s_vect
{
  int		x;
  int		y;
}		t_vect;

typedef struct	s_infos
{
  void		*mlx_ptr;
  void		*win_ptr;
}		t_infos;

typedef struct s_img
{
  int		bpp;
  int		sizeline;
  int		endian;
}		t_img;


void		draw_line1(t_infos s, t_vect a, t_vect b, int color);
void            draw_lines(t_infos s, t_vect a, t_vect b, int color);

#endif /* !_MY_VECTORS_H_ */
