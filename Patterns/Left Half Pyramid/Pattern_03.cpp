#include <iostream>
using namespace std;

int main()
{
  //Inputs the size of pattern i.e Number of Rows.
  int n;
  cout << "Enter Size :-";
  cin >> n;


  //i->row no.
  //j->column no.
  for(int i=1;i<=n;i++)
  {
    for(int space=0;space<=i-1;space++)
    {
      cout<<" ";
    }
    for(int j=1;j<=n-i+1;j++)
    {
      cout<<i;
    }
    cout<<endl;
  
  }
  return 0;
}