#include <iostream>
using namespace std;

int superpower(int a, int b)
{
 int sup = 1, contador = 0;
    do
    {
      sup = sup * a;
      contador = contador + 1;
    }while(b != contador);
    return (sup);
}

int main(){
    int n, n1;
    cout << "Dame el primer numero " << endl;
    cin >> n;
    cout << "Dame el numero de potencia " << endl;
    cin >> n1;
    cout << superpower(n,n1) << endl;
    return 0;
}
