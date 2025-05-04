#include<iostream>
using namespace std;
int main(){
    int m,factorial=1,i=1;
    cout<<"Enter the value:";
    cin>>m;
   
    while(i<=m){
factorial=factorial*i;
i++;
    }
    cout<<factorial;
    return 0;
}