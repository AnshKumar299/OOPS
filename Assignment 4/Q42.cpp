#include <iostream>
#include <iomanip>
using namespace std;

class Table {
private:
    int** data;
    int rows;
    int cols;

public:
    Table(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    Table(const Table& other) : rows(other.rows), cols(other.cols) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                data[i][j] = other.data[i][j];
            }
        }
    }

    Table& operator=(const Table& other) {
        if (this != &other) {
            for (int i = 0; i < rows; ++i) {
                delete[] data[i];
            }
            delete[] data;

            rows = other.rows;
            cols = other.cols;
            data = new int*[rows];
            for (int i = 0; i < rows; ++i) {
                data[i] = new int[cols];
                for (int j = 0; j < cols; ++j) {
                    data[i][j] = other.data[i][j];
                }
            }
        }
        return *this;
    }

    int* operator[](int index) {
        return data[index];
    }

    friend istream& operator>>(istream& is, Table& table) {
        for (int i = 0; i < table.rows; ++i) {
            for (int j = 0; j < table.cols; ++j) {
                is >> table.data[i][j];
            }
        }
        return is;
    }

    friend ostream& operator<<(ostream& os, const Table& table) {
        for (int i = 0; i < table.rows; ++i) {
            for (int j = 0; j < table.cols; ++j) {
                os << setw(4) << table.data[i][j];
            }
            os << endl;
        }
        return os;
    }
};

int main() {
    Table t(4, 5), t1(4, 5);
    cin >> t;
    t[0][0] = 5;
    int x = t[2][3];
    t1 = t;
    cout << t << "\n" << t1;
    return 0;
}