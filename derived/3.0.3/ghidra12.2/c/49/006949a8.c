
undefined8 FUN_006949a8(int *param_1,undefined8 *param_2)

{
  size_t __n;
  
  if (*param_1 != 5) {
    return 1;
  }
  __n = *(size_t *)(param_1 + 4);
  if ((ulong)param_2[1] < __n) {
    return 3;
  }
  if (__n == 0) {
    param_2[2] = 0;
    return 0;
  }
  memcpy((void *)*param_2,*(void **)(param_1 + 2),__n);
  param_2[2] = *(undefined8 *)(param_1 + 4);
  return 0;
}

