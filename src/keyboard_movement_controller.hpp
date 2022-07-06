//
// Created by Peter Lewis on 2022-07-01.
//

#ifndef VULKANENGINE_KEYBOARD_MOVEMENT_CONTROLLER_HPP
#define VULKANENGINE_KEYBOARD_MOVEMENT_CONTROLLER_HPP

#include "engine_game_object.hpp"
#include "engine_window.hpp"

namespace engine {

    class KeyboardMovementController {
    public:
        struct KeyMappings {
            int moveLeft = GLFW_KEY_A;
            int moveRight = GLFW_KEY_D;
            int moveForward = GLFW_KEY_W;
            int moveBackward = GLFW_KEY_S;
            int moveUp = GLFW_KEY_E;
            int moveDown = GLFW_KEY_Q;
            int lookLeft = GLFW_KEY_LEFT;
            int lookRight = GLFW_KEY_RIGHT;
            int lookUp = GLFW_KEY_UP;
            int lookDown = GLFW_KEY_DOWN;
        };

        void moveInPlaneXZ(GLFWwindow* window, float dt, EngineGameObject& gameObject);

        KeyMappings keys{};
        float moveSpeed{3.0f};
        float lookSpeed{1.5f};
    };

} // engine

#endif //VULKANENGINE_KEYBOARD_MOVEMENT_CONTROLLER_HPP
