#include <iostream>
using namespace std;

class Address {
public:
    string country;
    string state;
    string city;
    int pincode;


    // Parameterized constructor
    Address(string cnty, string s, string c, int p) : country(cnty), state(s), city(c), pincode(p) {}
};

class Student {
private:
    string name;
    int clas;
    int roll_no;
    int marks;

    Address studentAddress;

public:
    Student(string n, int c, int r_no, int mrk, Address address) : name(n), clas(c), roll_no(r_no), marks(mrk), studentAddress(address) {}

    char stud_grad() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void stud_info() {
        cout << "Name: " << name << endl
             << "Class: " << clas << endl
             << "Roll Number: " << roll_no << endl
             << "Marks: " << marks << endl
             << "Grade: " << stud_grad() << endl
             << "Address: " << studentAddress.country << "," << studentAddress.state << ","
             << studentAddress.city << "," << studentAddress.pincode << endl;
    }
};

int main() {
    // Create an Address object
    Address address1("india", "guj", "surat", 12345);

    // Create a Student object using the Address object
    Student student1("far", 10, 101, 95, address1);

    // Display student information
    student1.stud_info();

    return 0;
}

