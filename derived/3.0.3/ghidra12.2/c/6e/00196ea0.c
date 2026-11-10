
bool FUN_00196ea0(long param_1,long param_2)

{
  ulong uVar1;
  void *__dest;
  
  uVar1 = FUN_00196d50(*(undefined8 *)(param_1 + 0x20),
                       *(long *)(param_1 + 0x18) + param_2 + *(long *)(param_1 + 0x28));
  if (uVar1 <= *(ulong *)(param_1 + 0x20)) {
    return true;
  }
  __dest = (void *)FUN_00196a4c(param_1,uVar1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,*(void **)(param_1 + 0x10),*(size_t *)(param_1 + 0x20));
    FUN_00187e4c(*(undefined8 *)(param_1 + 0x10));
    *(ulong *)(param_1 + 0x20) = uVar1;
    *(void **)(param_1 + 0x10) = __dest;
  }
  return __dest != (void *)0x0;
}

