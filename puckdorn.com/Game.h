#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Game{
    public:
        Game(){};
        //~Game();

        void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

        void events(){};
        void update(){};
        void render(){};
        void clean(){};

        bool running() { return isRunning; }

    private:
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
};