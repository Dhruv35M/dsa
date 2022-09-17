// // find the minimum values and put at starting index than startingIndex++, and search in subarray

// #include <iostream>
// using namespace std;

// void print(int [], int);
// void selectionShort(int [], int);

// int main() {
//     int arr[] = {12, 3, 109, 32, -12};
//     cout<<"Before shorting: ";
//     print(arr, 5);
//     selectionShort(arr, 5);
//     cout<<"After shorting: ";
//     print(arr, 5);

//     return 0;
// }

// void print(int arr[], int n) {
//     for(int i{0}; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void selectionShort(int arr[], int n) {
//     for(int i{0}; i<n-1; i++) {
//         int minInd = i;

//         for(int j{i+1}; j<n; j++) {
//             if(arr[minInd] > arr[j])
//                 swap(arr[minInd], arr[j]);
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int num = nums[0], count{0};
    int majorityElement = nums.size() / 2;
    sort(nums.begin(), nums.end());

    // for (int i{0}; i < nums.size(); i++)
    // {
    //     if (nums[i] == num)
    //     {
    //         count++;
    //         if (count > majorityElement)
    //         {
    //             return num;
    //         }
    //     }
    //     else
    //     {
    //         num = nums[i];
    //         count = 1;
    //     }
    // }
    cout<<"this is the : "<<nums[nums.size()/2];
return nums[nums.size()/2];
    // return num;
}


int majorityElement1(vector<int>& nums) {
        int majority, count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                majority = nums[i];
            }
            if(majority == nums[i]) count++;
            else count--;
        }
        return majority;
    }

int main()
{
    vector<int> arr {2,2,1,3,1,1,4,1,1,5,1,1,6};
    // vector<int> arr{6,5,5};
    cout << majorityElement1(arr);

    return 0;
}
