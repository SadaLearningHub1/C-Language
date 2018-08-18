malloc() - allocated requested size of bytes
ptr = (cast-type)* malloc(bytes-size)
ptr = (int*) malloc(100 * sizeof(int))

calloc() - allocates space for an array
ptr = (cast-type* calloc(n, element-size);
ptr = (float*) calloc(25, sizeof(float));

free() - deallocate the previously allocated
free(ptr)

realloc() - changethe size of previously allocated space
ptr = realloc(ptr, newsize);