#ifndef GAMEFIELD_H
#define GAMEFIELD_H
#include <vector>
#include "PaintDevice.h"


class GameField {
    size_t m_Width;
    size_t m_Height;
    std::vector<std::vector<wchar_t> > m_Field;

public:
    void resize(size_t width, size_t height);

    void render(PaintDevice &paintDevice);
};


#endif //GAMEFIELD_H
