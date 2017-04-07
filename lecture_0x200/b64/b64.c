#include <stdio.h>
#include <string.h>
#include "./include/utils.c"

void alert() {
  printf("Nessun parametro rilevato.\n");
  printf("Esempio di utlizzo:\n");
  printf("./b64 -e ciao\n");
  printf("./b64 -d Y2lhbw==\n");
}

void encode(char* str) {
  char buffer[1024] = "";

  b64_encode(str, buffer);
  printf("Encode: %s", buffer);
}

void decode(char* str) {
  char buffer[1024] = "";

  b64_decode(str, buffer);
  printf("Decode: %s", buffer);
}

int main(int argc, char** argv) {
  printf("Argomenti: %d\n", argc);

  if ( argc != 3 || strlen(argv[1]) != 2 ) {
    alert();
    return 0;
  }

  switch (argv[1][1]) {
    case 'e':
      encode(argv[2]);
      break;
    case 'd':
      decode(argv[2]);
      break;
    default:
      alert();
  }


}
