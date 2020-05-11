# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/05 18:19:38 by lnoaille          #+#    #+#              #
#    Updated: 2020/05/10 02:31:55 by lnoaille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c \
ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memmove.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

DEP = libft.h

OBJS = ${SRCS:.c=.o}

BONUS = ${SRCS_BONUS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LIB = ar rcs

.c.o : ${DEP}
		gcc ${CFLAGS} -c $< -o ${<:.c=.o}


all : 		${NAME}

${NAME}:	${OBJS}
			${LIB} ${NAME} ${OBJS}

bonus :  	${BONUS} ${OBJS}
			${LIB} ${NAME} ${BONUS} ${OBJS}

clean :
			${RM} ${OBJS} ${BONUS}

fclean :	clean
			${RM} ${NAME}

re :		fclean all
