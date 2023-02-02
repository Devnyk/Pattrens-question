// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

  int rowCount, colCount;
  cout << "enter rowCount" << endl;
  cin >> rowCount;
  cout << "enter colCount" << endl;
  cin >> colCount;
  for (int row = 0; row < rowCount; row = row + 1) {
    if (row == 0 || row == rowCount - 1) {
      for (int col = 0; col < colCount; col++) {
        cout << "* ";
      }
    }

    else {
      cout << "* ";
      for (int i = 0; i < colCount - 2; i = i + 1) {
        cout << "  ";
      }
      cout << "* ";
    }

    cout << endl;
  }
};