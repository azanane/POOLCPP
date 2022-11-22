END=$'\x1b[0m
RED=$'\x1b[31m
GREEN=$'\x1b[32m
BLUE=$'\x1b[34m
ERASE=\033[2K\r

VPATH	=	Base/: \

SRCS	=	main.cpp \
			Base.cpp \

HEAD	=	./Base/Base.hpp \
			./DerivedClasses/A.hpp \
			./DerivedClasses/B.hpp \
			./DerivedClasses/C.hpp \

OBJS	=	$(addprefix .objects/, $(SRCS:.cpp=.o))

CC			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror 

NAME		=	convert

RM			=	rm -f

all:		${NAME}

$(NAME): $(OBJS) $(HEAD) Makefile
	@$(CC) $(OBJS) -I includes -o $@
	@echo "$(ERASE)$(GREEN)[CREATED $(NAME)]$(END)"

.objects/%.o:	%.cpp Makefile ${HEAD}
			@mkdir -p .objects
			@${CC} ${FLAGS} -c $< -o $@
			@printf "${ERASE}${BLUE}[BUILDING]${END} $@"

clean:
			@${RM} ${OBJS}
			@echo "${RED}[DELETED]${END} *.o"

fclean:		clean
			@${RM} ${NAME}
			@echo "${RED}[DELETED]${END} ${NAME}"

re:			fclean all

.PHONY: 	all clean fclean lib re
