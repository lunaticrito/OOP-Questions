// Overloading [][] operator

#include <bits/stdc++.h>
using namespace std;

class Row{
    int *rowData;
public:
    Row(int *data) : rowData(data) {}
    int &operator[](int col)
    {
        return rowData[col];
    }
};
class Matrix{
    int n;
    vector<vector<int>> data;
public:
    Matrix(int size) : n(size), data(size, vector<int>(size)) {}
    Row operator[](int row){
        return Row(data[row].data());
    }
    int size() const{
        return n;
    }
};

int main()
{
    int n;
    cin >> n;

    Matrix mat(n);
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    cout << "Matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}