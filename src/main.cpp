// File: src/main.cpp

#include "Bootloader.h"
#include "Manager.h"
#include "Logger.h"

int main() {
    Logger::init();
    
    Bootloader bootloader("GRUB", "/dev/sda");
    Manager manager;

    manager.addBootloader(bootloader);
    manager.displayBootloaders();
    
    // More logic for user interaction, CLI args, etc.
    return 0;
}
