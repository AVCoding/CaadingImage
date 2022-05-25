void grayScale (unsigned char* data, int len) {
    for (int i = 0; i < len; i += 4) {
        if (data[i] < 100) {
            data[i] = 255;
            data[i + 1] = 255;
            data[i + 2] = 255;
        }

        if (data[i] != 255) {
            data[i] = 0;
            data[i + 1] = 0;
            data[i + 2] = 0; 
        }
        else {
            data[i] = 255;
            data[i + 1] = 255;
            data[i + 2] = 255;
        }

        if (data[i] == 255) {
            data[i] = 0;
            data[i + 1] = 0;
            data[i + 2] = 0;
        }
        else {
            data[i] = 255;
            data[i + 1] = 255;
            data[i + 2] = 255;
        }
  }
}
