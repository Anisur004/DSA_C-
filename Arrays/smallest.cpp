#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
int SmallestElement(int number[], int size) {
 
  int min = number[0];
  for (int i = 0; i < size; i++) {
    if (min > number[i]) {
      min = number[i];
    }
  }
  return min;
}
int main() {
  int size;
  cin>>size;
int number[size];
  for(int i=0;i<size;i++){
    cin>>number[i];
int number[i];
  }
  for(int i=0;i<size;i++){
    cout<<number[i];
  }
 // int arr1[] = {2,5,1,3,0};
  //int n = 5;
  int min = SmallestElement(number, size);
  cout << "The smallest element in the array is: " << min << endl;
 
  int arr2[] =  {8,10,9,7,9};
  int n = 5;
  min = SmallestElement(arr2, n);
  cout << "The smallest element in the array is: " << min;
  return 0;
}
 