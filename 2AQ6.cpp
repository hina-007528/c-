#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the value:";
    cin>>n;
    while(n>0){
        sum+=n%10;
    }
    cout<<"sum of digits is"<<sum<<endl;
    return 0;
}