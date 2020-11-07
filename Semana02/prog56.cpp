#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
 

using namespace std;

vector<int> GenerateRandVec(int numOfNums, int min, int max);


int main(int  argc, char** argv){
 vector<int> vecVals = GenerateRandVec(10, 1, 50)

    vector<int> evenVecVals;
    int sum = 0;
    copy_if(vecVals.begin(), vecVals.end(),
            back_inserter(evenVecVals),
            [](int x){ return (x % 2) == 0; });

            for(auto val: evenVecVals),
            cout << val << endl;
            
    return 0;
}

vector<int> GenerateRandVec(int numOfNums,
        int min, int max){
    vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;
    while(i < numOfNums){
        randVal = min + rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}