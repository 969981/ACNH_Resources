
void FUN_00351134(float param_1,long param_2,long param_3,long param_4,int param_5,long param_6,
                 long param_7,int param_8,long param_9,int param_10,byte param_11)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  long lVar23;
  long lVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  lVar24 = *(long *)(param_2 + 0xa0);
  lVar23 = (ulong)*(byte *)(*(long *)(param_2 + 0xa8) + (long)param_10) * 4;
  iVar4 = *(int *)(param_9 + lVar23);
  iVar5 = *(int *)(param_6 + lVar23);
  *(int *)(param_9 + lVar23) = iVar4 + 1;
  pfVar25 = (float *)(lVar24 + (long)param_10 * 0x38);
  lVar23 = 0x40;
  if (param_4 != 0) {
    lVar23 = 0x60;
  }
  fVar29 = *pfVar25;
  fVar28 = pfVar25[1];
  pfVar1 = (float *)(param_7 + param_3 + lVar23 * (ulong)(uint)(iVar4 + iVar5 * param_8));
  if ((param_11 & 1) == 0) {
    fVar30 = pfVar25[2];
  }
  else {
    fVar30 = fVar29 * -0.5;
  }
  fVar31 = pfVar25[3];
  lVar23 = lVar24 + (long)param_10 * 0x38;
  fVar26 = (float)(int)*(short *)(lVar23 + 0x30);
  fVar27 = (fVar28 * fVar26) / *(float *)(param_2 + 0xbc);
  if (param_4 == 0) {
    lVar24 = lVar24 + (long)param_10 * 0x38;
    bVar6 = *(byte *)(lVar24 + 0x32);
    *pfVar1 = fVar29;
    pfVar1[1] = fVar28;
    pfVar1[2] = fVar30;
    pfVar1[3] = fVar31;
    uVar2 = *(undefined8 *)(lVar24 + 0x20);
    *(undefined8 *)(pfVar1 + 4) = *(undefined8 *)(lVar24 + 0x18);
    *(undefined8 *)(pfVar1 + 6) = uVar2;
    pfVar1[8] = *(float *)(lVar23 + 0x10);
    fVar28 = *(float *)(lVar23 + 0x14);
    pfVar1[0xb] = fVar27;
    pfVar1[0xf] = fVar26;
    pfVar1[9] = fVar28;
    pfVar1[10] = (float)(uint)bVar6;
    return;
  }
  pfVar25 = (float *)(param_4 + (long)param_10 * 0x34);
  fVar32 = fVar31;
  if ((param_11 & 1) == 0) {
    if (param_5 == 1) {
      fVar32 = fVar28 + fVar31;
    }
    else {
      fVar32 = 0.0;
      if (param_5 == 0) {
        fVar32 = (fVar28 + fVar31 + fVar31) * 0.5;
      }
    }
    fVar32 = fVar32 - param_1;
  }
  bVar6 = *(byte *)(lVar23 + 0x10);
  param_4 = param_4 + (long)param_10 * 0x34;
  bVar7 = *(byte *)(lVar23 + 0x11);
  bVar8 = *(byte *)(param_4 + 0x2c);
  fVar38 = *(float *)(param_4 + 0x18);
  fVar36 = *(float *)(param_4 + 0x1c);
  fVar34 = *(float *)(param_4 + 0x10);
  fVar35 = *(float *)(param_4 + 0x14);
  bVar9 = *(byte *)(param_4 + 0x2e);
  bVar10 = *(byte *)(param_4 + 0x2d);
  fVar41 = *(float *)(param_4 + 8);
  fVar40 = *(float *)(param_4 + 0xc);
  bVar11 = *(byte *)(param_4 + 0x30);
  bVar12 = *(byte *)(param_4 + 0x32);
  bVar13 = *(byte *)(lVar23 + 0x12);
  bVar14 = *(byte *)(lVar23 + 0x13);
  fVar42 = *pfVar25;
  fVar43 = pfVar25[1];
  bVar15 = *(byte *)(param_4 + 0x31);
  fVar37 = *(float *)(param_4 + 0x20);
  fVar39 = *(float *)(param_4 + 0x24);
  fVar33 = *(float *)(param_4 + 0x28);
  bVar16 = *(byte *)(param_4 + 0x2f);
  bVar17 = *(byte *)(lVar23 + 0x14);
  bVar18 = *(byte *)(param_4 + 0x33);
  lVar24 = lVar24 + (long)param_10 * 0x38;
  bVar19 = *(byte *)(lVar23 + 0x15);
  bVar20 = *(byte *)(lVar23 + 0x16);
  bVar21 = *(byte *)(lVar23 + 0x17);
  bVar22 = *(byte *)(lVar24 + 0x32);
  *pfVar1 = fVar29;
  pfVar1[1] = fVar28;
  pfVar1[2] = fVar30;
  pfVar1[3] = fVar31;
  uVar2 = *(undefined8 *)(lVar24 + 0x18);
  uVar3 = *(undefined8 *)(lVar24 + 0x20);
  pfVar1[0x12] = fVar36 * fVar35 + fVar34 * -(fVar41 * fVar38);
  pfVar1[0x13] = (fVar29 + fVar30 + fVar30 + fVar26) * 0.5;
  pfVar1[0x16] = fVar34 * fVar35 + fVar36 * fVar38 * fVar41;
  pfVar1[0x17] = fVar32;
  pfVar1[0xb] = fVar27;
  pfVar1[0xc] = fVar37;
  pfVar1[0xf] = fVar26;
  pfVar1[10] = (float)(uint)bVar22;
  *(undefined8 *)(pfVar1 + 4) = uVar2;
  *(undefined8 *)(pfVar1 + 6) = uVar3;
  pfVar1[0x10] = fVar40 * fVar34 * fVar42;
  pfVar1[0x11] = (fVar36 * fVar41 + fVar34 * fVar35 * fVar38) * fVar43;
  pfVar1[0x14] = -(fVar40 * fVar36) * fVar42;
  pfVar1[0x15] = (fVar34 * fVar41 + fVar36 * -(fVar35 * fVar38)) * fVar43;
  fVar28 = (fVar39 - fVar32) + 0.0;
  if ((param_11 & 1) == 0) {
    fVar28 = fVar39;
  }
  pfVar1[0xd] = fVar28;
  pfVar1[0xe] = fVar33;
  pfVar1[8] = (float)((uint)bVar16 * (uint)bVar14 * 0x10102 & 0xff000000 |
                      ((uint)bVar9 * (uint)bVar13) / 0xff << 0x10 |
                      (uint)bVar10 * (uint)bVar7 * 0x8081 >> 0xf & 0xff00 |
                     ((uint)bVar8 * (uint)bVar6) / 0xff);
  pfVar1[9] = (float)((uint)bVar18 * (uint)bVar21 * 0x10102 & 0xff000000 |
                      ((uint)bVar12 * (uint)bVar20) / 0xff << 0x10 |
                      (uint)bVar15 * (uint)bVar19 * 0x8081 >> 0xf & 0xff00 |
                     ((uint)bVar11 * (uint)bVar17) / 0xff);
  return;
}

