
size_t FUN_00160198(void *param_1,long param_2,long param_3,long param_4)

{
  size_t __n;
  ulong uVar1;
  
  uVar1 = (*(long **)(param_4 + 0x15b8))[2] - *(long *)(param_4 + 0x15b0);
  __n = param_3 * param_2;
  if (uVar1 <= (ulong)(param_3 * param_2)) {
    __n = uVar1;
  }
  if (__n != 0) {
    memcpy(param_1,(void *)(**(long **)(param_4 + 0x15b8) + *(long *)(param_4 + 0x15b0)),__n);
    *(size_t *)(param_4 + 0x15b0) = *(long *)(param_4 + 0x15b0) + __n;
  }
  return __n;
}

