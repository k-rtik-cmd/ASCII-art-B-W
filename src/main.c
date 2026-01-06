#include <stdio.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main() 
{
    int width, height, channels;
    unsigned char *img = stbi_load("image.jpg", &width, &height, &channels, 0);

    if (!img) 
	{
        printf("Image load failed\n");
        return 1;
    }

    char ascii_chars[] = "@%#*+=-:. ";
    int ascii_len = 10;
    
    int x, y;
    for (y = 0; y < height; y += 4)
	{
        for (x = 0; x < width; x += 2)
		{ 

            int index = (y * width + x) * channels;

            int r = img[index];
            int g = img[index + 1];
            int b = img[index + 2];

            int gray = (r + g + b) / 3;

            int ascii_index = (gray * ascii_len) / 256;
            printf("%c", ascii_chars[ascii_index]);
        }
        printf("\n");
    }

    stbi_image_free(img);
    return 0;
}

