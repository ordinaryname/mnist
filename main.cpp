#include <iostream>
#include "armadillo"

using namespace std;
using namespace arma;

int main() {
  /* code */
  mat A = randu<mat>(4,5);
  mat B = randu<mat>(4,5);

  cout << A*B.t() << endl;
  return 0;
}
