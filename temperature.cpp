#include <iostream>

int main(){
    char unit, unit2;
    float temp;

    std:: cout << "please enter your unit (C, K, F) \n";
    std:: cout << "C = Celcius, K = Kelvin, F = Fahrenheit \n";
    std:: cin >> unit;
    std::cout << "please enter your temperature \n";
    std:: cin >> temp; 

    if (unit == 'C' || unit == 'c'){
        std:: cout <<"what temperature do you want it to be converted to? (K or F) \n";
        std:: cin >> unit2;
        switch(unit2){
            case 'K': case 'k':
            temp += 275;
            break;

            case 'F': case 'f':
            temp = (temp * (9.0/5.0) + 32);
            break; 
        }
    } else if (unit == 'K' || unit == 'k'){
        std:: cout <<"what temperature do you want it to be converted to? (C or F) \n";
        std:: cin >> unit2;
        switch(unit2){
            case 'C': case 'c': 
            temp -= 275;
            break;

            case 'F' : case 'f':
            temp = ((temp - 273.15) * (9.0/5.0) + 32);
            break; 
        }
    } else if (unit == 'F' || unit == 'f'){
        std:: cout << "what temperature do you want it to be converted to? (C or K) \n";
        std:: cin >> unit2;
        switch(unit2){
            case 'C': case 'c': 
            temp = ((temp-32)*(5.0/9.0));
            break;

            case 'K': case 'k':
            temp = ((temp - 32) * (5.0/9.0) + 273.15);
            break; 
        } 
    } else {
        std:: cout << "please input the correct unit \n";
    }

    std:: cout << "the final result is " << temp << ' ' << unit2 << '\n';
}