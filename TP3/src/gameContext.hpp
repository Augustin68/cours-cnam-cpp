#ifndef GAME_CONTEXT_HPP
#define GAME_CONTEXT_HPP

#include <iostream>
#include <memory>

#include "gameStrategy.hpp"

class GameContext
{
public:
    explicit GameContext(std::unique_ptr<GameStrategy> &&strategy = {}) : strategy_(std::move(strategy))
    { }
    ~GameContext() { };
    void set_strategy(std::unique_ptr<GameStrategy> &&strategy)
    {
        strategy_ = std::move(strategy);
    }
    void placeToken() const
    {
        if (strategy_) {
            strategy_->placeToken();
        } else {
            std::cout << "Context: Strategy isn't set\n";
        }
    }
private:
    std::unique_ptr<GameStrategy> strategy_;

};

#endif // GAME_CONTEXT_HPP