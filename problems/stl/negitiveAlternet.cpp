#include <iostream>
using namespace std;

void print(int arr[], int n);
void rearrange(int arr[], int n);

int main() {

    int arr[] = {-5, -2, 5, 2};
    print(arr, 4);
    rearrange(arr, 4);
    print(arr, 4);
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rearrange(int arr[], int n) {
        int i{1}, temp;
        while(i<n) {
        //    if(arr[0] < 0) {
        //     temp = arr[i];
        //    }

           if(i%2 != 0) {
            if(arr[i] >= 0) {
                swap(arr[i], arr[i]);
            }
            else {
                
            }
           }

           i++;
        }
    }