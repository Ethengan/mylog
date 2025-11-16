#pragma once
#include "sink.h"
#include <iostream>

class StdoutSink : public Sink {
public:
    void log(const std::string& msg) override;
};