#include <cmath>
#include <iostream>
#define eps 0.0001
using namespace std;
int main()
{
    double sum;
    sum = 0;
    const int m = 10;
    int n, i, k;
    float tsum = 0, sum2 = 0;
    cout << "n: ";
    cin >> n;

    //вычисление суммы с 0-го слагаемого
    for (i = 1, k = 1; i <= n; i++, k += 2)
        tsum += (float)i / (float)k;                                           

//вычисление суммы с n-го слагаемого
    for (i = n, k = 2 * n - 1; i > 0; i--, k -= 2)
        sum2 += (float)i / (float)k;

    //печать результатов
    cout << "sum: " << tsum << endl;
    cout << "sum2: " << sum2 << endl;

    k = 0;

    while (pow (-1, k) * ((1/k) (k+1)) > eps)                   
    {                                                              
        sum += 1.0 / (4 * k * k - 1);                              
        k++;
    }
    cout << "2: sum: " << sum << endl;
    cout << "K: " << k << endl;
    cout << endl;
    return 0;
}
