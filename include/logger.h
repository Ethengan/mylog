#pragma once
#include <string>
#include <memory>
#include <vector>

class Sink;

class Logger {
public:
    Logger(const std::string& name,
           std::vector<std::shared_ptr<Sink>> sinks);

    void info(const std::string& msg);
    void warn(const std::string& msg);
    void error(const std::string& msg);

private:
    void log(const std::string& level, const std::string& msg);

    std::string name_;
    std::vector<std::shared_ptr<Sink>> sinks_;
};