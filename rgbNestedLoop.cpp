// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : November, 2025
// This program plays with colors
// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//

#include <iostream>

int main() {
    for (int red = 0; red < 256; red++) {
        for (int green = 0; green < 256; green++) {
            for (int blue = 0; blue < 256; blue++) {
                std::cout << "\033[1;38;2;"
                          << red << ";" << green << ";" << blue
                          << "mRGB(" << red << ", " << green <<
                           ", " << blue << ")\033[0m\n";
            }
        }
    }
}
