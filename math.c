#include <stdio.h>

int addition(int x, int y) {
	
	return x+y;
}
int subtraction(int x, int y) {
	return x-y;
}

int multiplication(int x, int y) {
	return x*y;
}
float division(int x, int y) {
	return x/y;
}

int remainder(int x, int y){
	return x%y;
}

int addition2(int x, int y) {
	printf("Write 5 numbers\n");

    for (c = 1; c <= n; c++)
    {
        scanf_s("%d", &value);


        if (c = 1)
        {
            max = value;
            min = value;


        }
        else if (value < max, c <= n)
        {
            max = value;
        }

        else if (value < min, c <= n)
        {
            min = value;
        }
    }

    printf("Biggest number is : %d\n", max);
    printf("Smallest number is : %d\n", min);



    
}

int main() {
	int x=2, y=3;
	printf("%i\n\n", addition(x,y));
	printf("%i\n\n", subtraction(x,y));
	printf("%i\n\n", multiplication(x,y));
	printf("%f\n", division(x,y));
	printf("%f\n", addition2(x,y));
	return 0;
}
