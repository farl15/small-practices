#include <iostream>


struct student {
    std::string name;
    int score;
    float gpa;
    
};
int main(){
    student rec[3];

    rec[0].name = "pinoy";
    rec[0].score = 100;
    rec[0].gpa = 4;

    rec[1].name = "yosca";
    rec[1].score = 100;
    rec[1].gpa = 4;

    rec[2].name = "farrell";
    rec[2].score = 100;
    rec[2].gpa = 4;

    rec[0].name = "mariot";
    rec[0].score = 100;
    rec[0].gpa = 4;

    for(int i = 0; i < 3; i++){
        std::cout << rec[i].name << rec[i].score << rec[i].gpa << '\n';
    }

}