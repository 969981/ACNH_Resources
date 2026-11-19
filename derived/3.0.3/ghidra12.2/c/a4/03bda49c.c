
/* WARNING: Type propagation algorithm not settling */

void FUN_03bda49c(long param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  ushort uVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar1 = *(ushort *)(param_1 + 0xb8);
  if ((uVar1 & 1) == 0) {
    fVar21 = *(float *)(param_1 + 0xbc);
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_03bdad4c(param_1,1);
    if (((uVar2 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 1 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 2;
      fVar21 = (float)FUN_03bd475c(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                                   0x28,uVar17,uVar12);
      *(float *)(param_1 + 0x54) = fVar21;
    }
    else {
      fVar21 = *(float *)(param_1 + 0x54);
    }
    *(float *)(param_1 + 0xbc) = fVar21;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 1;
    uVar1 = *(ushort *)(param_1 + 0xb8);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_03bdad4c(param_1,2);
    if (((uVar2 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 2 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 4;
      uVar3 = FUN_03bd4850(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28,
                           uVar17,uVar12);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x58);
    }
    *(undefined4 *)(param_1 + 0xc0) = uVar3;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 2;
    uVar1 = *(ushort *)(param_1 + 0xb8);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_03bdad4c(param_1,3);
    if (((uVar2 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 3 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 8;
      uVar3 = FUN_03bd493c(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28,
                           uVar17,uVar12);
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x5c);
    }
    *(undefined4 *)(param_1 + 0xc4) = uVar3;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 4;
    uVar1 = *(ushort *)(param_1 + 0xb8);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_03bdad4c(param_1,4);
    if (((uVar2 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 4 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x10;
      uVar3 = FUN_03bd4a28(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28,
                           uVar17,uVar12);
      *(undefined4 *)(param_1 + 0x60) = uVar3;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x60);
    }
    *(undefined4 *)(param_1 + 200) = uVar3;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 8;
    uVar1 = *(ushort *)(param_1 + 0xb8);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_03bdad4c(param_1,5);
    if (((uVar2 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 5 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x20;
      uVar3 = FUN_03bd4b14(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28,
                           uVar17,uVar12);
      *(undefined4 *)(param_1 + 100) = uVar3;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 100);
    }
    *(undefined4 *)(param_1 + 0xcc) = uVar3;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x10;
    uVar1 = *(ushort *)(param_1 + 0xb8);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_03bdad4c(param_1,6);
    if (((uVar2 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 6 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x40;
      uVar3 = FUN_03bd4c00(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28,
                           uVar17,uVar12);
      *(undefined4 *)(param_1 + 0x68) = uVar3;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x68);
    }
    *(undefined4 *)(param_1 + 0xd0) = uVar3;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x20;
    uVar1 = *(ushort *)(param_1 + 0xb8);
  }
  if ((uVar1 >> 6 & 1) == 0) {
    fVar23 = *(float *)(param_1 + 0xd4);
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_03bdad4c(param_1,7);
    if (((uVar2 & 1) == 0) || ((*(uint *)(param_1 + 0x94) >> 7 & 1) == 0)) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 0x80;
      fVar23 = (float)FUN_03bd4cf0(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                                   0x28,uVar17,uVar12);
      *(float *)(param_1 + 0x6c) = fVar23;
    }
    else {
      fVar23 = *(float *)(param_1 + 0x6c);
    }
    *(float *)(param_1 + 0xd4) = fVar23;
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) | 0x40;
  }
  fVar25 = fVar21 * param_4[1];
  fVar24 = *(float *)(param_1 + 0xcc);
  fVar19 = *(float *)(param_1 + 0xc0) * *param_4;
  fVar4 = *(float *)(param_1 + 0xc4) * param_4[1];
  fVar26 = fVar21 * *param_4;
  fVar9 = *(float *)(param_1 + 200) * param_4[2];
  fVar21 = fVar21 * param_4[2];
  fVar22 = *(float *)(param_1 + 0xd0);
  fVar5 = sinf(fVar24);
  fVar6 = sinf(fVar22);
  fVar7 = sinf(fVar23);
  fVar24 = cosf(fVar24);
  fVar22 = cosf(fVar22);
  fVar23 = cosf(fVar23);
  fVar20 = fVar26 * fVar22 * fVar23;
  fVar8 = -(fVar6 * fVar26);
  fVar26 = fVar26 * fVar7 * fVar22;
  fVar18 = fVar25 * (fVar5 * fVar6 * fVar23 - fVar7 * fVar24);
  fVar10 = fVar25 * (fVar24 * fVar23 + fVar7 * fVar5 * fVar6);
  fVar25 = fVar25 * fVar5 * fVar22;
  fVar13 = fVar21 * (fVar5 * fVar7 + fVar6 * fVar24 * fVar23);
  fVar22 = fVar21 * fVar24 * fVar22;
  fVar21 = fVar21 * (-(fVar5 * fVar23) + fVar6 * fVar7 * fVar24);
  uVar17 = param_3[5];
  uVar12 = param_3[3];
  fVar7 = (float)param_3[2];
  fVar23 = (float)*param_3;
  fVar5 = (float)((ulong)*param_3 >> 0x20);
  fVar24 = (float)((ulong)param_3[2] >> 0x20);
  fVar14 = (float)param_3[4];
  fVar15 = (float)((ulong)param_3[4] >> 0x20);
  fVar6 = (float)param_3[1];
  fVar11 = (float)uVar12;
  fVar16 = (float)uVar17;
  param_2[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                        fVar19 * fVar23 + fVar4 * fVar5 + fVar9 * fVar6,
                        fVar13 * fVar23 + fVar21 * fVar5 + fVar22 * fVar6 + 0.0);
  *param_2 = CONCAT44(fVar18 * fVar23 + fVar10 * fVar5 + fVar25 * fVar6 + 0.0,
                      fVar20 * fVar23 + fVar26 * fVar5 + fVar8 * fVar6 + 0.0);
  param_2[3] = CONCAT44((float)((ulong)uVar12 >> 0x20) +
                        fVar19 * fVar7 + fVar4 * fVar24 + fVar9 * fVar11,
                        fVar13 * fVar7 + fVar21 * fVar24 + fVar22 * fVar11 + 0.0);
  param_2[2] = CONCAT44(fVar18 * fVar7 + fVar10 * fVar24 + fVar25 * fVar11 + 0.0,
                        fVar20 * fVar7 + fVar26 * fVar24 + fVar8 * fVar11 + 0.0);
  param_2[5] = CONCAT44((float)((ulong)uVar17 >> 0x20) +
                        fVar19 * fVar14 + fVar4 * fVar15 + fVar9 * fVar16,
                        fVar13 * fVar14 + fVar21 * fVar15 + fVar22 * fVar16 + 0.0);
  param_2[4] = CONCAT44(fVar18 * fVar14 + fVar10 * fVar15 + fVar25 * fVar16 + 0.0,
                        fVar20 * fVar14 + fVar26 * fVar15 + fVar8 * fVar16 + 0.0);
  return;
}

