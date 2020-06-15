#include<iostream>
using namespace std;

void _intialise(int num,int cache[]){
  for (int i=0; i<num;i++){
    cache[i] = -1;
  }
}

unsigned int calc_fibonacci(int n, int cache[]){
  if(cache[n] == -1){
    if(n<2){
      cache[n] = n;
    } else{
      cache[n] = calc_fibonacci(n-1, cache) + calc_fibonacci(n-2, cache);
    }
  }
  return cache[n];

}
int main(){
  int num;
  cout<< "Enter number for fibonacci series: ";
  cin>> num;
  int cache[num];
  // cout<< sizeof(cache)/sizeof(cache[0]);
  _intialise(num,cache);
  // cout<< cache[1];
  for (int i=0; i<num; i++){
    cout<< calc_fibonacci(i, cache) << " ";
  }
  cout<< endl;
  return 0;
}
