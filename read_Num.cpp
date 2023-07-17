#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

#include "read_num.h"

uint32_t read_Num(FILE* file) {
    uint32_t num;
    if (fread(&num, sizeof(uint32_t), 1, file) != 1) {
        fprintf(stderr, "Error reading from file\n");
    	return 1;
    }
    return ntohl(num);
}
