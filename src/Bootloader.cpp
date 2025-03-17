// File: src/Bootloader.cpp

#include "Bootloader.h"
#include <iostream>

Bootloader::Bootloader(std::string name, std::string path) : name(name), path(path) {}

void Bootloader::install() {
    std::cout << "Installing " << name << " to " << path << std::endl;
    // Logic for installing the bootloader
}

void Bootloader::uninstall() {
    std::cout << "Uninstalling " << name << std::endl;
    // Logic for uninstalling the bootloader
}

void Bootloader::update() {
    std::cout << "Updating " << name << std::endl;
    // Logic for updating bootloader configuration
}
