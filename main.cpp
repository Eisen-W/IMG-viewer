#include<iostream>
#include<SDL2/SDL.h>

int main()
{
    SDL_CreateWindow("IMG-viewer", 0,0, 800, 600, SDL_WINDOW_RESIZABLE);
    std::cout << "IMG-viewer" << std::endl;
    return 0;
}