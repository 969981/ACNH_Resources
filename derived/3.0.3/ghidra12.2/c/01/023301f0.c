
bool FUN_023301f0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar2 = PTR_DAT_04bb4718;
  iVar1 = *(int *)(param_1 + 0x178);
  if (iVar1 == 0) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        puVar7 = &DAT_054f0958;
      }
      else {
        puVar7 = &DAT_054f0958;
      }
    }
    else {
      uVar6 = (ulong)*(byte *)(param_1 + 0x1ee8);
      puVar7 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if (uVar6 < 8) {
        puVar7 = puVar7 + uVar6;
      }
    }
    local_40 = (undefined *)CONCAT44(local_40._4_4_,0x2e);
    if ((*(uint *)((long)puVar7 + 4) >> 0xe & 1) == 0) {
      if (*(long *)puVar2 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f0960);
          puVar7 = &DAT_054f0958;
          if (iVar3 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar7 = &DAT_054f0958;
        }
      }
      else {
        uVar6 = (ulong)*(byte *)(param_1 + 0x1ee8);
        puVar7 = (undefined8 *)(*(long *)puVar2 + 0x204);
        if (uVar6 < 8) {
          puVar7 = puVar7 + uVar6;
        }
      }
      *(uint *)((long)puVar7 + 4) = *(uint *)((long)puVar7 + 4) | 0x4000;
    }
    lVar5 = *(long *)PTR_DAT_04bb26a8;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    puStack_38 = &DAT_040cade1;
    for (lVar8 = *(long *)(lVar5 + 0x19f840); lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
      while (iVar3 = FUN_029ca720(&local_40,lVar8 + 0x20), -1 < iVar3) {
        if (iVar3 == 0) {
          uVar4 = *(undefined2 *)(lVar8 + 0x30);
          goto LAB_02330368;
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) goto LAB_0233035c;
      }
    }
LAB_0233035c:
    uVar4 = 0xffff;
LAB_02330368:
    FUN_02a0d880(lVar5 + 0xa7660,uVar4);
  }
  return iVar1 == 0;
}

