
float FUN_015cfd34(long param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = *(uint *)(param_1 + 0xc00);
  uVar2 = *(uint *)(param_1 + 0xc04);
  lVar6 = (long)(int)(uVar1 * param_3 + param_2);
  if (uVar2 <= param_3 || uVar1 <= param_2) {
    lVar6 = 0;
  }
  if ((int)param_2 < 0) {
    return 0.0;
  }
  lVar7 = *(long *)(param_1 + 0xc08);
  bVar4 = *(byte *)(lVar7 + lVar6 * 2 + 1);
  if ((bVar4 & 0xfd) == 0) {
    return 0.0;
  }
  if ((int)param_3 < 0) {
    return 0.0;
  }
  iVar3 = *param_4;
  if (iVar3 <= (int)param_2) {
    return 0.0;
  }
  if (param_4[1] <= (int)param_3) {
    return 0.0;
  }
  lVar6 = *(long *)(param_4 + 2);
  iVar5 = param_2 + iVar3 * param_3;
  if (bVar4 == 6) {
    return *(float *)(lVar6 + (long)iVar5 * 0x3c + 0x1c);
  }
  if (bVar4 == 3) {
    return *(float *)(lVar6 + (long)iVar5 * 0x3c + 0x10);
  }
  if ((int)param_2 < iVar3 + -1) {
    lVar8 = (long)(int)(uVar1 * param_3 + param_2 + 1);
    if (uVar2 <= param_3 || uVar1 <= param_2 + 1) {
      lVar8 = 0;
    }
    fVar11 = 1.0;
    if ((*(byte *)(lVar7 + lVar8 * 2 + 1) & 0xfd) != 0) {
      fVar11 = 0.5;
    }
  }
  else {
    fVar11 = 1.0;
  }
  lVar8 = lVar6 + (long)iVar5 * 0x3c;
  fVar10 = *(float *)(lVar8 + 0x18);
  if (param_3 != 0) {
    lVar9 = (long)(int)(param_2 + uVar1 * (param_3 - 1));
    if (uVar2 <= param_3 - 1 || uVar1 <= param_2) {
      lVar9 = 0;
    }
    if ((*(byte *)(lVar7 + lVar9 * 2 + 1) & 0xfd) != 0) goto LAB_015cfe58;
  }
  fVar10 = fVar10 + fVar11 * *(float *)(lVar6 + (long)iVar5 * 0x3c + 0x1c);
LAB_015cfe58:
  if ((int)param_3 < param_4[1] + -1) {
    lVar6 = (long)(int)(param_2 + uVar1 * (param_3 + 1));
    if (uVar2 <= param_3 + 1 || uVar1 <= param_2) {
      lVar6 = 0;
    }
    if ((*(byte *)(lVar7 + lVar6 * 2 + 1) & 0xfd) != 0) {
      return fVar10;
    }
  }
  return fVar10 + fVar11 * *(float *)(lVar8 + 0x10);
}

