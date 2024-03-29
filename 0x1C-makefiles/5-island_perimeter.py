#!/usr/bin/python3
"""A module for Island Perimeter"""


def island_perimeter(grid):
    """
    Method that returns the perimeter of the island described in grid
    The grid represents water by 0 and land by 1.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
