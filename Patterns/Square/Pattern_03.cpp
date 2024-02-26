#include<iostream>
using namespace std;

int main()
  {
  //Input the size of pattern i.e Number of Rows.
  int n;
  cout<<"Enter Size:- ";
  cin>>n;

  //i->row no.
  //j->column no.
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
      cout<<n-j+1<<"  ";
    cout<<endl;
}

  return 0;
}