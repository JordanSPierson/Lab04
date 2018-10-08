/* File: VectorDriver.cpp
*  Athr: Dimitri Zarzhitsky
*  Date: October 16, 2002
*
*  Desc: provides the basic framework and examples for an introduction to
*  the STL::vector, iterators, and the algorithms facilities.
*
*  Edited by: Rafe Cooley*  Date: October 1, 2017 (the future)
*
*/
typedef unsigned long ulong;

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using std::sort;
using std::cout; 
using std::cin;
using std::endl; 
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) 
{
	for (ulong i=0; i<data.size(); i++) 
	{data.at(i) = i;}
}
// print our vector in a fancy way
void print(const vector<short> &data) 
{
	if (data.empty()) {cout << "<empty>";
	}
	else 
	{
		cout << "<" << data.at(0);
		for (ulong i=1; i<data.size(); i++) 
		{
			cout << ", " << data.at(i);
		}cout << ">";}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) 
{
	std::vector<short>::const_iterator iter = data.begin();
	short sum = 0;
	while (iter != data.end()) 
	{
		sum += *iter;iter++;
	}return sum;
}

// The add_numbers method takes the argument of a vector and uses a 
// for loop to add ten random numbers to the vector.
void add_numbers(vector<short> &data)
{
	for (int i = 0; i < 10; i++)
	{
		data.push_back(rand());
	}
}

// The print_even method takes the argument of a vector and first checks
// to make sure the vector is empty. If it isn't it uses a
// for loop increment by twos and print all of the elements 
// within the vector that are stored at an even index
void print_even(const vector<short> &data)
{
	if (data.empty()) {
		cout << "<empty>";
	}
	else
	{
		cout << "<" << data.at(0);
		for (ulong i = 0; i<data.size(); i+2)
		{
			cout << ", " << data.at(i);
		}cout << ">";
	}
}

// The is_present method takes in a pointer to a vector and a value.
// An iterator runs through the vector and if the value is found within
// the vector a boolean true is returned. Otherwise if the entire vector
// is iterated over and doesnt return true, the function returns false.
bool is_present(const vector<short> &data, short value)
{
	bool check = false; // a way to check if the value isn't found to return false
	std::vector<short>::const_iterator iter = data.begin();
	while (iter != data.end())
	{
		if (*iter==value)
		{
			check = true;
			
		}
		iter++;
	}
	return check;
}
																																																																																																		   // TODO: implement print_even// TODO: implement is_present// TODO: implement std::sort function

