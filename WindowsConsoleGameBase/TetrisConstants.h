#ifndef TETRISCONSTANTS_H
#define TETRISCONSTANTS_H
#include "Point.h"

namespace TetrisConstants {
    namespace Figure {
        const auto I = {
            Point(1, 0), Point(1, 1),
            Point(1, 2), Point(1, 3)
        };
    }

    namespace Field {
        constexpr size_t m_Width = 14;
        constexpr size_t m_Height = 26;
        constexpr size_t m_InfoPanelWidth = 6;
        constexpr size_t NormalSpeed = 500;
        constexpr size_t BoostSpeed = 50;
    }
}
#endif //TETRISCONSTANTS_H
