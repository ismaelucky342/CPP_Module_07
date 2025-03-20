/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 23:44:44 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/11 02:13:55 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	test_build_array();
	test_add_element();
	test_copy_array();
	test_opindex_exception_out_of_range();
	test_op_index_assignment();

	return 0;
}

void test_build_array() {
	Array<int> numbers(MAX_VAL);
	Array<int> *numbers2 = new Array<int>[MAX_VAL]();
	delete [] numbers2;
	std::cout << GREEN << "test_build_array: PASSED" << RESET << std::endl;
}

void test_add_element() {
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL]();
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << "[" << i << "] " << numbers[i] << std::endl;
	}
	for (int i = 0; i < MAX_VAL; i++)
		assert(mirror[i] == numbers[i] && RED "test_add_element: FAILED: size should be 10" RESET);
	assert(numbers.size() == 10 && RED "test_add_element: FAILED: size should be 10" RESET);
	std::cout << GREEN << "test_add_element: PASSED" << RESET << std::endl;
	delete [] mirror;
}

void test_copy_array() {
	Array<int> numbers(MAX_VAL);
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
	}

	Array<int> tmp;
	tmp = numbers;
	assert(tmp.size() == numbers.size() && RED "test_copy_array: FAILED: Size should be 10." RESET);
	assert(tmp[0] == numbers[0] && RED "test_copy_array: FAILED: Data of temp in pos 0 should be equal to pos 0 of numbers." RESET);
	Array<int> test(numbers);
	assert(test.size() == numbers.size() && RED "test_copy_array: FAILED: Size should be 10." RESET);
	assert(test[0] == numbers[0] && RED "test_copy_array: FAILED: Data of test in pos 0 should be equal to pos 0 of numbers." RESET);
	std::cout << GREEN << "test_copy_array: PASSED" << RESET << std::endl;
}

void test_opindex_exception_out_of_range() {
	Array<int> number;

	try {
		number[-1];
	} catch (std::exception &e) {
		std::string result = "Error: Index is out of bounds";
		assert(e.what() == result && RED "test_exception_out_of_range: FAILED: Error should be out of range" RESET);
	}
	try
	{
		number[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::string result = "Error: Index is out of bounds";
		assert(e.what() == result  && RED "test_exception_out_of_range: FAILED: Error should be out of range" RESET);
	}
	std::cout << GREEN << "test_exception_out_of_range: PASSED" << RESET << std::endl;
}

void test_op_index_assignment() {
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL]();
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << "[" << i << "] " << numbers[i] << std::endl;
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
		std::cout << "[" << i << "] " << numbers[i] << std::endl;
	}
	delete [] mirror;
	std::cout << GREEN << "test_op_index_assignment: PASSED" << RESET << std::endl;
}

