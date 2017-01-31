/*
** D:\Code\Epitech\navy\include\navy.h for navy in
**
** Made by Arthur Baurens
** Login   <arthur.baurens@epitech.eu>
**
** Started on  Mon Jan 30 15:51:46 2017 Arthur Baurens
** Last update Tue Jan 31 03:17:05 2017 Arthur Baurens
*/

#ifndef NAVY_H_
# define NAVY_H_
# define MAP_SIZE 20
# define BOATS "2:3:4:5"
# define ALPHA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

typedef struct	s_vec
{
  int			x;
  int			y;
}				t_vec;

void	display_map(char **);

char	**get_map(const char *);

char	is_num(const char *);
int		str_len(const char *);
int		my_getnbr(const char *);
int		indexof(const char *, char);
char	my_strcmp(const char *, const char *);

char	*my_strncat(const char *, const char *, int);
char	**my_split(char *, char);

void	padded_putnbr(int, int);
void	my_putnbr(int);
void	my_putchar(char);
int		my_numlen(int);

#endif /* !NAVY_H_ */
