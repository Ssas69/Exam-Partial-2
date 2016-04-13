#include <iostream>
using namespace std;

int a=0, b=1, f, n;
int fibonacci(int n)
{
    for (int x = 1; x < n; x++)
    {
      f = a + b;
      a = b;
      b = f;
    }
    return (f);
}

int main()
{
    int n;
    cout << "Dame un numero " << endl;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
