/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 23:29:16 by ismherna          #+#    #+#             */
/*   Updated: 2026/11/10 19:57:06 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const& src) {
	std::cout << BLUE << "Assignment called array class" << RESET << std::endl;
	if (this == &src)
		return *this;

	if (this->_array)
		delete[] this->_array;

	this->_length = src.size();
	if (this->_length > 0) {
		this->_array = new T[this->_length];
		for (unsigned int i = 0; i < this->_length; i++) {
			this->_array[i] = src._array[i];
		}
	}
	else
		this->_array = NULL;
	return *this;
}

template <typename T>
Array<T>::Array() : _array(NULL), _length(0) {
	std::cout << GREEN << "[Build] Array class build " << this->_array << " " << this->_length << RESET << std::endl;
}

template <typename T>
Array<T>::~Array() {
	std::cout << RED << "[Destroyed] Array class build" << RESET << std::endl;
	if (this->_array)
		delete[] this->_array;
}

template <typename T>
Array<T>::Array(unsigned int n) : _length(n) {
	std::cout << GREEN << "[Build] Array class build: " << n << RESET << std::endl;
	if (n != 0)
		this->_array = new T[n]();
	else
		this->_array = NULL;
}

template <typename T>
Array<T>::Array(const Array& src) : _array(NULL), _length(0) {
	std::cout << YELLOW << "[Copy Build] Array class build" << RESET << std::endl;
	*this = src;
}

template <typename T>
const T &Array<T>::operator[](unsigned int idx) const {
	if (idx < _length)
		return this->_array[idx];
	throw std::out_of_range("Error: Index is out of bounds");
}

template <typename T>
T &Array<T>::operator[](unsigned int idx) {
	if (idx < _length)
		return this->_array[idx];
	throw std::out_of_range("Error: Index is out of bounds");
}

template <typename T>
unsigned int Array<T>::size(void) const {
	return _length;
}

#endif