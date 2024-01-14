#include<iostream>
//13.Write a program to find the max number from given two numbers
//using friend function
using namespace std;

template<typename f>
class max_no;

template<typename f>
f find_max(max_no<f> mn);

template<typename f>
class max_no {
private:
    f num1;
    f num2;

    friend f find_max<f>(max_no<f> mn);

public:
    max_no(f n1, f n2) {
        num1 = n1;
        num2 = n2;
    }
};

template<typename f>
f find_max(max_no<f> mn) {
    if (mn.num1 > mn.num2) {
        return mn.num1;
    } else {
        return mn.num2;
    }
}

int main() {
    max_no<double> m(6, 9);
    cout << "max number is: " << find_max(m) << endl;

    return 0;
}

