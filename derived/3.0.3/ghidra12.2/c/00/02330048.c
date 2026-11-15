
undefined8 FUN_02330048(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
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
      puVar3 = &DAT_054f0958;
    }
    else {
      puVar3 = &DAT_054f0958;
    }
  }
  else {
    uVar4 = (ulong)*(byte *)(param_1 + 0x1ee8);
    puVar3 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if (uVar4 < 8) {
      puVar3 = puVar3 + uVar4;
    }
  }
  if ((*(uint *)((long)puVar3 + 4) >> 10 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_054f0960);
        if (iVar1 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        puVar3 = &DAT_054f0958;
      }
      else {
        puVar3 = &DAT_054f0958;
      }
    }
    else {
      uVar4 = (ulong)*(byte *)(param_1 + 0x1ee8);
      puVar3 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if (uVar4 < 8) {
        puVar3 = puVar3 + uVar4;
      }
    }
    *(uint *)((long)puVar3 + 4) = *(uint *)((long)puVar3 + 4) & 0xfffffbff;
    FUN_02a55844(&DAT_05491780,0);
    uVar2 = 1;
  }
  return uVar2;
}

