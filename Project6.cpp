#include <iostream>
#include <limits>
#include <cmath>
#include <string>

int main() {
    std::cout << "This is a filesize calculator for DDS/PNG formats.\n Type texture width: ";
    std::string AnswerWidth;
    std::getline(std::cin, AnswerWidth);
    unsigned int Width = std::stoi(AnswerWidth);
    std::cout << "\n Type texture height: ";
    std::string AnswerHeight;
    std::getline(std::cin, AnswerHeight);
    unsigned int Height = std::stoi(AnswerHeight);
    long long int Pixels = Width * Height;
    std::cout << "\n Pixel Amount: " << Pixels << "\n";
    std::cout << "Size if uncompressed PNG with alpha: " << Pixels * 4 << " bytes (" << (Pixels / 256) << " KB) \n";
    std::cout << "Size if uncompressed PNG with no alpha: " << Pixels * 3 << " bytes (" << (Pixels / (1024 / 3)) << " KB) \n";
    std::cout << "Size if DXT5/L8 dds: " << Pixels << " bytes (" << (Pixels / 1024) << " KB) \n";
    std::cout << "Size if DXT5/L8 dds with mipmaps: " << Pixels * 4 / 3 << " bytes (" << (Pixels / (1024 / 3)) << " KB) \n";
    std::cout << "Size if DXT1 dds: " << Pixels / 2 << " bytes (" << (Pixels / 2048) << " KB) \n";
    std::cout << "Size if DXT1 dds with mipmaps: " << Pixels * 2 / 3 << " bytes (" << (Pixels / 1536) << " KB) \n";
    std::cout << "\n\n\n WHEN TO USE EACH FORMAT \n Uncompressed PNG with/without alpha: As a liquid, changeable format without compression artefacts \n L8 dds for grayscale things [no compression but only 1 channel] \n DXT1 dds for coronas, some surface textures, and things that dont need alpha \n DXT5 dds for things that need alpha like surface textures with water/ice \n PNG with light compression for biome maps. \n Use mipmaps for anything that needs them. Heightmaps and biome maps do not need mipmaps, however.\n Press enter to exit. \n";
    getchar();
    return 0;
}
