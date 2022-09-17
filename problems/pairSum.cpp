// pair sum: - [1, 2, 3, 4, 5] => (1, 4), (2, 3)

#include <iostream>
using namespace std;


void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void pairSum(int arr[], int pair[], int n, int S) {
    int k=0, i=0, j=i+1;
    while(i < n - 1) {
        if(arr[i] + arr[j] == S) {
            pair[k] = arr[i];
            pair[k+1] = arr[j];
            k+=2;
            i++;
            j = i+1;
        }
        else if(j == n - 1) {
            i++;
            j = i+1;
        }
        else j++;
    }
}

int main()
{
    int arr[] { 1, 2, 3, 4, 5, 8, 7, 3, 10 };

    int pair[9] = {0};
    int S = 15;
    print(arr, 9);
    pairSum(arr, pair, 9, S);
    print(pair, 9);

    return 0;
}