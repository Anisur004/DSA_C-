#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector <int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-2];
}
int secondsmallest(vector <int>& arr){
    sort(arr.begin(),arr.end());
    return arr[1];
}
int main(){
    vector<int>arr={34,78,12,39,90,67,89};
    cout<<"the second largest element is"<<secondLargest(arr);
    cout<<"the second smllest element is"<<secondsmallest(arr);
    return 0;
}