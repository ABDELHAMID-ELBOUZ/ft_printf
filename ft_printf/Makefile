# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 16:37:57 by aelbouz           #+#    #+#              #
#    Updated: 2024/11/30 13:08:35 by aelbouz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc 

FLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rcs

SRCS = ft_format.c ft_puthexa.c  ft_putptr.c   ft_putunint.c \
ft_printf.c   ft_putchar.c  ft_putnbr.c   ft_putstr.c ft_strchr.c\

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all