// File: src/Manager.cpp

#include "Manager.h"
#include <iostream>
#include <algorithm>  // Include for std::remove_if

void Manager::addBootloader(Bootloader& bootloader) {
    bootloaders.push_back(bootloader);
}

void Manager::removeBootloader(const std::string& name) {
    // Correct way to remove bootloaders based on name
    bootloaders.erase(
        std::remove_if(bootloaders.begin(), bootloaders.end(),
                       [&](const Bootloader& b) { return b.getName() == name; }),
        bootloaders.end());
}

void Manager::displayBootloaders() {
    for (const auto& bootloader : bootloaders) {
        std::cout << bootloader.getName() << std::endl;
    }
}
