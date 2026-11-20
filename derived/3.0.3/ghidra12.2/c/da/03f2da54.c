
undefined8 FUN_03f2da54(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x20) == 1)) {
    return 0;
  }
  DataMemoryBarrier(2,3);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    return 0;
  }
  iVar1 = *(int *)(lVar6 + 0x108);
  if (iVar1 != 6) {
    if (iVar1 == 1) goto LAB_03f2dabc;
    if (iVar1 != 0) {
      return 0;
    }
  }
  if (*(int *)(lVar6 + 0x10) == 7) {
    return 0;
  }
LAB_03f2dabc:
  if ((*(byte *)(param_1 + 8) >> 3 & 1) == 0) {
    return 0;
  }
  if (lVar6 == 0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(lVar6 + 0x30);
  if (((*PTR_DAT_04bb4458 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4458);
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bb4450);
    if ((uVar2 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
  }
  if (*(int *)(lVar6 + 0x10) != 0xe) {
    if (puVar5 != (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(lVar6 + 0x10) != 8) {
      return 0;
    }
    if (*(long *)(lVar6 + 0x30) == 0) {
      return 0;
    }
  }
  if ((*(uint *)(*(long *)(param_1 + 0x10) + 0xc) & 0x40008) == 0x40000) {
    return 0;
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x3f8);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  uVar4 = (**(code **)(*plVar3 + 0x70))();
  return uVar4;
}

