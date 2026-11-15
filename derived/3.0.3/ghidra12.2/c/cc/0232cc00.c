
undefined8 FUN_0232cc00(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar1 = PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar5 = &DAT_054f08c0;
      if (iVar2 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
        puVar5 = &DAT_054f08c0;
      }
    }
    else {
      puVar5 = &DAT_054f08c0;
    }
  }
  else {
    puVar5 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
  }
  local_30 = (undefined *)CONCAT44(local_30._4_4_,7);
  if ((*puVar5 >> 7 & 1) == 0) {
    if (*(long *)puVar1 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar5 = &DAT_054f08c0;
        if (iVar2 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar5 = &DAT_054f08c0;
      }
    }
    else {
      puVar5 = (uint *)(*(long *)puVar1 + 0x1fc);
    }
    *puVar5 = *puVar5 | 0x80;
    if ((*(long *)PTR_DAT_04bb39b0 == 0) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) {
      lVar4 = *(long *)PTR_DAT_04bb26a8;
      local_30 = PTR_DAT_04bb2020 + 0x10;
      puStack_28 = &DAT_04097630;
      for (lVar6 = *(long *)(lVar4 + 0x19f840); lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
        while (iVar2 = FUN_029ca720(&local_30,lVar6 + 0x20), -1 < iVar2) {
          if (iVar2 == 0) {
            uVar3 = *(undefined2 *)(lVar6 + 0x30);
            goto LAB_0232cd6c;
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 == 0) goto LAB_0232cd60;
        }
      }
LAB_0232cd60:
      uVar3 = 0xffff;
LAB_0232cd6c:
      FUN_02a0d880(lVar4 + 0xa7660,uVar3);
      return 1;
    }
  }
  return 0;
}

