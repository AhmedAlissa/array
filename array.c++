#include <iostream.h>
#include <stdlib.h>
int main(){
int a[50];
int max,i,n;
cout<<"n=";cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
max=a[0];
for(i=0;i<n;i++)
{
if( a[i]%7==0)
if(a[i]%2!=0)
cout<<"a["<<i<<"]="<<a[i]<<endl;
if(a[i]>max)max=a[i];
}
cout<<"max="<<max<<endl;
system("PAUSE");
return 0;
}