
undefined8 FUN_0232ed60(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar2 = PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar10 = &DAT_054f08c0;
      if (iVar3 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar10 = &DAT_054f08c0;
    }
  }
  else {
    puVar10 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,0xb);
  if ((*puVar10 >> 0xb & 1) == 0) {
    if (*(long *)puVar2 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar10 = &DAT_054f08c0;
        if (iVar3 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar10 = &DAT_054f08c0;
      }
    }
    else {
      puVar10 = (uint *)(*(long *)puVar2 + 0x1fc);
    }
    *puVar10 = *puVar10 | 0x800;
    puVar2 = PTR_DAT_04bb26a8;
    lVar7 = *(long *)PTR_DAT_04bb26a8;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    puStack_38 = &DAT_040cad8c;
    for (lVar11 = *(long *)(lVar7 + 0x19f840); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
      while (iVar3 = FUN_029ca720(&local_40,lVar11 + 0x20), -1 < iVar3) {
        if (iVar3 == 0) {
          uVar6 = *(undefined2 *)(lVar11 + 0x30);
          goto LAB_0232eeb8;
        }
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) goto LAB_0232eeac;
      }
    }
LAB_0232eeac:
    uVar6 = 0xffff;
LAB_0232eeb8:
    FUN_02a0d880(lVar7 + 0xa7660,uVar6);
    (**(code **)(DAT_05491770 + 0x18))(&DAT_05491770);
    uVar4 = FUN_006bd550(DAT_05491778,0);
    lVar11 = *(long *)puVar2;
    plVar1 = (long *)(lVar11 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar11 + 0xb3b58));
    if (*(int *)(lVar11 + 0xb3b88) < *(int *)(lVar11 + 0xb3ba0)) {
      puVar8 = *(undefined8 **)(lVar11 + 0xb3b90);
      if (puVar8 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar11 + 0xb3b90) = *puVar8;
      }
      *(undefined2 *)puVar8 = 0;
      plVar9 = puVar8 + 2;
      *plVar9 = 0;
      *(undefined1 *)((long)puVar8 + 2) = 0;
      *(undefined4 *)((long)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = 0x3f800000;
      puVar8[3] = 0;
      lVar7 = *plVar1;
      *plVar1 = (long)plVar9;
      puVar8[3] = plVar1;
      *plVar9 = lVar7;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar9;
      }
      *(int *)(lVar11 + 0xb3b88) = *(int *)(lVar11 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar11 + 0xb3b58));
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

