#pragma once 
#include <string>

class Sink {
public:
    virtual ~Sink() = default;

    virtual void log(const std::string& msg) = 0;
};