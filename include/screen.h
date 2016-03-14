/*
** screen.h for  in /home/planch_j/rendu/PSU/PSU_2015_tetris/include/
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Tue Mar  8 16:26:29 2016 Jean PLANCHER
** Last update Mon Mar 14 23:09:12 2016 Jean PLANCHER
*/

#ifndef SCREEN_H_
# define SCREEN_H_

# include "my_fonction.h"

# define BORDER_GAME '|', '|', '-', '-', '/', '\\', '\\', '/'
# define GHEIGHT (setup->height + 2)
# define GWIDTH (setup->width + 2)
# define STARTX ((COLS - GWIDTH) / 2)
# define STARTY ((LINES - GHEIGHT) / 2)

typedef struct	s_screen
{
  WINDOW	*game;
  WINDOW	*next;
  WINDOW	*score;
}		t_screen;

int	init_score(t_setup *setup);
void	write_hs(int score);

#endif /* !SCREEN_H_ */
