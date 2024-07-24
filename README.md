# Battleship

# Description
The Battleship game project allows users to play the classic game of Battleship with two different modes: defending and attacking. The game was developed as part of coursework to apply and strengthen programming fundamentals.

# Game Modes
# Defending Mode
The user arranges five ships on a 5x5 grid.
The system gets five attempts to destroy the ships.
If the system hits three or more ships, it wins; otherwise, the user wins.
# Attacking Mode
The user attacks a grid where the system has deployed five hidden ships.
The user has five attempts to guess the locations of the ships.
If the user hits three or more ships, they win; otherwise, the system wins.
# Gameplay
# Defending Mode
Board Creation: A for loop is used to create the 2D array for the grid.
Ship Placement: The user inputs coordinates to place ships. A while loop ensures only valid placements are accepted.
System Attack: The system randomly selects coordinates to attack. Successful hits are marked with 'x', and misses are marked with '#'.
# Attacking Mode
Board Creation: Similar to the defending mode, a 2D array is created for the grid.
System Ship Deployment: Ships are randomly placed on the grid.
User Attack: The user inputs coordinates to attack. Hits are marked with 'x', and misses are marked with '#'.
# Demonstration
# System Attacking Mode
The grid is displayed with 'V' representing ships, 'x' for destroyed ships, and '#' for missed shots.
# User Attacking Mode
The user attacks the grid and the results are displayed in the same manner as the system attacking mode.
