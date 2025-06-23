#include<iostream>
using namespace std;
// a
// a b
// a b c
// a b c d
int main(){
int n;
cout<<"Enter the Number:"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    char ch='a';
    for(int j=0;j<=i;j++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
}
return 0;
}