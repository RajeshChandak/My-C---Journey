                                                               // SHREE //
#include<iostream>
using namespace std;

int main()
  {
  //Inputs the size of pattern i.e Number of Rows...
  int n;
  cout<<"Enter Size:- ";
  cin>>n;

    char ch;

  //i->row no.
  //j->column no.
  for(int i=0;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      // ASCII of 'A' -> 65
      ch='A'+i-1;
      cout<<ch<<"  ";
    }
    cout<<endl;
  }
return 0;
}