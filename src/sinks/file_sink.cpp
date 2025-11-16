#include "sinks/file_sink.h"

FileSink::FileSink(const std::string& filename)
    : file_(filename, std::ios::app)
{}

void FileSink::log(const std::string& msg) {
    file_ << msg << std::endl;
}