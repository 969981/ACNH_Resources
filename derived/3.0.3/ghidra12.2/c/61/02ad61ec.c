
long FUN_02ad61ec(long param_1,int param_2)

{
  long lVar1;
  
  if (4 < param_2 - 1U) {
    return 0;
  }
  switch(param_2) {
  case 1:
    if (*(char *)(param_1 + 0x1e68) == '\0') {
      return 0;
    }
    lVar1 = 0x1e38;
    break;
  case 2:
    if (*(char *)(param_1 + 0x2878) == '\0') {
      return 0;
    }
    lVar1 = 0x2848;
    break;
  case 3:
    if (*(char *)(param_1 + 0x3288) == '\0') {
      return 0;
    }
    lVar1 = 0x3258;
    break;
  default:
    if (*(char *)(param_1 + 0x3c98) == '\0') {
      return 0;
    }
    lVar1 = 0x3c68;
  }
  return param_1 + lVar1;
}

