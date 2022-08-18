#!/usr/bin/python3
"""grid function"""

def island_perimeter(grid):
    """island perimeter"""
    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            tmp = 0
            if i != 0:
                if check_grid(grid, i, j, i - 1, j):
                    tmp += 1
            if i != len(grid) - 1:
                if check_grid(grid, i, j, i + 1, j):
                    tmp += 1
            if j != 0:
                if check_grid(grid, i, j, i, j - 1):
                    tmp += 1
            if j != len(grid[i]) - 1:
                if check_grid(grid, i, j, i, j + 1):
                    tmp += 1
            if tmp == 4:
                return 0
            perim += tmp

    return perim

def check_grid(grid, i, j, x, y):
    """check grid"""
    if grid[i][j] == 1 and grid[x][y] == 0:
        return True
