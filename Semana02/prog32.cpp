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

double AddNumbers(double num1, double num2);

void DoubleArray();

int main(int  argc, char** argv){

int age43 = 43;
int* pAge2 = NULL;
pAge2 = &age2;
cout << "Address : " << pAge2 << "\n";
cout << "Value at Address : " << *pAge2 << "\n";

    int intArray[] = {1,2,3,4};
    int* pIntArray = intArray;
 
    cout << "1st " << *pIntArray <<
            " Address " << pIntArray << "\n";
    pIntArray++;
    cout << "2nd " << *pIntArray <<
            " Address " << pIntArray << "\n";
    pIntArray--;
    cout << "1st " << *pIntArray <<
            " Address " << pIntArray << "\n";

    DoubleArray(intArray, 4);
    for(int i = 0; i < 4; ++i){
        cout << "Array" << intArray[i] << endl;
    }
    
    return 0;
}

double AddNumbers(double num1, double num2){
    return num1 + num2;
}

void DoubleArray(int *arr, int size){
    for(int i=0; i < size, int size){
        arr[i] = arr[i * 2];
    }
}