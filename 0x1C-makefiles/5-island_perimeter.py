#!/usr/bin/python3
"""
module with 'island_perimeter' fn
"""


def island_perimeter(grid):
    """
    `grid`: list of list integers
          - 0 : represents a water zone
          - 1 : represents a land zone
          - one cell is square of side length 1
          - grids are connected vertically/horizontal (no diag)
    returns perimeter of the island described in `grid`
    """
    row_count = 0
    perim = 0
    if grid is None or len(grid) == 0 or \
            not isinstance(grid, list):
        return
    grid_size = len(grid)

    for row_num, row in enumerate(grid):
        if not isinstance(row, list):
            return
        for index, item in enumerate(row):
            if item == 0:
                continue
            cell_perim = 4
            if row_num != 0 and \
                    grid[row_num - 1][index] == 1:  # 1 is direclty above
                cell_perim -= 1
            if row[index + 1] == 1:
                cell_perim -= 1
            if index != 0 and row[index - 1] == 1:
                cell_perim -= 1
            if row_num != grid_size - 1 and \
                    grid[row_num + 1][index] == 1:  # 1 is directly below
                cell_perim -= 1
            perim += cell_perim
    return perim
