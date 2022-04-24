/******************************************************************************
 Ideas:
 Can use loop, like that one schedule program i did back then, so user can access list
 of information. Ex: Type mem to access MEM information.

*******************************************************************************/
#include <iostream>
#include "Computer.h"
#include <time.h> // to truly make RNG  srand(time(0));

using namespace std;

int main()
{
    // Need to instantiate the c
    Computer comp;
  //  cout << comp.cpu.make << endl; |Testing
    
    srand(time(0));
    
    return 0;
}