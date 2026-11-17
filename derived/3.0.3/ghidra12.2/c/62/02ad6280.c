
long FUN_02ad6280(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 3) {
    if (*(char *)(param_1 + 0x8d18) == '\0') {
      return 0;
    }
    lVar1 = 0x8ce8;
  }
  else if (param_2 == 2) {
    if (*(char *)(param_1 + 0x8308) == '\0') {
      return 0;
    }
    lVar1 = 0x82d8;
  }
  else {
    if ((param_2 != 1) || (*(char *)(param_1 + 0x78f8) == '\0')) {
      return 0;
    }
    lVar1 = 0x78c8;
  }
  return param_1 + lVar1;
}

