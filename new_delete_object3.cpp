

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
    Balance(){}//parameterless constructor
    ~Balance()
    {
        cout << "Destructing ";
        cout << name << "\n";
    }
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
    int i;

    try
    {
        p = new Balance[3];//allocate entire array
    }
    catch(bad_alloc xa)
    {
       cout << "Allocation Failure\n";
       return 1;
    }

    // note use of dot, not arrow operators
    p[0].set_values(12387.87, "Ralph Wilson");
    p[1].set_values(144.00, "A. C. Conners");
    p[2].set_values(-11.23, "I. M. Overdrawn");

    for(i=0; i<3; i++) {
        p[i].get_bal(n, s);
        cout << s << " 's balance is: " << n << " Location: "<< (p + i);
        cout << endl;
    }

    delete [] p;

    return 0;
}
