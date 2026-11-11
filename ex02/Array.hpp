/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:30:49 by ismherna          #+#    #+#             */
/*   Updated: 2026/11/11 16:11:17 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

/*===============================INCLUDES===================================*/

#include <iostream>
#include <cstdlib>
#include <cassert>
#include <stdexcept>
#define MAX_VAL 10

/*================================COLORS=====================================*/

# define RESET "\033[0m"
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
# define GRAY "\033[90m"

# define B_BLACK "\033[40m"
# define B_RED "\033[41m"
# define B_GREEN "\033[42m"
# define B_YELLOW "\033[43m"
# define B_BLUE "\033[44m"
# define B_MAGENTA "\033[45m"
# define B_CYAN "\033[46m"
# define B_WHITE "\033[47m"
# define B_GRAY "\033[100m"

/*=================================CLASS=====================================*/

template <typename T>
class Array {
	private:
		T			*_array;
		unsigned int	_length;
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array&);
		Array &operator=(const Array&);
		T &operator[](unsigned int idx);
		const T &operator[](unsigned int idx) const;
		unsigned int size(void) const;
};

#include "Array.tpp"

#endif