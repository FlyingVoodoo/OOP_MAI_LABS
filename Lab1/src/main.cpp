#include "../include/format_time.h"
#include <iostream>
#include <string>


int main(){
    std::string period;
    int hour, minute;
    
    std::cin >> hour;
    std::cin >> minute;
    std::cin >> period;
    
    std::cout << convertTime(hour, minute, period) << std::endl;
    
    return 0;
}