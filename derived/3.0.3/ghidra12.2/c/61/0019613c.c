
void FUN_0019613c(long param_1,long param_2)

{
  size_t __n;
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) = uVar2 >> 3;
  *(uint *)(param_1 + 0x20) = ((uint)uVar2 ^ 0xffffffff) & 7;
  uVar2 = (uVar2 >> 3) + ((uVar2 & 7) + param_2 >> 3) + 1;
  uVar1 = *(ulong *)(lVar4 + 0x20);
  uVar3 = uVar1 - *(long *)(lVar4 + 0x28);
  if (uVar3 < uVar2) {
    if (uVar2 < (uVar3 >> 1) + uVar3) {
      if (uVar3 < 2) {
        return;
      }
      uVar2 = (uVar3 >> 1) + uVar1;
    }
    else {
      uVar2 = *(long *)(lVar4 + 0x28) + uVar2;
      if (uVar1 == uVar2) {
        return;
      }
    }
    __dest = (void *)FUN_00196a4c(lVar4,uVar2);
    if (__dest == (void *)0x0) {
      *(byte *)(lVar4 + 0x30) = *(byte *)(lVar4 + 0x30) & 0xfb;
      __dest = (void *)FUN_00196a4c(lVar4,uVar2);
    }
    __n = *(ulong *)(lVar4 + 0x20);
    if (uVar2 <= *(ulong *)(lVar4 + 0x20)) {
      __n = uVar2;
    }
    memcpy(__dest,*(void **)(lVar4 + 0x10),__n);
    FUN_00187e4c(*(undefined8 *)(lVar4 + 0x10));
    *(ulong *)(lVar4 + 0x20) = uVar2;
    *(void **)(lVar4 + 0x10) = __dest;
  }
  return;
}

