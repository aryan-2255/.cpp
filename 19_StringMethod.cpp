#include <iostream>


int main(){
    std::string name;

    std::cout << "Enter your name : ";
    std::getline(std::cin,name);

    // if (name.length() > 12){
    //     std::cout <<"you name can not be greater than 12 characters";
    // }else{
    //     std::cout<<"welcom "<<name;
    // }
    

    // if (name.empty())
    // {
    //     std::cout <<"you didn't enter your name";
    // }else{
    //     std::cout<<"hello "<<name;
    // }
    

    // name.clear();
    // std::cout<<"hello "<<name;
    

    // name.append("@gmail.com");
    // std::cout<<"your gmail is   "<<name;


    // std::cout << name.at(0);


    // name.insert(0,"@");
    // std::cout<<name;


    // std::cout << name.find('a');


    name.erase(0,3);
    std::cout << name;




    
    return 0;
}   
