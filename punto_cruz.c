#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float main (int argc, char *argv[]){
	if(argc < 7){
		printf("You only need 6 values, put it using a space between them\n");
	return 0;
	} else if(argc == 7){

	float a1 = atof(argv[1]);
	float b1 = atof(argv[2]);
	float c1 = atof(argv[3]);
	float a2 = atof(argv[4]);
	float b2 = atof(argv[5]);
	float c2 = atof(argv[6]);

	float a3 = ((b1 * c2) - (c1 * b2));
	float b3 = ((c1 * a2) - (a1 * c2));
	float c3 = ((a1 * b2) - (b1 * a2));

		printf("a3 = %f\nb3 = %f\nc3 = %f\n", a3, b3, c3);
	} else if(argc > 7){
		printf("Too many arguments, add six values\n");
	return 0;
}

}
