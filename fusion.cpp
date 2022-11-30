#include <iostream>
#include <vector>
using std::vector;

//TASK C

void gogeta(vector<int> &goku, vector<int> &vegeta){
    for (int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta.at(i));
    }
    vegeta.clear();
}