#include<iostream>
using namespace std;
int nth_fibo(int n){
    if(n<2){
        return n;
    }
    int a=0,b=1,c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
void fibo_series(int n){
    for(int i=0;i<n;i++){
        cout<<nth_fibo(i)<<" ";
    }
    cout<<endl;
}
int main(){
int n;
cout<<"Enter the Number:"<<endl;
cin>>n;
cout<<"Fibonacci Series"<<endl;
fibo_series(n);
return 0;
}