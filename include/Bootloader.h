// File: include/Bootloader.h

#ifndef BOOTLOADER_H
#define BOOTLOADER_H

#include <string>

class Bootloader {
public:
    Bootloader(std::string name, std::string path);
    void install();
    void uninstall();
    void update();
    std::string getName() const { return name; }

private:
    std::string name;
    std::string path;
};

#endif
