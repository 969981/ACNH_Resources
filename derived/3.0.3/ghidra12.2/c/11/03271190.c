
void FUN_03271190(long param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  float fVar15;
  undefined **local_90;
  int local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_76;
  undefined8 local_70;
  undefined4 local_68;
  byte local_64;
  
  lVar14 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if (lVar14 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x220);
  lVar8 = FUN_033d0598(&DAT_0548e140);
  local_78 = 0;
  piVar2 = (int *)(lVar8 + 0x164);
  if (iVar4 != 1) {
    piVar2 = (int *)(lVar8 + 0x100);
  }
  local_7a = 1;
  iVar4 = *(int *)(param_1 + 0x228);
  uVar6 = 0;
  if (*(uint *)(param_1 + 0xaa8e8) != 0xffffffff) {
    uVar6 = *(uint *)(param_1 + 0xaa8e8);
  }
  local_70 = 0xc00000000;
  local_76 = 0x1000000;
  local_84 = 0;
  local_90 = &PTR_LAB_04b2b020;
  piVar3 = piVar2 + 0xc + uVar6;
  if (0xb < uVar6) {
    piVar3 = piVar2 + 0xc;
  }
  local_88 = iVar4;
  if (*piVar3 != -1) {
    iVar5 = *(int *)(param_1 + 0x220);
    lVar9 = FUN_033d0598(PTR_DAT_04bb32e0);
    lVar8 = lVar9 + 0x164;
    if (iVar5 != 1) {
      lVar8 = lVar9 + 0x100;
    }
    piVar3 = (int *)(lVar8 + 0x30) + uVar6;
    if (0xb < uVar6) {
      piVar3 = (int *)(lVar8 + 0x30);
    }
    iVar5 = *piVar3;
    if ((iVar5 != -1) && (0 < (int)*(uint *)(param_1 + 0x228))) {
      uVar11 = 0;
      do {
        if (*(int *)(param_1 + 0x46c10) == 0) {
          if (iVar5 == -1) goto LAB_03271300;
        }
        else {
          uVar12 = *(uint *)(*(long *)(*(long *)(param_1 + 0x230) + uVar11 * 8) + 0xc);
          iVar13 = -1;
          if (uVar12 <= *(int *)(param_1 + 0x46c10) - 1U) {
            iVar13 = **(int **)(*(long *)(param_1 + 0x46c18) + (long)(int)uVar12 * 8);
          }
          if (iVar5 == iVar13) goto LAB_03271300;
        }
        uVar11 = uVar11 + 1;
      } while (*(uint *)(param_1 + 0x228) != uVar11);
    }
    uVar11 = 0;
LAB_03271300:
    uVar10 = (uint)uVar11;
    uVar12 = uVar10;
    if ((param_2 & 1) == 0) {
      piVar3 = piVar2 + uVar6;
      if (0xb < uVar6) {
        piVar3 = piVar2;
      }
      if (-1 < *piVar3) {
        iVar4 = *(int *)(lVar14 + 0x2e8);
        iVar5 = 0;
        if (iVar4 != 0) {
          iVar5 = (int)uVar10 / iVar4;
        }
        uVar12 = iVar5 * iVar4 - iVar4 * *piVar3;
        uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
      }
    }
    else {
      if (iVar4 < 1) goto LAB_032713b4;
      iVar5 = *(int *)(lVar14 + 0x2e8);
      uVar6 = 0;
      if (iVar5 != 0) {
        uVar6 = *(int *)(lVar14 + 0x2f4) / iVar5;
      }
      if (uVar6 != 1) {
        iVar13 = 0;
        if (iVar5 != 0) {
          iVar13 = (int)uVar10 / iVar5;
        }
        fVar15 = (float)(int)uVar6 * 0.5;
        uVar12 = 0;
        if (fVar15 != (float)(int)fVar15) {
          uVar12 = (uint)(0.0 <= fVar15);
        }
        iVar7 = uVar12 + (int)fVar15;
        if ((uVar6 & 1) != 0) {
          iVar7 = uVar6 - (uVar12 + (int)fVar15);
        }
        iVar7 = iVar13 - iVar7;
        iVar1 = iVar7;
        if (iVar4 <= iVar7 * iVar5) {
          iVar1 = iVar13;
        }
        iVar4 = 0;
        if (-1 < iVar7) {
          iVar4 = iVar1;
        }
        uVar12 = iVar4 * iVar5;
      }
    }
    local_84 = CONCAT44(uVar10,uVar12);
  }
LAB_032713b4:
  local_64 = *(byte *)(param_1 + 0x1f8);
  local_77 = 1;
  if (7 < local_64) {
    local_64 = 0xff;
  }
  local_7c = 0x101;
  local_68 = 4;
  FUN_03864290(lVar14,&local_90);
  *(undefined4 *)(param_1 + 0xaa9fc) = *(undefined4 *)(param_1 + 0x228);
  FUN_0326ee10(param_1);
  return;
}

