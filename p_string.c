/*
** D:\Code\Epitech\navy\string.c for navy in
**
** Made by Arthur Baurens
** Login   <arthur.baurens@epitech.eu>
**
** Started on  Mon Jan 30 15:40:56 2017 Arthur Baurens
** Last update Tue Jan 31 03:24:54 2017 Arthur Baurens
*/

#include <limits.h>

char	is_num(const char *str)
{
  int	i;

  i = 0;
  while (str && (str[i] == '-' || str[i] == '+'))
    i++;
  while (str && str[i])
    {
      if (str[i] < '0' || str[i] > '9')
	    return (0);
      i++;
    }
  return (1);
}

int		str_len(const char *str)
{
  int	i;

  i = -1;
  while (++i + 1 && str && str[i]);
  return (i);
}

int		my_getnbr(const char *str)
{
  int	i;
  long	nb;
  char	si;

  i = 0;
  si = 1;
  nb = 0;
  while (str && (str[i] == '-' || str[i] == '+'))
    {
      if (str[i] == '-')
	    si = -si;
      i++;
    }
  while (str && str[i] >= '0' && str[i] <= '9')
    {
      nb = nb * 10 + str[i++] - '0';
      if (nb * si < INT_MIN || nb * si > INT_MAX)
	    return (0);
      i++;
    }
  return (si * nb);
}

int		indexof(const char *str, char c)
{
  int	i;

  i = -1;
  while (++i + 1 && str && str[i] != c && str[i]);
  return (i);
}

char	my_strcmp(const char *s1, const char *s2)
{
  int	i;

  i = -1;
  while (s1[++i] && s2[i])
    {
      if (s1[i] != s2[i])
	    return (s1[i] - s2[i]);
    }
  return (0);
}
