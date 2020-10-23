#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool comp(int a, int b){
    return a < b;
}

int main(int argc, char* argv[]){
    int numbs[argc-1];
    for(int i = 1; i<argc; i++ ){
        numbs[i-1] = atoi(argv[i]);
    }
    for(int i = 0; i<argc-1; i++ ){
        cout<<numbs[i]<<" ";
    }
    std::sort(numbs, numbs+(argc-1), comp);
    cout<<endl;
    for(int i = 0; i<argc-1; i++ ){
        cout<<numbs[i]<<" ";
    }
}