/*
* Author: Isa Heydarli
*/

#include "collection.h"

#include <assert.h>

void* fillMemory(void* source, int mem, size_t size)
{
	uint8* p = source;
	assert(p != NULL);
	while (size--)
	{
		*p++ = (uint8) mem;
	}
	return source;
}

void copyMemory(void* destination, void* source, size_t size)
{
	uint8* p = destination;
	uint8* q = source;
	assert(p != NULL);
	while (size--)
	{
		*p++ = *q++;
	}
}

int* fillArrayInt(int* array, int b)
{
	int* az = (int*) array;
	assert(az != NULL);
	//uint8* val = b;
	for (size_t i = 0; i < lenghtOf(array); i++)
	{
		az[i] = b;
	}
	return az;
}
uint8* fillArrayChar(uint8* array, char b)
{
	uint8* az = (uint8*) array;
	assert(az != NULL);
	for (size_t i = 0; i < lenghtOf(array); i++)
	{
		az[i] = (uint8) b;
	}
	return az;
}
float* fillArrayFloat(float* array, float b)
{
	float* az = array;
	assert(az != NULL);
	for (size_t i = 0; i < lenghtOf(array); i++)
	{
		az[i] = b;
	}
	return az;
}

void* lenghtOf(void* array)
{
	return sizeof(array);
}

void* weirdRandom(smth* seed)
{
	srand((uint8)time(0));
	smth* rr = seed;
	assert(rr != NULL);

	int l = rr->r;
	int ll = rand() % l;
	rr->r = sqrt(rr->r / 2) + ll;

	return rr;
}

float normalizeVector2(Vector2* vec)
{
	Vector2* v = vec;
	return sqrt(v->x * v->x + v->y * v->y);
}