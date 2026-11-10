
void FUN_0018a674(long param_1,void *param_2,ulong param_3)

{
  void *__src;
  ulong __n;
  
  __n = *(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x28);
  __src = (void *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x28));
  if (param_3 < __n) {
    memcpy(param_2,__src,param_3);
    return;
  }
  memcpy(param_2,__src,__n);
  if (param_3 - __n == 0) {
    return;
  }
  memcpy((void *)((long)param_2 + __n),*(void **)(param_1 + 8),param_3 - __n);
  return;
}

