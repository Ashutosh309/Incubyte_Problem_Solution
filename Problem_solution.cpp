#include <bits/stdc++.h>
using namespace std;

class Spacecraft
{ 
private:
    int x, y, z;    // Current position (x, y, z)
    char direction; // Current direction (N, S, E, W, U, D)
    char originaldirection;

public:
    //Declaring Constructor for x,y,z,directions
    Spacecraft(int initialX, int initialY, int initialZ, char initialDirection, char og)
    {
        x = initialX;
        y = initialY;
        z = initialZ;
        direction = initialDirection;
        originaldirection = og;
    }
};

int main()
{
    Spacecraft spacecraft(0, 0, 0, 'N', 'N');
    int n;
    cin >> n;
    //Taking input in vector format
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
            
        }
        else if (command == 'b')
        {
            
        }
        else if (command == 'l')
        {
            
        }
        else if (command == 'r')
        {
            
        }
        else if (command == 'u')
        {
            
        }
        else
        {
            
        }
    }

    spacecraft.printPosition();

    return 0;
}