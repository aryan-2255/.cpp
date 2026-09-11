#include <iostream>


int main(){
   
   // &&  = check if two condition are true or not
   // ||  =   check if at least one of two condition is true 
   // !   = reverse the logiacal state of its operands
   


   int temp;

   std::cout << " Enter the temperature: ";
   std::cin >> temp;

//    if (temp > 0 && temp < 30)
//    {
//     std::cout << "temperature is good";
//    }
//    else{
//     std::cout<<"temperature is bad";
//    }


    if (temp<= 0 || temp >= 30)
    {
        std::cout << "temperature is bad";
    }
    else{
        std::cout<<"temperature is good";
    }


    return 0;
}   
