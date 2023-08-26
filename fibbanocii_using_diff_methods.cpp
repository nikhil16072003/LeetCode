//basic
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int c,i;
    cout<<a<<" ";
    cout<<b<<" ";
    for(i=2;i<n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}
//dynamic programing

#include <iostream>
using namespace std;

int main() {
     int n;
    cin>>n;
    int i;
    int a[n];
     a[0]=0;
     a[1]=1;

    for(i=2;i<n;i++){
       a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}


//recursion
#include <iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main() {
     int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}
