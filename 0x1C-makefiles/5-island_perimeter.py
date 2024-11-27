#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Function that returns the perimeter of the island described in grid.
    
    Args:
        grid (list of list of int): 2D grid representing the map of land (1) and water (0).
    
    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    
    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                # Check all four adjacent sides
                if r == 0 or grid[r-1][c] == 0:  # Check top
                    perimeter += 1
                if r == rows - 1 or grid[r+1][c] == 0:  # Check bottom
                    perimeter += 1
                if c == 0 or grid[r][c-1] == 0:  # Check left
                    perimeter += 1
                if c == cols - 1 or grid[r][c+1] == 0:  # Check right
                    perimeter += 1
    return perimeter
