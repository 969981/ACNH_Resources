
long FUN_00193c08(long param_1,long param_2)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  undefined1 uVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    lVar4 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar5 = *(long *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 0x31) = 0;
    uVar1 = lVar5 + lVar4;
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 4;
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      __dest = (void *)FUN_00196a4c(param_1,uVar1);
      if (__dest == (void *)0x0) {
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb;
        __dest = (void *)FUN_00196a4c(param_1,uVar1);
      }
      __n = *(ulong *)(param_1 + 0x20);
      if (uVar1 <= *(ulong *)(param_1 + 0x20)) {
        __n = uVar1;
      }
      memcpy(__dest,*(void **)(param_1 + 0x10),__n);
      FUN_00187e4c(*(undefined8 *)(param_1 + 0x10));
      *(ulong *)(param_1 + 0x20) = uVar1;
      *(void **)(param_1 + 0x10) = __dest;
    }
    FUN_00193030(param_1,*(undefined8 *)(param_2 + 0x10),uVar1,0xffffffffffffffff);
    lVar4 = *(long *)(param_2 + 0x28);
    bVar2 = *(byte *)(param_2 + 0x30);
    lVar5 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4;
    *(byte *)(param_1 + 0x30) = bVar2 & 0xfb | *(byte *)(param_1 + 0x30) & 4;
    uVar3 = *(undefined1 *)(param_2 + 0x31);
    *(long *)(param_1 + 0x18) = (*(long *)(param_1 + 0x18) - lVar4) + lVar5;
    *(undefined1 *)(param_1 + 0x31) = uVar3;
  }
  return param_1;
}

