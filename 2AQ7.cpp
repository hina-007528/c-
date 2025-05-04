#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the value:";
    cin>>n;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<"Count of digits"<<count<<endl;
    return 0;
}