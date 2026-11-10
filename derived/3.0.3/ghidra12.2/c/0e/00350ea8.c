
void FUN_00350ea8(float param_1,long param_2,long param_3,long param_4,int param_5,uint *param_6,
                 long param_7,long param_8,int param_9,long param_10,int param_11,byte param_12)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  lVar9 = *(long *)(param_2 + 0xa0);
  pfVar10 = (float *)(lVar9 + (long)param_11 * 0x38);
  lVar11 = (ulong)*(byte *)(*(long *)(param_2 + 0xa8) + (long)param_11) * 4;
  iVar6 = *(int *)(param_7 + lVar11);
  iVar7 = *(int *)(param_10 + lVar11);
  *(int *)(param_10 + lVar11) = iVar7 + 1;
  lVar11 = 0x40;
  if (param_4 != 0) {
    lVar11 = 0x60;
  }
  fVar19 = pfVar10[1];
  pfVar1 = (float *)(param_8 + param_3 + lVar11 * (ulong)(uint)(iVar7 + iVar6 * param_9));
  fVar16 = *pfVar10 * (float)param_6[4];
  fVar15 = fVar19 * (float)param_6[5];
  if ((param_12 & 1) == 0) {
    fVar17 = pfVar10[2];
  }
  else {
    fVar17 = fVar16 * -0.5;
  }
  lVar11 = lVar9 + (long)param_11 * 0x38;
  fVar17 = fVar17 + (float)param_6[2];
  uVar2 = *param_6;
  uVar3 = param_6[1];
  uVar13 = (uint)*(byte *)(lVar11 + 0x33);
  fVar18 = (fVar19 - fVar15) + (pfVar10[3] - (float)param_6[3]);
  uVar12 = ((uVar2 >> 0x18) * uVar13) / 0xff;
  uVar13 = ((uVar3 >> 0x18) * uVar13) / 0xff;
  fVar14 = (float)(int)*(short *)(lVar11 + 0x30) + (float)param_6[4] * (float)param_6[6];
  fVar19 = (fVar19 * fVar14) / *(float *)(param_2 + 0xbc);
  if (param_4 == 0) {
    lVar9 = lVar9 + (long)param_11 * 0x38;
    bVar8 = *(byte *)(lVar9 + 0x32);
    *pfVar1 = fVar16;
    pfVar1[1] = fVar15;
    pfVar1[2] = fVar17;
    pfVar1[3] = fVar18;
    uVar4 = *(undefined8 *)(lVar9 + 0x18);
    uVar5 = *(undefined8 *)(lVar9 + 0x20);
    pfVar1[8] = (float)(uVar2 & 0xffffff | uVar12 << 0x18);
    pfVar1[9] = (float)(uVar3 & 0xffffff | uVar13 << 0x18);
    pfVar1[0xb] = fVar19;
    pfVar1[0xf] = fVar14;
    *(undefined8 *)(pfVar1 + 4) = uVar4;
    *(undefined8 *)(pfVar1 + 6) = uVar5;
    pfVar1[10] = (float)~(uint)bVar8;
    return;
  }
  pfVar10 = (float *)(param_4 + (long)param_11 * 0x34);
  fVar20 = fVar18;
  if ((param_12 & 1) == 0) {
    if (param_5 == 1) {
      fVar20 = fVar15 + fVar18;
    }
    else {
      fVar20 = 0.0;
      if (param_5 == 0) {
        fVar20 = (fVar15 + fVar18 + fVar18) * 0.5;
      }
    }
    fVar20 = fVar20 - param_1;
  }
  lVar11 = param_4 + (long)param_11 * 0x34;
  fVar29 = *(float *)(lVar11 + 0x18);
  fVar28 = *(float *)(lVar11 + 0x1c);
  fVar27 = *(float *)(lVar11 + 8);
  fVar23 = *(float *)(lVar11 + 0xc);
  fVar22 = *(float *)(lVar11 + 0x10);
  fVar24 = *(float *)(lVar11 + 0x14);
  fVar25 = *pfVar10;
  fVar31 = pfVar10[1];
  fVar26 = *(float *)(lVar11 + 0x20);
  fVar21 = (*(float *)(lVar11 + 0x24) - fVar20) - (float)param_6[3];
  if ((param_12 & 1) == 0) {
    fVar21 = *(float *)(lVar11 + 0x24);
  }
  fVar30 = *(float *)(lVar11 + 0x28);
  if (*(char *)(param_2 + 0xbb) != '\0') {
    param_4 = param_4 + (long)param_11 * 0x34;
    uVar12 = (uVar12 * *(byte *)(param_4 + 0x2f) & 0xffff) / 0xff;
    uVar13 = (uVar13 * *(byte *)(param_4 + 0x33) & 0xffff) / 0xff;
  }
  lVar9 = lVar9 + (long)param_11 * 0x38;
  bVar8 = *(byte *)(lVar9 + 0x32);
  *pfVar1 = fVar16;
  pfVar1[1] = fVar15;
  pfVar1[2] = fVar17;
  pfVar1[3] = fVar18;
  uVar4 = *(undefined8 *)(lVar9 + 0x18);
  uVar5 = *(undefined8 *)(lVar9 + 0x20);
  pfVar1[8] = (float)(uVar2 & 0xffffff | uVar12 << 0x18);
  pfVar1[9] = (float)(uVar3 & 0xffffff | uVar13 << 0x18);
  pfVar1[0xb] = fVar19;
  pfVar1[0x10] = fVar23 * fVar22 * fVar25;
  pfVar1[0x11] = (fVar28 * fVar27 + fVar22 * fVar24 * fVar29) * fVar31;
  pfVar1[0x12] = fVar28 * fVar24 + fVar22 * -(fVar27 * fVar29);
  pfVar1[0x13] = (fVar16 + fVar17 + fVar17 + fVar14) * 0.5;
  pfVar1[0x14] = -(fVar23 * fVar28) * fVar25;
  pfVar1[0x15] = (fVar22 * fVar27 + fVar28 * -(fVar24 * fVar29)) * fVar31;
  pfVar1[0x16] = fVar22 * fVar24 + fVar28 * fVar29 * fVar27;
  pfVar1[0x17] = fVar20;
  pfVar1[0xc] = fVar26;
  pfVar1[0xd] = fVar21;
  pfVar1[0xe] = fVar30;
  pfVar1[0xf] = fVar14;
  pfVar1[10] = (float)~(uint)bVar8;
  *(undefined8 *)(pfVar1 + 4) = uVar4;
  *(undefined8 *)(pfVar1 + 6) = uVar5;
  return;
}

