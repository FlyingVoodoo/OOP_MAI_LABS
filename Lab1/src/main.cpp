#include "../include/format_time.h"
#include <iostream>
#include <string>


int main(){
    std::string inputTime;
    std::getline(std::cin, inputTime);
    
    std::cout << convertTime(inputTime) << std::endl;
    
    return 0;
}