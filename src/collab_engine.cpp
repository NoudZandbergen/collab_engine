#include "collab_engine/collab_engine.hpp"

collab_engine::CollabEngine::CollabEngine() {
    sf::VideoMode mode = sf::VideoMode::getDesktopMode();
    window.create(mode, "Hello window", sf::Style::Default);
}

collab_engine::CollabEngine::~CollabEngine() {
    window.close();
}

void collab_engine::CollabEngine::run() {
    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)) {
            // Close window: exit
            if (event.type == sf::Event::Closed) return;
        }
    }
}