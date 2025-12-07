#include<iostream>
#include<SDL2/SDL.h>
#include<SDL2/SDL_video.h>

int main()
{
    // std::cout << "IMG-viewer" << std::endl;
    auto posUndef = SDL_WINDOWPOS_UNDEFINED;
    SDL_Window *pwin = SDL_CreateWindow("IMG-viewer", posUndef, posUndef, 800, 600, SDL_WINDOW_RESIZABLE);
    SDL_Surface *psurface =  SDL_GetWindowSurface(pwin);
    SDL_FillRect(psurface, NULL, 0xFF0000FF);
    SDL_UpdateWindowSurface(pwin);

    SDL_Delay(5000);
    SDL_Quit();
    return 0;
}