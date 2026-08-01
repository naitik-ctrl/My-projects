#include <stdio.h>
#include <math.h>

int main()
{
    
    float r,g,b;
    float c,m,y,k,w,bl;
    printf("Enter the RGB values in range of 0-255: \n");
    /* Read the RGB values from the User.*/
    scanf("%f%f%f", &r, &g, &b);
    /* Validation of Input Values*/
    if (r <0 || r>255 || g<0 || g>255 || b<0 || b>255)
    {
        printf("Invalid RGB values. Please enter values in the range of 0-255.\n");
    }
    /* Handle the special case of all zeroes.*/
    else if (r==0 && b==0 && g==0)
    {
        printf("\nThe CMYK values are Cyan : 0.00, Magenta :0.00, Yellow: 0.00, and Black: 1.00");
    }
    else
    {
        printf("\nConverting the input RGB values to CMYK values.....");
        /* Convert the RGB values to their corresponding CMYK components*/
        w = fmaxf(r/255.0, fmaxf(g/255.0, b/255.0));
        c = (w - (r/255.0))/w;
        m = (w - (g/255.0))/w;
        y = (w - (b/255.0))/w;
        bl = 1-w;
        /* Display the CMYK values*/
        printf("\n The CMYK values are, Cyan: %.3f, Magenta: %.3f, Yellow: %.3f and Black: %.3f", c,m,y,bl);
    }
    

}
