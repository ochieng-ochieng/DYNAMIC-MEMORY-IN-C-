
#include<iostream>
#include<new>
#include<cstring>

using namespace std;

class Balance{
    double cur_bal;
    char name[80];
public:
    Balance(double n, char *s)
    {
        cur_bal = n;
        strcpy(name, s);
    }
    ~Balance()
    {
        cout << "Destructing ";
        cout << name << "\n";
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
        p = new Balance(12387.87, "Ralph Wilson");
    }
    catch(bad_alloc xa)
    {
       cout << "Allocation Failure\n";
       return 1;
    }

    p ->get_bal(n, s);

    cout << s << " 's balance is: " << n << " "<< p;
    cout << endl;

    delete p;

    return 0;
}
