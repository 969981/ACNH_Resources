
byte FUN_029cf940(long param_1,uint *param_2,long *param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  
  uVar6 = *(uint *)(param_3 + 2);
  if (*(char *)(param_1 + 2) == '\0') {
    uVar14 = *param_2 ^ *param_2 << 0xb;
    uVar5 = param_2[3];
    *param_2 = param_2[1];
    param_2[1] = param_2[2];
    uVar14 = uVar14 >> 8 ^ uVar5 >> 0x13 ^ uVar14 ^ uVar5;
    param_2[2] = uVar5;
    param_2[3] = uVar14;
    iVar12 = *(int *)((long)param_3 + 0xc) + (int)((ulong)uVar6 * (ulong)uVar14 >> 0x20);
    iVar10 = 0;
    if ((int)param_3[1] <= iVar12) {
      iVar10 = (int)param_3[1];
    }
    return *(byte *)(*param_3 + (long)(iVar12 - iVar10));
  }
  if (uVar6 == 0) {
    bVar8 = 0;
    bVar11 = 0;
    bVar9 = 0;
  }
  else {
    iVar10 = (int)param_3[1];
    iVar4 = *(int *)((long)param_3 + 0xc);
    lVar13 = *param_3;
    bVar9 = *(byte *)(param_1 + 4);
    iVar12 = 0;
    if (iVar10 <= iVar4) {
      iVar12 = iVar10;
    }
    bVar7 = *(byte *)(lVar13 + (iVar4 - iVar12));
    if (bVar7 < bVar9) {
      uVar14 = 1;
      do {
        bVar8 = bVar7;
        if (uVar6 == uVar14) {
          bVar11 = 0;
          bVar9 = 0;
          goto LAB_029cfa60;
        }
        iVar12 = iVar4 + uVar14;
        uVar14 = uVar14 + 1;
        iVar3 = 0;
        if (iVar10 <= iVar12) {
          iVar3 = iVar10;
        }
        bVar7 = *(byte *)(lVar13 + (iVar12 - iVar3));
      } while (bVar7 < bVar9);
    }
    else {
      bVar8 = 0;
      uVar14 = 1;
    }
    bVar11 = 0;
    if (bVar7 == bVar9 && (param_4 & 1) == 0) {
      bVar11 = bVar7;
    }
    if (uVar14 == uVar6) {
      bVar9 = 0;
    }
    else {
      iVar12 = 0;
      if (iVar10 <= (int)(uVar14 + iVar4)) {
        iVar12 = iVar10;
      }
      bVar9 = *(byte *)(lVar13 + (int)((uVar14 + iVar4) - iVar12));
    }
  }
LAB_029cfa60:
  uVar1 = 1;
  if (bVar8 != 0) {
    uVar1 = 2;
  }
  uVar6 = param_2[3];
  uVar2 = (ulong)(bVar8 != 0);
  if (bVar11 != 0) {
    uVar2 = uVar1;
  }
  if (bVar9 != 0) {
    uVar2 = uVar2 + 1;
  }
  uVar14 = *param_2 ^ *param_2 << 0xb;
  *param_2 = param_2[1];
  param_2[1] = param_2[2];
  uVar14 = uVar14 >> 8 ^ uVar6 >> 0x13 ^ uVar14 ^ uVar6;
  param_2[2] = uVar6;
  param_2[3] = uVar14;
  iVar10 = (int)(uVar2 * uVar14 >> 0x20);
  iVar12 = 0;
  if (bVar8 != 0) {
    if (iVar10 == 0) {
      return bVar8;
    }
    iVar12 = 1;
  }
  if (bVar11 != 0) {
    if (iVar12 == iVar10) {
      return bVar11;
    }
    iVar12 = iVar12 + 1;
  }
  if (bVar9 == 0 || iVar12 != iVar10) {
    bVar9 = 0;
  }
  return bVar9;
}

