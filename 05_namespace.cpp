#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
   
    // namespace = provides a solution for preventing name confllicts in large projects. each entity needs a unique name a namespace allows for identically named entities a slong as the namespace are different.


    using namespace first;

    //int x = 0;

    

    std :: cout << x;

    return 0;
}   
