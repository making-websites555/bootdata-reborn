// File: utils/Logger.cpp

#include "Logger.h"

bool Logger::initialized = false;

void Logger::init() {
    initialized = true;
    logInfo("Logger initialized.");
}

void Logger::logInfo(const std::string& message) {
    if (initialized) {
        std::cout << "[INFO]: " << message << std::endl;
    }
}

void Logger::logError(const std::string& message) {
    if (initialized) {
        std::cerr << "[ERROR]: " << message << std::endl;
    }
}
