#pragma once 
#include "sink.h"
#include <fstream>

class FileSink : public Sink {
public:
    explicit FileSink(const std::string& filename);

    void log(const std::string& msg) override;

private:
    std::ofstream file_;
};