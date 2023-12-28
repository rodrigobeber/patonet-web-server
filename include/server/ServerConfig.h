#pragma once

#include <cstddef>

struct ServerConfig {
    size_t port = 8080;
    size_t poolSize = 4;
    size_t maxQueuedConnections = 100;
    void parseArguments(int argc, char* argv[]);
};