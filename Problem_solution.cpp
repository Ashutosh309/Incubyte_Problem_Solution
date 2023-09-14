#include <bits/stdc++.h>
using namespace std;

class Spacecraft
{
private:
    int x, y, z;    // Current position (x, y, z)
    char direction; // Current direction (N, S, E, W, U, D)
    char originaldirection;

public:
    // Declaring Constructor for x,y,z,directions
    Spacecraft(int initialX, int initialY, int initialZ, char initialDirection, char og)
    {
        x = initialX;
        y = initialY;
        z = initialZ;
        direction = initialDirection;
        originaldirection = og;
    }
    void moveForward()
    {
        // Changing position according to spacecraft moving and facing
        if (direction == 'N')
        {
            y++;
        }
        else if (direction == 'S')
        {
            y--;
        }
        else if (direction == 'E')
        {
            x++;
        }
        else if (direction == 'W')
        {
            x--;
        }
        else if (direction == 'U')
        {
            z++;
        }
        else if (direction == 'D')
        {
            z--;
        }
    }

    void moveBackward()
    {
        if (direction == 'N')
        {
            y--;
        }
        else if (direction == 'S')
        {
            y++;
        }
        else if (direction == 'E')
        {
            x--;
        }
        else if (direction == 'W')
        {
            x++;
        }
        else if (direction == 'U')
        {
            z--;
        }
        else if (direction == 'D')
        {
            z++;
        }
    }
    void turnLeft()
    {
        if (direction == 'N')
        {
            direction = 'W';
            originaldirection = 'W';
        }
        else if (direction == 'S')
        {
            direction = 'E';
            originaldirection = 'E';
        }
        else if (direction == 'E')
        {
            direction = 'N';
            originaldirection = 'N';
        }
        else if (direction == 'W')
        {
            direction = 'S';
            originaldirection = 'S';
        }
        else if (direction == 'U')
        {
            if (originaldirection == 'E')
            {
                direction = 'N';
                originaldirection = 'N';
            }
            else if (originaldirection == 'N')
            {
                direction = 'W';
                originaldirection = 'W';
            }
            else if (originaldirection == 'S')
            {
                direction = 'E';
                originaldirection = 'E';
            }
            else if (originaldirection == 'W')
            {
                direction = 'S';
                originaldirection = 'S';
            }
        }
        else if (direction == 'D')
        {
            if (originaldirection == 'E')
            {
                direction = 'N';
                originaldirection = 'N';
            }
            else if (originaldirection == 'N')
            {
                direction = 'W';
                originaldirection = 'W';
            }
            else if (originaldirection == 'S')
            {
                direction = 'E';
                originaldirection = 'E';
            }
            else if (originaldirection == 'W')
            {
                direction = 'S';
                originaldirection = 'S';
            }
        }
    }

    void turnRight()
    {

        if (direction == 'N')
        {
            direction = 'E';
            originaldirection = 'E';
        }
        else if (direction == 'S')
        {
            direction = 'W';
            originaldirection = 'W';
        }
        else if (direction == 'E')
        {
            direction = 'S';
            originaldirection = 'S';
        }
        else if (direction == 'W')
        {
            direction = 'N';
            originaldirection = 'N';
        }
        else if (direction == 'U')
        {
            if (originaldirection == 'E')
            {
                direction = 'S';
                originaldirection = 'S';
            }
            else if (originaldirection == 'N')
            {
                direction = 'E';
                originaldirection = 'E';
            }
            else if (originaldirection == 'S')
            {
                direction = 'W';
                originaldirection = 'W';
            }
            else if (originaldirection == 'W')
            {
                direction = 'N';
                originaldirection = 'N';
            }
        }
        else
        {
            if (originaldirection == 'E')
            {
                direction = 'S';
                originaldirection = 'S';
            }
            else if (originaldirection == 'N')
            {
                direction = 'E';
                originaldirection = 'E';
            }
            else if (originaldirection == 'S')
            {
                direction = 'W';
                originaldirection = 'W';
            }
            else if (originaldirection == 'W')
            {
                direction = 'N';
                originaldirection = 'N';
            }
        }
    }

    void turnUp()
    {
        if (direction != 'U')
        {
            direction = 'U';
        }
    }

    void turnDown()
    {
        if (direction != 'D')
        {
            direction = 'D';
        }
    }

    void printPosition()
    {
        std::cout << "Current Position: (" << x << ", " << y << ", " << z << "), Direction: " << direction << std::endl;
    }
};

int main()
{
    Spacecraft spacecraft(0, 0, 0, 'N', 'N');
    int n;
    cin >> n;
    // Taking input in vector format
    vector<char> commands;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        commands.push_back(ch);
    }

    for (int i = 0; i < commands.size(); i++)
    {
        char command = commands[i];
        if (command == 'f')
        {
            spacecraft.moveForward();
            // spacecraft.printPosition();
        }
        else if (command == 'b')
        {
            spacecraft.moveBackward();
            // spacecraft.printPosition();
        }
        else if (command == 'l')
        {
            spacecraft.turnLeft();
            // spacecraft.printPosition();
        }
        else if (command == 'r')
        // spacecraft.printPosition();
        {
            spacecraft.turnRight();
        }
        else if (command == 'u')
        {
            spacecraft.turnUp();
            // spacecraft.printPosition();
        }
        else
        {
            spacecraft.turnDown();
            // spacecraft.printPosition();
        }
    }

    spacecraft.printPosition();

    return 0;
}