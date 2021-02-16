# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpascoal <rpascoal@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 15:48:02 by rpascoal          #+#    #+#              #
#    Updated: 2021/02/16 10:26:37 by rpascoal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_strlen.c	ft_strlcat.c	ft_strncmp.c	ft_memcmp.c	\
	ft_atoi.c	ft_isdigit.c	ft_isalpha.c	ft_isalnum.c	\
	ft_isascii.c	ft_isprint.c	ft_tolower.c	ft_toupper.c	\
	ft_memmove.c	ft_memccpy.c	ft_memcpy.c	ft_bzero.c	\
	ft_memset.c	ft_memchr.c	ft_strlcpy.c	ft_strchr.c	\
	ft_strrchr.c	ft_strnstr.c	ft_strdup.c	ft_calloc.c	\
	ft_substr.c	ft_strjoin.c	ft_strtrim.c	ft_split.c	\
	ft_itoa.c	ft_strmapi.c	ft_putchar_fd.c	ft_putstr_fd.c	\
	ft_putendl_fd.c	ft_putnbr_fd.c	ft_lstnew.c	ft_lstadd_front.c\
	ft_lstsize.c	ft_lstlast.c	ft_lstadd_back.c \
	ft_lstdelone.c 	
OBJS	= $(SRCS:.c=.o)
CC	= gcc
FLAGS	= -Wall -Wextra -Werror 
INCL	= includes
NAME	= libft.a

%.o:		%.c
		$(CC)  $(FLAGS) -c $< -I $(INCL)  -o $@

$(NAME):	$(OBJS)
		ar rcs $@ $(OBJS)

all:		$(NAME)

clean:	
		rm -f  $(OBJS)

fclean:		clean
		rm -f $(NAME)

re:		fclean	$(NAME)

file:		$(NAME)
	$(CC) $(FLAGS)  main.c -I $(INCL) $< -o "teste"

teste:		file fclean
		
