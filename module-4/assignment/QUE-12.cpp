//Write a Program of Two 1D Matrix Addition using Operator Overloading 
//by c++

#include <iostream>
#include <vector>
using namespace std;
class Matrix 
{
public:
  vector<int> data;
  int rows;
  int cols;
  Matrix(int rows, int cols) 
  {
    this->rows = rows;
    this->cols = cols;
    data.resize(rows * cols);
  }
  int& operator()(int row, int col) 
  {
    return data[row * cols + col];
  }
  Matrix operator+(const Matrix& other) 
  {
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++) 
    {
      for (int j = 0; j < cols; j++) 
      {
        result(i, j) = this(i, j) + other(i, j);
      }
    }
    return result;
  }
};
int main() 
{
  Matrix a(2, 3);
  a(0, 0) = 1;
  a(0, 1) = 2;
  a(0, 2) = 3;
  a(1, 0) = 4;
  a(1, 1) = 5;
  a(1, 2) = 6;
  Matrix b(2, 3);
  b(0, 0) = 7;
  b(0, 1) = 8;
  b(0, 2) = 9;
  b(1, 0) = 10;
  b(1, 1) = 11;
  b(1, 2) = 12;
  Matrix c = a + b;
  for (int i = 0; i < c.rows; i++) 
  {
    for (int j = 0; j < c.cols; j++) 
    {
      cout << c(i, j) << " ";
    }
    cout << endl;
  }
  return 0;
}
