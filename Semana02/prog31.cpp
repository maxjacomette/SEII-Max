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

void AssignAge2();

int main(int  argc, char** argv){

int age43 = 43;
age43 = AssingAge2(age43);
cout << age43;
    
    return 0;
}

double AddNumbers(double num1, double num2){
    return num1 + num2;
}

void AssignAge2(int age){
    age = 24;
}