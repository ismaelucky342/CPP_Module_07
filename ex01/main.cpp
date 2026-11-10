/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 19:22:54 by ismherna          #+#    #+#             */
/*   Updated: 2026/11/10 19:51:55 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "apply.hpp"

int main() {

	std::string strs[4] = { "Hello ", "How ", "Are you?", ", Goodbye!" };

	iter<std::string> (strs, 4, ft_apply<std::string>);
	return 0;

}
