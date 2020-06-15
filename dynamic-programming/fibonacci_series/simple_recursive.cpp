#include<iostream>
using namespace std;

unsigned int calc_fibonacci(int n){
  if (n==0){
    return 0;
  } else if (n==1){
    return 1;
  } else if (n>1){
    return (calc_fibonacci(n-1) + calc_fibonacci(n-2));
  }
}

int main(){
  int num;
  cout<< "Enter the number for fibonacci series you dummy! ";
  cin>> num;

  for (int i=0; i<num; i++){
    cout<< calc_fibonacci(i) << " ";
  }
  cout<< endl;

  return 0;
}
