#include<iostream>
using namespace std;
int main(){
    int n,reversedNumber=0;
    cout<<"Enter the value:";
    cin>>n;
    while(n>0){
        int lastdigit=n%10;
        // for access to last digit
        reversedNumber=reversedNumber*10+lastdigit;
        // 4*10+3=43
        n/=10;
        // for removal of number
    }
    cout<<"Reversed no is"<<reversedNumber<<endl;
    return 0;
}