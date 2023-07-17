#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

#include "read_num.h"

int main(int argc, char **argv) {
  uint32_t sum;
  
  if (argc != 3) {
      fprintf(stderr, "Usage: %s <file1> <file2>\n", argv[0]);
      return 1;
  }

  FILE* file1 = fopen(argv[1], "rb");

  FILE* file2 = fopen(argv[2], "rb");
 
  uint32_t num1 = read_Num(file1);
  uint32_t num2 = read_Num(file2);

  sum = num1 + num2;

  printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", num1, num1, num2, num2, sum, sum);

  fclose(file1);
  fclose(file2);

  return 0;
}
