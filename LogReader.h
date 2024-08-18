#ifndef LOGREADER_H
#define LOGREADER_H

#include <string>

class LogReader {
public:
    // Constructor to initialize with a file path
    LogReader(const std::string& filePath);
    
    // Method to read and print the log file contents
    void readLog() const;

private:
    std::string filePath; // Path to the log file
};

#endif // LOGREADER_H