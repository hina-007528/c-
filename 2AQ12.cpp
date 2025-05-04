#include <iostream>
using namespace std;
int main() { 
int n, sum = 0, i = 1; 
cout << "Enter a number: "; 
cin >> n; while (i <= n) { if (i % 2 == 0) sum +=
i; i++; 
} 
cout << "Sum of all even numbers between 1 and " << n << " is " << sum <<
endl; 
return 0;
}