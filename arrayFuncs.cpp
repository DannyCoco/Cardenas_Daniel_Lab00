#include <cassert>
#include "arrayFuncs.h"
#include <sstream> // for ostringstream
using namespace std;

// intToString converts an int to a string

string intToString(int i) {
  // creates a stream like cout, cerr that writes to a string
  ostringstream oss; 
  oss << i;
  return oss.str(); // return the string result
}

// arrayToString converts an int array to a string

string arrayToString(int a[], int size) {

  if (size==0)
    return "{}";

  ostringstream oss;
  // fencepost problem; first element gets no comma in front
  oss << "{" + intToString(a[0]); 

  for (int i=1; i<size; i++) {
    oss << "," << intToString(a[i]);
  }
  oss << "}";
  return oss.str();
  
}

// indexOfMax
//  a: an array of ints  n: how many ints in array
//  Return the index of largest value.  
//  If more than one element has largest value, 
//   break tie by returning the smallest index that
//   corresponds to an element with the largest value.
//  You may assume size >= 1

int indexOfMax(int *a, int n) {
	assert(n >= 1);
	int index=0;
	for(int i = 0; i < n; i++) {
		if(*(a+i) > a[index])
			index = i;
	}
	return index; // Fixed, hopefully
}

// indexOfMin
//  a: an array of ints  n: how many ints in array
//  Return the index of smallest value.  
//  If more than one element has smallest value, 
//    break tie by returning the smallest index that
//    corresponds to an element with the smallest value.
//  You may assume size >= 1

int indexOfMin(int *a, int n) {
  	assert(n >= 1);
	int index;
       	for(int i = 0; i < n; i++) {
		 if(a[index] > *(a+i))
		 	index = i;
  	}
  	return index; // Fixed. I hate pointers
}

//  swap
//  a: an array of ints.  n: how many ints in array
//  swap the values of a[i] and a[j]

void swap(int *a, int i, int j) {
  int holder;
  holder = *(a+i);
  *(a+i) = *(a+j);
  *(a+j) = holder;
 
  // save the old value of a[i] in a variable 
  // make new value of a[i] be the old value of a[j]
  // make new value of a[j] be the old saved value of a[i]

}
