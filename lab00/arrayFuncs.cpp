//Kelly Wang, cs 32 w19, 5351010, 1/13/18
#include <cassert>
#include "arrayFuncs.h"
#include <sstream> // for ostringstream

// intToString converts an int to a string

std::string intToString(int i) {
  // creates a stream like cout, cerr that writes to a string
  std::ostringstream oss; 
  oss << i;
  return oss.str(); // return the string result
}

// arrayToString converts an int array to a string

std::string arrayToString(int a[], int size) {

  if (size==0)
    return "{}";

  std::ostringstream oss;
  // fencepost problem; first element gets no comma in front
  oss << "{" + intToString(a[0]); 

  for (int i=1; i<size; i++) {
    oss << "," << intToString(a[i]);
  }
  oss << "}";
  return oss.str();
  
}

int indexOfMax(int *a, int n) {
  assert(n >= 1);
  int max = a[0];
  int index = 0; 
  for(int i = 1; i < n; i++){
    if(a[i] > max){
      max = a[i];
      index = i; 
    }
  }
  return index; 
}


int indexOfMin(int *a, int n) {
  assert(n >= 1);
  int min = a[0];
  int index = 0;
  for(int i = 1; i < n; i++){
    if(a[i] < min){
      min = a[i];
      index = i; 
    }
  }
  return index; 
}

// swap
//  a: an array of ints.  n: how many ints in array
//  swap the values of a[i] and a[j]

void swap(int *a, int i, int j) {
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;

  return; // STUB !!! Remove this line and replace with correct code

  // save the old value of a[i] in a variable 
  // make new value of a[i] be the old value of a[j]
  // make new value of a[j] be the old saved value of a[i]

}



