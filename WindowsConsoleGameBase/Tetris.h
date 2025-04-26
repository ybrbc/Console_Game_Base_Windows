#ifndef TETRIS_H
#define TETRIS_H
#include "Engine.h"
#include "Figure.h"
#include "GameField.h"
#include "IBlock.h"


class Tetris : public Engine {
    GameField m_GameField;
    const size_t m_Width = 14;
    const size_t m_Height = 26;
    Figure *m_Figure;

public:
    Tetris() {
        paint_device().resize(Size(m_Width + 6, m_Height));
        m_GameField.resize(m_Width, m_Height);
        m_Figure = new IBlock(Point(5, 1));
    }

    ~Tetris() override {
    }

protected:
    bool end() const override { return false; }

    void on_button_press(const int button) override {
    }

    void update(const int dt) override {
        m_Figure->update(dt);
    }

    void render(PaintDevice &paintDevice) override {
        m_GameField.render(paintDevice);
        m_Figure->render(paintDevice);
    }
};

#endif //TETRIS_H
