// C++ program to How will you print numbers from 1 to n without using a loop?
#include <iostream>
using namespace std;

class dsa {

    // It prints numbers from 1 to n.
public:
    void printNos(unsigned int n)
    {
        if (n > 0) {
            printNos(n - 1);
            cout << n << " ";
        }
        return;
    }
};

// Driver code
int main()
{
    int n = 10;
    dsa g;
    g.printNos(n);
    return 0;
}
