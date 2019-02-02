#include <iostream>
#include <SDL2/SDL.h>
#include "chip8.h"

int screenWidth = 1024;
int screenHeight = 512;

int main(int argc, char* argv[])
{
    Chip8 chip8instance;
    chip8instance.testCall();

    SDL_Init(SDL_INIT_VIDEO);
    // Declare a pointer
    SDL_Window *window;
    window = SDL_CreateWindow(
        "Chip8Dale - A Chip8 Emulator", // window title
        SDL_WINDOWPOS_UNDEFINED,        // initial x position
        SDL_WINDOWPOS_UNDEFINED,        // initial y position
        screenWidth,                    // width, in pixels
        screenHeight,                   // height, in pixels
        SDL_WINDOW_OPENGL               // flags
    );

    // The window is open: could enter program loop here (see SDL_PollEvent())

    SDL_Delay(3000);

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}