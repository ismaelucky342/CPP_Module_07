# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 04:06:52 by ismherna          #+#    #+#              #
#    Updated: 2026/11/10 19:51:55 by ismherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = main.cpp
INCLUDE = Array.tpp Array.hpp

OBJS = ${SRCS:.cpp=.o}

$(NAME): $(OBJS) $(INCLUDE)
			$(CC) -o $(NAME) $(CFLAGS) $(OBJS)
			
all: $(NAME)
	@echo "																								"
	@echo " ██████╗██████╗ ██████╗    ███╗   ███╗ ██████╗ ██████╗ ██╗   ██╗██╗     ███████╗         ██████╗ ███████╗"
	@echo "██╔════╝██╔══██╗██╔══██╗   ████╗ ████║██╔═══██╗██╔══██╗██║   ██║██║     ██╔════╝        ██╔═████╗╚════██║"
	@echo "██║     ██████╔╝██████╔╝   ██╔████╔██║██║   ██║██║  ██║██║   ██║██║     █████╗          ██║██╔██║    ██╔╝"
	@echo "██║     ██╔═══╝ ██╔═══╝    ██║╚██╔╝██║██║   ██║██║  ██║██║   ██║██║     ██╔══╝          ████╔╝██║   ██╔╝ "
	@echo "╚██████╗██║     ██║███████╗██║ ╚═╝ ██║╚██████╔╝██████╔╝╚██████╔╝███████╗███████╗███████╗╚██████╔╝   ██║  "
	@echo " ╚═════╝╚═╝     ╚═╝╚══════╝╚═╝     ╚═╝ ╚═════╝ ╚═════╝  ╚═════╝ ╚══════╝╚══════╝╚══════╝ ╚═════╝    ╚═╝  "
	@echo "                                                                                                          		"
	@echo "				12/02/2025 - ismherna@student.42.fr - 42 Madrid - Ismael Hernández	 "                                                                                                          

%.o:%.cpp $(INCLUDE)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "Archivos .o eliminados."

fclean: clean
	rm -f $(NAME)
	@echo "Ejecutable $(NAME) eliminado."

re: fclean all

.PHONY: all clean fclean re