#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned char uint8;

typedef struct
{
	float x;
	float y;
}Vector2;

typedef struct 
{
	int r;
}smth;

void* lenghtOf(void* array);
void* fillMemory(void* source, int mem, size_t size);
void copyMemory(void* destination, void* source, size_t size);
void* weirdRandom(smth* seed);

int* fillArrayInt(int* array, int b);
uint8* fillArrayChar(uint8* array, char b);
float* fillArrayFloat(float* array, float b);

float normalizeVector2(Vector2* vec);