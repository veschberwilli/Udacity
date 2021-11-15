#include <iterator>
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>


using namespace std;

// Map class
class Map {
public:
    const static int mapWidth = 6;
    const static int mapHeight = 5;
    vector<vector<int> > grid = {
        { 0, 1, 0, 0, 0, 0 },
        { 0, 1, 0, 0, 0, 0 },
        { 0, 1, 0, 0, 0, 0 },
        { 0, 1, 0, 0, 0, 0 },
        { 0, 0, 0, 1, 1, 0 }
    };
};

// Planner class
class Planner : Map {
public:
    int start[2] = { 0, 0 };
    int goal[2] = { mapHeight - 1, mapWidth - 1 };
    int cost = 1;

    string movements_arrows[4] = { "^", "<", "v", ">" };

    vector<vector<int> > movements{
        { -1, 0 },
        { 0, -1 },
        { 1, 0 },
        { 0, 1 }
    };
};

// Template function to print 2D vectors of any type
template <typename T>
void print2DVector(T Vec)
{
    for (int i = 0; i < Vec.size(); ++i) {
        cout << "[";
        for (int j = 0; j < Vec[0].size(); ++j) {
            cout << Vec[i][j] << " ";
        }
        if(i == Vec.size()-1){
            cout << "]";
        } else {
            cout << "],";
        }
        
    }
    cout << endl;
}

// Template function to print 2D vectors of any type
template <typename T>
void print2DVector_v2(T Vec)
{
    for (int i = 0; i < Vec.size(); ++i) {
        for (int j = 0; j < Vec[0].size(); ++j) {
            cout << Vec[i][j] << " ";
            // copy(Vec[i].begin(), Vec[i].end(), ostream_iterator<int>(cout, " "));
        }
        cout << endl;
    }
}

/*#### TODO: Code the search function which will generate the expansion list ####*/
// You are only required to print the final triplet values
bool is_not_part_of_track(vector<int> point, vector<vector<int>> track){
    int x = point[0];
    int y = point[1];
    for (int k=0; k<track.size(); k++){
        if (track[k][1] == x && track[k][2] == y){
            return false;
        }
    }
    return true;
}

void search(Map map, Planner planner)
{
    int row_x, col_y, g;
    int row_x_next, col_y_next, g_value;
    bool reach_dest = false;
    int counter = 0;

    // current position
    row_x = planner.start[0];
    col_y = planner.start[1];
    g = 0;

    vector<vector<int>> track;
    string cmd_final;

    // init expansion_list with -1 values
    vector<vector<int>> expansion_list(map.mapHeight, vector<int>(map.mapWidth));
    for (int i=0; i<expansion_list.size(); i++){
        fill(expansion_list[i].begin(), expansion_list[i].end(), -1);
    }
    // print2DVector(expansion_list);

    // init policy 2D vector
    vector<vector<string>> policy(map.mapHeight, vector<string>(map.mapWidth));
    for (int i=0; i<policy.size(); i++){
        fill(policy[i].begin(), policy[i].end(), "-");
    }
    // print2DVector_v2(policy);

    // loop until destination is reached
    while (reach_dest == false){
        vector<vector<int>> open_list_tmp, open_list;
        vector<string> cmd_tmp, cmd;
        int g_min = 100;

        // cout << "Expansion #: " << counter+1 << endl;

        // add current position to track
        track.push_back({g, row_x, col_y});

        // check which movements are possible at which costs and are allowed
        // check if (x,y) is on grid and not part of previous track locations
        for (int i=0; i<planner.movements.size(); i++){
            row_x_next = row_x + planner.movements[i][0];
            col_y_next = col_y + planner.movements[i][1];
            // cout << "x: " << row_x_next << ", y: " << col_y_next << endl;
            if (row_x_next >= 0 && col_y_next >= 0 && row_x_next < map.mapHeight && col_y_next < map.mapWidth){
                if (is_not_part_of_track({row_x_next, col_y_next}, track)){
                    g_value = g + planner.cost + map.grid[row_x_next][col_y_next];
                    open_list_tmp.push_back({g_value, row_x_next, col_y_next});
                    // search for g_min
                    if (g_min > g_value){
                        g_min = g_value;
                    }
                    // append command
                    cmd_tmp.push_back(planner.movements_arrows[i]);
                    // cout << "cmd: " << planner.movements_arrows[i]<< endl;
                }
            }
        }
        // print2DVector(open_list_tmp);

        // get the one(s) with the lowest cost
        // cout << "Open List: ";
        for (int j=0; j<open_list_tmp.size(); j++){
            if (open_list_tmp[j][0] == g_min){
                open_list.push_back(open_list_tmp[j]);
                cmd.push_back(cmd_tmp[j]);
            }
        }
        // print2DVector(open_list);

        // update position
        // cout << "Cell Picked: ";
        int tmp = open_list.size()-1;

        // update policy
        cmd_final = cmd[tmp];
        policy[row_x][col_y] = cmd_final;

        row_x = open_list[tmp][1];
        col_y = open_list[tmp][2];
        g = open_list[tmp][0];
        
        // cout << "[" << g << " " << row_x << " " << col_y << "] " << endl;
        // cout << "--------------" << endl;

        // update expansion list
        expansion_list[row_x][col_y] = counter;
        counter++;

        if (row_x == planner.goal[0] && col_y == planner.goal[1]){
            reach_dest = true;
            // cout << "[" << g << " " << row_x << " " << col_y << "] " << endl;
            policy[row_x][col_y] = "*";
        }
    } // end while
    // print2DVector_v2(expansion_list);
    print2DVector_v2(policy);
}


