#include<iostream>
using namespace std;
int main(){
    char grade = 'a';
    int value = grade;
    cout << value <<endl;

    double price = 99;
    int newPrice = (int)price;
    cout << newPrice << endl;

    double marks = 89.456;
    int newMarks = (int)marks;
    cout << newMarks << endl;
    return 0;
}