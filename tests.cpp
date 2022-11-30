#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "funcs.h"
#include "doctest.h"
#include <vector>
using std::vector;

TEST_CASE("Task A"){
    CHECK(makeVector(20).at(19) == 19);
    CHECK(makeVector(100).at(0) == 0);
    CHECK(makeVector(51).at(21) == 21);
    CHECK(makeVector(63).at(62) == 62);
    CHECK(makeVector(37).at(13) == 13);
}

vector<int> negatives = {-1,-3,-4,-6,-7,8,-9,-10};

TEST_CASE("Task B"){
    CHECK(goodVibes(negatives).at(0) == 1);
    CHECK(goodVibes(negatives).at(1) == 3);
    CHECK(goodVibes(negatives).at(2) == 4);
    CHECK(goodVibes(negatives).at(3) == 6);
    CHECK(goodVibes(negatives).at(4) == 7);
    CHECK(goodVibes(negatives).at(5) == 8);
}

vector<int> v1 = {10,11,12,13,14};
vector<int> v2 = {15,16,17,18,19,20,21};

TEST_CASE("Task C"){
    gogeta(v1,v2);
    CHECK(v1.at(4) == 14);
    CHECK(v1.at(5) == 15);
    CHECK(v1.at(6) == 16);
    CHECK(v1.at(7) == 17);
    CHECK(v1.at(8) == 18);
    CHECK(v1.at(9) == 19);
}

vector<int> v4 = {10,11,12,13,14};
vector<int> v3 = {15,16,17,18,19,20,21};

TEST_CASE("Task D"){
    CHECK(sumPairWise(v3,v4).at(0) == 25);
    CHECK(sumPairWise(v3,v4).at(1) == 27);
    CHECK(sumPairWise(v3,v4).at(2) == 29);
    CHECK(sumPairWise(v3,v4).at(3) == 31);
    CHECK(sumPairWise(v3,v4).at(5) == 20);
    CHECK(sumPairWise(v3,v4).at(6) == 21);
}