#include <iostream>
#include <vector>
using std::vector;

//TASK D

vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2){
    vector<int> total; int big; int small; vector<int> which;
    if (v1.size() > v2.size()){
        big = v1.size();
        small = v2.size();
        which = v1;
    }
    else{
        big = v2.size();
        small = v1.size();
        which = v2;
    }
    for (int i = 0; i < big; i++){
        if (i < small){
            total.push_back(v1.at(i) + v2.at(i));
        }
        else{
            total.push_back(which.at(i));
        }
    }
    return total;
}