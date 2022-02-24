#include <iostream>
using namespace std;

int main()
{
   int n,m,i,j,a[20][20];
   int nr,s=0;
   cout<<"m=";cin>>m;
   cout<<"n=";cin>>n;
   for(i=1;i<=m;i++)
      for(j=1;j<=n;j++)
      {
         cout<<"a["<<i<<"]["<<j<<"]=";
         cin>>a[i][j];
      }
   cout<<"Matricea este:"<<endl;
   for(i=1;i<=m;i++)
   {
      for(j=1;j<=n;j++)
         cout<<a[i][j]<<" ";
      cout<<endl;
   }
   for(i=1;i<=m;i++)
      for(j=1;j<=n;j++)
         s=s+a[i][j];
   nr=m*n;
   cout<<"Matricea contine:"<<nr<<" elemente"<<endl;
   cout<<"Suma elementelor matricii este:"<<s<<endl;
   cout<<"Media aritmetica a acestora este: "<<(float)s/nr;
   return 0;
}