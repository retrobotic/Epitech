/*
** draw_lines.h for draw_lines in /home/dupard_e/rendus/MUL_2014_fdf
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov 12 01:30:29 2014 Erwan Dupard
** Last update Wed Nov 12 01:31:25 2014 Erwan Dupard
*/

#ifndef _DRAW_LINES_H_
# define _DRAW_LINES_H_

#include "./my_vectors.h"

void            draw_ver_line(t_infos s, t_vect a, t_vect b, int color);
void            draw_hor_line(t_infos s, t_vect a, t_vect b, int color);
void            draw_line1(t_infos s, t_vect a, t_vect b, int color);
void            draw_line2(t_infos s, t_vect a, t_vect b, int color);
void            draw_line3(t_infos s, t_vect a, t_vect b, int color);
void            draw_line4(t_infos s, t_vect a, t_vect b, int color);
void            draw_lines(t_infos s, t_vect a, t_vect b, int color);
int             rand_val(int a, int b);

#endif	/* !_DRAW_LINES_H_ */
