#include<iostream>
using namespace std;
// 1 1 1 1 
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1 
int main(){
int n;
cout<<"Enter the Number:"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"1 ";
    }
    cout<<endl;
}
return 0;
}