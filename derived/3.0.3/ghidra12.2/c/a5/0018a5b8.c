
void FUN_0018a5b8(long param_1,void *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  ulong __n_00;
  
  __n_00 = *(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x20);
  __dest = (void *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x20));
  if (param_3 < __n_00) {
    memcpy(__dest,param_2,param_3);
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + param_3;
    __n = *(long *)(param_1 + 0x20) + param_3;
  }
  else {
    memcpy(__dest,param_2,__n_00);
    uVar2 = *(ulong *)(param_1 + 0x38);
    __n = param_3 - __n_00;
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + __n_00;
    uVar1 = *(long *)(param_1 + 0x20) + __n_00;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    *(ulong *)(param_1 + 0x20) = uVar1 - uVar3 * uVar2;
    if (__n == 0) {
      return;
    }
    memcpy(*(void **)(param_1 + 8),(void *)((long)param_2 + __n_00),__n);
    *(size_t *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + __n;
  }
  *(size_t *)(param_1 + 0x20) = __n;
  return;
}

