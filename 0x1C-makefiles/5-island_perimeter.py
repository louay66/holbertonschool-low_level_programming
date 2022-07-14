#!/usr/bin/python3
""" function that return the
perimeter of the island described in grid"""


def island_perimeter(grid):
    """function return perimeter"""

    sum = 0
    if grid is None:
        return None
    else:
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    sum += execute(grid, i, j)

    return sum


def execute(grid, i, j):
    """check how many 1 around current 1"""
    sum = 0

    if len(grid[i]) > j + 1 and grid[i][j + 1] == 1:
        sum += 1
    if j > 0 and grid[i][j - 1] == 1:
        sum += 1
    if len(grid) > i + 1 and grid[i + 1][j] == 1:
        sum += 1
    if i > 0 and grid[i - 1][j] == 1:
        sum += 1

    return (4 - sum)
