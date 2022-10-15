#include <iostream>
#include "Polynomial.h"

using namespace std;


int main()
{

    vector<double> A = { 5,6,7,8,1 };
    vector<double> B = { 3, 4, 9 };
    Polynomial polyn(A);
    Polynomial polyn1(B);
    vector<double> sum = polyn1.add(A, B);
    polyn1.print(sum);
    cout << polyn1.result(sum, 3) << endl;
    cout << polyn1.GetVectorValue(1) << endl;



    return 0;
}