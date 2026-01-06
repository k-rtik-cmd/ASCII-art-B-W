# ASCII Art Generator in C

A simple yet fundamental C project that converts images into black & white ASCII art using raw pixel manipulation.

## ✨ What it does
- Loads an image using `stb_image`
- Converts RGB pixels to grayscale
- Maps brightness levels to ASCII characters
- Renders the output directly in the terminal

## 🧠 Concepts Covered
- Image memory layout (row-major order)
- 2D to 1D index mapping
- RGB channels & grayscale conversion
- Low-level data handling in C

## 🛠️ Technologies
- C
- stb_image.h

## ▶️ How to Run

```bash
gcc src/main.c -o ascii
./ascii
