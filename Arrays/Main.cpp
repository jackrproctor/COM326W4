/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 14/10/2017
* Description: Driver to mess around with Arrays
* Copyright notice
*/


#include <iostream>
#include <string>
#include <cassert>
using namespace std;

#include <iostream>

using namespace std;

int main() {

	int a1[8]{ 5, 23, 432, 432, 122, 32, 57, 23 };
	int a2[5];
	int array1Size, array2Size, index;

	//Determine the size of the array 1a
	array1Size = sizeof(a1) / sizeof(a1[0]);
	array2Size = sizeof(a2) / sizeof(a2[0]);

#ifndef NDEBUG
//	assert(array1Size == array2Size && "Holy guacamole batman, these arrays aren't the same size!");
#endif // !NDEBUG

	
	for (index = 0; index < array1Size; index++) {
		a2[index] = a1[index];
		cout << a2[index] << endl;
	}

	return 0;
}


/*

//Declarw an array of type int
//Compile knows we need 5 ints of size 4 bytes so 20 bytes in total
int numbers[5];
numbers[0] = 0;
numbers[1] = 10;
numbers[2] = 20;
numbers[3] = 30;
numbers[4] = 40;

//or initialise them using an initialiser list

float numbers2[5]{ 30.2f, 43.5f, 76.4f, 32.9f, 12.1f };
//what happens if we forget to give 5 values? - missing elements are value initialised

int numbers[5];
int index;

for (index = 0; index < 5; index++) {
	cout << "\nPlease enter number " << index + 1 << " : ";
	cin >> numbers[index];
}


/////

//use the sizeof() to get the size of the array in bytes

//Calculate the size of the array
//cout << "The size of the array is " << sizeof(numbers)/ GetSize(numbers);
int arraysize = sizeof(numbers) / sizeof(numbers[0]);
cout << "The size of the array is " << arraysize;


*/