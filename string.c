/*
** D:\Code\Epitech\navy\string.c for navy in
**
** Made by Arthur Baurens
** Login   <arthur.baurens@epitech.eu>
**
** Started on  Mon Jan 30 15:40:56 2017 Arthur Baurens
** Last update Mon Jan 30 15:44:59 2017 Arthur Baurens
*/

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
