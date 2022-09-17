// find all duplicates from nums where all elements lies between 1 to n

#include <iostream>
using namespace std;


void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void findAllDuplicates(int nums[], int duplicates[], int n) {
    int ans=0, j=0;
    for(int i{0}; i<n; i++) {
        ans = ans^nums[i];
        if(ans == 0) {
            duplicates[j] = nums[i];
            j++;
        }
    }
}

int main() {
    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int duplicates[8] {0};

    findAllDuplicates(nums, duplicates, 8);
    cout<<"nums: "<<endl;
    print(nums, 8);
    cout<<"duplicates: "<<endl;
    print(duplicates, 8);
    return 0;
}