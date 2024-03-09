int evenodd(int number) {
  int remainder = number % 2;
  if(remainder == 0) 
    return 1; // 1 indicates even
  return 0;   // 0 indicates odd
}
