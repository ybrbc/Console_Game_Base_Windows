#include "GameField.h"
#include "ConsoleOutput.h"

void GameField::resize(size_t width, size_t height) {
    m_Width = width;
    m_Height = height;
    m_Field = std::vector(m_Height - 2, std::vector(m_Width - 2, ConsoleOutput::Symbols::AIR));
}

void GameField::render(PaintDevice &paintDevice) {
    // левая и правая граница
    for (int i = 1; i < m_Height - 1; i++) {
        Vector2 v1(0, i);
        Vector2 v2(m_Width - 1, i);
        paintDevice.set_char(v1, ConsoleOutput::Symbols::LR_BORDER);
        paintDevice.set_char(v2, ConsoleOutput::Symbols::LR_BORDER);
    }
    // верхняя и нижняя граница
    for (int i = 1; i < m_Width - 1; ++i) {
        Vector2 v3(i, 0);
        Vector2 v4(i, m_Height - 1);
        paintDevice.set_char(v3, ConsoleOutput::Symbols::UD_BORDER);
        paintDevice.set_char(v4, ConsoleOutput::Symbols::UD_BORDER);
    }
    // углы
    paintDevice.set_char(Vector2(0, 0), ConsoleOutput::Symbols::UL_CORNER);
    paintDevice.set_char(Vector2(0, m_Height - 1), ConsoleOutput::Symbols::DL_CORNER);
    paintDevice.set_char(Vector2(m_Width - 1, 0), ConsoleOutput::Symbols::UR_CORNER);
    paintDevice.set_char(Vector2(m_Width - 1, m_Height - 1), ConsoleOutput::Symbols::DR_CORNER);
    // центр поля
    for (int y = 0; y < m_Field.size(); y++) {
        for (int x = 0; x < m_Field[y].size(); x++) {
            Vector2 v(x + 1, y + 1);
            paintDevice.set_char(v, m_Field[y][x]);
        }
    }

    // https://geekboards.ru/page/alt-codes
}
