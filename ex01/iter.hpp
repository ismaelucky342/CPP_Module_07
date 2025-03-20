/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:30:49 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/17 21:37:57 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

/*===============================INCLUDES===================================*/

#include <iostream>
#include <string>

template < typename T, typename C>

/*=================================FUNCTIONS=====================================*/

void iter(T *address, size_t length, void (*f)(C&)) {
	size_t i = -1;

	if (!address)
		return ;
	while ( ++i < length)
		f(address[i]);
}

#endif