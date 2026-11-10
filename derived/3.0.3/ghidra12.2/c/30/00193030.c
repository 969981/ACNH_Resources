
undefined8 FUN_00193030(long param_1,void *param_2,size_t param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  ulong uVar4;
  void *__dest;
  
  if (param_3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    uVar2 = uVar4;
    if (param_4 != 0xffffffffffffffff) {
      uVar2 = param_4;
    }
    uVar1 = uVar2 + param_3;
    uVar3 = uVar1;
    if (uVar1 <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar2 <= uVar4) {
      uVar1 = uVar3;
    }
    uVar4 = FUN_00196d50(*(undefined8 *)(param_1 + 0x20),uVar1 + *(long *)(param_1 + 0x28));
    if (*(ulong *)(param_1 + 0x20) == uVar4) {
      __dest = *(void **)(param_1 + 0x10);
    }
    else {
      __dest = (void *)FUN_00196a4c(param_1,uVar4);
      if (__dest == (void *)0x0) {
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb;
        __dest = (void *)FUN_00196a4c(param_1,uVar4);
      }
      __n = *(ulong *)(param_1 + 0x20);
      if (uVar4 <= *(ulong *)(param_1 + 0x20)) {
        __n = uVar4;
      }
      memcpy(__dest,*(void **)(param_1 + 0x10),__n);
      FUN_00187e4c(*(undefined8 *)(param_1 + 0x10));
      *(ulong *)(param_1 + 0x20) = uVar4;
      *(void **)(param_1 + 0x10) = __dest;
    }
    *(ulong *)(param_1 + 0x18) = uVar1;
    memcpy((void *)((long)__dest + uVar2 + *(long *)(param_1 + 0x28)),param_2,param_3);
  }
  return 1;
}

