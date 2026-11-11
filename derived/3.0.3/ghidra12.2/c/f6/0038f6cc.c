
void FUN_0038f6cc(long param_1)

{
  uint uVar1;
  void *__s;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x18);
  __s = *(void **)(*(long *)(param_1 + 0x18) + 0x10);
  *(void **)(*(long *)(param_1 + 0x18) + 0x10) = (void *)((long)__s + (long)(int)uVar1 * 0x18);
  if (0 < (int)uVar1 && __s != (void *)0x0) {
    memset(__s,0,(ulong)uVar1 * 0x18);
  }
  *(void **)(param_1 + 0x28) = __s;
  return;
}

