#include <iostream>

#include "config.hpp"

int main(int argc, char *argv[]) {
    std::cout << argv[0] << "  " << HELLO_VERSION_MAJOR << "."
              << HELLO_VERSION_MINOR << "." << HELLO_REVISION << std::endl;

    return 0;
}
