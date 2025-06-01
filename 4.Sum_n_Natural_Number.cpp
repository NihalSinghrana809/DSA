#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"Enter the Number:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    sum=sum+i;
}
cout<<"Sum of n Natural Number is:"<<sum<<endl;
return 0;
}