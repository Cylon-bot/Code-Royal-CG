#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int num_sites;
    cin >> num_sites;
    cin.ignore();
    for (int i = 0; i < num_sites; i++)
    {
        int site_id;
        int x;
        int y;
        int radius;
        cin >> site_id >> x >> y >> radius;
        cin.ignore();
    }

    // game loop
    while (1)
    {
        int gold;
        int touched_site; // -1 if none
        cin >> gold >> touched_site;
        cin.ignore();
        for (int i = 0; i < num_sites; i++)
        {
            int site_id;
            int ignore_1;       // used in future leagues
            int ignore_2;       // used in future leagues
            int structure_type; // -1 = No structure, 2 = Barracks
            int owner;          // -1 = No structure, 0 = Friendly, 1 = Enemy
            int param_1;
            int param_2;
            cin >> site_id >> ignore_1 >> ignore_2 >> structure_type >> owner >> param_1 >> param_2;
            cin.ignore();
        }
        int num_units;
        cin >> num_units;
        cin.ignore();
        for (int i = 0; i < num_units; i++)
        {
            int x;
            int y;
            int owner;
            int unit_type; // -1 = QUEEN, 0 = KNIGHT, 1 = ARCHER
            int health;
            cin >> x >> y >> owner >> unit_type >> health;
            cin.ignore();
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        // First line: A valid queen action
        // Second line: A set of training instructions
        cout << "WAIT" << endl;
        cout << "TRAIN" << endl;
    }
}