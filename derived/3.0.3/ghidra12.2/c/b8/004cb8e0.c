
long FUN_004cb8e0(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined4 local_e8;
  
  FUN_004545f0(param_1 + 0x90);
  FUN_004ac600(param_1);
  iVar6 = *(int *)(param_1 + 0x20);
  iVar1 = iVar6;
  if (iVar6 < 2) {
    iVar1 = 1;
  }
  if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar1) {
    uVar3 = FUN_00426720(PTR_DAT_048607b8,iVar1,0x10,*(undefined8 *)(param_1 + 0x18));
    iVar6 = *(int *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  if (iVar1 - iVar6 == 0 || iVar1 < iVar6) {
    if (iVar1 < iVar6) {
      *(int *)(param_1 + 0x20) = iVar1;
    }
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar6 * 0x10);
    uVar2 = iVar1 - iVar6 & 1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 != iVar6 + 1) {
      iVar1 = (iVar6 + uVar2) - iVar1;
      puVar8 = puVar9;
      do {
        puVar9 = puVar8 + 4;
        *puVar8 = 0;
        puVar8[1] = 0xffffffff00000000;
        iVar1 = iVar1 + 2;
        puVar8[2] = 0;
        puVar8[3] = 0xffffffff00000000;
        puVar8 = puVar9;
      } while (iVar1 != 0);
    }
    if (uVar2 != 0) {
      *puVar9 = 0;
      puVar9[1] = 0xffffffff00000000;
    }
  }
  local_100 = 0;
  lVar4 = FUN_0049cee0((long *)(param_1 + 0xe8),&local_100);
  if (lVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = *(undefined4 *)(*(long *)(param_1 + 0xe8) + (long)*(int *)(lVar4 + 4) * 0x10 + 8);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x18);
  *puVar9 = 0;
  *(undefined4 *)(puVar9 + 1) = uVar7;
  local_100 = DAT_04c70e08;
  local_f8 = DAT_04c70e10;
  local_f0 = DAT_04c70e18;
  if ((DAT_04c70e18 & 1) != 0) {
    FUN_0043dd30(DAT_04c70e18 & 0xfffffffffffffffe);
  }
  local_e8 = DAT_04c70e20;
  FUN_004cbd30(param_1,0,&local_100);
  if ((local_f0 & 1) != 0) {
    FUN_0043dd50(local_f0 & 0xfffffffffffffffe);
  }
  FUN_004cbe70(&local_100,param_2,param_1 + 0x108,param_1 + 0x90,param_1,param_1 + 0x160,
               param_1 + 0x178,param_1 + 400);
  iVar1 = FUN_004cbff0(&local_100);
  if (iVar1 < 0) {
    param_1 = 0;
  }
  else {
    if (0 < *(int *)(param_1 + 0x20)) {
      lVar4 = 0;
      lVar11 = 8;
      do {
        iVar1 = *(int *)(*(long *)(param_1 + 0x18) + lVar11);
        if (iVar1 < 0) {
          if (*(long *)(*(long *)(param_1 + 8) + (long)-iVar1 * 8) != 0) {
            uVar2 = FUN_00428440();
            lVar10 = FUN_004283a0(uVar2 & 0x1f);
            goto joined_r0x004cbaa8;
          }
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(*(long *)(param_1 + 8) + (long)iVar1 * 8);
joined_r0x004cbaa8:
          if ((lVar10 != 0) && (uVar5 = FUN_00428370(lVar10), (uVar5 & 1) != 0)) {
            FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
            FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
          }
        }
        if (lVar10 != 0) {
          FUN_004cc8a0(param_1,lVar10);
        }
        lVar4 = lVar4 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar4 < *(int *)(param_1 + 0x20));
    }
    if (0 < *(int *)(param_1 + 0x40)) {
      lVar4 = 0;
      lVar11 = 8;
      do {
        lVar10 = *(long *)(*(long *)(param_1 + 8) +
                          (long)*(int *)(*(long *)(param_1 + 0x38) + lVar11) * 8);
        if ((lVar10 != 0) && (uVar5 = FUN_00428370(lVar10), (uVar5 & 1) != 0)) {
          FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
          FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
        }
        if (lVar10 != 0) {
          FUN_004cc8a0(param_1,lVar10);
        }
        lVar4 = lVar4 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar4 < *(int *)(param_1 + 0x40));
    }
  }
  FUN_004cc9f0(&local_100);
  return param_1;
}

