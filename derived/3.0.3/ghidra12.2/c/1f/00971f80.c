
undefined8 FUN_00971f80(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  ulong local_b8 [7];
  undefined *local_80;
  uint local_78;
  uint uStack_74;
  
  iVar5 = *(int *)(param_2 + 0x20);
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar8 = *(uint *)(param_2 + 0x14);
  uVar1 = *(int *)(param_2 + 0x24) + 1;
  if ((param_3 & 1) == 0) {
    if (uVar1 != uVar8) {
      fVar11 = 0.0;
      fVar10 = 0.0;
      bVar6 = false;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      uVar9 = uVar3;
      uVar7 = uVar3;
      do {
        if ((((-1 < (int)uVar9) && (-1 < (int)uVar8)) && (uVar9 < *(uint *)(param_1 + 0x38))) &&
           (uVar8 < *(uint *)(param_1 + 0x3c))) {
          local_b8[0] = local_b8[0] & 0xffffffff00000000;
          if ((*(uint *)(*(long *)(param_1 + 0x70) +
                        (long)(int)(uVar9 + *(uint *)(param_1 + 0x38) * uVar8) * 4) & 1) == 0) {
            return 0;
          }
          local_80 = puVar2;
          local_78 = uVar9;
          uStack_74 = uVar8;
          FUN_00962530(param_1,&local_80,local_b8);
          if (!bVar6) {
            fVar11 = (float)local_b8[0];
            fVar10 = (float)local_b8[0];
          }
          if ((float)local_b8[0] <= fVar10) {
            fVar10 = (float)local_b8[0];
          }
          if (fVar11 <= (float)local_b8[0]) {
            fVar11 = (float)local_b8[0];
          }
          if (0.11 < fVar11 - fVar10) {
            return 0;
          }
          iVar5 = *(int *)(param_2 + 0x20);
          bVar6 = true;
          uVar7 = *(uint *)(param_2 + 0x10);
        }
        if ((int)uVar9 < iVar5) {
          uVar9 = uVar9 + 1;
        }
        else {
          uVar8 = uVar8 + 1;
          uVar9 = uVar7;
        }
      } while ((uVar3 != uVar9) || (uVar1 != uVar8));
    }
  }
  else {
    if (uVar1 == uVar8) {
      return 1;
    }
    fVar10 = 0.0;
    fVar11 = 0.0;
    bVar6 = false;
    uVar7 = uVar3;
    do {
      if (((-1 < (int)uVar7) && (-1 < (int)uVar8)) &&
         ((uVar7 < *(uint *)(param_1 + 0x38) && (uVar8 < *(uint *)(param_1 + 0x3c))))) {
        uVar9 = uVar7 + *(uint *)(param_1 + 0x38) * uVar8;
        if ((*(uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar9 * 4) >> 1 & 1) == 0) {
          return 0;
        }
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x50) + (long)(int)uVar9 * 0x34);
        if (*(uint *)(param_1 + 0x48) <= uVar9) {
          puVar4 = (undefined8 *)0x0;
        }
        local_b8[0]._0_4_ = (float)*puVar4;
        if (!bVar6) {
          fVar10 = (float)local_b8[0];
          fVar11 = (float)local_b8[0];
        }
        if ((float)local_b8[0] <= fVar11) {
          fVar11 = (float)local_b8[0];
        }
        if (fVar10 <= (float)local_b8[0]) {
          fVar10 = (float)local_b8[0];
        }
        if (0.11 < fVar10 - fVar11) {
          return 0;
        }
        bVar6 = true;
      }
      if ((int)uVar7 < iVar5) {
        uVar7 = uVar7 + 1;
      }
      else {
        uVar8 = uVar8 + 1;
        uVar7 = uVar3;
      }
    } while ((uVar3 != uVar7) || (uVar1 != uVar8));
  }
  return 1;
}

