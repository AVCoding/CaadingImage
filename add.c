#include <stdint.h>

int addThree(uint8_t *buf, int len) {
  uint8_t *item;
  uint8_t *end = buf + len;

  for (item = buf; item<end; item++) {
    *item += 7;
  }

  return 0;
}

void grayScale (unsigned char* data, int len) {
    for (int i = 0; i < len; i += 4) {
    int r = data[i];
    int g = data[i+1];
    int b = data[i+2];
    int a = data[i+3];
    data[i] = r;
    data[i+1] = r;
    data[i+2] = r;
    data[i+3] = a;
  }
}



// #include <emscripten.h>

// int main() { 
//   return 42;
// }


// void reverse(unsigned char* p, int len) {
//     for (int i = 0; i < len / 2; ++i) {
//         unsigned char temp = p[i];
//         p[i] = p[len - i - 1];
//         p[len - i - 1] = temp;
//     }
// }