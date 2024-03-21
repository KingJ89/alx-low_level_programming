This is a non empty read me file on the 0x1c makefiles project by Jan Mutewera.

    Iterate through the grid:

    We need to loop through each cell in the grid to identify land zones.

    Identify land zones:

    When we encounter a cell with value 1, it represents land. We need to check its surrounding cells to determine its contribution to the perimeter.

    Calculate perimeter:

    For each land cell, we need to check its neighboring cells. If a neighboring cell is water (value 0) or is out of bounds, it contributes to the perimeter. If a neighboring cell is also land, it doesn't contribute to the perimeter.

    Handle edge cases:

    We need to handle edge cases where land cells are located at the boundaries of the grid.

    Return the total perimeter:

    Sum up the contributions from all land cells to get the total perimeter of the island.

    Define Variables:
        CC: Compiler to be used.
        SRC: List of .c files.
        OBJ: List of .o files derived from SRC.
        NAME: Name of the executable.
        CFLAGS: Compiler flags (-Wall -Werror -Wextra -pedantic).

    Define Rules:
        all: Builds the executable.
        clean: Deletes Emacs and Vim temporary files along with the executable.
        oclean: Deletes the object files.
        fclean: Deletes Emacs and Vim temporary files, the executable, and the object files.
        re: Forces recompilation of all source files.

    Recompilation of Updated Source Files:
        Ensure that the all rule recompiles only the updated source files.

    Failure Prevention:
        Ensure that the clean, oclean, fclean, and re rules never fail.

    Usage of Variables:
        Use $(RM) for cleaning up rules.
        Use $(CC) and $(CFLAGS) as instructed, with the limitation of using $(CC) only once and not using $(CFLAGS) explicitly.

    Avoiding Specific Rules:
        Do not have an $(OBJ) rule.
        Do not use the %.o: %.c rule.

    Header File Check:
        Ensure that the Makefile does not compile if the header file m.h is missing.
