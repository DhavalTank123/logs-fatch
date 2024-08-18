#include "LogReader.h"
#include <iostream>
#include <fstream>

LogReader::LogReader(const std::string& filePath) : filePath(filePath) {}

void LogReader::readLog() const {
    std::ifstream logFile(filePath);

    if (!logFile.is_open()) {
        std::cerr << "Error: Could not open the log file at " << filePath << std::endl;
        return;
    }

    std::string line;
    while (std::getline(logFile, line)) {
        std::cout << line << std::endl;
    }

    logFile.close();
}