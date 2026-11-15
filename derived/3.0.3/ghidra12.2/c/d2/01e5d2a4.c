
undefined8 FUN_01e5d2a4(float param_1,long param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_84;
  uint local_80;
  float local_7c [3];
  
  *(undefined8 *)(param_2 + 0x308) = 0;
  *(undefined4 *)(param_2 + 0x31c) = 0xbf800000;
  *(undefined8 *)(param_2 + 0x314) = 0;
  fVar8 = 1.0;
  *(undefined4 *)(param_2 + 0x310) = 0;
  *(undefined1 *)(param_2 + 0x328) = 0;
  fVar6 = *(float *)(*(long *)(param_2 + 0x338) + 0x278);
  fVar7 = *(float *)(*(long *)(param_2 + 0x338) + 0x280);
  if ((*(uint *)(param_2 + 0x360) < 0x20) &&
     ((0x80000feeU >> (ulong)(*(uint *)(param_2 + 0x360) & 0x1f) & 1) != 0)) {
    local_7c[0] = (float)((uint)param_3[0xd] | (param_3[0xe] & 0xf) << 8);
    bVar2 = param_3[1];
    local_7c[2] = (float)((uint)(param_3[0xe] >> 4) | (uint)param_3[0xf] << 4);
    uVar1 = (uint)*param_3 | (bVar2 & 0xf) << 8;
    if ((bVar2 & 8) != 0) {
      uVar1 = uVar1 | 0xfffff000;
    }
    fVar9 = (float)(int)uVar1;
    uVar3 = (uint)(bVar2 >> 4) | (uint)param_3[2] << 4;
    uVar1 = uVar3 | 0xfffff000;
    if (-1 < (char)param_3[2]) {
      uVar1 = uVar3;
    }
    fVar10 = (float)(int)uVar1;
    fVar12 = local_7c[2] - fVar10;
    fVar13 = SQRT((fVar10 - local_7c[2]) * (fVar10 - local_7c[2]) +
                  (fVar9 - local_7c[0]) * (fVar9 - local_7c[0]));
    fVar11 = local_7c[0] - fVar9;
    if ((fVar11 != 0.0) || (fVar12 != 0.0)) {
      fVar14 = SQRT(fVar11 * fVar11 + 0.0 + fVar12 * fVar12);
      if (fVar14 <= 0.0) {
        fVar15 = 0.0;
      }
      else {
        fVar14 = 1.0 / fVar14;
        fVar11 = fVar11 * fVar14;
        fVar15 = fVar14 * 0.0;
        fVar12 = fVar12 * fVar14;
      }
      *(float *)(param_2 + 0x63c) = fVar15;
      *(float *)(param_2 + 0x638) = fVar11;
      *(float *)(param_2 + 0x640) = fVar12;
      *(float *)(param_2 + 0x648) = fVar12;
      *(undefined4 *)(param_2 + 0x64c) = 0;
      *(float *)(param_2 + 0x658) = local_7c[0];
      *(undefined4 *)(param_2 + 0x65c) = 0;
      *(float *)(param_2 + 0x660) = local_7c[2];
      *(ushort *)(param_2 + 0x636) = *(ushort *)(param_2 + 0x636) | 2;
      *(float *)(param_2 + 0x650) = -fVar11;
      *(float *)(param_2 + 0x644) = fVar15 * 0.0 + fVar9 * fVar11 + fVar10 * fVar12;
      *(float *)(param_2 + 0x654) = (fVar9 * fVar12 + 0.0) - fVar10 * fVar11;
    }
  }
  else {
    fVar13 = 0.0;
    bVar2 = param_3[1];
    uVar1 = (uint)*param_3 | (bVar2 & 0xf) << 8;
    if ((bVar2 & 8) != 0) {
      uVar1 = uVar1 | 0xfffff000;
    }
    fVar9 = (float)(int)uVar1;
    uVar3 = (uint)(bVar2 >> 4) | (uint)param_3[2] << 4;
    uVar1 = uVar3 | 0xfffff000;
    if (-1 < (char)param_3[2]) {
      uVar1 = uVar3;
    }
    fVar10 = (float)(int)uVar1;
    local_7c[0] = fVar9;
    local_7c[2] = fVar10;
  }
  local_7c[1] = 0.0;
  fVar9 = fVar9 - fVar6;
  fVar10 = fVar10 - fVar7;
  fVar6 = local_7c[0] - fVar6;
  fVar7 = local_7c[2] - fVar7;
  fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
  if (fVar6 <= 1.0) {
    local_80 = param_3[7] >> 4 & 3;
    if (local_80 == 1) {
      iVar4 = **(int **)(param_2 + 0x348);
    }
    else {
      iVar4 = (uint)param_3[3] << 0x18;
    }
  }
  else {
    iVar4 = FUN_006f0400();
  }
  fVar7 = *(float *)(param_2 + 0x558);
  if (SQRT(fVar10 * fVar10 + fVar9 * fVar9) <= 80.0) {
    fVar6 = fVar6 - fVar13;
    fVar13 = *(float *)(param_2 + 0x560);
    if (40.0 < fVar6) {
      uVar5 = 0;
      goto LAB_01e5d590;
    }
    if (2.0 < fVar6) {
      uVar5 = 0;
      fVar8 = (fVar6 + -2.0) / 38.0;
      fVar13 = param_1 + fVar8 * (fVar13 - param_1);
      fVar8 = fVar8 + 0.0;
      goto LAB_01e5d590;
    }
    uVar5 = 1;
  }
  else {
    local_84 = iVar4;
    FUN_01e39520(*(undefined8 *)(param_2 + 0x358),local_7c,&local_84,0);
    uVar5 = 0;
  }
  fVar8 = 0.0;
  fVar13 = fVar7;
LAB_01e5d590:
  if ((0x1f < *(uint *)(param_2 + 0x360)) ||
     ((1 << (ulong)(*(uint *)(param_2 + 0x360) & 0x1f) & 0x80000feeU) == 0)) {
    FUN_01e5d1b0(param_2,local_7c);
    *(int *)(param_2 + 0x4e4) = iVar4;
    if (*(int *)(param_2 + 0x378) < 0x23) {
      *(int *)(param_2 + 0x3a4) = iVar4;
    }
    *(undefined4 *)(param_2 + 0x4e8) = 0x3800000;
    if (*(int *)(param_2 + 0x378) < 0x23) {
      *(undefined4 *)(param_2 + 0x3a8) = 0x3800000;
    }
  }
  *(float *)(param_2 + 0x4c0) = fVar13;
  *(float *)(param_2 + 0x4c4) = fVar8;
  *(undefined4 *)(param_2 + 0x4c8) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x31c) = 0xbf800000;
  *(undefined8 *)(param_2 + 0x308) = *(undefined8 *)(param_2 + 0x4d0);
  *(undefined4 *)(param_2 + 800) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_2 + 0x310) = *(undefined4 *)(param_2 + 0x4d8);
  *(undefined4 *)(param_2 + 0x324) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined8 *)(param_2 + 0x314) = *(undefined8 *)(param_2 + 0x4c0);
  return uVar5;
}

