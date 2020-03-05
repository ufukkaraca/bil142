#include <iostream>
#include 

class listnode
{
public:
 string s;
 int count;
 listnode *next;
 listnode *prev;

 listnode(): s(“”), count(0), next(NULL), prev(NULL) {

 };

 listnode(const string & ss, const int &c): s(ss), count( c), next(NULL), prev(NULL){

};
};