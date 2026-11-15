
bool FUN_0232e2f0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar2 = PTR_DAT_04bb4718;
  iVar1 = *(int *)(param_1 + 0x178);
  if (iVar1 == 0) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar6 = &DAT_054f08c0;
        if (iVar3 != 0) {
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
    local_40 = (undefined *)CONCAT44(local_40._4_4_,9);
    if ((*puVar6 >> 9 & 1) == 0) {
      if (*(long *)puVar2 == 0) {
        if ((DAT_054f08c8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
          puVar6 = &DAT_054f08c0;
          if (iVar3 != 0) {
            DAT_054f08c0 = 0;
            __cxa_guard_release(&DAT_054f08c8);
          }
        }
        else {
          puVar6 = &DAT_054f08c0;
        }
      }
      else {
        puVar6 = (uint *)(*(long *)puVar2 + 0x1fc);
      }
      *puVar6 = *puVar6 | 0x200;
    }
    lVar5 = *(long *)PTR_DAT_04bb26a8;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    puStack_38 = &DAT_04087e5f;
    for (lVar7 = *(long *)(lVar5 + 0x19f840); lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
      while (iVar3 = FUN_029ca720(&local_40,lVar7 + 0x20), -1 < iVar3) {
        if (iVar3 == 0) {
          uVar4 = *(undefined2 *)(lVar7 + 0x30);
          goto LAB_0232e438;
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) goto LAB_0232e42c;
      }
    }
LAB_0232e42c:
    uVar4 = 0xffff;
LAB_0232e438:
    FUN_02a0d880(lVar5 + 0xa7660,uVar4);
  }
  return iVar1 == 0;
}

