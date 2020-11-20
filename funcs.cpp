#include <iostream>
#include <vector>
#include <string>

#include "funcs.h"

//Task A
std::vector<int> makeVector(int n){ //create vector from 0 to (n-1)
  std::vector<int> v;
  for (int i=0; i<n; i++){
    v.push_back(i);
  }
  return v; 
}

//Task B
std::vector<int> goodVibes(const std::vector<int> &v){ //create a new vector and only add the postive integers in that vector
  std::vector<int> pos;
  for(int i=0; i<v.size(); i++){
    if (v[i] > 0){
      pos.push_back(v[i]);
    }
  }
  return pos;
}

//Task C
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){ //add everything in the later vector to the first vector then clear the later vector
  for (int i=0; i<vegeta.size(); i++){
    goku.push_back(vegeta[i]);
  }
  vegeta.clear();
}

//Task D
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){ //add every pair of element into another vector
  std::vector<int> result;
  std::vector<int> add;
  int lar;
  int sma;
  if (v1.size() > v2.size()){
    sma = v2.size();
    lar = v1.size();
    for (int i=sma; i<lar; i++){  //create a vector of leftover integer to attach later
      add.push_back(v1[i]);
    }
  }
  else {
    sma = v1.size();
    lar = v2.size();
    for (int i=sma; i<lar; i++){ //create a vector of leftover intger to attach later
      add.push_back(v2[i]);
    }
  }
  for (int i=0; i<sma; i++){  //adding
    result.push_back(v1[i]+v2[i]);
  }
  for(int i=0; i<add.size(); i++){  //attach the excess part from the larger vector
    result.push_back(add[i]);
  }
  return result;
}

std::string printvector (std::vector<int> v){ //return a string of the elements in the vector
  std::string result = "";
  for (int i=0; i<v.size(); i++){
    result += std::to_string(v[i]) + "   ";
  }
  result += "\n";
  return result;
}

std::vector<int> randomvector(std::vector<int> &v, int len){ //create a (len) length vector that consist of random number from [-9,9]
  v.clear();
  for (int i=0; i<len; i++){
    if (rand()%2 == 0){
      v.push_back((rand()%10)*-1);
    }
    else {
      v.push_back(rand()%10);
    }
  }
  return v;
}
