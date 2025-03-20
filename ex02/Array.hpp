/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:30:49 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/11 02:04:29 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

/*===============================INCLUDES===================================*/

# include "Array.tpp"
#include <iostream>
#include <stdlib.h>
#include <cassert>
#define MAX_VAL 10

template <typename T>

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
class Array {
	private:
		T				*_array;
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


/*=================================FUNCTIONS=====================================*/

void test_build_array();
void test_add_element();
void test_copy_array();
void test_opindex_exception_out_of_range();
void test_op_index_assignment();

#endif