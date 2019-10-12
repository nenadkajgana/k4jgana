#include<stdio.h>
int main() {
int fahrenheit, celsius;
int min, max, i;
min = 0; 
max = 300;
i = 20;
fahrenheit = min;
while(fahrenheit <= max){
    celsius = 5 * (fahrenheit - 32) / 9;
    printf("%d\t%d\n",fahrenheit, celsius);
    fahrenheit = fahrenheit + i;
    }
}