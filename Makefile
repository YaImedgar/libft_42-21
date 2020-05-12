# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imedgar <imedgar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/03 23:24:43 by imedgar           #+#    #+#              #
#    Updated: 2020/05/04 13:01:00 by imedgar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	ft_atoi.c			\
			ft_bzero.c			\
			ft_calloc.c			\
			ft_isalnum.c		\
			ft_isalpha.c		\
			ft_isascii.c		\
			ft_isdigit.c		\
			ft_isprint.c		\
			ft_itoa.c			\
			ft_memccpy.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_memcpy.c			\
			ft_memmove.c		\
			ft_memset.c			\
			ft_putchar_fd.c		\
			ft_putendl_fd.c		\
			ft_putnbr_fd.c		\
			ft_putstr_fd.c		\
			ft_split.c			\
			ft_strchr.c			\
			ft_strdup.c			\
			ft_strjoin.c		\
			ft_strlcat.c		\
			ft_strlcpy.c		\
			ft_strlen.c			\
			ft_strmapi.c		\
			ft_strncmp.c		\
			ft_strnstr.c		\
			ft_strrchr.c		\
			ft_strtrim.c		\
			ft_substr.c			\
			ft_tolower.c		\
			ft_toupper.c

SRCBNS	=	ft_lstadd_back.c	\
			ft_lstadd_front.c	\
			ft_lstclear.c		\
			ft_lstdelone.c		\
			ft_lstiter.c		\
			ft_lstlast.c		\
			ft_lstmap.c			\
			ft_lstnew.c			\
			ft_lstsize.c

HEADER	=	libft.h

CC		=	gcc
CFLAGS	=	-c -Wall -Werror -Wextra
RM		=	rm -f
AR		=	ar rcs
OBJ		=	$(SRC:c=o)
OBJBNS	=	$(SRCBNS:c=o)



all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(AR) $@ $(OBJ)

bonus: $(OBJ) $(OBJBNS)
	$(AR) $(NAME) $(OBJ) $(OBJBNS)

clean:
	$(RM) $(OBJ) $(OBJBNS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
