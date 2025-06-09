#include<iostream>
using namespace std;
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
int main(){
int n;
cout<<"Enter the Number:"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=1;j<=n;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0;
}