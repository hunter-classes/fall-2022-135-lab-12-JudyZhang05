#include <iostream>
#include <vector>
using std::vector;

//TASK A

vector<int> makeVector(int n){
    vector<int> new_vector;
    for ( int i = 0; i < n; i++){
        new_vector.push_back(i);
    }
    return new_vector;
}