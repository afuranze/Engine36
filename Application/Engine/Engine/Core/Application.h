#pragma once

#include "Engine/Core/Window.h"
#include "Engine/Core/Input.h"
#include "Engine/Core/Time.h"
#include "Engine/Core/Logger.h"
#include "Engine/Graphics/Renderer.h"

namespace E36
{
    class Application
    {
    public:
        Window *window;
        Time *time;
        Input *input;
        Renderer *renderer;
        bool *initialized;

        void Initialize();
        void Shutdown();

        Application();
        ~Application();

    private:
        void OnInitialize();
        void OnUpdate();
        void OnShutdown();
    };
}
