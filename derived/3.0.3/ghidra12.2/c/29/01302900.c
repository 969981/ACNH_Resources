
ulong FUN_01302900(ulong param_1,uint param_2,long param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar14 = (float)*(int *)(param_1 + 0x18) * 10.0 + 2.5;
  fVar15 = (float)*(int *)(param_1 + 0x1c) * 10.0 + 2.5;
  fVar17 = (float)*(int *)(param_3 + 8) * 10.0 + 2.5;
  fVar13 = (float)*(int *)(param_3 + 0xc) * 10.0 + 2.5;
  iVar6 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  fVar16 = (float)*(int *)(param_1 + 0x28) * 10.0 + 10.0 + -2.5;
  fVar17 = (float)*(int *)(param_1 + 0x2c) * 10.0 + 10.0 + -2.5;
  iVar7 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar8 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  iVar9 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar1 = iVar7;
  if (iVar9 <= iVar7) {
    iVar1 = iVar9;
  }
  iVar10 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  if (iVar7 <= iVar9) {
    iVar7 = iVar9;
  }
  iVar9 = iVar8;
  if (iVar10 <= iVar8) {
    iVar9 = iVar10;
  }
  if (iVar8 <= iVar10) {
    iVar8 = iVar10;
  }
  if ((iVar1 <= iVar6) && (iVar6 <= iVar7)) {
    iVar7 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    iVar10 = iVar7 - iVar9;
    if ((iVar9 <= iVar7) &&
       (((iVar7 <= iVar8 && (iVar10 < 0x3fffffff)) && (iVar6 - iVar1 < 0x3fffffff)))) {
      uVar5 = (iVar6 - iVar1) * 2;
      uVar11 = iVar10 * 2;
      uVar12 = uVar5 + iVar10 * 0x18;
      iVar1 = uVar11 + 3;
      uVar2 = param_1 + 0x30;
      do {
        if (uVar11 < 0xc) {
          if (uVar5 < 0xc) {
            uVar3 = uVar2 + (ulong)param_2 * 0x240;
            if (3 < param_2) {
              uVar3 = uVar2;
            }
            if (*(uint *)(uVar3 + (ulong)uVar12 * 4) == param_4) {
              uVar3 = uVar2 + (ulong)param_2 * 0x240;
              if (3 < param_2) {
                uVar3 = uVar2;
              }
              *(undefined4 *)(uVar3 + (ulong)uVar12 * 4) = param_5;
            }
          }
          if ((uVar5 | 1) < 0xc) {
            uVar3 = uVar2 + (ulong)param_2 * 0x240;
            if (3 < param_2) {
              uVar3 = uVar2;
            }
            if (*(uint *)(uVar3 + (ulong)(uVar12 + 1) * 4) == param_4) {
              uVar3 = uVar2 + (ulong)param_2 * 0x240;
              if (3 < param_2) {
                uVar3 = uVar2;
              }
              *(undefined4 *)(uVar3 + (ulong)(uVar12 + 1) * 4) = param_5;
            }
          }
          if (uVar5 + 2 < 0xc) {
            uVar3 = uVar2 + (ulong)param_2 * 0x240;
            if (3 < param_2) {
              uVar3 = uVar2;
            }
            if (*(uint *)(uVar3 + (ulong)(uVar12 + 2) * 4) == param_4) {
              uVar3 = uVar2 + (ulong)param_2 * 0x240;
              if (3 < param_2) {
                uVar3 = uVar2;
              }
              *(undefined4 *)(uVar3 + (ulong)(uVar12 + 2) * 4) = param_5;
            }
          }
          if (uVar5 + 3 < 0xc) {
            uVar3 = uVar2 + (ulong)param_2 * 0x240;
            if (3 < param_2) {
              uVar3 = uVar2;
            }
            uVar4 = *(uint *)(uVar3 + (ulong)(uVar12 + 3) * 4);
            param_1 = (ulong)uVar4;
            if (uVar4 == param_4) {
              param_1 = uVar2 + (ulong)param_2 * 0x240;
              if (3 < param_2) {
                param_1 = uVar2;
              }
              *(undefined4 *)(param_1 + (ulong)(uVar12 + 3) * 4) = param_5;
            }
          }
          else {
            param_1 = (ulong)param_4;
          }
        }
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + 0xc;
      } while ((int)uVar11 <= iVar1);
    }
  }
  return param_1;
}

