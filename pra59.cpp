#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector <int> vec(3.1);
    for(int i=0;i<3;i++){
        cout << vec[i] << " " << '\n';
    }
    cout << vec.size();
    return 0;
}