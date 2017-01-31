/*
** D:\Code\Epitech\Navy\a_string.c for navy in
**
** Made by Arthur Baurens
** Login   <arthur.baurens@epitech.eu>
**
** Started on  Tue Jan 31 01:59:57 2017 Arthur Baurens
** Last update Tue Jan 31 02:49:38 2017 Arthur Baurens
*/

#include <stdlib.h>
#include "navy.h"

char	*my_strncat(const char *s1, const char *s2, int n)
{
  int	i;
  int	j;
  int	ln;
  char	*res;

  i = 0;
  j = -1;
  ln = str_len(s1) + str_len(s2);
  if (n >= 0 && n < ln)
    ln = n;
  if (ln == 0 || (res = malloc(sizeof(char) * (ln + 1))) == NULL)
    return (NULL);
  res[ln] = '\0';
  while (s1 && s1[i] && i < ln)
    {
      res[i] = s1[i];
      i++;
    }
  while (s2 && s2[++j] && i + j < ln)
    res[i + j] = s2[j];
  return (res);
}

static int	count_wrds(const char *str, char c)
{
  int		i;
  int		wrd;

  i = -1;
  wrd = 0;
  while (str && str[++i])
    {
      if (str[i] != c && (str[i + 1] == '\0' || str[i + 1] == c))
	    wrd++;
    }
  return (wrd);
}

char	**my_split(char *str, const char c)
{
  int	i;
  int	j;
  char	**res;

  i = count_wrds(str, c);
  if ((res = malloc(sizeof(char) * (i + 1))) == NULL)
    return (NULL);
  res[i] = NULL;
  j = 0;
  while (*str && (i = -1) == -1)
    {
      while (str && str[++i] == c);
	  str = &str[i];
      i = indexof(str, c);
      if (i != 0 && (res[j++] = my_strncat(NULL, str, i)) == NULL)
	    {
	      while (--j >= 0)
	        free(res[j]);
	      free(res);
	      return (NULL);
	    }
      str = &str[i];
    }
  return (res);
}
