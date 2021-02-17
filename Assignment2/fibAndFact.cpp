
#include <iostream>
using namespace std;
int factorial(int n) {
   if(n == 0) {
      return 1;
   } else {
      return n * factorial(n-1);
   }
}

int fib(int n) {
   if(n<2)
   return n;
   else {
      return (fib(n-1) + fib(n-2));
   }
}

int main() {
   int n;
   cout<<"enter the value of n";
   cin>>n;
   cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
   cout<<"Fibonacci of "<<n<<" is "<<fib(n);
}
