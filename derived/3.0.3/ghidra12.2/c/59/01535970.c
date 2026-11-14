
void FUN_01535970(long param_1,float *param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar16 = *param_2;
  fVar15 = param_2[2];
  switch(param_3) {
  case 0:
    fVar17 = fVar15 + 5.0;
    fVar15 = fVar15 + 10.0;
    iVar10 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    iVar9 = iVar10 + 1;
    iVar8 = (int)((float)(int)(fVar16 + -10.0) / 5.0) - (uint)(fVar16 + -10.0 < 0.0);
    iVar6 = iVar8 + 4;
    *(int *)(param_1 + 0x10) = iVar8;
    *(int *)(param_1 + 0x14) = iVar10;
    *(int *)(param_1 + 0x20) = iVar6;
    iVar11 = iVar9;
    iVar7 = iVar9;
    iVar12 = iVar8;
    break;
  case 1:
    fVar17 = fVar16 + 5.0;
    fVar16 = fVar16 + 10.0;
    iVar8 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    iVar6 = iVar8 + 1;
    *(int *)(param_1 + 0x20) = iVar6;
    iVar10 = (int)((float)(int)(fVar15 + -10.0) / 5.0) - (uint)(fVar15 + -10.0 < 0.0);
    *(int *)(param_1 + 0x10) = iVar8;
    *(int *)(param_1 + 0x14) = iVar10;
    goto LAB_01535b64;
  case 2:
    fVar15 = fVar15 + -10.0;
    iVar8 = (int)((float)(int)(fVar16 + -10.0) / 5.0) - (uint)(fVar16 + -10.0 < 0.0);
    iVar6 = iVar8 + 4;
    *(int *)(param_1 + 0x20) = iVar6;
    iVar10 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    *(int *)(param_1 + 0x10) = iVar8;
    *(int *)(param_1 + 0x14) = iVar10;
    iVar9 = iVar10 + 1;
    iVar11 = iVar10;
    iVar7 = iVar10;
    iVar12 = iVar8;
    break;
  case 3:
    fVar16 = fVar16 + -10.0;
    iVar8 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    *(int *)(param_1 + 0x20) = iVar8 + 1;
    iVar10 = (int)((float)(int)(fVar15 + -10.0) / 5.0) - (uint)(fVar15 + -10.0 < 0.0);
    *(int *)(param_1 + 0x10) = iVar8;
    *(int *)(param_1 + 0x14) = iVar10;
    iVar6 = iVar8;
LAB_01535b64:
    iVar9 = iVar10 + 4;
    iVar11 = iVar10;
    iVar7 = iVar9;
    iVar12 = iVar6;
    break;
  default:
    iVar8 = *(int *)(param_1 + 0x10);
    iVar10 = *(int *)(param_1 + 0x14);
    iVar11 = 0;
    iVar9 = *(int *)(param_1 + 0x24);
    iVar12 = 0;
    iVar7 = 0;
    iVar6 = 0;
    iVar13 = 0;
    iVar14 = 0;
    goto LAB_01535b74;
  }
  *(int *)(param_1 + 0x24) = iVar9;
  iVar13 = iVar8;
  iVar14 = iVar10;
LAB_01535b74:
  *(int *)(param_1 + 0x48) = iVar13;
  *(int *)(param_1 + 0x4c) = iVar14;
  *(uint *)(param_1 + 0x58) = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  *(uint *)(param_1 + 0x5c) = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  lVar1 = param_1 + 0x30;
  if (iVar9 + 1 != iVar10) {
    iVar13 = *(int *)(param_1 + 0x20);
    iVar14 = iVar8;
    do {
      iVar2 = *(int *)(param_1 + 0x48);
      if (iVar2 <= iVar14 && iVar14 <= iVar2 + 10) {
        iVar3 = *(int *)(param_1 + 0x4c);
        if ((((iVar3 <= iVar10) && (iVar10 <= iVar3 + 10)) && ((uint)(iVar14 - iVar2) < 10)) &&
           ((uint)(iVar10 - iVar3) < 10)) {
          uVar4 = (iVar14 - iVar2) + (iVar10 - iVar3) * 10;
          lVar5 = (ulong)(uVar4 >> 5) * 4;
          *(uint *)(lVar1 + lVar5) = *(uint *)(lVar1 + lVar5) | 1 << (ulong)(uVar4 & 0x1f);
        }
      }
      if (iVar14 < iVar13) {
        iVar14 = iVar14 + 1;
      }
      else {
        iVar10 = iVar10 + 1;
        iVar14 = iVar8;
      }
    } while ((iVar8 != iVar14) || (iVar9 + 1 != iVar10));
    iVar13 = *(int *)(param_1 + 0x48);
  }
  iVar9 = iVar13 + 10;
  if ((iVar13 <= iVar12) && (iVar12 <= iVar9)) {
    iVar10 = *(int *)(param_1 + 0x4c);
    if ((iVar10 <= iVar11) &&
       (((iVar11 <= iVar10 + 10 && ((uint)(iVar12 - iVar13) < 10)) && ((uint)(iVar11 - iVar10) < 10)
        ))) {
      uVar4 = (iVar12 - iVar13) + (iVar11 - iVar10) * 10;
      lVar5 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar1 + lVar5) =
           *(uint *)(lVar1 + lVar5) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
      iVar13 = *(int *)(param_1 + 0x48);
      iVar9 = iVar13 + 10;
    }
  }
  if ((iVar6 <= iVar9) && (iVar13 <= iVar6)) {
    iVar9 = *(int *)(param_1 + 0x4c);
    if (((iVar9 <= iVar7) && ((iVar7 <= iVar9 + 10 && ((uint)(iVar6 - iVar13) < 10)))) &&
       ((uint)(iVar7 - iVar9) < 10)) {
      uVar4 = (iVar6 - iVar13) + (iVar7 - iVar9) * 10;
      lVar5 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar1 + lVar5) =
           *(uint *)(lVar1 + lVar5) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
    }
  }
  return;
}

