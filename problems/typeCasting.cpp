#include <iostream>
using namespace std;

int main()
{

    //  yadi hum badi value ko chhote data data type me dalne ki koshish karenge to vah last ke kuch bits daal dega -> usaki jo bhi value banegi vo print hoga.

    // Positive(+ve) -> first bit is 0
    // negitive(-ve) -> first bit is 1

    char abc = 123456;
    cout << abc << endl;

    unsigned int x = 121;
    cout << x << endl;

    int a = 4;
    cout << !a << endl;

    a = 0;
    cout << !a << endl;

    return 0;
}