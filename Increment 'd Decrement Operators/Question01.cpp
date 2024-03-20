//Guess The Output...

#include<iostream>
using namespace std;

int main()
{
  int a,b=1;
  a=10;
  if(++a)
    cout<<a;
  else
    cout<<++b;
  return 0;
}

//Expected Output:-  11
