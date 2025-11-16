#include "logger.h"
#include "sinks/file_sink.h"
#include "sinks/stdout_sink.h"

int main() {
    auto console = std::make_shared<StdoutSink>();
    auto file = std::make_shared<FileSink>("test.log");

    Logger logger("main", { console, file });

    logger.info("Hello world!");
    logger.error("Something wrong!");

    return 0;
}