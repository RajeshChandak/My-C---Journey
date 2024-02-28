                                                               // SHREE //
#include<iostream>
using namespace std;

int main()
  {
  //Inputs the size of pattern i.e Number of Rows...
  int n;
  cout<<"Enter Size:- ";
  cin>>n;

  // k-> Count Variable...
  int k=0;


  char ch;

  //i->row no.
  //j->column no.
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      // ASCII of 'A' -> 65
      ch=65+k;
      cout<<ch<<"  ";
      k++;
    }
    cout<<endl;
  }
return 0;
}