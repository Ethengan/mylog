#include "sinks/stdout_sink.h"

void StdoutSink::log(const std::string& msg) {
    std::cout << msg << std::endl;
}