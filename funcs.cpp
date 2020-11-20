#include <iostream>
#include <vector>
#include <iomanip>

#include "funcs.h"

//Task A
std::vector<int> makeVector(int n){
  std::vector<int> v;
  for (int i=0; i<n; i++){
    v.push_back(i);
  }
  return v; 
}

//Task B
std::vector<int> goodVibes(const std::vector<int> &v){
  std::vector<int> pos;
  for(int i=0; i<v.size(); i++){
    if (v[i] >= 0){
      pos.push_back(v[i]);
    }
  }
  return pos;
}

//Task C
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
  for (int i=0; i<vegeta.size(); i++){
    goku.push_back(vegeta[i]);
  }
  vegeta.clear();
}

//Task D
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
  std::vector<int> result;
  std::vector<int> add;
  int lar;
  int sma;
  if (v1.size() > v2.size()){
    sma = v2.size();
    lar = v1.size();
    for (int i=sma; i<lar; i++){
      add.push_back(v1[i]);
    }
  }
  else {
    sma = v1.size();
    lar = v2.size();
    for (int i=sma; i<lar; i++){
      add.push_back(v2[i]);
    }
  }
  for (int i=0; i<sma; i++){
    result.push_back(v1[i]+v2[i]);
  }
  for(int i=0; i<add.size(); i++){
    result.push_back(add[i]);
  }
  return result;
}

void printvector (std::vector<int> v){
  for (int i=0; i<v.size(); i++){
    std::cout << v[i] << std::setw(4);
  }
  std::cout << std::endl;
}

std::vector<int> randomvector(std::vector<int> &v, int len){
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
