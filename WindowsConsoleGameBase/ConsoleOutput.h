#ifndef CONSOLEOUTPUT_H
#define CONSOLEOUTPUT_H
#include "Figure.h"

namespace ConsoleOutput {
    namespace Symbols {
        constexpr wchar_t BLOCK = 8; // ◘
        constexpr wchar_t AIR = 7; // •
        constexpr wchar_t LR_BORDER = 186; // ║
        constexpr wchar_t UD_BORDER = 205; // ═
        constexpr wchar_t UL_CORNER = 201; // ╔
        constexpr wchar_t DL_CORNER = 200; // ╚
        constexpr wchar_t UR_CORNER = 187; // ╗
        constexpr wchar_t DR_CORNER = 188; // ╝
    }


    namespace Tetris {
        const auto I = {
            Point(1, 0), Point(1, 1),
            Point(1, 2), Point(1, 3)
        };
    }


    namespace Messages {
    }
}

#endif //CONSOLEOUTPUT_H
