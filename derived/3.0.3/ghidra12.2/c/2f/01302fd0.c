
void FUN_01302fd0(long param_1,long param_2,uint param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar3 = *(int *)(param_4 + 8);
  iVar4 = *(int *)(param_4 + 0xc);
  iVar12 = *(int *)(param_5 + 8);
  iVar5 = *(int *)(param_5 + 0xc);
  iVar1 = iVar3;
  if (iVar12 <= iVar3) {
    iVar1 = iVar12;
  }
  if (iVar3 <= iVar12) {
    iVar3 = iVar12;
  }
  iVar12 = iVar4;
  if (iVar5 <= iVar4) {
    iVar12 = iVar5;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  fVar18 = (float)iVar1 * 10.0 + 2.5;
  fVar15 = (float)*(int *)(param_1 + 0x18) * 10.0 + 2.5;
  fVar16 = (float)*(int *)(param_1 + 0x1c) * 10.0 + 2.5;
  fVar14 = (float)iVar12 * 10.0 + 2.5;
  iVar5 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  fVar17 = (float)*(int *)(param_1 + 0x28) * 10.0 + 10.0 + -2.5;
  fVar15 = (float)*(int *)(param_1 + 0x2c) * 10.0 + 10.0 + -2.5;
  iVar1 = ((iVar3 - iVar1) - (uint)(fVar18 < 0.0)) + (int)((float)(int)fVar18 / 5.0);
  iVar7 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar8 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar3 = iVar5;
  if (iVar8 <= iVar5) {
    iVar3 = iVar8;
  }
  iVar9 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  if (iVar5 <= iVar8) {
    iVar5 = iVar8;
  }
  iVar8 = iVar7;
  if (iVar9 <= iVar7) {
    iVar8 = iVar9;
  }
  if (iVar7 <= iVar9) {
    iVar7 = iVar9;
  }
  if ((iVar3 <= iVar1) && (iVar1 <= iVar5)) {
    iVar4 = ((iVar4 - iVar12) - (uint)(fVar14 < 0.0)) + (int)((float)(int)fVar14 / 5.0);
    if ((iVar8 <= iVar4) && (iVar4 <= iVar7)) {
      uVar6 = (iVar1 - iVar3) * 2;
      uVar10 = (iVar4 - iVar8) * 2;
      iVar4 = uVar6 + (iVar4 - iVar8) * 0x18;
      param_1 = param_1 + 0x30;
      piVar11 = (int *)(param_2 + 0x14);
      lVar13 = -0x30;
      do {
        if (uVar10 < 0xc) {
          iVar12 = (int)lVar13;
          if ((piVar11[-3] != 5) && (uVar6 < 0xc)) {
            lVar2 = param_1 + (ulong)param_3 * 0x240;
            if (3 < param_3) {
              lVar2 = param_1;
            }
            *(int *)(lVar2 + (ulong)(iVar4 + iVar12 + 0x30) * 4) = piVar11[-3];
          }
          if ((piVar11[-2] != 5) && (((iVar1 - iVar3) * 2 | 1U) < 0xc)) {
            lVar2 = param_1 + (ulong)param_3 * 0x240;
            if (3 < param_3) {
              lVar2 = param_1;
            }
            *(int *)(lVar2 + (ulong)(iVar4 + iVar12 + 0x31) * 4) = piVar11[-2];
          }
          if ((piVar11[-1] != 5) && (uVar6 + 2 < 0xc)) {
            lVar2 = param_1 + (ulong)param_3 * 0x240;
            if (3 < param_3) {
              lVar2 = param_1;
            }
            *(int *)(lVar2 + (ulong)(iVar4 + iVar12 + 0x32) * 4) = piVar11[-1];
          }
          if ((*piVar11 != 5) && (uVar6 + 3 < 0xc)) {
            lVar2 = param_1 + (ulong)param_3 * 0x240;
            if (3 < param_3) {
              lVar2 = param_1;
            }
            *(int *)(lVar2 + (ulong)(iVar4 + iVar12 + 0x33) * 4) = *piVar11;
          }
        }
        lVar13 = lVar13 + 0xc;
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 4;
      } while (lVar13 != 0);
    }
  }
  return;
}

