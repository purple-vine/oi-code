#include<iostream>
#include<cstring>
#define MaxNum 10000100
using namespace std;
bool e[MaxNum];
int p[MaxNum],tn,mu[MaxNum],n;
void Mobius()
{
  e[1]=1;mu[1]=1;
  for (int i=2;i<=n;i++){
    if (!e[i]){p[++tn]=i;mu[i]=-1;}
    for (int j=1;j<=tn;j++){
      if (p[j]*i>n)break;
      mu[p[j]*i]=i%p[j]==0 ? 0 : -mu[i];
      e[p[j]*i]=1;
      if (i%p[j]==0)break;
    }
  }
}
int main()
{
  cin>>n; 
  Mobius();
  for(int i=1;i<=n;++i)
   printf("%d: %d\n",i,mu[i]);
  return 0;
}//Time:O(n)
