
undefined8 FUN_0232c350(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0960);
      if (iVar2 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
      puVar6 = &DAT_054f0958;
    }
    else {
      puVar6 = &DAT_054f0958;
    }
  }
  else {
    uVar5 = (ulong)*(byte *)(param_1 + 0x1ee8);
    puVar6 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if (uVar5 < 8) {
      puVar6 = puVar6 + uVar5;
    }
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,0x23);
  if ((*(uint *)((long)puVar6 + 4) >> 3 & 1) != 0) {
    if (*(long *)puVar1 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f0960);
        puVar6 = &DAT_054f0958;
        if (iVar2 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar6 = &DAT_054f0958;
      }
    }
    else {
      uVar5 = (ulong)*(byte *)(param_1 + 0x1ee8);
      puVar6 = (undefined8 *)(*(long *)puVar1 + 0x204);
      if (uVar5 < 8) {
        puVar6 = puVar6 + uVar5;
      }
    }
    *(uint *)((long)puVar6 + 4) = *(uint *)((long)puVar6 + 4) & 0xfffffff7;
    if ((*(long *)PTR_DAT_04bb39b0 == 0) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) {
      lVar4 = *(long *)PTR_DAT_04bb26a8;
      local_40 = PTR_DAT_04bb2020 + 0x10;
      puStack_38 = &DAT_040a6f65;
      for (lVar7 = *(long *)(lVar4 + 0x19f840); lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
        while (iVar2 = FUN_029ca720(&local_40,lVar7 + 0x20), -1 < iVar2) {
          if (iVar2 == 0) {
            uVar3 = *(undefined2 *)(lVar7 + 0x30);
            goto LAB_0232c4fc;
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) goto LAB_0232c4f0;
        }
      }
LAB_0232c4f0:
      uVar3 = 0xffff;
LAB_0232c4fc:
      FUN_02a0d880(lVar4 + 0xa7660,uVar3);
      FUN_02a55844(&DAT_05491770,0);
      return 1;
    }
  }
  return 0;
}

