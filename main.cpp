/**
 * Fall 2021 PA 02 Template Repo.
 */

#include <iostream>
#include <fstream>
#include "catch_setup.h"

int main(int argc, char** argv) {
    if(argc == 1) {
        runCatchTests();
    }
    else {
        std::cout << "Hello, 2341 students!" << std::endl;
        std::cout << "Attempting to open and write to " << argv[2] << std::endl;
        std::ofstream o(argv[2]);
        o << "Writing to output file." << std::endl;
        o.close();
    }
    return 0;
}
