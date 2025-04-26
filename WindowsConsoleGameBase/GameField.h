#ifndef GAMEFIELD_H
#define GAMEFIELD_H
#include <vector>

#include "PaintDevice.h"


class GameField {
    size_t m_Width;
    size_t m_Height;
    std::vector<std::vector<wchar_t> > m_Field;

public:
    void resize(size_t width, size_t height) {
        m_Width = width;
        m_Height = height;
        m_Field = std::vector<std::vector<wchar_t> >(m_Height - 2, std::vector<wchar_t>(m_Width - 2, 250));
    }

    void render(PaintDevice &paintDevice) {
        // левая и правая граница
        for (int i = 1; i < m_Height - 1; i++) {
            Vector2 v1(0, i);
            Vector2 v2(m_Width - 1, i);
            paintDevice.set_char(v1, 186);
            paintDevice.set_char(v2, 186);
        }
        // верхняя и нижняя граница
        for (int i = 1; i < m_Width - 1; ++i) {
            Vector2 v3(i, 0);
            Vector2 v4(i, m_Height - 1);
            paintDevice.set_char(v3, 205);
            paintDevice.set_char(v4, 205);
        }
        // углы
        paintDevice.set_char(Vector2(0, 0), 201);
        paintDevice.set_char(Vector2(0, m_Height - 1), 200);
        paintDevice.set_char(Vector2(m_Width -1, 0), 187);
        paintDevice.set_char(Vector2(m_Width -1, m_Height - 1), 188);
        // центр поля
        for (int y = 0; y < m_Field.size(); y++) {
            for (int x = 0; x < m_Field[y].size(); x++) {
                Vector2 v(x + 1, y + 1);
                paintDevice.set_char(v, m_Field[y][x]);
            }
        }

        // https://geekboards.ru/page/alt-codes
    }
};


#endif //GAMEFIELD_H
