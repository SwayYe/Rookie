#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int a,b,c;
  double mj;
  cin>>a>>b>>c;
  mj=0.5*(a+b)*c;
//  printf("%.2lf",mj);
  cout.setf(ios::fixed);
  cout<<setprecision(2)<<mj<<endl;
  return 0;
}
