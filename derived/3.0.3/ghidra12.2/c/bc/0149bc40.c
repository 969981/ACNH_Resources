
undefined8 FUN_0149bc40(float param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
      iVar5 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  FUN_017baf44(*(undefined4 *)(puVar13 + 7));
  uVar4 = *(uint *)(param_3 + 0x10);
  uVar7 = *(uint *)(param_3 + 0x14);
  param_1 = param_1 / 5.0;
  uVar1 = *(int *)(param_3 + 0x24) + 1;
  uVar8 = 0;
  if (param_1 != (float)(int)param_1) {
    uVar8 = (uint)(param_1 < 0.0);
  }
  if ((int)((int)param_1 - uVar8) < 1) {
    if (uVar1 != uVar7) {
      uVar8 = uVar4;
      do {
        if ((int)uVar8 < *(int *)(param_3 + 0x20)) {
          uVar8 = uVar8 + 1;
        }
        else {
          uVar7 = uVar7 + 1;
          uVar8 = uVar4;
        }
      } while ((uVar4 != uVar8) || (uVar1 != uVar7));
    }
  }
  else if (uVar1 != uVar7) {
    uVar9 = uVar4;
    do {
      lVar6 = param_2 + 0x280 + (ulong)uVar9 * 0x3000;
      if (0x3f < uVar9) {
        lVar6 = param_2 + 0x280;
      }
      lVar2 = lVar6 + (ulong)uVar7 * 0xc0;
      if (0x3f < uVar7) {
        lVar2 = lVar6;
      }
      if ((((int)uVar7 < 0x40) && ((int)uVar9 < 0x40)) && (-1 < (int)(uVar7 | uVar9))) {
        uVar11 = 0;
        pbVar12 = (byte *)(lVar2 + 1);
        do {
          if (((uVar11 < 8) && (pbVar12[-1] != 0)) && (1 < *pbVar12)) {
            return 1;
          }
          uVar11 = uVar11 + 1;
          pbVar12 = pbVar12 + 0x18;
        } while ((int)param_1 - uVar8 != uVar11);
      }
      uVar10 = (uint)(*(int *)(param_3 + 0x20) <= (int)uVar9);
      uVar3 = uVar4;
      if (uVar10 == 0) {
        uVar3 = uVar9 + 1;
      }
      uVar7 = uVar7 + uVar10;
      uVar9 = uVar3;
    } while ((uVar4 != uVar3) || (uVar1 != uVar7));
  }
  return 0;
}

