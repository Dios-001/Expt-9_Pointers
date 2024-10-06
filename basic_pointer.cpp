#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int *aptr;
    aptr = &a;
    cout << &a << endl;
    cout << aptr << endl;
    cout << *aptr << endl;
}
/*
0x61fc08
0x61fc08
10
*/