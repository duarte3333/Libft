SRCS	=	ft_atoi.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_calloc.c \
			ft_putchar_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_striteri.c \
			ft_strtrim.c \
			ft_bzero.c \
			ft_strjoin.c \
			ft_strlen.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strncmp.c \
			ft_strdup.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_substr.c \
			ft_tolower.c \
			ft_strmapi.c \
			ft_split.c \
			ft_toupper.c 

BONUS	=	ft_lstadd_front.c \
			ft_lstlast.c \
			ft_lstnew.c \
			ft_lstsize.c \
			ft_lstadd_back.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c

OBJS	= ${SRCS:.c=.o}
BONUS_OBJS		= $(BONUS:.c=.o)
NAME	= libft.a
LIBC	= ar rcs
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
HEAD = libft.h

#-I ${INCS}
#.c.o:
#	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

.c.o:
		${CC} ${FLAGS} ${HEAD} -c $<


all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

bonus:	$(OBJS) $(BONUS_OBJS)
		${LIBC} $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	${RM} ${OBJS} $(BONUS_OBJS)

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus