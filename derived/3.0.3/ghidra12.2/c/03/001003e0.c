
int FUN_001003e0(short *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    param_1 = param_1 + 1;
    iVar1 = iVar1 + 1;
  } while (*param_1 != 0);
  return iVar1;
}

