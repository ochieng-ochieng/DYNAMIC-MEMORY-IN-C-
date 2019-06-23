
#include<iostream>
#include<new>

using namespace  std;

int main()
{
    int *p, i;

    try
    {
        p = new int[10];
    }
    catch(bad_alloc xa)
    {
       cout << "Allocation Failure\n";
       return 1;
    }

    for(i = 0; i < 10; i++)
        p[i] = i;

    for(i = 0; i < 10; i++)
        cout << p[i] << " ";

    cout << endl << endl;

    for(i = 0; i < 10; i++)
        cout << "At " << (p + i) << " " << "is the value " << *(p + i) << "\n";

    delete [] p;//relaese the array

    return 0;
}
