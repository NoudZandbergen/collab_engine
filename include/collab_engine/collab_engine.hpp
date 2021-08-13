#pragma once

#include "SFML/Window.hpp"

namespace collab_engine {

class CollabEngine {
public:
    sf::Window window;

    CollabEngine();
    ~CollabEngine();

    void run();
};

}