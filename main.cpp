#include <iostream>
#include <cstdlib>
#include <vector>

#include "funcs.h"

int main (){
  srand(time(0));
  //Task A
  std::cout << "Task A" << std::endl;
  std::cout << "An array from 0-9:" << std::endl;
  std::vector<int> v = makeVector(10);
  std::cout << printvector(v);
  std::cout << "------------------------------" << std::endl;
  
  //Task B
  std::cout << "Task B" << std::endl;
  randomvector(v,10);
  std::cout << "Original array:" << std::endl << printvector(v);
  std::cout << "Array after deleting all negative numbers:" << std::endl << printvector(goodVibes(v));
  std::cout << "------------------------------" << std::endl;
  
  //Task C
  std::cout << "Task C" << std::endl;
  std::vector<int> v2;
  randomvector(v,5);
  std::cout << "The first vector contains:  " << printvector(v);
  randomvector(v2,10);
  std::cout << "The second vector contains: " <<  printvector(v2);
  std::cout << std::endl;
  std::cout << "After combining: ";
  std::cout << std::endl;
  gogeta(v,v2);
  std::cout << "The first vector contains:  " << printvector(v);
  std::cout << "The second vector contains: " << printvector(v2);
  std::cout << "------------------------------" << std::endl;

  //Task D
  std::cout << "Task D" << std::endl;
  randomvector(v,3);
  std::cout << "The first vector contains:  " << printvector(v);
  randomvector(v2,5);
  std::cout << "The second vector contains: " << printvector(v2);
  std::cout << std::endl;
  std::cout << "After adding the two vectors pair wise:" << std::endl << printvector(sumPairWise(v,v2));
  
  return 0;
}
