// triplets of given sum
// arr = [1, 2, 3, 4, 5, 6]
// if Sum = 13, then triplets: 2,5,6

#include <iostream>
using namespace std;


void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void triplets(int arr[], int result[], int n, int S) {
    int i{0}, j{i+1}, k{j+1}, x{0};
    while(i < n-3 && j < n-2 && k < n-1) {
        cout<<"this is i, j and k: "<< i <<" "<<j<<" "<<k<<endl;
        if(arr[i] + arr[j] + arr[k] == S){
            cout<<"equals: "<<arr[i] <<" "<< arr[j] <<" "<< arr[k]<<endl;
            result[x] = arr[i];
            result[++x] = arr[j];
            result[++x] = arr[k];
            x++;
        }
        else if(k == n-1) {
           j++;
           k = j;
        }
        else if(j == n-2) {
            i++;
            j = i + 1;
            k = j;
        }
        k++;
    }
    // result[x] = {0};
}

int main() {

    // int arr[] = {1, 2, 3, 4, 5, 6};
    int arr[] = {-1,0,1,2,-1,-4};
    int result[6] = {0};
    int S = 0;

    print(arr, 6);
    triplets(arr, result, 6, S);
    print(result, 6);
    return 0;
}