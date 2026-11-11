
undefined8 FUN_0043a4f0(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return 1;
  }
  do {
    param_2 = param_2 + 1;
    if (*param_1 != cVar1) {
      return 0;
    }
    cVar1 = *param_2;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return 1;
}

