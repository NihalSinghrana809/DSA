#include<iostream>
using namespace std;
// a a a a
// b b b b 
// c c c c 
// d d d d 
int main(){
int n;
cout<<"Enter the Number:"<<endl;
cin>>n;
char ch='a';
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<ch<<" ";
    }
    ch++;
    cout<<endl;
}
return 0;
}