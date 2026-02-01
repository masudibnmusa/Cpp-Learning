#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    vec.push_back(28);
    
    for(int val : vec){
        cout << val << " ";
    }
    cout << "\n";

    vec.pop_back();

    for(int val : vec){
        cout << val << " ";
    }
    cout << "\n";
    cout << vec.front() << "\n";
    cout << vec.back() << "\n";
    cout << vec.at(0) << "\n";
    return 0;
}