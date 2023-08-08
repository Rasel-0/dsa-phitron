#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
cin>>n;
char a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
// shorting function choto theke boro
 sort(a,a+n);
 //sort(a,a+n,greater<int>()); //boro theke choto

for(int i=0;i<n;i++)
{
   cout<<a[i]<<" ";
}

 return 0;   
}