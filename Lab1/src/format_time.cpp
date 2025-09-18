#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "../include/format_time.h"

std::string convertTime(const std::string& timeStr) {
    int hour, minute;
    std::string period;
    char sep;

    std::stringstream ss(timeStr);
    ss >> hour >> sep >> minute >> period;

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

    std::stringstream output_ss;
    output_ss << std::setw(2) << std::setfill('0') << hour << ":";
    output_ss << std::setw(2) << std::setfill('0') << minute;
    return output_ss.str();

}
