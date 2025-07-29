# Wave Function Visualizer - Version 3

## Overview

This program graphically displays basic trigonometric functions — sine, cosine, tangent, and cotangent — using the old `graphics.h` library in C++. 
It provides an interactive menu for selecting and plotting these functions, and allows users to plot custom points on the coordinate plane.

## Features

- Plot sine, cosine, tangent, and cotangent waveforms.
- Interactive menu system for easy navigation.
- Custom point plotting with coordinate transformation.
- Basic graphical window scaling to full screen.
- Visual guide lines and sector grids for better readability.

## How to Run

1. Ensure your system supports `graphics.h` (typically an older Windows environment with compatible IDE like Turbo C++ or configured MinGW).
2. Compile all source files together.
3. Run the executable.
4. Use the menu to select the desired function or option.
5. Follow on-screen prompts for input.

## File Structure

- `main.cpp` — Entry point with main menu.
- `wave.cpp/h` — Contains implementations for plotting trigonometric functions.
- `menu.cpp/h` — Menu handling and submenus.
- `ValX.in` and `ValY.in` — Input files for coordinate transformations.

## Known Issues and Limitations

- Uses old `graphics.h` library, which is outdated and hard to set up on modern systems. Not portable outside Windows or specific IDE setups.  
- Contains magic numbers (e.g., `-540`) in calculations that lack clear explanation or scaling, making behavior inconsistent on different resolutions.  
- Array indexing and input handling in functions like `FuncPick` is risky and can cause crashes if inputs are invalid or out of expected range.  
- Heavy use of `system("CLS")` leads to flickering and is Windows-specific, breaking portability and making the UI less smooth.  
- Input and timing depend on `kbhit()` and `delay()`, resulting in a primitive, blocking user experience without proper event handling.  
- No error handling for file input (e.g., `ValX.in`, `ValY.in`), so missing or corrupted files will crash the program silently.  
- No boundary checks on pixel plotting, risking drawing outside the window or undefined behavior.

## Suggestions for Improvement

- Replace `graphics.h` with a modern, cross-platform graphics library (e.g., SFML, SDL).  
- Add input validation and error handling, especially for file reads and user input.  
- Refactor magic numbers into named constants or computed values based on window size.  
- Improve user interface with non-blocking input handling and smoother redraws.  
- Add comments and documentation to improve maintainability.
