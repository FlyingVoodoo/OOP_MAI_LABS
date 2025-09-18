#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "../include/format_time.h"

std::string convertTime(int hour, int minute, const std::string& period) {
    if (period == "pm") {
        if (hour != 12) {
            hour += 12;
        }
    } else if (period == "am") {
        if (hour == 12) {
            hour = 0;
        }
    } else {
        return "Invalid period";
    }

    std::stringstream ss;
    ss << std::setw(2) << std::setfill('0') << hour;
    ss << std::setw(2) << std::setfill('0') << minute;
    return ss.str();

}
