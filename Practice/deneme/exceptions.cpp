#include <iostream>
#include <string>
using namespace std;

class exceptions{
public:

exceptions();

void static catcher(int e) 
  {
    cout << e << " donuts. and No Milk!\n"
         << "Go buy some milk.\n";

    return;
  } 

};