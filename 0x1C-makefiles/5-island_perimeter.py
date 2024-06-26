#!/usr/bin/python3
"""
Module: 5-island_perimeter
Function: island_perimeter
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
        grid (list[list[int]]): A list of lists representing the grid where
                                0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    if not grid or not grid[0]:
        return 0

    perimeter = 0
    
    # Define directions: up, down, left, right
    directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    
    # Iterate through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # For each land cell, check its neighbors
                for dx, dy in directions:
                    x, y = i + dx, j + dy
                    # Check if neighbor is out of bounds or water
                    if x < 0 or x >= len(grid) or y < 0 or y >= len(grid[0]) or grid[x][y] == 0:
                        perimeter += 1
    
    return perimeter

