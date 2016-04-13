#include <iostream>
using namespace std;
int a;

void triangule(int a){
  for(int t=1; t<=a; t++){
    cout << endl;
    for(int c=t; c>0; c--){
      cout << "T";
    }
  }
  cout << endl;
  for(int t=a; t>0; t--){
    for(int c=0; c<t; c++){
      cout << "T";
    }
    cout << endl;
  }
}

int main(){
  cout << "Type the number of triangules you want to be display " <<endl;
  cin >> a;

  triangule(a);
  return 0;
}
