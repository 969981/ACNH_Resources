
void FUN_0054ca70(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [512];
  
  fVar26 = param_2;
  fVar25 = param_1;
  if (param_1 <= param_2) {
    fVar26 = param_1;
    fVar25 = param_2;
  }
  fVar4 = fVar25 - fVar26;
  *param_3 = &PTR_LAB_048c9a28;
  param_3[1] = 0xffffffff;
  param_3[2] = 1;
  *(undefined4 *)(param_3 + 3) = 3;
  puVar1 = param_4;
  if (param_1 <= param_2) {
    puVar1 = param_5;
  }
  uVar8 = puVar1[1];
  uVar24 = *puVar1;
  if (param_1 <= param_2) {
    param_5 = param_4;
  }
  param_3[7] = uVar8;
  param_3[6] = uVar24;
  fVar12 = DAT_04102f08;
  uVar10 = param_5[1];
  uVar9 = *param_5;
  param_3[5] = uVar10;
  param_3[4] = uVar9;
  *(float *)(param_3 + 0x12) = fVar26;
  *(float *)((long)param_3 + 0x94) = fVar25;
  if (fVar4 / fVar25 < fVar12) {
    FUN_004426d0(auStack_250,auStack_240,0x200);
    FUN_0043ac90(auStack_250,"Invalid tapered capsule: radii must differ by more than 2 percent.");
    FUN_004221e0(0x49f8d103,auStack_240,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Cloth/Cloth/Collide/Shape/TaperedCapsule/hclTaperedCapsuleShape.cpp"
                 ,0x23);
    FUN_00442760(auStack_250);
    fVar26 = *(float *)(param_3 + 0x12);
    fVar25 = *(float *)((long)param_3 + 0x94);
    fVar4 = fVar25 - fVar26;
    uVar10 = param_3[5];
    uVar9 = param_3[4];
    uVar8 = param_3[7];
    uVar24 = param_3[6];
  }
  fVar5 = (float)uVar24 - (float)uVar9;
  fVar6 = (float)((ulong)uVar24 >> 0x20) - (float)((ulong)uVar9 >> 0x20);
  fVar7 = (float)uVar8 - (float)uVar10;
  fVar11 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar12 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  uVar24 = CONCAT44(fVar12,fVar11);
  uVar22 = NEON_frsqrte(uVar24,4);
  fVar21 = (float)uVar22;
  fVar23 = (float)((ulong)uVar22 >> 0x20);
  uVar22 = NEON_frsqrts(uVar24,CONCAT44(fVar23 * fVar23,fVar21 * fVar21),4);
  fVar21 = fVar21 * (float)uVar22;
  fVar23 = fVar23 * (float)((ulong)uVar22 >> 0x20);
  uVar24 = NEON_frsqrts(uVar24,CONCAT44(fVar23 * fVar23,fVar21 * fVar21),4);
  iVar2 = -(uint)(fVar11 <= 0.0);
  iVar3 = -(uint)(fVar12 <= 0.0);
  fVar21 = (float)uVar24 * fVar21;
  fVar23 = (float)((ulong)uVar24 >> 0x20) * fVar23;
  bVar13 = SUB41(fVar21,0) & ~(byte)iVar2;
  bVar14 = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar2 >> 8);
  bVar15 = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar2 >> 0x10);
  bVar16 = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar2 >> 0x18);
  bVar17 = SUB41(fVar23,0) & ~(byte)iVar3;
  bVar18 = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar3 >> 8);
  bVar19 = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10);
  bVar20 = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18);
  fVar11 = fVar11 * (float)CONCAT13(bVar16,CONCAT12(bVar15,CONCAT11(bVar14,bVar13)));
  fVar12 = (float)CONCAT13(bVar16,CONCAT12(bVar15,CONCAT11(bVar14,bVar13)));
  *(float *)(param_3 + 0x13) = fVar11;
  uVar24 = CONCAT44(fVar6 * (float)CONCAT13(bVar20,CONCAT12(bVar19,CONCAT11(bVar18,bVar17))),
                    fVar5 * (float)CONCAT13(bVar16,CONCAT12(bVar15,CONCAT11(bVar14,bVar13))));
  uVar8 = CONCAT44(((float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar10 >> 0x20)) *
                   (float)(CONCAT17(bVar20,CONCAT16(bVar19,CONCAT15(bVar18,CONCAT14(bVar17,fVar12)))
                                   ) >> 0x20),fVar7 * fVar12);
  param_3[0xb] = uVar8;
  param_3[10] = uVar24;
  param_3[0xd] = CONCAT44(fVar11,fVar11);
  param_3[0xc] = CONCAT17((char)((uint)fVar11 >> 0x18),
                          CONCAT16((char)((uint)fVar11 >> 0x10),
                                   CONCAT15((char)((uint)fVar11 >> 8),
                                            CONCAT14(SUB41(fVar11,0),fVar11))));
  fVar12 = fVar4 / fVar11;
  fVar4 = (fVar25 * (fVar11 * fVar11 - fVar4 * fVar4)) / (fVar4 * fVar11);
  *(float *)((long)param_3 + 0xa4) = fVar12;
  if (1.0 < fVar12) {
    FUN_004426d0(auStack_250,auStack_240,0x200);
    FUN_0043ac90(auStack_250,"Invalid tapered capsule: R - r < l.");
    FUN_004221e0(0x540bdaa8,auStack_240,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Cloth/Cloth/Collide/Shape/TaperedCapsule/hclTaperedCapsuleShape.cpp"
                 ,0x35);
    FUN_00442760(auStack_250);
    fVar12 = *(float *)((long)param_3 + 0xa4);
    uVar10 = param_3[5];
    uVar9 = param_3[4];
    uVar8 = param_3[0xb];
    uVar24 = param_3[10];
  }
  fVar26 = fVar26 / fVar12;
  param_3[9] = CONCAT44((float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar8 >> 0x20) * fVar26,
                        (float)uVar10 - (float)uVar8 * fVar26);
  param_3[8] = CONCAT44((float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar24 >> 0x20) * fVar26,
                        (float)uVar9 - (float)uVar24 * fVar26);
  *(float *)((long)param_3 + 0x9c) = fVar26;
  param_3[0xf] = CONCAT44(fVar26,fVar26);
  param_3[0xe] = CONCAT17((char)((uint)fVar26 >> 0x18),
                          CONCAT16((char)((uint)fVar26 >> 0x10),
                                   CONCAT15((char)((uint)fVar26 >> 8),
                                            CONCAT14(SUB41(fVar26,0),fVar26))));
  fVar26 = (float)FUN_004372f0(fVar25 * fVar4 * fVar12);
  fVar25 = fVar26 / fVar4;
  fVar12 = -fVar25;
  *(float *)(param_3 + 0x15) = fVar25;
  *(float *)((long)param_3 + 0xac) = fVar25 * fVar25;
  param_3[0x11] = CONCAT44(fVar12,fVar12);
  param_3[0x10] = CONCAT44(fVar12,fVar12);
  fVar26 = (float)FUN_004372f0(fVar4 * fVar4 + fVar26 * fVar26);
  *(float *)(param_3 + 0x14) = fVar4 / fVar26;
  return;
}

