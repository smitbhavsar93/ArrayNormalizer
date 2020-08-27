
#include <stdio.h>

int main(void)
{
	FILE* ptr = fopen("//Users//smitbh//Desktop//hi.txt", "r");
	double x_arr [25];
	int count = 0;
	
	while (count < 25){
		fscanf(ptr, "%lf", &x_arr[count]);
		count++;
	}
	
	printf("x_arr is : \n");
	printf("**********\n");
	for(int j = 0; j < 25; j++){
		printf("%.2lf\n", x_arr[j]);
	}
	
	double x_high = -1;
	double x_low  = 10000;
	
	for (int i = 0; i < 25; i++){
		if (x_arr[i] > x_high){
			x_high = x_arr[i];
		}
	}
	
	 for (int i = 0; i < 25; i++){
		if (x_arr[i] < x_low){
			x_low = x_arr[i];
		}
	}
	
	printf("\nHighest number in array is: %.2lf\n", x_high);
	printf("Lowest number in array is: %.2lf\n", x_low);
	
	
	double x_second_arr[25];
	
	for (int i = 0; i < 25; i++){
		x_second_arr[i] = x_arr[i] * 3;
	}
	
	
	printf("\nx_arr       x_second_arr\n");
	printf("************************\n");
	for(int j = 0; j < 25; j++){
		printf("%.2lf\t|    %.2lf\n", x_arr[j] , x_second_arr[j]);
	}
	
	
	double norm_x_arr[25];
	double max, min;
	fscanf(ptr, "%lf", &max);
	fscanf(ptr, "%lf", &min);
	
	double xhigh = 0, xlow = 10000;
	
	for (int i = 0; i < 25; i++){
		if (x_arr[i] > xhigh){
			xhigh = x_arr[i];
		}
	}
	
	 for (int i = 0; i < 25; i++){
		if (x_arr[i] < xlow){
			xlow = x_arr[i];
		}
	}
	
	for(int i = 0; i < 25; i++){
		norm_x_arr[i] = min + ((x_arr[i] - xlow) * (max - min)) / (xhigh - xlow);
	}
	
	printf("\nNormalized array norm_x_arr : \n ");
	for(int j = 0; j < 25; j++){
		printf("%.2lf\n", norm_x_arr[j]);
	}
	return 0;
}

