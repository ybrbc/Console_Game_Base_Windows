#include "InfoField.h"

#include "ConsoleOutput.h"
#include "TetrisConstants.h"

void InfoField::resize(size_t m_x, size_t m_y, size_t width, size_t height) {
    InfoField::m_x = m_x;
    InfoField::m_y = m_y;
    m_Width = width;
    m_Height = height;
    m_Field = std::vector(m_Height - 2, std::vector(m_Width - 2, ConsoleOutput::Symbols::SPACE));
}


void InfoField::render(PaintDevice &paintDevice) {
    for (int y = 0; y < m_Field.size(); y++) {
        for (int x = 0; x < m_Field[y].size(); x++) {
            Vector2 v(m_x + x + 1, m_y + y + 1);
            paintDevice.set_char(v, m_Field[y][x]);
        }
    }


    Point message_point = TetrisConstants::Field::NextBlockText;
    for (int x = 0; x < ConsoleOutput::Messages::nextBlock.size(); x++) {
        Vector2 v(message_point.x + x, message_point.y);
        paintDevice.set_char(v, ConsoleOutput::Messages::nextBlock[x]);
    }

    Point scoreText = TetrisConstants::Field::ScoreText;
    for (int x = 0; x < ConsoleOutput::Messages::score.size(); x++) {
        Vector2 v(scoreText.x + x, scoreText.y);
        paintDevice.set_char(v, ConsoleOutput::Messages::score[x]);
    }
    Point score_point = TetrisConstants::Field::Score;
    std::string scr = std::to_string(m_Score);
    for (int x = 0; x < scr.size(); x++) {
        Vector2 v(score_point.x + x, score_point.y);
        paintDevice.set_char(v, scr[x]);
    }
}

void InfoField::add_score(int sc) {
    m_Score += sc;
}

void InfoField::clear_score() {
    m_Score = 0;
}

