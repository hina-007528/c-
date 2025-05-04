#include<iostream>
using namespace std;
int main(){
    int n,originalNumber,reversedNumber=0;
    cout<<"Enter the value:";
    cin>>n;
    while(n>0){
        reversedNumber=reversedNumber*10+n%10;
        n/=10;
    }
    if(originalNumber==reversedNumber)
    cout<<originalNumber<<"is palindrome."<<endl;
     else{cout<<originalNumber<<"is not palindrome."<<endl;
    return 0;
}
}