
long FUN_001968b4(long param_1,long param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  void *__dest;
  uint local_24;
  
  FUN_00196210(param_1,&local_24,0x20);
  uVar2 = (ulong)local_24;
  if (*(ulong *)(param_1 + 0x28) <
      (ulong)(local_24 << 3) + *(long *)(param_1 + 0x18) * 8 + (ulong)(7 - *(int *)(param_1 + 0x20))
     ) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else if (*(char *)(param_1 + 8) == '\0') {
    if (local_24 == 0) {
      *(undefined8 *)(param_2 + 0x18) = 0;
      return param_1;
    }
    lVar3 = *(long *)(param_2 + 0x28);
    uVar1 = lVar3 + uVar2;
    if (*(ulong *)(param_2 + 0x20) == uVar1) {
      __dest = *(void **)(param_2 + 0x10);
    }
    else {
      __dest = (void *)FUN_00196a4c(param_2,uVar1);
      if (__dest == (void *)0x0) {
        *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfb;
        __dest = (void *)FUN_00196a4c(param_2,uVar1);
      }
      __n = *(ulong *)(param_2 + 0x20);
      if (uVar1 <= *(ulong *)(param_2 + 0x20)) {
        __n = uVar1;
      }
      memcpy(__dest,*(void **)(param_2 + 0x10),__n);
      FUN_00187e4c(*(undefined8 *)(param_2 + 0x10));
      lVar3 = *(long *)(param_2 + 0x28);
      *(ulong *)(param_2 + 0x20) = uVar1;
      *(void **)(param_2 + 0x10) = __dest;
      uVar2 = (ulong)local_24;
    }
    FUN_00196210(param_1,(long)__dest + lVar3,uVar2 << 3);
    *(ulong *)(param_2 + 0x18) = (ulong)local_24;
    return param_1;
  }
  return param_1;
}

