#ifndef TIME_H
#define TIME_H

#include <string>

struct Time {

    unsigned hour;
    unsigned minute;
    unsigned second;

    void convert_from_string(const std::string  &time);
};

#endif