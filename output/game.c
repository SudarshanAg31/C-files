#include <stdio.h>
#include <conio.h>

#define WIDTH 50
#define HEIGHT 20

int birdY = HEIGHT / 2;
int gameOver = 0;

void draw() {
    system("cls"); // Clear screen

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (y == birdY && x == 10) // Position of the bird
                printf("*");
            else if (y == 0 || y == HEIGHT - 1 || x == 0 || x == WIDTH - 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void update() {
    if (!_kbhit()) { // If no key pressed
        birdY++;
    } else {
        char key = _getch();
        if (key == ' ')
            birdY -= 2; // Jump
    }
    
    if (birdY <= 0 || birdY >= HEIGHT - 1)
        gameOver = 1; // Bird hits top or bottom
}

int main() {
    while (!gameOver) {
        draw();
        update();
        Sleep(100); // Delay for smooth animation
    }

    printf("Game Over!\n");

    return 0;
}
