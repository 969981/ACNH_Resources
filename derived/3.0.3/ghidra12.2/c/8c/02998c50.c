
void FUN_02998c50(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar8 = *(undefined8 *)(param_3 + 2);
  if (*(char *)(param_3 + 4) == '\x01') {
    uVar4 = *(uint *)(param_1 + 0x188);
    uVar11 = *(uint *)(param_1 + 0x198);
    uVar9 = *(uint *)(param_1 + 0x1a8);
    uVar5 = uVar4;
    if ((int)uVar4 < 0) {
      uVar5 = uVar4 + 1;
    }
    uVar7 = uVar11;
    if ((int)uVar11 < 0) {
      uVar7 = uVar11 + 1;
    }
    uVar5 = (int)uVar5 >> 1;
    uVar7 = (int)uVar7 >> 1;
    local_70 = uVar9;
    if ((int)uVar9 < 0) {
      local_70 = uVar9 + 1;
    }
    local_70 = (int)local_70 >> 1;
  }
  else {
    if (*(char *)(param_3 + 4) == '\0') {
      uVar4 = *(uint *)(param_1 + 0x188);
      local_70 = 0;
      uVar7 = 0;
      uVar5 = 0;
      uVar6 = uVar4;
      if ((int)uVar4 < 0) {
        uVar6 = uVar4 + 1;
      }
      uVar3 = *(uint *)(param_1 + 0x198);
      uVar11 = uVar3;
      if ((int)uVar3 < 0) {
        uVar11 = uVar3 + 1;
      }
      uVar11 = (int)uVar11 >> 1;
      iVar1 = *(int *)(param_1 + 0x1a8);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      uVar9 = iVar1 >> 1;
      uVar6 = (int)uVar6 >> 1;
      goto LAB_02998d24;
    }
    uVar4 = *(uint *)(param_1 + 0x188);
    uVar7 = 0;
    uVar5 = 0;
    uVar11 = *(uint *)(param_1 + 0x198);
    local_70 = 0;
    uVar9 = *(uint *)(param_1 + 0x1a8);
  }
  uVar6 = uVar4;
  uVar3 = uVar11;
LAB_02998d24:
  uVar2 = *param_3;
  uVar12 = uVar4;
  if (uVar5 <= uVar4) {
    uVar12 = uVar5;
  }
  if (uVar6 <= uVar4) {
    uVar4 = uVar6;
  }
  if (uVar4 != uVar12) {
    lVar10 = *(long *)(param_1 + 400);
    do {
      local_64 = uVar2;
      FUN_02998e3c(param_1,param_2,lVar10 + (long)(int)uVar12 * 0x50,&local_64,uVar8);
      uVar12 = uVar12 + 1;
    } while (uVar4 != uVar12);
    uVar3 = *(uint *)(param_1 + 0x198);
  }
  uVar5 = uVar3;
  if (uVar7 <= uVar3) {
    uVar5 = uVar7;
  }
  if (uVar11 <= uVar3) {
    uVar3 = uVar11;
  }
  if (uVar3 != uVar5) {
    lVar10 = *(long *)(param_1 + 0x1a0);
    do {
      local_68 = uVar2;
      FUN_02998e3c(param_1,param_2,lVar10 + (long)(int)uVar5 * 0x50,&local_68,uVar8);
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  uVar5 = *(uint *)(param_1 + 0x1a8);
  uVar11 = uVar5;
  if (local_70 <= uVar5) {
    uVar11 = local_70;
  }
  if (uVar9 <= uVar5) {
    uVar5 = uVar9;
  }
  if (uVar5 != uVar11) {
    lVar10 = *(long *)(param_1 + 0x1b0);
    do {
      local_6c = uVar2;
      FUN_02998e3c(param_1,param_2,lVar10 + (long)(int)uVar11 * 0x50,&local_6c,uVar8);
      uVar11 = uVar11 + 1;
    } while (uVar5 != uVar11);
  }
  return;
}

