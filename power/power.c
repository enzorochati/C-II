void power(int* result, int a, int b) {

  *result = 1;

  for(int i = 0; i < b; i++) {
    *result = *result * a;
  }
}
