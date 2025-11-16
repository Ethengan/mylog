#include "logger.h"
#include "sink.h"

Logger::Logger(const std::string& name,
               std::vector<std::shared_ptr<Sink>> sinks)
    : name_(name),
      sinks_(std::move(sinks)) {}

void Logger::info(const std::string& msg) {
    log("INFO", msg);
}

void Logger::warn(const std::string& msg) {
    log("WARN", msg);
}

void Logger::error(const std::string& msg) {
    log("ERROR", msg);
}

void Logger::log(const std::string& level, const std::string& msg) {
    std::string full = "[" + level + "] " + msg;

    for (auto& s : sinks_) {
        s ->log(full);
    }
}