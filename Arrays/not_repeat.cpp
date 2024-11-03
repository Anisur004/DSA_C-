// // //Brute force
// // #include<bits/stdc++.h>
// // using namespace std;

// // void findNonRepeatingElement(vector<int>& nums) {
// //     bool chk;
// //     for(int i=0;i<nums.size();i++) {
// //         chk = false;
// //         for(int j=0;j<nums.size();j++) {
// //             if(i!=j && nums[i] == nums[j]) {
// //                 chk = true;//to check if for current picked elements is repeating element
// //                 break;
// //             }
// //         }
// //         //since chk is false only when no repeating element has occurred while traversal and reached the end of the array.
// //         if(!chk) cout<<nums[i]<<" ";
// //     }
// // }

// // int main() {
// //     vector<int> nums = {1,2,-1,1,3,1};
// //     cout<<"Non-repeating numbers are: "<<endl;
// //     findNonRepeatingElement(nums);
    
// //     return 0;
// // }

// //using sorting
// #include<bits/stdc++.h>
// using namespace std;

// void findNonRepeatingElement(vector<int>& nums) {
//     sort(nums.begin(),nums.end());//sorting array
    
//     //handling first element of the array.
//     if(nums[0] != nums[1]) cout<<nums[0]<<" ";
    
//     for(int i=1;i<nums.size()-1;i++) 
//        if(nums[i-1] != nums[i] && nums[i] != nums[i+1]) cout<<nums[i]<<" ";
       
//     //handling last element of the array
//     if(nums[nums.size()-2] != nums[nums.size()-1]) cout<<nums[nums.size()-1];
// }

// int main() {
//     vector<int> nums = {1,2,-1,1,3,1};
//     cout<<"Non-repeating numbers are: "<<endl;
//     findNonRepeatingElement(nums);
    
//     return 0;
//using map
#include<bits/stdc++.h>
using namespace std;

void findNonRepeatingElement(vector<int>& nums) {
    // hashmap storing elements in the array as 
    // key and their occurrences as value.
    unordered_map<int,int> hashMap;

    for(auto i:nums) ++hashMap[i];
    // if the count of elements equals to 1, it is a non-repeating element.
    for(auto pairInMap:hashMap) 
        if(pairInMap.second == 1) cout<<pairInMap.first<<" ";
}

int main() {
    vector<int> nums = {1,2,-1,1,3,1};
    cout<<"Non-repeating numbers are: "<<endl;
    findNonRepeatingElement(nums);
    
    return 0;
}