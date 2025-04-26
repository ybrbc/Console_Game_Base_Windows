#ifndef TETRISCONSTANTS_H
#define TETRISCONSTANTS_H
#include "Figure.h"

namespace TetrisConstants {
    namespace Figure {
        const auto I = {
            Point(1, 0), Point(1, 1),
            Point(1, 2), Point(1, 3)
        };
    }
    namespace Field {
        const size_t m_Width = 14;
        const size_t m_Height = 26;
        const size_t m_InfoPanelHeight = 6;
    }
}
#endif //TETRISCONSTANTS_H
