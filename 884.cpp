#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<cctype>
#include<set>
#include<bitset>
#include<algorithm>
#include<list>

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

using namespace std;
//#define print1(a)    cout<<a<<endl
//#define print2(a,b) cout<<a<<" "<<b<<endl
//#define print3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
//#define oo          (1<<30)
#define PI          3.141592653589793
#define pi          2*acos(0)
//#define ERR         1e-5
//#define PRE         1e-8
#define SZ(a)       (int)a.size()
#define LL          long long
#define ISS         istringstream
#define OSS         ostringstream
#define VS          vector<string>
#define VI          vector<int>
#define VD          vector<double>
#define VLL         vector<long long>
#define SII         set<int>::iterator
#define SI          set<int>
#define mem(a,b)    memset(a,b,sizeof(a))
#define fr(i,a,b)   for(i=a;i<=b;i++)
#define frn(i,a,b)  for(i=a;i>=b;i--)

//#define fri(a,b)    for(i=a;i<=b;i++)
//#define frin(a,b)   for(i=a;i>=b;i--)
//#define frj(a,b)    for(j=a;j<=b;j++)
//#define frjn(a,b)   for(j=a;j>=b;j--)
//#define frk(a,b)    for(k=a;k<=b;k++)
//#define frkn(a,b)   for(k=a;k>=b;k--)
//#define frl(a,b)    for(l=a;l<=b;l++)
//#define frln(a,b)   for(l=a;l>=b;l--)

#define EQ(a,b)     (fabs(a-b)<ERR)
#define all(a,b,c)  for(int I=0;I<b;I++)    a[I] = c
#define CROSS(a,b,c,d) ((b.x-a.x)*(d.y-c.y)-(d.x-c.x)*(b.y-a.y))
#define sqr(a)      ((a)*(a))
#define FORE(i,a)   for(typeof((a).begin())i=(a).begin();i!=(a).end();i++)
//#define BE(a)       a.begin(),a.end()
//#define rev(a)      reverse(BE(a));
//#define sorta(a)    sort(BE(a))
#define pb          push_back
#define popb        pop_back
#define round(i,a)  i = ( a < 0 ) ? a - 0.5 : a + 0.5;
#define makeint(n,s)  istringstream(s)>>n
#define countbit(mask) __builtin_popcount(musk)
#define mod         1000000007


#include<stdio.h>
using namespace std;
long long a[1000015]={0};
long long b[100000];
long long c[1000015];
long long i,j,m,n,k=1,t=0,v=0,l=2,x,y;

void sieve(){
    a[0]=1;
    a[1]=1;
for(i=4;i<=1000;i=i+2)
{
   a[i]=1 ;
}
for(i=3;i<=1000;i++)
{
    if(a[i]==0)
    {
        for(j=i*i;j<=1000;j+=i*2)
        {
            a[j]=1;
        }
    }
}
for(i=1;i<=1000;i++)
{
    if(a[i]==0)
    {
        b[k]=i;
        k++;

    }
}
}
void factorize()

{
    for(i=2;i<=1000000;i++)
    {
        t=i;
        for(j=1;b[j]<t&&j<k;j++)
        {
        while(t%b[j]==0)
        {
            v++;
            t/=b[j];
        }
        }

        if(t>1)
        {
            v++;
        }
        c[l]+=v;
        l++;
    }
}
int main()
{
    sieve();
    factorize();
    while(scanf("%lld",&x)==1)
    {
    printf("%lld\n",c[x]);
    }
    return 0;

}
