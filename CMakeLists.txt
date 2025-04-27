cmake_minimum_required(VERSION 3.30)
set(CMAKE_CXX_STANDARD 20)
project(Console_Game_Base_Windows)

add_executable(Console_Game_Base_Windows
        WindowsConsoleGameBase/Engine.cpp
        WindowsConsoleGameBase/Engine.h
        WindowsConsoleGameBase/main.cpp
        WindowsConsoleGameBase/PaintDevice.cpp
        WindowsConsoleGameBase/PaintDevice.h
        WindowsConsoleGameBase/Size.cpp
        WindowsConsoleGameBase/Size.h
        WindowsConsoleGameBase/Square.cpp
        WindowsConsoleGameBase/Square.h
        WindowsConsoleGameBase/Vector2.cpp
        WindowsConsoleGameBase/Vector2.h
        WindowsConsoleGameBase/Tetris.cpp
        WindowsConsoleGameBase/Tetris.h
        WindowsConsoleGameBase/GameField.cpp
        WindowsConsoleGameBase/GameField.h
        WindowsConsoleGameBase/Figure.cpp
        WindowsConsoleGameBase/Figure.h
        WindowsConsoleGameBase/IBlock.cpp
        WindowsConsoleGameBase/IBlock.h
        WindowsConsoleGameBase/ConsoleOutput.h
        WindowsConsoleGameBase/TetrisConstants.h
        WindowsConsoleGameBase/Point.h
)
