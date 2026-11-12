
undefined8 FUN_006946bc(int *param_1,int *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 2) {
    return 1;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if ((char)param_1[4] == '\0') {
    if (uVar1 >> 0x1f != 0) {
      return 2;
    }
  }
  else if (uVar1 != (long)(int)uVar1) {
    return 2;
  }
  *param_2 = (int)uVar1;
  return 0;
}

