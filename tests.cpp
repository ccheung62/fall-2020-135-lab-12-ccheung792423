#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <vector>
#include <string>

#include "funcs.h"
#include "doctest.h"

std::vector<int> v;
std::vector<int> v2;

TEST_CASE ("Task A: Regular cases"){
  CHECK(printvector(makeVector(10)) == "0   1   2   3   4   5   6   7   8   9   \n");
  v.clear();
  CHECK(printvector(makeVector(5)) == "0   1   2   3   4   \n");
  v.clear();
  CHECK(printvector(makeVector(8)) == "0   1   2   3   4   5   6   7   \n");
}

TEST_CASE ("Task A: Negative number"){
  v.clear();
  CHECK(printvector(makeVector(-10)) == "\n");
  v.clear();
  CHECK(printvector(makeVector(-1)) == "\n");
  v.clear();
  CHECK(printvector(makeVector(-5)) == "\n");
}

TEST_CASE ("Task A: Zero"){
  v.clear();
  CHECK(printvector(makeVector(0)) == "\n");
}

TEST_CASE("Task B"){
  v.clear();
  v.push_back(-4); v.push_back(8); v.push_back(-4); v.push_back(7);
  v.push_back(5); v.push_back(4); v.push_back(5); v.push_back(-2);
  v.push_back(0); v.push_back(-4);
  CHECK(printvector(goodVibes(v)) == "8   7   5   4   5   \n");
  v.clear();
  v.push_back(1); v.push_back(4); v.push_back(0); v.push_back(-2);
  v.push_back(-8); v.push_back(0); v.push_back(4); v.push_back(7);
  v.push_back(5); v.push_back(-8);
  CHECK(printvector(goodVibes(v)) == "1   4   4   7   5   \n");
  v.clear();
  v.push_back(0); v.push_back(9); v.push_back(-6); v.push_back(-5);
  v.push_back(3); v.push_back(-7); v.push_back(-2); v.push_back(2);
  v.push_back(0); v.push_back(-1);
  CHECK(printvector(goodVibes(v)) == "9   3   2   \n");
  v.clear();
  v.push_back(-3); v.push_back(-9); v.push_back(8); v.push_back(8);
  v.push_back(8); v.push_back(-5); v.push_back(2); v.push_back(1);
  v.push_back(9); v.push_back(9);
  CHECK(printvector(goodVibes(v)) == "8   8   8   2   1   9   9   \n");
  v.clear();
  v.push_back(0); v.push_back(0); v.push_back(-7); v.push_back(-8);
  v.push_back(-9); v.push_back(0); v.push_back(1); v.push_back(5);
  v.push_back(-5); v.push_back(6);
  CHECK(printvector(goodVibes(v)) == "1   5   6   \n");
}

//Task C
TEST_CASE ("Task C: Regular cases"){
  v.clear();
  v.push_back(0); v.push_back(0); v.push_back(-7); v.push_back(-8);
  v2.push_back(-9); v2.push_back(0); v2.push_back(1); v2.push_back(5);
  gogeta(v,v2);
  CHECK(printvector(v) == "0   0   -7   -8   -9   0   1   5   \n");
  CHECK(printvector(v2) == "\n");
  v.clear();
  v2.clear();
  v.push_back(3); v.push_back(-4); v.push_back(-3); v.push_back(1);
  v2.push_back(-2); v2.push_back(2);
  gogeta(v,v2);
  CHECK(printvector(v) == "3   -4   -3   1   -2   2   \n");
  CHECK(printvector(v2) == "\n");
  v.clear();
  v2.clear();
  v.push_back(6); v.push_back(3); 
  v2.push_back(-9); v2.push_back(0); v2.push_back(7); v2.push_back(-2);
  gogeta(v,v2);
  CHECK(printvector(v) == "6   3   -9   0   7   -2   \n");
  CHECK(printvector(v2) == "\n");
}

TEST_CASE("Task C: Empty Vector"){
  v.clear();
  v2.clear();
  gogeta(v,v2);
  CHECK(printvector(v) == "\n");
  CHECK(printvector(v2) == "\n");
  v.clear();
  v2.clear();
  v.push_back(4); v.push_back(2); v.push_back(-4); v.push_back(7);
  gogeta(v,v2);
  CHECK(printvector(v) == "4   2   -4   7   \n");
  CHECK(printvector(v2) == "\n");
  v.clear();
  v2.clear();
  v.push_back(6); v.push_back(-8); v.push_back(-5); v.push_back(-9);
  gogeta(v,v2);
  CHECK(printvector(v) == "6   -8   -5   -9   \n");
  CHECK(printvector(v2) == "\n");
}

TEST_CASE("Task D"){
  v.clear();
  v2.clear();
  v.push_back(5); v.push_back(4); v.push_back(5); v.push_back(-2);
  v.push_back(0); v.push_back(-4);
  v2.push_back(-2); v2.push_back(4); v2.push_back(0);
  CHECK(printvector(sumPairWise(v,v2)) == "3   8   5   -2   0   -4   \n");
  v.clear();
  v2.clear();
  v.push_back(-4); v.push_back(-6); v.push_back(9);
  v2.push_back(1); v2.push_back(-6); v2.push_back(-7); v2.push_back(7);
  v2.push_back(-5);
  CHECK(printvector(sumPairWise(v,v2)) == "-3   -12   2   7   -5   \n");
  v.clear();
  v2.clear();
  v.push_back(-1); v.push_back(1); v.push_back(3); 
  v2.push_back(9); v2.push_back(1); v2.push_back(-4);
  CHECK(printvector(sumPairWise(v,v2)) == "8   2   -1   \n");
  v.clear();
  v2.clear();
  v.push_back(7); v.push_back(3); v.push_back(-6); v.push_back(-2);
  v2.push_back(-1);
  CHECK(printvector(sumPairWise(v,v2)) == "6   3   -6   -2   \n");
  v.clear();
  v2.clear();
  v.push_back(2);
  v2.push_back(2); v2.push_back(-8); v2.push_back(2); v2.push_back(8);
  CHECK(printvector(sumPairWise(v,v2)) == "4   -8   2   8   \n");
}