/*############ Don't modify the main function############*/
int main()
{
    // Instantiate map and planner objects
    Map map;
    Planner planner;

    // Print classes variables
    /*
    cout << "Map:" << endl;
    print2DVector(map.grid);
    cout << "Start: " << planner.start[0] << " , " << planner.start[1] << endl;
    cout << "Goal: " << planner.goal[0] << " , " << planner.goal[1] << endl;
    cout << "Cost: " << planner.cost << endl;
    cout << "Robot Movements: " << planner.movements_arrows[0] << " , " << planner.movements_arrows[1] << " , " << planner.movements_arrows[2] << " , " << planner.movements_arrows[3] << endl;
    cout << "Delta:" << endl;
    print2DVector(planner.movements);
    cout << "\n\n" << endl;
    */

    // Search for the expansions
    search(map, planner);

    return 0;
}





/*
############ SOLUTION ################

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

// Map class
class Map {
public:
    const static int mapWidth = 6;
    const static int mapHeight = 5;
    vector<vector<int> > grid = {
        { 0, 1, 0, 0, 0, 0 },
        { 0, 1, 0, 0, 0, 0 },
        { 0, 1, 0, 0, 0, 0 },
        { 0, 1, 0, 0, 0, 0 },
        { 0, 0, 0, 1, 1, 0 }
    };
};

// Planner class
class Planner : Map {
public:
    int start[2] = { 0, 0 };
    int goal[2] = { mapHeight - 1, mapWidth - 1 };
    int cost = 1;

    string movements_arrows[4] = { "^", "<", "v", ">" };

    vector<vector<int> > movements{
        { -1, 0 },
        { 0, -1 },
        { 1, 0 },
        { 0, 1 }
    };
};

// Template function to print 2D vectors of any type
template <typename T>
void print2DVector(T Vec)
{
    for (int i = 0; i < Vec.size(); ++i) {
        for (int j = 0; j < Vec[0].size(); ++j) {
            cout << Vec[i][j] << ' ';
        }
        cout << endl;
    }
}

// Search function will generate the expansions
void search(Map map, Planner planner)
{
    // Create a closed 2 array filled with 0s and first element 1
    vector<vector<int> > closed(map.mapHeight, vector<int>(map.mapWidth));
    closed[planner.start[0]][planner.start[1]] = 1;

    // Create expand array filled with -1
    vector<vector<int> > expand(map.mapHeight, vector<int>(map.mapWidth, -1));

    // Create action array filled with -1
    vector<vector<int> > action(map.mapHeight, vector<int>(map.mapWidth, -1));

    // Defined the triplet values
    int x = planner.start[0];
    int y = planner.start[1];
    int g = 0;

    // Store the expansions
    vector<vector<int> > open;
    open.push_back({ g, x, y });

    // Flags and counters
    bool found = false;
    bool resign = false;
    int count = 0;

    int x2;
    int y2;

    // While I am still searching for the goal and the problem is solvable
    while (!found && !resign) {
        // Resign if no values in the open list and you can't expand anymore
        if (open.size() == 0) {
            resign = true;
            cout << "Failed to reach a goal" << endl;
        }
        // Keep expanding
        else {
            // Remove triplets from the open list
            sort(open.begin(), open.end());
            reverse(open.begin(), open.end());
            vector<int> next;
            // Stored the poped value into next
            next = open.back();
            open.pop_back();

            x = next[1];
            y = next[2];
            g = next[0];

            // Fill the expand vectors with count
            expand[x][y] = count;
            count += 1;

            // Check if we reached the goal:
            if (x == planner.goal[0] && y == planner.goal[1]) {
                found = true;
                //cout << "[" << g << ", " << x << ", " << y << "]" << endl;
            }

            //else expand new elements
            else {
                for (int i = 0; i < planner.movements.size(); i++) {
                    x2 = x + planner.movements[i][0];
                    y2 = y + planner.movements[i][1];
                    if (x2 >= 0 && x2 < map.grid.size() && y2 >= 0 && y2 < map.grid[0].size()) {
                        if (closed[x2][y2] == 0 and map.grid[x2][y2] == 0) {
                            int g2 = g + planner.cost;
                            open.push_back({ g2, x2, y2 });
                            closed[x2][y2] = 1;
                            action[x2][y2] = i;
                        }
                    }
                }
            }
        }
    }
    // Print the expansion List
    //print2DVector(expand);

    // Find the path with robot orientation
    vector<vector<string> > policy(map.mapHeight, vector<string>(map.mapWidth, "-"));

    // Going backward
    x = planner.goal[0];
    y = planner.goal[1];
    policy[x][y] = '*';

    while (x != planner.start[0] or y != planner.start[1]) {
        x2 = x - planner.movements[action[x][y]][0];
        y2 = y - planner.movements[action[x][y]][1];
        policy[x2][y2] = planner.movements_arrows[action[x][y]];
        x = x2;
        y = y2;
    }

    // Print the path with arrows
    print2DVector(policy);
}

int main()
{
    // Instantiate map and planner objects
    Map map;
    Planner planner;

    // Search for the expansions
    search(map, planner);

    return 0;
}




*/