#include<iostream>
#include<new>
#include<cstring>

using namespace std;

class Balance{
    double cur_bal;
    char name[80];
public:
    void set_values(double n, char *s)
    {
        cur_bal = n;
        strcpy(name, s);
    }
    void get_bal(double &n, char *s)
    {
        n = cur_bal;
        strcpy(s, name);
    }
};

int main()
{
    Balance *p;
    char s[80];
    double n;

    try
    {
        p = new Balance;
    }
    catch(bad_alloc xa)
    {
       cout << "Allocation Failure\n";
       return 1;
    }

    p ->set_values(12387.87, "Ralph Wilson");

    p ->get_bal(n, s);

    cout << s << " 's balance is: " << n << " "<< p;
    cout << endl;

    delete p;

    return 0;
}
