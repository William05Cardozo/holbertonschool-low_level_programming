#!/usr/bin/python3
"""
This function define a perimeter in this island
"""


def island_perimeter(grid):
    """
    Show the perimeter of the island
    """
    width = len(grid[0])
    height = len(grid)
    land = 0
    sea = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                land += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    sea += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    sea += 1
    return land * 4 - sea * 2
