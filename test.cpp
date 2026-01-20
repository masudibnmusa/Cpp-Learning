#include <SFML/Graphics.hpp>
#include <deque>
#include <cstdlib>
#include <ctime>

using namespace sf;
using namespace std;

const int width = 600;
const int height = 600;
const int size = 20;

int main()
{
    RenderWindow window(VideoMode(width, height), "Snake Game");
    window.setFramerateLimit(10);

    srand(time(0));

    deque<Vector2f> snake;
    snake.push_back(Vector2f(100, 100));

    Vector2f food(rand() % (width / size) * size,
                  rand() % (height / size) * size);

    Vector2f direction(size, 0); // start moving right

    RectangleShape block(Vector2f(size, size));
    block.setFillColor(Color::Green);

    RectangleShape foodBlock(Vector2f(size, size));
    foodBlock.setFillColor(Color::Red);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();

            if (Keyboard::isKeyPressed(Keyboard::Up))
                direction = Vector2f(0, -size);
            if (Keyboard::isKeyPressed(Keyboard::Down))
                direction = Vector2f(0, size);
            if (Keyboard::isKeyPressed(Keyboard::Left))
                direction = Vector2f(-size, 0);
            if (Keyboard::isKeyPressed(Keyboard::Right))
                direction = Vector2f(size, 0);
        }

        // Move snake
        Vector2f newHead = snake.front() + direction;
        snake.push_front(newHead);

        // Eat food
        if (newHead == food)
        {
            food = Vector2f(rand() % (width / size) * size,
                            rand() % (height / size) * size);
        }
        else
        {
            snake.pop_back();
        }

        // Collision with wall
        if (newHead.x < 0 || newHead.y < 0 ||
            newHead.x >= width || newHead.y >= height)
        {
            window.close();
        }

        // Collision with itself
        for (int i = 1; i < snake.size(); i++)
        {
            if (snake[i] == newHead)
                window.close();
        }

        // Drawing
        window.clear(Color::Black);

        for (auto s : snake)
        {
            block.setPosition(s);
            window.draw(block);
        }

        foodBlock.setPosition(food);
        window.draw(foodBlock);

        window.display();
    }

    return 0;
}
