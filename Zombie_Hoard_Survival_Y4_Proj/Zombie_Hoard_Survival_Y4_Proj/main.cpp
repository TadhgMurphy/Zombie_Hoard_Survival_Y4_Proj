
#include "raylib.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "My First Raylib Game");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Hello, raylib!", 280, 200, 30, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

