# void* fillMemory(void* source, int mem, size_t size)
Fills a block of memory with a specified integer value.

Parameters:

void* source: A pointer to the start of the memory block.
int mem: The integer value used to fill the memory.
size_t size: The number of bytes to fill.
Returns:

void*: A pointer to the filled memory block.
Note:

The function asserts that source is not NULL.

#void copyMemory(void* destination, void* source, size_t size)
Copies a block of memory from a source to a destination.

Parameters:

void* destination: A pointer to the destination memory block.
void* source: A pointer to the source memory block.
size_t size: The number of bytes to copy.
Returns:

This function does not return a value.
Note:

The function asserts that destination is not NULL.

#int* fillArrayInt(int* array, int b)
Fills an integer array with a specified integer value.

Parameters:

int* array: A pointer to the start of the integer array.
int b: The value to set for each element in the array.
Returns:

int*: A pointer to the filled array.
Note:

The function assumes lenghtOf(array) returns the number of elements in array.

#void* lenghtOf(void* array)
Returns the size of the specified array.

Parameters:

void* array: A pointer to the array.
Returns:

void*: The size of the array in bytes.
Note:

lenghtOf function currently returns the size of the pointer, not the actual length of the array. This needs to be addressed in order to correctly determine array length.

#void* weirdRandom(smth* seed)
Generates a "randomized" value based on a structure's member value.

Parameters:

smth* seed: A pointer to a structure of type smth which contains an integer field r.
Returns:

void*: A pointer to the modified structure.
Note:

This function initializes the random number generator with the current time and modifies the value of seed->r with a random component.

#float normalizeVector2(Vector2* vec)
Calculates the magnitude (norm) of a 2D vector.

Parameters:

Vector2* vec: A pointer to a Vector2 structure containing x and y fields representing the vector's components.
Returns:

float: The magnitude of the vector, calculated as sqrt(x*x + y*y).
