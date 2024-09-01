# colorful-hello-world-C
![Python Hello world project Logo](logo.svg)

---
[IN Python3](https://github.com/mdriyadkhan585/Colorful-Hello-World)

# Colorful Hello World in C

Welcome to the Colorful Hello World project! This project demonstrates how to print colored text in a terminal using C programming. It’s a simple example of how you can use ANSI escape codes to add color to your console output.

## Table of Contents

1. [Introduction](#introduction)
2. [Prerequisites](#prerequisites)
3. [Usage](#usage)
4. [Code Explanation](#code-explanation)
5. [Compiling the Program](#compiling-the-program)
6. [Customizing Colors](#customizing-colors)
7. [Troubleshooting](#troubleshooting)

## Introduction

This project provides a basic example of printing "Hello, World!" in different colors in the terminal. It uses ANSI escape codes to change the text color. This example can be expanded to include more complex color output and text formatting.

## Prerequisites

To run this example, you'll need:
- A C compiler (e.g., GCC)
- A terminal that supports ANSI escape codes (most modern terminals do)

## Usage

To use this code, follow these steps:

1. **Download or clone the repository:**
   ```bash
   git clone https://github.com/mdriyadkhan585/colorful-hello-world-C
   cd colorful-hello-world-C
   ```

2. **Compile the code:**
   ```bash
   gcc -o colorful_hello_world colorful_hello_world.c
   ```

3. **Run the executable:**
   ```bash
   ./colorful_hello_world
   ```

You should see "Hello," in red, "World" in green, and "!" in blue.

## Code Explanation

Here’s a breakdown of the `colorful_hello_world.c` file:

```c
#include <stdio.h>

int main() {
    // ANSI escape codes for colors
    printf("\033[1;31m"); // Red
    printf("Hello, ");
    printf("\033[1;32m"); // Green
    printf("World");
    printf("\033[1;34m"); // Blue
    printf("!\n");
    printf("\033[0m"); // Reset color

    return 0;
}
```

- `\033[1;31m` sets the text color to bright red.
- `\033[1;32m` sets the text color to bright green.
- `\033[1;34m` sets the text color to bright blue.
- `\033[0m` resets the text color to the terminal's default.

## Compiling the Program

To compile the program, you need to use a C compiler. For example, with GCC, you can compile the code with the following command:

```bash
gcc -o colorful_hello_world colorful_hello_world.c
```

This will create an executable file named `colorful_hello_world`.

## Customizing Colors

You can customize the colors by changing the ANSI escape codes. Here’s a quick reference for some basic colors:

- **Red:** `\033[1;31m`
- **Green:** `\033[1;32m`
- **Yellow:** `\033[1;33m`
- **Blue:** `\033[1;34m`
- **Magenta:** `\033[1;35m`
- **Cyan:** `\033[1;36m`
- **White:** `\033[1;37m`
- **Reset:** `\033[0m`

Modify these codes in the `printf` statements to change the text colors as you like.

## Troubleshooting

- **No color in terminal:** Ensure your terminal supports ANSI escape codes. Most modern terminals do, but some older or non-standard terminals might not.
- **Compilation errors:** Make sure you have the C compiler installed and that there are no syntax errors in the code.

---
