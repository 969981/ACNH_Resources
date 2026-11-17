
long FUN_02ad617c(long param_1,int param_2)

{
  if (param_2 == 3) {
    if (*(char *)(param_1 + 0x1458) != '\0') {
      return param_1 + 0x1428;
    }
  }
  else if (param_2 == 2) {
    if (*(char *)(param_1 + 0xa48) != '\0') {
      return param_1 + 0xa18;
    }
  }
  else if ((param_2 == 1) && (*(char *)(param_1 + 0x38) != '\0')) {
    return param_1 + 8;
  }
  return 0;
}

