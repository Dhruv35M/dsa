// problem: https://www.codingninjas.com/codestudio/problems/allocate-books_1090540

#include <iostream>
using namespace std;

int allocateBooks(int [], int, int);
bool isPossible(int [], int, int, int);

int main() {

    int books[] = {10, 10, 20}; // no of pages
    int m = 2; // no of students

    cout<<allocateBooks(books, 3, m);

    return 0;
}


bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int PageSum = 0;

    for(int i{0}; i<n; i++) {
        if(PageSum + arr[i] <= mid) {
            PageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount > m || arr[i] > mid) {
                return false;
            }
            PageSum = arr[i];
        }
    }
return true;
}


int allocateBooks(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;
    int ans = 0;
    // sum of array (range of ans 0 - sum of all)
    for(int i{0}; i<n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int mid = s + (e-s)/2;
    while(s<=e) {
        if(isPossible(arr, n, m, mid)) { 
            // for example: -> arr[] = {10, 10, 20};
            // mid = 20 
            // 10 10 | 20 -> possible means all bigger no also will be possible and we have to find minimum so we set reset end;
            e = mid - 1;
            ans = mid; // hence we don't want to loose ans
          }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    } 
    return mid;
}