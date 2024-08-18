#include "LogReader.h"

int main() {
    // Specify the path to the log file
    LogReader logReader("/var/log/syslog");

    // Read and print the log file
    logReader.readLog();

    return 0;
}