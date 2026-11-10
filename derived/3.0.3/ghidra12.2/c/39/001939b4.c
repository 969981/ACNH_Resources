
long FUN_001939b4(long param_1,ulong param_2)

{
  void *pvVar1;
  size_t sVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (uVar4 == 0) {
    pvVar1 = (void *)FUN_00196a4c(param_1,5);
    if (pvVar1 == (void *)0x0) {
      *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb;
      pvVar1 = (void *)FUN_00196a4c(param_1,5);
    }
    sVar2 = *(ulong *)(param_1 + 0x20);
    uVar4 = 5;
    if (4 < sVar2) {
      sVar2 = 5;
    }
    memcpy(pvVar1,*(void **)(param_1 + 0x10),sVar2);
    FUN_00187e4c(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x20) = 5;
    *(void **)(param_1 + 0x10) = pvVar1;
    uVar3 = *(long *)(param_1 + 0x28) + param_2;
    if (uVar3 < 5) goto LAB_00193ac8;
  }
  else {
    uVar3 = *(long *)(param_1 + 0x28) + param_2;
    if (uVar3 < uVar4) goto LAB_00193ac8;
  }
  uVar3 = (uVar3 * 0xf) / 10;
  if (uVar4 != uVar3) {
    pvVar1 = (void *)FUN_00196a4c(param_1,uVar3);
    if (pvVar1 == (void *)0x0) {
      *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb;
      pvVar1 = (void *)FUN_00196a4c(param_1,uVar3);
    }
    sVar2 = *(ulong *)(param_1 + 0x20);
    if (uVar3 <= *(ulong *)(param_1 + 0x20)) {
      sVar2 = uVar3;
    }
    memcpy(pvVar1,*(void **)(param_1 + 0x10),sVar2);
    FUN_00187e4c(*(undefined8 *)(param_1 + 0x10));
    *(ulong *)(param_1 + 0x20) = uVar3;
    *(void **)(param_1 + 0x10) = pvVar1;
  }
LAB_00193ac8:
  if (*(ulong *)(param_1 + 0x18) <= param_2) {
    *(ulong *)(param_1 + 0x18) = param_2 + 1;
  }
  return *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28) + param_2;
}

