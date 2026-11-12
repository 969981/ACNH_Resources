
undefined8 FUN_00694678(int *param_1,short *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 2) {
    return 1;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if ((char)param_1[4] == '\0') {
    if (uVar1 >> 0xf != 0) {
      return 2;
    }
  }
  else if (uVar1 != (long)(short)uVar1) {
    return 2;
  }
  *param_2 = (short)uVar1;
  return 0;
}

