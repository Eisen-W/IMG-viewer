#include<iostream>
#include<SDL2/SDL.h>
#include<SDL2/SDL_video.h>

int main()
{
    auto posUndefined = SDL_WINDOWPOS_UNDEFINED;
    SDL_CreateWindow("IMG-viewer", posUndefined, posUndefined, 800, 600, SDL_WINDOW_RESIZABLE);
    std::cout << "IMG-viewer" << std::endl;
    return 0;
}