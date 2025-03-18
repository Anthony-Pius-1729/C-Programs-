#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14157
int main (){
	printf("Enter Red value (0-255)");
	int red;
	scanf("%d", &red);
	if (red < 0 || red > 255){
		printf("Invalid ammount");
		return 1;
	}
	printf("Enter  Green value (0-255)");
	int green;
	scanf("%d", &green);
	if (green < 0 || green > 255){
		printf("Invalid ammount");
		return 1;
	}
	printf("Enter Blue value (0-255)");
	int blue;
	scanf("%d", &blue);
	if (blue < 0 || blue > 255){
		printf("Invalid ammount");
		return 1;
	}
	int color_max = red;
	if(green > color_max) 
		color_max = green;
	if(blue > color_max) 
		color_max = blue;
	int color_min = red;
	if(green < color_min) 
		color_min = green;
	if(blue < color_min) 
		color_min = blue;
	double numerator = 2 * (color_max - color_min);
	double denominator = (red - green + blue);	
	double hue_degrees = atan(numerator/denominator) * 180 / 360;

    
    if (hue_degrees < 0) {
		hue_degrees += 360;
    }

	double saturation = ((double)(color_max - color_min)/color_max ) * 100;
	double value = color_max == 255 ? 255 : ((double)color_max/255.00) * 100;
	
	printf("Hue: %lf degree \n Saturation: %lf% \n Value: %lf \n", hue_degrees, saturation, value);
	
	
	return 0;
}