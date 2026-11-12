#include <iostream>

int main(){
    int i,j = 20;
    int* const p = &i;
    const int* q = &j;
    
    *p = 30; //-> legal
    // p = 20; -> illegal

    q = &j;

    std::cout << *p << '\n'; //-> prints out the value of 30
    std::cout << p << '\n'; //-> prints out the memory address of i 
    std::cout << q << '\n';
    std::cout<< *q << '\n';
}