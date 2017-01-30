/*
** D:\Code\Epitech\navy\include\navy.h for navy in
**
** Made by Arthur Baurens
** Login   <arthur.baurens@epitech.eu>
**
** Started on  Mon Jan 30 15:51:46 2017 Arthur Baurens
** Last update Mon Jan 30 18:09:26 2017 Arthur Baurens
*/

#ifndef NAVY_H_
# define NAVY_H_
# define MAP_SIZE 20

void	display_map(char **);
char	**get_map(const char *);
char	my_strcmp(const char *, const char *);

void	padded_putnbr(int, int);
void	my_putnbr(int);
void	my_putchar(char);
int		my_numlen(int);

#endif /* !NAVY_H_ */
