
void FUN_02e98820(long param_1,short param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined **local_40;
  undefined *puStack_38;
  
  plVar1 = (long *)(param_1 + 0x1ee50);
  if (param_2 == 0x10) {
    uVar6 = *(uint *)(param_1 + 0x1c1f8);
    iVar5 = -1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x1c1e0))) {
      lVar4 = param_1 + 0x1c1d0;
      uVar2 = uVar6 + 1 & 3;
      if (2 < uVar6) {
        uVar6 = uVar6 + 1 & 0xfffffffc;
        do {
          uVar6 = uVar6 - 4;
          lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
        } while (uVar6 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        lVar4 = *(long *)(lVar4 + 8);
      }
      iVar5 = -1;
      if ((lVar4 != 0) && (lVar4 = lVar4 - *(int *)(param_1 + 0x1c1e4), lVar4 != 0)) {
        iVar5 = *(int *)(lVar4 + 0x270);
      }
    }
    if (iVar5 == 6) {
      puStack_38 = PTR_LAB_04bc6328;
    }
    else {
      if (iVar5 == 8) {
        local_40 = &PTR_LAB_04ada810;
        goto LAB_02e98a04;
      }
      if (iVar5 == 9) {
        local_40 = &PTR_LAB_04ada7e8;
        goto LAB_02e98a04;
      }
      puStack_38 = PTR_LAB_04bc6330;
    }
  }
  else {
    if (param_2 != 0x100) {
      return;
    }
    uVar6 = *(uint *)(param_1 + 0x1c1f8);
    iVar5 = -1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x1c1e0))) {
      lVar4 = param_1 + 0x1c1d0;
      uVar2 = uVar6 + 1 & 3;
      if (2 < uVar6) {
        uVar6 = uVar6 + 1 & 0xfffffffc;
        do {
          uVar6 = uVar6 - 4;
          lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
        } while (uVar6 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        lVar4 = *(long *)(lVar4 + 8);
      }
      iVar5 = -1;
      if ((lVar4 != 0) && (lVar4 = lVar4 - *(int *)(param_1 + 0x1c1e4), lVar4 != 0)) {
        iVar5 = *(int *)(lVar4 + 0x270);
      }
    }
    if (iVar5 == 8) {
      local_40 = &PTR_LAB_04ada7c0;
      goto LAB_02e98a04;
    }
    if (iVar5 == 9) {
      local_40 = &PTR_LAB_04ada798;
      goto LAB_02e98a04;
    }
    puStack_38 = PTR_LAB_04bc6320;
  }
  local_40 = (undefined **)(PTR_DAT_04bc5a40 + 0x10);
LAB_02e98a04:
  (**(code **)(*plVar1 + 0x20))(plVar1);
  uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_02c5ef70(uVar3,&local_40);
  return;
}

