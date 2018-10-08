
#include "VectorDriver.h"
int main()
{cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
vector<short> sample_vector(5);

cout << "new vector: ";
print(sample_vector);
cout << endl;

fill_vector(sample_vector);

cout << "filled vector: ";
print(sample_vector);
cout << endl;

cout << "sum of vector's elements: " << compute_sum(sample_vector) 
<< endl;
cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::..\n" << endl;

// The code below creates a new vector for question 1 of the lab assignment
// The add_numbers method is called for this vector, which adds 10 new 
// random numbers to the vector.
vector<short> aVectorNamedVictor(0);
cout << "Created new Vector." << endl;
add_numbers(aVectorNamedVictor);
//When called twice this just adds to the vector rather than over writing.
//add_numbers(aVectorNamedVictor);
cout << "Random numbers have been added to the new vector." << endl;
print(aVectorNamedVictor);

//This next section tests the is_present method by taking in a value and calling the method
short val;
cout << "\n\nEnter a number to search for: ";
cin >> val;
bool search = is_present(aVectorNamedVictor, val);
if (search == true)
{
	cout << "\n" << val << " has been found." << endl;
}
else
{
	cout << "\n" << val << " was not found." << endl;
}
cout << endl;

//This next section creates a new vector of
// five elements and tests the sort method from STL on the vector. 

vector<short> aVectorNamedPamela(0);
aVectorNamedPamela.push_back(11);
aVectorNamedPamela.push_back(0);
aVectorNamedPamela.push_back(99);
aVectorNamedPamela.push_back(15);
aVectorNamedPamela.push_back(13);
cout << "\nHere is a new vector before sorting:" << endl;
print(aVectorNamedPamela);
sort(aVectorNamedPamela.begin(), aVectorNamedPamela.begin() + 4);
cout << "\nHere is the vector after being sorted:" << endl;
print(aVectorNamedPamela);
cout << endl;
system("pause");
return 0;
}



