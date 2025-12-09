#include<iostream>
#include<SDL2/SDL.h>

int main()
{
    int width = 800;
    int height = 600;

    auto posUndef = SDL_WINDOWPOS_UNDEFINED;
    SDL_Window *pwin = SDL_CreateWindow("IMG-viewer", posUndef, posUndef, width, height, SDL_WINDOW_RESIZABLE);
    SDL_Surface *psurface =  SDL_GetWindowSurface(pwin);

    Uint8 r,g,b;
    r = g = 0x00;
    b = 0xFF;
    Uint32 color = SDL_MapRGB(psurface->format, r,g,b);

    SDL_Rect pixel = (SDL_Rect){0,0,1,1};
    for(int x=0; x<width; x++)
    {
        for(int y=0; y<height; y++)
        {
            pixel.x=x;
            pixel.y=y;
            SDL_FillRect(psurface, &pixel, color);
        }
    }

    SDL_UpdateWindowSurface(pwin);

    SDL_Delay(5000);

    SDL_DestroyWindowSurface(pwin);
    SDL_DestroyWindow(pwin);
    SDL_Quit();
    return 0;
}