// **************** using min variable*******************
//#include <iostream>
// #include <bits/stdc++.h>
 
// using namespace std;
// int SmallestElement(int number[], int size) {
 
//   int min = number[0];
//   for (int i = 0; i < size; i++) {
//     if (min > number[i]) {
//       min = number[i];
//     }
//   }
//   return min;
// }

// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++)
//   {
//     cin>>arr[i];
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i];

//   }
//   int min=SmallestElement(arr,n);
//   cout<<"The smallest element is"<<min<<endl;
  
//  int arr2[]={3,5,7,8,9};
//  int num=5;
//     min=SmallestElement(arr2,num);
//   cout<<"The smallest element is"<<min;
//   return 0;
// }
// using sorting
#include <bits/stdc++.h>
 using namespace std;
 int sortArray(vector <int>& arr){
  sort(arr.begin(),arr.end());
  return arr[0];
 }
 int main(){
  vector<int> arr1={7,5,3,8,9};
  cout<<"Smallest element is"<<sortArray(arr1);
  return 0;
 }
