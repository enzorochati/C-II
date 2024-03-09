void sum(int* num, int a, int b) {
  *num = a + b;
}

int sum(int* nums, int size) {
  int total = 0;

  for(int i = 0; i < size; i++) {
    total += nums[i];
  }

  return total;
}