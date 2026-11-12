
undefined8 FUN_00694634(int *param_1,char *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 2) {
    return 1;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if ((char)param_1[4] == '\0') {
    if (0x7f < uVar1) {
      return 2;
    }
  }
  else if (uVar1 != (long)(char)uVar1) {
    return 2;
  }
  *param_2 = (char)uVar1;
  return 0;
}

