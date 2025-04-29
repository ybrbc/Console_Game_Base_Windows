#ifndef GAMEFIELD_H
#define GAMEFIELD_H
#include <vector>

#include "Figure.h"
#include "PaintDevice.h"


class GameField {
    size_t m_Width;
    size_t m_Height;
    std::vector<std::vector<wchar_t> > m_Field;
    std::vector<std::vector<int> > m_color;

public:
    void resize(size_t width, size_t height);

    void render(PaintDevice &paintDevice);

    size_t getWidth() const;

    bool has_collision(const Figure &figure);

    void merge(const Figure &figure);

    void clear();
};


#endif //GAMEFIELD_H
