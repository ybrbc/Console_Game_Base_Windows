#ifndef TETRIS_H
#define TETRIS_H
#include "Engine.h"


class Tetris : public Engine {
public:
    Tetris(){}
    ~Tetris() override{}

protected:
    bool end() const override{return false;}
    void on_button_press(const int button) override{}
    void update(const int dt) override{}
    void render(PaintDevice& paintDevice) override{}
};

#endif //TETRIS_H
