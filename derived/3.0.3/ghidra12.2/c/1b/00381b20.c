
undefined8 FUN_00381b20(long *param_1,long param_2,int param_3,long param_4)

{
  float *pfVar1;
  byte bVar2;
  undefined8 uVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_100 [32];
  
  lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  pfVar1 = (float *)(lVar6 + param_3);
  pfVar1[0x34] = 0.0;
  pfVar1[0x35] = 0.0;
  pfVar1[0x36] = 0.0;
  pfVar1[0x37] = 0.0;
  pfVar1[0x30] = 0.0;
  pfVar1[0x31] = 0.0;
  pfVar1[0x32] = 0.0;
  pfVar1[0x33] = 0.0;
  pfVar1[0x2c] = 0.0;
  pfVar1[0x2d] = 0.0;
  pfVar1[0x2e] = 0.0;
  pfVar1[0x2f] = 0.0;
  pfVar1[0x28] = 0.0;
  pfVar1[0x29] = 0.0;
  pfVar1[0x2a] = 0.0;
  pfVar1[0x2b] = 0.0;
  pfVar1[0x24] = 0.0;
  pfVar1[0x25] = 0.0;
  pfVar1[0x26] = 0.0;
  pfVar1[0x27] = 0.0;
  pfVar1[0x20] = 0.0;
  pfVar1[0x21] = 0.0;
  pfVar1[0x22] = 0.0;
  pfVar1[0x23] = 0.0;
  pfVar1[0x1c] = 0.0;
  pfVar1[0x1d] = 0.0;
  pfVar1[0x1e] = 0.0;
  pfVar1[0x1f] = 0.0;
  pfVar1[0x18] = 0.0;
  pfVar1[0x19] = 0.0;
  pfVar1[0x1a] = 0.0;
  pfVar1[0x1b] = 0.0;
  pfVar1[0x14] = 0.0;
  pfVar1[0x15] = 0.0;
  pfVar1[0x16] = 0.0;
  pfVar1[0x17] = 0.0;
  pfVar1[0x10] = 0.0;
  pfVar1[0x11] = 0.0;
  pfVar1[0x12] = 0.0;
  pfVar1[0x13] = 0.0;
  pfVar1[0xc] = 0.0;
  pfVar1[0xd] = 0.0;
  pfVar1[0xe] = 0.0;
  pfVar1[0xf] = 0.0;
  pfVar1[8] = 0.0;
  pfVar1[9] = 0.0;
  pfVar1[10] = 0.0;
  pfVar1[0xb] = 0.0;
  pfVar1[4] = 0.0;
  pfVar1[5] = 0.0;
  pfVar1[6] = 0.0;
  pfVar1[7] = 0.0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  fVar8 = *(float *)(param_4 + 0x18) / -100.0 + 1.0;
  if (0.0039 <= fVar8) {
    fVar8 = 1.0 / fVar8;
  }
  else {
    fVar8 = 256.41028;
  }
  pfVar1[4] = fVar8;
  *pfVar1 = *(float *)(param_4 + 8) / 255.0;
  pfVar1[1] = *(float *)(param_4 + 0xc) / 255.0;
  pfVar1[2] = *(float *)(param_4 + 0x10) / 255.0;
  pfVar1[3] = *(float *)(param_4 + 0x14) / 255.0;
  if (*(float *)(param_4 + 0x1c) == 0.0) {
    pfVar1[0x34] = 0.0;
    pfVar1[0x35] = 0.0;
    pfVar1[0x36] = 0.0;
    pfVar1[0x37] = 0.0;
    pfVar1[5] = 1.0;
    pfVar1[0x30] = 0.0;
    pfVar1[0x31] = 0.0;
    pfVar1[0x32] = 0.0;
    pfVar1[0x33] = 0.0;
    pfVar1[0x2c] = 0.0;
    pfVar1[0x2d] = 0.0;
    pfVar1[0x2e] = 0.0;
    pfVar1[0x2f] = 0.0;
    pfVar1[0x28] = 0.0;
    pfVar1[0x29] = 0.0;
    pfVar1[0x2a] = 0.0;
    pfVar1[0x2b] = 0.0;
    bVar2 = *(byte *)(*param_1 + 0x5a);
    *(undefined1 **)(pfVar1 + 6) = &DAT_3f8000003f800000;
  }
  else {
    local_100[0x1c] = 0.0;
    local_100[0x1d] = 0.0;
    local_100[0x1e] = 0.0;
    local_100[0x1f] = 0.0;
    fVar8 = (0.0 / *(float *)(param_4 + 0x1c)) * 2.8;
    local_100[0x18] = 0.0;
    local_100[0x19] = 0.0;
    local_100[0x1a] = 0.0;
    local_100[0x1b] = 0.0;
    local_100[0x14] = 0.0;
    local_100[0x15] = 0.0;
    local_100[0x16] = 0.0;
    local_100[0x17] = 0.0;
    local_100[0x10] = 0.0;
    local_100[0x11] = 0.0;
    local_100[0x12] = 0.0;
    local_100[0x13] = 0.0;
    local_100[0xc] = 0.0;
    local_100[0xd] = 0.0;
    local_100[0xe] = 0.0;
    local_100[0xf] = 0.0;
    local_100[8] = 0.0;
    local_100[9] = 0.0;
    local_100[10] = 0.0;
    local_100[0xb] = 0.0;
    local_100[4] = 0.0;
    local_100[5] = 0.0;
    local_100[6] = 0.0;
    local_100[7] = 0.0;
    local_100[0] = 0.0;
    local_100[1] = 0.0;
    local_100[2] = 0.0;
    local_100[3] = 0.0;
    fVar8 = expf(fVar8 * fVar8 * -0.5);
    fVar11 = fVar8 + 0.0;
    lVar7 = 1;
    do {
      fVar9 = ((float)(int)lVar7 / *(float *)(param_4 + 0x1c)) * 2.8;
      fVar9 = expf(fVar9 * fVar9 * -0.5);
      fVar11 = fVar11 + fVar9 * 2.0;
      local_100[lVar7] = fVar9;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x20);
    pfVar4 = (float *)((ulong)local_100 | 4);
    fVar9 = *(float *)(*param_1 + 0x50);
    fVar10 = *(float *)(*param_1 + 0x54);
    bVar2 = *(byte *)(param_1[0xb] + 0xc);
    pfVar1[5] = fVar8 / fVar11;
    lVar7 = -0x1e;
    fVar9 = 1.0 / fVar9;
    fVar8 = 1.0 / (fVar10 + (float)((uint)bVar2 << 1));
    pfVar5 = (float *)(param_3 + lVar6 + 0x60);
    do {
      fVar10 = 0.0;
      fVar11 = *pfVar4 + pfVar4[1];
      if (0.0 < fVar11) {
        fVar10 = pfVar4[1] / fVar11 + (float)((int)lVar7 + 0x1f);
      }
      lVar7 = lVar7 + 2;
      pfVar5[0x10] = fVar11;
      pfVar4 = pfVar4 + 2;
      pfVar5[-0x10] = fVar9 * fVar10;
      *pfVar5 = fVar8 * fVar10;
      pfVar5 = pfVar5 + 1;
    } while (lVar7 != 0);
    pfVar1[0x17] = fVar9 * 31.0;
    pfVar1[0x27] = fVar8 * 31.0;
    pfVar1[0x37] = *pfVar4;
    bVar2 = *(byte *)(*param_1 + 0x5a);
    *(undefined1 **)(pfVar1 + 6) = &DAT_3f8000003f800000;
  }
  if ((bVar2 != 0) && ((param_1[0xb] == 0 || ((*(byte *)(param_1[0xb] + 8) >> 5 & 1) == 0)))) {
    pfVar1[6] = (float)bVar2 / 255.0;
    pfVar1[7] = 255.0 / (float)bVar2;
  }
  if (pfVar1[0x28] < 6.1035156e-05) {
    uVar3 = 0;
  }
  else if (pfVar1[0x29] < 6.1035156e-05) {
    uVar3 = 1;
  }
  else if (pfVar1[0x2a] < 6.1035156e-05) {
    uVar3 = 2;
  }
  else if (pfVar1[0x2b] < 6.1035156e-05) {
    uVar3 = 3;
  }
  else if (pfVar1[0x2c] < 6.1035156e-05) {
    uVar3 = 4;
  }
  else if (pfVar1[0x2d] < 6.1035156e-05) {
    uVar3 = 5;
  }
  else if (pfVar1[0x2e] < 6.1035156e-05) {
    uVar3 = 6;
  }
  else if (pfVar1[0x2f] < 6.1035156e-05) {
    uVar3 = 7;
  }
  else if (pfVar1[0x30] < 6.1035156e-05) {
    uVar3 = 8;
  }
  else if (pfVar1[0x31] < 6.1035156e-05) {
    uVar3 = 9;
  }
  else if (pfVar1[0x32] < 6.1035156e-05) {
    uVar3 = 10;
  }
  else if (pfVar1[0x33] < 6.1035156e-05) {
    uVar3 = 0xb;
  }
  else if (pfVar1[0x34] < 6.1035156e-05) {
    uVar3 = 0xc;
  }
  else if (pfVar1[0x35] < 6.1035156e-05) {
    uVar3 = 0xd;
  }
  else if (pfVar1[0x36] < 6.1035156e-05) {
    uVar3 = 0xe;
  }
  else if (pfVar1[0x37] < 6.1035156e-05) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = 0x10;
  }
  return uVar3;
}

