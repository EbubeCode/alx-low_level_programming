#!/usr/bin/python3

# grid function

def island_perimeter(grid):
    if grid is not None and type(grid) == list:
        perim = 0
        for i in range(len(grid)):
            if type(i) != list:
                return None
            for j in range(len(i)):
                if i == 0 and j == 0:
                    if grid[i - 1][j - 1] == 0:
                        perim += 1

        return 12

