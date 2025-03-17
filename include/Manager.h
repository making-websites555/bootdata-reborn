// File: include/Manager.h

#ifndef MANAGER_H
#define MANAGER_H

#include "Bootloader.h"
#include <vector>

class Manager {
public:
    void addBootloader(Bootloader& bootloader);
    void removeBootloader(const std::string& name);
    void displayBootloaders();

private:
    std::vector<Bootloader> bootloaders;
};

#endif
