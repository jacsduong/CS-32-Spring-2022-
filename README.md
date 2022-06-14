# CS32Project1

For our UCLA CS32 Spring 2022 Project 1 we were given a correct implementation of the "Garks Game" which is described below: 

--
The game allows the user to select the player's action: u/d/l/r for moving or attacking, or just hitting enter for standing. The user may also type q to prematurely quit the game.

When it's the garks' turn, each gark picks a random direction (up, down, left, or right) with equal probability. The gark moves one step in that direction if it can; if the gark attempts to move off of the mesa, however, (e.g., down, when on the bottom row), it does not move. More than one gark may occupy the same position; in that case, instead of G, the display will show a digit character indicating the number of garks at that position (where 9 indicates 9 or more). If after the garks move, a gark occupies the same position as the player, the player is devoured and dies.

--


After giving us all the code in a single file and having us figure out how to split them in their respective .h and .cpp files to practice using include guards, we were then asked to add an additional functionality:

--
h for history. This command shows you for each grid point how many times during the course of the game a gark was at that point when the player attacked the gark without that gark dying: dot means 0 times, a letter character A through Y means 1 through 25 times (A means 1, B means 2, etc.) and Z means 26 or more times.


