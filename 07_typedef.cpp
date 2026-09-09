#include <iostream>
#include <vector>

// typedef std:: vector < std::pair< std::string,int>>;

// typedef std:: string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){
    text_t firstName = "Bro";
    number_t age = 21;


    std::cout << firstName << '\n';
    std::cout << age << '\n';



    return 0;
}

// typedef - reserve keyword used to create additional name for another data type. new identifier for an existing type helps with readability and reduce typos use when there is a clear benifit replaced with  "using" 