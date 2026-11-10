
size_t FUN_00153b88(void *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  size_t __n;
  
  lVar1 = *(long *)(param_4 + 0x98);
  __n = *(long *)(param_4 + 0x78) - lVar1;
  if (param_3 <= __n) {
    __n = param_3;
  }
  if (__n != 0) {
    memcpy(param_1,(void *)(*(long *)(param_4 + 0x20) + lVar1),__n);
    lVar1 = *(long *)(param_4 + 0x98);
  }
  *(size_t *)(param_4 + 0x98) = lVar1 + __n;
  return __n;
}

