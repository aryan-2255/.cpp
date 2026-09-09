#include <iostream>

// cout - (insertion operator)
// cin - (extraction operation)

int main(){

    std::string name;
    int age;

    std::cout<< "what your name?:";
    std::cin >> name;


    std::cout<< "what your age?:";
    std::cin >> age;


    std::cout << "hello " << name << '\n';
    std::cout << "you are " << age << " year old";




    return 0;
}   