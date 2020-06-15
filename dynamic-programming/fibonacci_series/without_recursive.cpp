#include <iostream>
using namespace std;

int fib(int n){
  int first=0, second=1, next, i;
  if(n<2) return n;
  for (i=2; i<=n; i++){
    next = second + first;
    first = second;
    second = next;
  }
  return next;
}
int main() {
  int num;
   cout<<"Enter the number of elements: ";
   cin>>num;
   for (int i=0; i<num; i++){
     cout<< fib(i) << " ";
   }
   cout<< endl;
    cout<< fib(9);
    cout<< endl;
     return 0;
   }
