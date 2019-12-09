#include <iostream>
#include "Vector.hpp"
#include "full_mat_c.hpp"
using namespace std;

int main(){
  cout << " ****** Testing for Full matrix ***** \n";
  int n = 3, m = 3;
  FullMtx mat1(n,m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      mat1[i][j] =  n/(abs(i - j) + 1.0);
    }
  }
  cout << mat1;

  FullMtx mat2 = {{1,2,3},{4,5,6}};

  cout << "Matrix 2 is : " << mat2 << endl;
  getchar();
  Vector vec1(n) ;
  for (int i = 0; i < n; i++) vec1[i] = i;
  cout << mat2;
  cout << vec1;
	Vector res = mat2*vec1; // Test of matrix-vector product
	cout << "Result of the Matrix-Vector Multiplication is :  " << res << endl;
}
