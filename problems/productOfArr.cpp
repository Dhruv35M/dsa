// product of array except self
// example
// input: arr[] = {1, 2, 3, 4};
// output: arr[] = {24, 12, 8, 6};

#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4};
    
    for(auto i: arr) {
        cout<<i<<" ";
    }
    cout<<endl;

    int res[4] {0};
    int k=0;
    for(int i{0}; i<4; i++) {
        int product = 1;

        for(int j=0; j<4; j++) {
            if(i == j) continue;
            product *= arr[j];
        }
        
        res[k] = product;
        k++;
    }

    for(auto i: res) {
        cout<<i<<" ";
    }

    cout<<endl;


    return 0;
}