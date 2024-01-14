#include<iostream>
//9. Write a Program of Two 1D Matrix Addition using Operator Overloading
using namespace std;

class matrix {
private:
    int array[5];

public:
    void get();
    void display();
    matrix operator+(const matrix& m);  
    };

void matrix::get() {
    cout << "Enter 1d matrix, 5 values: ";
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }
}

void matrix::display() {
    cout << "Values: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

matrix matrix::operator+(const matrix& m) {
    matrix result;
    for (int i = 0; i < 5; i++) {
        result.array[i] = array[i] + m.array[i];
    }
    return result;
}

int main() {
    matrix a1, a2, a;
    a1.get();
    a2.get();
    a = a1 + a2;
    a.display();

    return 0;
}
