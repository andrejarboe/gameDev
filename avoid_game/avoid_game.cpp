#include "raylib.h"

int main()
{
    // window dimensions
    int width {350};
    int height {200};
    InitWindow(width, height, "Andre's Game");

    // circle coordinates
    int circle_x{175};
    int circle_y{100};

    while (WindowShouldClose() != true)
    {
        BeginDrawing();
        ClearBackground(WHITE);


        DrawCircle(circle_x, circle_y, 25, RED);
        EndDrawing();
    }
    return 0;
}