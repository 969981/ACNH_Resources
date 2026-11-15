
undefined8 FUN_0232efe0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar1 = PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar6 = &DAT_054f08c0;
      if (iVar2 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
        puVar6 = &DAT_054f08c0;
      }
    }
    else {
      puVar6 = &DAT_054f08c0;
    }
  }
  else {
    puVar6 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
  }
  local_30 = (undefined *)CONCAT44(local_30._4_4_,0xb);
  if ((*puVar6 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (*(long *)puVar1 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar6 = &DAT_054f08c0;
        if (iVar2 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar6 = &DAT_054f08c0;
      }
    }
    else {
      puVar6 = (uint *)(*(long *)puVar1 + 0x1fc);
    }
    *puVar6 = *puVar6 & 0xfffff7ff;
    lVar5 = *(long *)PTR_DAT_04bb26a8;
    local_30 = PTR_DAT_04bb2020 + 0x10;
    puStack_28 = &DAT_040f0055;
    for (lVar7 = *(long *)(lVar5 + 0x19f840); lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
      while (iVar2 = FUN_029ca720(&local_30,lVar7 + 0x20), -1 < iVar2) {
        if (iVar2 == 0) {
          uVar4 = *(undefined2 *)(lVar7 + 0x30);
          goto LAB_0232f138;
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) goto LAB_0232f12c;
      }
    }
LAB_0232f12c:
    uVar4 = 0xffff;
LAB_0232f138:
    FUN_02a0d880(lVar5 + 0xa7660,uVar4);
    FUN_02a55844(&DAT_05491770,0);
    uVar3 = 1;
  }
  return uVar3;
}

