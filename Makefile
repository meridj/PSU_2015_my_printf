##
## Makefile for Makefile in /home/meridj_m/Rendu/PSU_2015_my_printf
## 
## Made by Mehdi Meridja
## Login   <meridj_m@epitech.net>
## 
## Started on  Tue Nov  3 14:05:37 2015 Mehdi Meridja
## Last update Tue Jan 26 12:28:32 2016 Lemeh
##

NAME	= my_printf.a

CFLAGS	= -Wall -W -Wextra -I./include/

SRCS	= my_printf.c	\
	  aff_all2.c	\
	  aff_all.c	\
	  flag.c	\
	  flag2.c	\
	  flag3.c

OBJ	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) lib/my/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
