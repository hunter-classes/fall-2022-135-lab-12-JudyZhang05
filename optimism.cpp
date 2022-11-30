#include <iostream>
#include <vector>
using std::vector;

//TASK B

vector<int> goodVibes(const vector<int> &v){
    vector<int> new_vector;
    for (int i = 0; i < v.size(); i++){
        new_vector.push_back(abs(v.at(i)));
    }
    return new_vector;
}