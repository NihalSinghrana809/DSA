#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"Enter the Number:"<<endl;
cin>>n;
if(n<2){
    cout<<"Not Prime"<<endl;
}
for(int i=2;i<=n-1;i++){
    if(n%i==0){
        cout<<"Not Prime"<<endl;
        return 0;
    }
}
cout<<"Prime"<<endl;
return 0;
}