
float FUN_015cfbd4(long param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *(uint *)(param_1 + 0xc00);
  uVar2 = *(uint *)(param_1 + 0xc04);
  lVar5 = (long)(int)(uVar1 * param_3 + param_2);
  if (uVar2 <= param_3 || uVar1 <= param_2) {
    lVar5 = 0;
  }
  if ((int)param_2 < 0) {
    return 0.0;
  }
  lVar6 = *(long *)(param_1 + 0xc08);
  bVar3 = *(byte *)(lVar6 + lVar5 * 2 + 1);
  if ((bVar3 & 0xfd) == 0) {
    return 0.0;
  }
  if ((int)param_3 < 0) {
    return 0.0;
  }
  if (*param_4 <= (int)param_2) {
    return 0.0;
  }
  if (param_4[1] <= (int)param_3) {
    return 0.0;
  }
  lVar5 = *(long *)(param_4 + 2);
  iVar4 = param_2 + *param_4 * param_3;
  if (bVar3 == 5) {
    return *(float *)(lVar5 + (long)iVar4 * 0x3c + 0x1c);
  }
  if (bVar3 == 4) {
    return *(float *)(lVar5 + (long)iVar4 * 0x3c + 0x10);
  }
  if (param_2 == 0) {
    fVar10 = 1.0;
  }
  else {
    lVar7 = (long)(int)(uVar1 * param_3 + (param_2 - 1));
    if (uVar2 <= param_3 || uVar1 <= param_2 - 1) {
      lVar7 = 0;
    }
    fVar10 = 1.0;
    if ((*(byte *)(lVar6 + lVar7 * 2 + 1) & 0xfd) != 0) {
      fVar10 = 0.5;
    }
  }
  lVar7 = lVar5 + (long)iVar4 * 0x3c;
  fVar9 = *(float *)(lVar7 + 0x14);
  if (param_3 != 0) {
    lVar8 = (long)(int)(param_2 + uVar1 * (param_3 - 1));
    if (uVar2 <= param_3 - 1 || uVar1 <= param_2) {
      lVar8 = 0;
    }
    if ((*(byte *)(lVar6 + lVar8 * 2 + 1) & 0xfd) != 0) goto LAB_015cfcf0;
  }
  fVar9 = fVar9 + fVar10 * *(float *)(lVar5 + (long)iVar4 * 0x3c + 0x1c);
LAB_015cfcf0:
  if ((int)param_3 < param_4[1] + -1) {
    lVar5 = (long)(int)(param_2 + uVar1 * (param_3 + 1));
    if (uVar2 <= param_3 + 1 || uVar1 <= param_2) {
      lVar5 = 0;
    }
    if ((*(byte *)(lVar6 + lVar5 * 2 + 1) & 0xfd) != 0) {
      return fVar9;
    }
  }
  return fVar9 + fVar10 * *(float *)(lVar7 + 0x10);
}

