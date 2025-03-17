// File: utils/Logger.h

#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <iostream>

class Logger {
public:
    static void init();
    static void logInfo(const std::string& message);
    static void logError(const std::string& message);

private:
    static bool initialized;
};

#endif
