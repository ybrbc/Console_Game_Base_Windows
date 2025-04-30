#ifndef INFOFIELD_H
#define INFOFIELD_H
#include <vector>

#include "PaintDevice.h"


class InfoField {
    size_t m_x;
    size_t m_y;
    size_t m_Width;
    size_t m_Height;
    size_t m_Score = 0;
    std::vector<std::vector<wchar_t> > m_Field;

public:
    void resize(size_t m_x, size_t m_y, size_t width, size_t height);

    void render(PaintDevice &paintDevice);

    void add_score(int sc);

    void clear_score();
};


#endif //INFOFIELD_H
