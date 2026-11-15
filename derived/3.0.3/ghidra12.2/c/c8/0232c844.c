
undefined8 FUN_0232c844(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0960);
      if (iVar1 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
      puVar2 = &DAT_054f0958;
    }
    else {
      puVar2 = &DAT_054f0958;
    }
  }
  else {
    uVar3 = (ulong)*(byte *)(param_1 + 0x1ee8);
    puVar2 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if (uVar3 < 8) {
      puVar2 = puVar2 + uVar3;
    }
  }
  if ((*(uint *)((long)puVar2 + 4) >> 5 & 1) == 0) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_054f0960);
        if (iVar1 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        puVar2 = &DAT_054f0958;
      }
      else {
        puVar2 = &DAT_054f0958;
      }
    }
    else {
      uVar3 = (ulong)*(byte *)(param_1 + 0x1ee8);
      puVar2 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if (uVar3 < 8) {
        puVar2 = puVar2 + uVar3;
      }
    }
    *(uint *)((long)puVar2 + 4) = *(uint *)((long)puVar2 + 4) | 0x20;
  }
  return 0;
}

