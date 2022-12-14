#ifndef GRID_HPP
#define GRID_HPP

#include <iostream>
#include <array>
#include <vector>

#include "generic/gamePlacement/position.hpp"

class Grid {
    public:
        Grid(int lines, int columns);
        ~Grid();
        void placeElement(const int line, const int column, const char element);
        void displayGrid() const;
        char getElement(const int line, const int column) const;
        int getLineNbr() const;
        int getColNbr() const;
        int horizontalContiguousCount(const Position pos, char token = char(0)) const;
        int verticalContiguousCount(const Position pos, char token = char(0)) const;
        int bottomLeftToTopRightDiagonalContiguousCount(const Position pos, char token = char(0)) const;
        int topLeftToBottomRightDiagonalContiguousCount(const Position pos, char token = char(0)) const;
        int numberOfSymbolInGrid(const char token) const;
        bool checkOtherTokenAligned(const Position pos, char token = char(0)) const;
    private:
        std::vector<std::vector<char>> grid {};
};

inline char Grid::getElement(const int line, const int column) const {
    return this->grid[line][column];
};

inline int Grid::getLineNbr() const {
    return this->grid.size();
}

inline int Grid::getColNbr() const {
    return this->grid[0].size();
}

#endif //GRID_HPP