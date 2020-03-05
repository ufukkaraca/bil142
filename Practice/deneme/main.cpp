#include <iostream>
#include "C:\Users\ufuk_\Desktop\deneme\mylist.cpp"
using namespace std;

int main()
{
  
  listnode* irmak(NULL, NULL, ) = new listnode*;
  mylist::mylist list1(irmak, irmak, 1) = new mylist;
  list1.insertback("ufuk", 1);
  list1.print();

  return 0;
}