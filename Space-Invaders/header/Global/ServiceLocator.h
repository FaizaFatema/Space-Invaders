#pragma once
#include "../../header/Main/GraphicService.h"
#include "../../header/Event/EventService.h"
#include "../../header/UI/UIService.h"
#include "../../header/Gameplay/GameplayService.h"

namespace Global
{
    class ServiceLocator
    {
    private:
        Event::EventService* event_service;
        Main::GraphicService* graphic_service;
        UI::UIService* ui_service;
        Gameplay::GameplayService* gameplay_service;

        ServiceLocator();
        ~ServiceLocator();

        void createServices();
        void clearAllServices();

    public:
        static ServiceLocator* getInstance();

        void initialize();
        void update();
        void render();

        Event::EventService* getEventService();
        Main::GraphicService* getGraphicService();
        UI::UIService* getUIService();
        Gameplay::GameplayService* getGameplayService();
        void deleteServiceLocator();
    };
}