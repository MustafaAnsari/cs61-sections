#include <vector>     // include declaration of `std::vector`
#include <cstdio>
#include <cassert>
#include "hexdump.hh"

//using namespace std;

int main() {
    // Your code here
    //char foo[4];
    //std::vector<char> bar;
    //int foo[4] = {5, 6, 7, 8};
    std::vector<int> bar{1,2,3,4,5,6};

    for (auto it = bar.begin(); it != bar.end(); ++it) {
        printf("%d\n", *it);
    }


    for (auto& elt : bar) {
        printf("%d\n", elt);
    }

    for(size_t i = 0; i < bar.size(); ++i){
        printf("%d\n", bar[i]);
    }

    for(size_t i = 0; i < bar.size(); ++i){
        printf("%d\n", bar.at(i));
    }

    int i = 0;
    while(i < bar.size()){
        printf("%d\n", bar.at(i));
        ++i;
    }

    std::vector<int> a{1,2,3,4,6,9,5,6};





}
