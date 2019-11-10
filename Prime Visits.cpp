#include <iostream>
using namespace std;
int pp[1000000];

void sieve()
{
   for(int i=2;i*i<=1000000;i++){
        if(pp[i]==1)
				{
          for(int j=2*i;j<1000000;j+=i)
          pp[j]=0;
        }
    }
}

int main() {
    int t;
cin>>t;
fill(pp,pp+1000000,1);
sieve();
pp[1]=pp[0]=0;
while(t--)
{
  int a,b,count=0;
  cin>>a>>b;
  for(int i=a;i<=b;i++)
  {
    if(pp[i]==1)count++;
  }
  cout<<count<<endl;
}
return 0;
}
