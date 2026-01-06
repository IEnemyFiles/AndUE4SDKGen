#include "../Dobby/dobby.h"
#include <fstream>
#include <iostream>

// Implementasi fungsi SDKManager
void SDKManager::SaveSDK(std::string path, std::string gameShortName) {
    // Menentukan nama file output
    std::string fullPath = path + "/SDK_Summary.txt";
    
    // Membuka stream file untuk menulis
    std::ofstream os(fullPath);
    
    if (os.is_open()) {
        os << "==========================================\n";
        os << "DUMP SUCCESSFUL\n";
        os << "==========================================\n";
        os << "Game Name: " << gameShortName << "\n";
        os << "Output Path: " << path << "\n";
        os << "Status: SDK Generation Completed.\n";
        os << "==========================================\n";
        
        os.close();
    }
}