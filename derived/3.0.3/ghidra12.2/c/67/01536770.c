
void FUN_01536770(long param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  
  fVar13 = *param_2;
  fVar12 = param_2[2];
  iVar15 = 0;
  iVar9 = 0;
  iVar10 = 0;
  iVar14 = 0;
  switch(param_3) {
  case 1:
    iVar14 = (int)fVar13;
    iVar15 = (int)fVar12;
    bVar7 = fVar13 < 0.0;
    bVar8 = fVar12 < 0.0;
    fVar13 = fVar13 + 10.0;
    fVar12 = fVar12 + 10.0;
    iVar9 = (int)((float)iVar14 / 5.0) - (uint)bVar7;
    iVar10 = (int)((float)iVar15 / 5.0) - (uint)bVar8;
    iVar14 = iVar9 + 2;
    iVar15 = iVar10 + 2;
    break;
  case 2:
  case 4:
  case 6:
    break;
  case 3:
    bVar7 = fVar13 < 0.0;
    iVar14 = (int)fVar13;
    fVar13 = fVar13 + 10.0;
    iVar9 = (int)((float)iVar14 / 5.0) - (uint)bVar7;
    iVar15 = (int)((float)(int)(fVar12 + -10.0) / 5.0) - (uint)(fVar12 + -10.0 < 0.0);
    iVar14 = iVar9 + 2;
    goto LAB_015368a4;
  case 5:
    fVar13 = fVar13 + -10.0;
    iVar9 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    iVar15 = (int)((float)(int)(fVar12 + -10.0) / 5.0) - (uint)(fVar12 + -10.0 < 0.0);
    iVar14 = iVar9;
LAB_015368a4:
    fVar12 = fVar12 + -10.0;
    iVar10 = iVar15;
    break;
  case 7:
    fVar13 = fVar13 + -10.0;
    iVar14 = (int)fVar12;
    bVar7 = fVar12 < 0.0;
    fVar12 = fVar12 + 10.0;
    iVar9 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    iVar10 = (int)((float)iVar14 / 5.0) - (uint)bVar7;
    iVar15 = iVar10 + 2;
    iVar14 = iVar9;
    break;
  default:
    iVar15 = 0;
    iVar9 = 0;
    iVar10 = 0;
  }
  *(int *)(param_1 + 0x20) = iVar9 + 2;
  *(int *)(param_1 + 0x24) = iVar10 + 2;
  iVar1 = iVar10 + 3;
  *(int *)(param_1 + 0x10) = iVar9;
  *(int *)(param_1 + 0x14) = iVar10;
  *(int *)(param_1 + 0x48) = iVar9;
  *(int *)(param_1 + 0x4c) = iVar10;
  *(uint *)(param_1 + 0x58) = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  *(uint *)(param_1 + 0x5c) = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  lVar2 = param_1 + 0x30;
  iVar11 = iVar9;
  do {
    iVar3 = *(int *)(param_1 + 0x48);
    if (iVar3 <= iVar11 && iVar11 <= iVar3 + 10) {
      iVar4 = *(int *)(param_1 + 0x4c);
      if ((((iVar4 <= iVar10) && (iVar10 <= iVar4 + 10)) && ((uint)(iVar11 - iVar3) < 10)) &&
         ((uint)(iVar10 - iVar4) < 10)) {
        uVar5 = (iVar11 - iVar3) + (iVar10 - iVar4) * 10;
        lVar6 = (ulong)(uVar5 >> 5) * 4;
        *(uint *)(lVar2 + lVar6) = *(uint *)(lVar2 + lVar6) | 1 << (ulong)(uVar5 & 0x1f);
      }
    }
    if (iVar11 < iVar9 + 2) {
      iVar11 = iVar11 + 1;
    }
    else {
      iVar10 = iVar10 + 1;
      iVar11 = iVar9;
    }
  } while ((iVar9 != iVar11) || (iVar1 != iVar10));
  iVar9 = *(int *)(param_1 + 0x48);
  iVar1 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iVar10 = iVar9 + 10;
  if (iVar9 <= iVar1 && iVar1 <= iVar10) {
    iVar3 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
    iVar11 = *(int *)(param_1 + 0x4c);
    if ((iVar11 <= iVar3 && iVar3 <= iVar11 + 10) &&
       ((uint)(iVar1 - iVar9) < 10 && (uint)(iVar3 - iVar11) < 10)) {
      uVar5 = (iVar1 - iVar9) + (iVar3 - iVar11) * 10;
      lVar6 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar2 + lVar6) =
           *(uint *)(lVar2 + lVar6) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
      iVar9 = *(int *)(param_1 + 0x48);
      iVar10 = iVar9 + 10;
    }
  }
  if ((iVar14 <= iVar10) && (iVar9 <= iVar14)) {
    iVar10 = *(int *)(param_1 + 0x4c);
    if ((iVar10 <= iVar15) &&
       (((iVar15 <= iVar10 + 10 && ((uint)(iVar14 - iVar9) < 10)) && ((uint)(iVar15 - iVar10) < 10))
       )) {
      uVar5 = (iVar14 - iVar9) + (iVar15 - iVar10) * 10;
      lVar6 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar2 + lVar6) =
           *(uint *)(lVar2 + lVar6) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
    }
  }
  return;
}

