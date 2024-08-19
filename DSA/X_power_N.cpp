#include <iostream>
#include <cstdlib> // For abs
using namespace std;
 double myPow(double x, int n) {
        double output = 1;

       if (x == 0 && n <= 0) {
            return 0;
        }

        long long absN = abs(static_cast<long long>(n));

        for (long long i = 0; i < absN; ++i) {
            output *= x;
            if (output < -1e4 || output > 1e4) {
                return 0;
            }
        }

        if (n < 0) {
            output = 1.0 / output;
        }


        return output;
    }

int main() {
    int n;
    double x,res;
    cout<<"enter no and pow";
  cin>>x;
 cin>>n;


 res=myPow(x,n);
 cout<<res;

    return 0;
}
