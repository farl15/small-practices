#include <iostream>
#include <iomanip>

int main(){

    int n;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < i; j++){
            std::cout << '*';  
        }
        std:: cout << '\n';
    }

    for (int i = 0; i <= n; i++){
        std::cout<<std::right << std::setw(n-i+1);
        for(int j = 0; j < i; j++){
            std::cout << '*';
        }
        std:: cout << '\n';
    }
}