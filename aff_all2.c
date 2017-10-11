/*
** aff_all2.c for aff_all2.c in /home/meridj/Rendu/PSU_2015_my_printf/srcs
**
** Made by Lemeh
** Login   <meridj@epitech.net>
**
** Started on  Mon Nov  9 23:49:33 2015 Lemeh
** Last update Tue Jan 26 12:43:36 2016 Lemeh
*/

#include "my_printf.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void     my_put_nbrunsigned(unsigned int nb)
{
  if (nb > 9)
    my_put_nbr(nb / 10);
  my_putchar((nb % 10) + 48);
}

void	my_put_nbr_base(long nb, char *base)
{
  int	j;
  long	div;
  long	size;

  size = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  div = 1;
  while ((nb / div) >= size)
    div = div * size;
  while (div > 0)
    {
      j = (nb / div) % size;
      my_putchar(base[j]);
      div = div / size;
    }
}

void		my_put_nbr_hexa(unsigned int nb, char *base)
{
  int		j;
  unsigned int	div;
  unsigned int	size;

  size = my_strlen(base);
  div = 1;
  while ((nb / div) >= size)
    div = div * size;
  while (div > 0)
    {
      j = (nb / div) % size;
      my_putchar(base[j]);
      div = div / size;
    }
}

void	my_putstr_octal(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  my_putchar('\\');
	  if (str[i] < 8)
	    my_putstr("00");
	  else if (str[i] < 64)
	    my_putchar('0');
	  my_put_nbr_base(str[i], "01234567");
	}
      else
	my_putchar(str[i]);
      i++;
    }
}
