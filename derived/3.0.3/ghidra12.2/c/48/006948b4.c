
undefined8 FUN_006948b4(int *param_1,undefined1 *param_2,ulong param_3)

{
  ulong __n;
  
  if (*param_1 != 4) {
    return 1;
  }
  __n = *(ulong *)(param_1 + 4);
  if (param_3 <= __n) {
    return 3;
  }
  if (__n == 0) {
    *param_2 = 0;
    return 0;
  }
  memcpy(param_2,*(void **)(param_1 + 2),__n);
  param_2[*(long *)(param_1 + 4)] = 0;
  return 0;
}

