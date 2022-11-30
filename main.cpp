#include <iostream>
#include <vector>
#include "funcs.h"
using std::vector;

int main(){

    //TASK A
    vector<int> brand_new;
    std::cout << "\n\nTask A: The easy one\n";
    brand_new = makeVector(10);
    std::cout << "\nn = 10\n\nNew Vector:\n\n{ ";
    for (auto element : brand_new){
        std::cout << element << ' ';
    }
    std::cout << "}\n";

    //TASK B
    vector<int> mixed = {1,2,-1,3,4,-1,6}; vector<int> fixed;
    std::cout << "\n\nTask B: A Happy Filter\n";
    fixed = goodVibes(mixed);
    std::cout << "\nVector Before:\n{ ";
    for (auto element : mixed){
        std::cout << element << ' ';
    }
    std::cout << "}\n\nVector After:\n{ ";
    for (auto element : fixed){
        std::cout << element << ' ';
    }
    std::cout << "}\n";  

    //TASK C
    std::cout << "\n\nTask C: It's over 9000!\n";
    vector<int> first = {1, 2, 3}; vector<int> second = {4, 5};
    std::cout << "\nFirst Vector Before:\n{ ";
    for (auto element : first) std::cout << element << ' ';
    std::cout << "}\n\nSecond Vector Before:\n{ ";
    for (auto element : second) std::cout << element << ' ';
    std::cout << "}\n\nFirst Vector Now:\n{ ";
    gogeta(first, second);
    for (auto element : first) std::cout << element << ' ';
    std::cout << "}\n\nSecond Vector Now:\n{ ";
    for (auto element : second) std::cout << element << ' ';
    std::cout << "}\n";

    //TASK D
    std::cout << "\n\nTask D: Pairwise sum\n";
    vector<int> start = {1, 2, 3}; vector<int> add = {4, 5};
    std::cout << "\nFirst Vector:\n{ ";
    for (auto element : start) std::cout << element << ' ';
    std::cout << "}\n\nSecond Vector:\n{ ";
    for (auto element : add) std::cout << element << ' ';
    vector<int> sum;
    sum = sumPairWise(start, add);
    std::cout << "}\n\nNew Vector with Sums:\n{ ";
    for (auto element : sum) std::cout << element << ' ';
    std::cout << "}\n\n\n";

    return 0;
}