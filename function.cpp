#include <iostream>

// float add(float a, float b){
//     return a + b;
// }

// float sub(float a, float b){
//     return a - b;
// }

// float mul(float a, float b){
//     return a*b;
// }

// float divide(float a, float b){
//     return a / b;
// }


// int main(){
//     int a, b;
//     char op;
//     std::cout << "what type of calculation do you want to make? ( +, - , *, /) \n";
//     std:: cin >> op;
//     if (op == '+'){
//         std:: cout << "please enter the number you want to add \n";
//         std:: cin >> a >> b;
//         std:: cout << "the result is : " << add(a, b)<<'\n';
//     } else if (op == '-'){
//         std:: cout << "please enter the number you want to substract \n";
//         std:: cin >> a >> b;
//         std:: cout << "the result is : " << sub(a, b)<<'\n';
//     } else if (op == '*'){
//         std:: cout << "please enter the number you want to multiply \n";
//         std:: cin >> a >> b;
//         std:: cout << "the result is : " << mul(a, b)<<'\n';
//     } else if (op == '/'){
//         std:: cout << "please enter the number you want to divide \n";
//         std:: cin >> a >> b;
//         std:: cout << "the result is : " << divide(a, b)<<'\n';
//     } else {
//         std::cout << "please enter a valid operation \n";
//     }
// }

void stars (int n);

int main(){
    int n;
    std::cout << "some text \n";
    std::string name;

    std::getline(std::cin >> std::ws, name);

    std::cin >> n;
    stars(n);
    std:: cout << '\n';

    std:: cout << name;
}

void stars (int n){
    for (int i = 0; i < n; i++){
        std::cout << '*';
    }
}