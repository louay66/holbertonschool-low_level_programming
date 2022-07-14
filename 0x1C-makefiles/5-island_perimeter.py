#!/usr/bin/python3
""" function that return the
perimeter of the island described in grid"""


def island_perimeter(grid):

    sum = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                sum += execute(grid, i, j)

    return sum


def execute(grid, i, j):
    sum = 0

    if grid[i][j + 1] == 1:
        sum += 1
    if grid[i][j - 1] == 1:
        sum += 1
    if grid[i + 1][j] == 1:
        sum += 1
    if grid[i - 1][j] == 1:
        sum += 1

    return (4 - sum)
