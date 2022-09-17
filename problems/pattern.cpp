#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int i=0;
// Pattern 1
    // for(i; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

// Patern 2
//   while(i < n) {
//     int j=0;
//     while(j < n) {
//         cout<<i<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
//   }

// Pattern 3
// while(i < n) {
//     int j=0;
//     while(j < n) {
//         cout<<j<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 4
// while(i < n) {
//     int j=n;
//     while(j > 0) {
//         cout<<j<<" ";
//         j--;
//     }
//     cout<<endl;
//     i++;
// }


// Pattern 5
// int count = 1;
// while(i < n) {
//     int j=n;
//     while(j > 0) {
//         cout<<count<<" ";
//         j--;
//         count++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 6
// while(i < n) {
//     int j=0;
//     while(j <= i) {
//         cout<<"*"<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 7
// while(i < n) {
//     int j=0;
//     while(j <= i) {
//         cout<<i<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 8
// while(i < n) {
//     int j=0;
//     while(j <= i) {
//         cout<<i<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 9
// int count = 1;
// while(i < n) {
//     int j=0;
//     while(j <= i) {
//         cout<<count<<" ";
//         j++;
//         count++;
//     }
//     cout<<endl;
//     i++;
// }

// // Pattern 10
// int count = 1;
// while(i < n) {
//     int j=0;
//     while(j <= i) {
//         cout<<count<<" ";
//         j++;
//         count++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 11
// while(i < n) {
//     int j = 0;
//     while(j <= i) {
//         cout<<i - j + 1<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 12
//method 1
// char ch = 'A';
// while(i<n) {
//     int j=0;
//     while(j<n) {
//         cout<<ch<<" ";
//         ch++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

//method 2
// int row;
// while(i<n) {
//     int j=0;
//     while(j<n) {
//         cout<<char('A' + i)<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


// Pattern 13
// while(i < n) {
//     int j = 0;
//     while(j < n) {
//         cout<<char('A' + j)<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 14
// while(i < n) {
//     int j = 0;
//     while(j < n) {
//         cout<<char('A'+i+j)<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


// Pattern 15
// while(i < n) {
//     int j = 0;
//     while(j <= i) {
//         cout<<char('A'+i)<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 16
// while(i < n) {
//     int j = 0;
//     while(j <= i) {
//         cout<<char('A'+j+i)<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 17
// while(i < n) {
//     int j = 0;
//     char start = 'A' + n - i - 1;
//     while(j <= i) {
//         cout<<start<<" ";
//         start++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 18
// while(i<n) {
//     int j=0;
//     char start = 'A' + i + j;
//     while(j<n) {
//         cout<<start<<" ";
//         start++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 19
//method 1
// while (i<n)
// {
//     int j=n-1, k=0;
//     while (j>i)
//     {
//         cout<<"- ";
//         j--;
//     }
//     while(k<=i){
//         cout<<"* ";
//         k++;
//     }
//     cout<<endl;
//     i++;
// }

// method 2 -> better
// while(i<n) {
    // int j=0;
    // int space = n - i - 1;
    
//     // print spaces
//     while (space)  
//     {
//         cout<<" ";
//         space--;
//     }

//     // print start
//     while(j <= i) {
//         cout<<"*";
//         j++;
//     }

//     cout<<endl;
//     i++;
// }

// Pattern 20
// while(i<n) {
//     int j=n-1;
//     while(j>=i) {
//         cout<<"* ";
//         j--;
//     }
//     cout<<endl;
//     i++;
// }

// Pattern 21
// i = 1;
// while(i<n) {
//     int j=1;
//     int spaces= n-i-1;
//     // print the spaces (tringle 1)
//     while(spaces) {
//         cout<<" ";
//         --spaces;
//     }

//     // print the second tringle
//     while(j<=i) {
//         cout<<j;
//         j++;
//     }

//     // trangle 3
//    int start = i-1;
//    while(start) {
//     cout<<start;
//     start--;
//    }
   
//     cout<<endl;
//     i++;
// }


// Final Pattern
while(i<n) {
    int j= n;

    // tringle 1
    while(j > i) {
        cout<<n-j+1<<" ";
        j--;
    }

    // tringle 2
    int stars = i;
    while(stars) {
        cout<<"* ";
        stars--;
    }

    // tringle 3
    int k = 1;
    while(k <= i) {
        cout<<"* ";
        k++;
    }

    // int tringle 4
    j = n;
    while(j > i) {
        cout<<j - i<<" ";
        j--;
    }

    cout<<endl;
    i++;
}

 return 0;
}