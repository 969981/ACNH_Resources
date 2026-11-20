
undefined8 FUN_03f2d7f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x20) == 1)) {
    return 0;
  }
  DataMemoryBarrier(2,3);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return 0;
  }
  iVar1 = *(int *)(lVar4 + 0x108);
  if (iVar1 != 6) {
    if (iVar1 == 1) goto LAB_03f2d86c;
    if (iVar1 != 0) {
      return 0;
    }
  }
  if (*(int *)(lVar4 + 0x10) == 7) {
    return 0;
  }
LAB_03f2d86c:
  if ((*(byte *)(param_1 + 8) >> 3 & 1) == 0) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0x30);
  if (((*PTR_DAT_04bb4458 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4458);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4450);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
  }
  if (*(int *)(lVar4 + 0x10) != 0xe) {
    if (puVar3 != (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(lVar4 + 0x10) != 8) {
      return 0;
    }
    if (*(long *)(lVar4 + 0x30) == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
}

