#include <iostream>
using namespace std;

int main()
{
  //Inputs the size of pattern i.e Number of Rows....
  int n;
  cout << "Enter Size :-";
  cin >> n;


  //i->row no.
  //j->column no.
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i+1;j++)
    {
      cout<<j;
    }
    for(int j=1;j<=i*2-2;j++)
    {
      cout<<"*";
    }
    for(int j=1;j<=n-i+1;j++)
    {
      cout<<n-i-j+2;
    }
    cout<<endl;
  
  }
  return 0;
}