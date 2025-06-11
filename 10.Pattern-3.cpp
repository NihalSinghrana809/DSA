#include<iostream>
using namespace std;
// 4 3 2 1
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 
int main(){
int n;
cout<<"Enter the Number:"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=n;j>=1;j--){
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0;
}