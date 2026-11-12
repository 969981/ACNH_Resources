
undefined8 FUN_00694938(int *param_1,undefined8 *param_2,void *param_3,ulong param_4)

{
  size_t __n;
  undefined8 uVar1;
  
  if (*param_1 != 5) {
    return 1;
  }
  __n = *(size_t *)(param_1 + 4);
  if (param_4 < __n) {
    return 3;
  }
  uVar1 = 0;
  if (__n != 0) {
    memcpy(param_3,*(void **)(param_1 + 2),__n);
    uVar1 = *(undefined8 *)(param_1 + 4);
  }
  *param_2 = uVar1;
  return 0;
}

