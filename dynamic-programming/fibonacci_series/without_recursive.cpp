#include<iostream>
using namespace std;

int fib(int n){
  if (n<2) return n;

  int first=0, second=1, nth=1;
  for (int i=2; i<n; i++){
    nth = first + second;
    first = second;
    second = nth;
  }
  return nth;
}
int main(){
  int num;
  cout<< "Enter the number for fibo series: ";
  cin>> num;
  for (int i=0; i<num; i++){
    cout<< fib(num) << " ";
  }
  cout<< endl;

  return 0;
}
