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

int imGlobal = 0;
const double PI = 3.141;

int main(int  argc, char** argv){
 
 vector<string> words;
  srand(time(NULL));
  int secretNum = rand() % 11;
  int guess = 0;
  do{
        cout << "Guess the Number : ";
        cin >> guess;
        if(guess > secretNum) cout << "To Big\n";
        if(guess < secretNum) cout << "To Small\n";
    } while(secretNum != guess);
 
    cout << "You guessed it" << endl;

    return 0;
    }