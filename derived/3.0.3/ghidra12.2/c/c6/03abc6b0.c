
void FUN_03abc6b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  float local_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0 [3];
  undefined1 auStack_194 [4];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_fc [124];
  
  FUN_038e4cec(auStack_fc);
  FUN_038e4d90(auStack_fc,param_1);
  FUN_039424e0(param_1,param_4,param_5);
  fVar29 = (float)*param_3;
  fVar14 = (float)*param_2;
  fVar15 = (float)((ulong)*param_2 >> 0x20);
  fVar16 = (float)param_2[1];
  fVar17 = (float)((ulong)param_2[1] >> 0x20);
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  fVar18 = (float)param_2[2];
  fVar20 = (float)((ulong)param_2[2] >> 0x20);
  fVar22 = (float)param_2[3];
  fVar24 = (float)((ulong)param_2[3] >> 0x20);
  fVar8 = (float)param_3[2];
  fVar9 = (float)((ulong)param_3[2] >> 0x20);
  fVar11 = (float)param_3[4];
  fVar12 = (float)((ulong)param_3[4] >> 0x20);
  fVar26 = (float)param_3[6];
  fVar27 = (float)((ulong)param_3[6] >> 0x20);
  local_1a0[0] = -1.0;
  local_1a0[1] = 1.0;
  stack0xfffffffffffffe68 = 0xbf800000bf800000;
  local_190 = 0xbf800000bf800000;
  uStack_188 = 0xbf8000003f800000;
  local_180 = 0x3f800000bf800000;
  uStack_178 = 0xbf8000003f800000;
  local_170 = 0x3f800000bf800000;
  uStack_168 = 0xbf8000003f7d70a4;
  local_160 = 0x3f7d70a4bf800000;
  uStack_158 = 0xbf8000003f800000;
  fVar7 = (float)param_3[1];
  fVar19 = (float)param_2[4];
  fVar21 = (float)((ulong)param_2[4] >> 0x20);
  fVar23 = (float)param_2[5];
  fVar25 = (float)((ulong)param_2[5] >> 0x20);
  fVar10 = (float)param_3[3];
  fVar13 = (float)param_3[5];
  fVar28 = (float)param_3[7];
  lVar1 = (long)&local_180 + 4;
  lVar2 = (long)&uStack_168 + 4;
  lVar3 = (long)&local_150 + 4;
  local_150 = 0x3f8000003f7d70a4;
  uStack_148 = 0x3f7d70a43f800000;
  local_140 = CONCAT44(fVar15 * fVar29 + fVar20 * fVar6 + fVar21 * fVar7 + 0.0,
                       fVar14 * fVar29 + fVar18 * fVar6 + fVar19 * fVar7 + 0.0);
  uStack_138 = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                        fVar17 * fVar29 + fVar24 * fVar6 + fVar25 * fVar7,
                        fVar16 * fVar29 + fVar22 * fVar6 + fVar23 * fVar7 + 0.0);
  uStack_130 = CONCAT44(fVar15 * fVar8 + fVar20 * fVar9 + fVar21 * fVar10 + 0.0,
                        fVar14 * fVar8 + fVar18 * fVar9 + fVar19 * fVar10 + 0.0);
  uStack_128 = CONCAT44((float)((ulong)param_3[3] >> 0x20) +
                        fVar17 * fVar8 + fVar24 * fVar9 + fVar25 * fVar10,
                        fVar16 * fVar8 + fVar22 * fVar9 + fVar23 * fVar10 + 0.0);
  local_120 = CONCAT44(fVar15 * fVar11 + fVar20 * fVar12 + fVar21 * fVar13 + 0.0,
                       fVar14 * fVar11 + fVar18 * fVar12 + fVar19 * fVar13 + 0.0);
  uStack_118 = CONCAT44((float)((ulong)param_3[5] >> 0x20) +
                        fVar17 * fVar11 + fVar24 * fVar12 + fVar25 * fVar13,
                        fVar16 * fVar11 + fVar22 * fVar12 + fVar23 * fVar13 + 0.0);
  uStack_110 = CONCAT44(fVar15 * fVar26 + fVar20 * fVar27 + fVar21 * fVar28 + 0.0,
                        fVar14 * fVar26 + fVar18 * fVar27 + fVar19 * fVar28 + 0.0);
  uStack_108 = CONCAT44((float)((ulong)param_3[7] >> 0x20) +
                        fVar17 * fVar26 + fVar24 * fVar27 + fVar25 * fVar28,
                        fVar16 * fVar26 + fVar22 * fVar27 + fVar23 * fVar28 + 0.0);
  FUN_038e6ab4(&local_1e0,&local_140);
  lVar5 = 0;
  do {
    lVar4 = lVar5 + 0xc;
    fVar28 = *(float *)((long)local_1a0 + lVar5 + 8);
    fVar26 = *(float *)((long)local_1a0 + lVar5);
    fVar27 = *(float *)((long)local_1a0 + lVar5 + 4);
    fVar29 = fStack_1a4 + fStack_1ac * fVar27 + fVar26 * local_1b0 + fVar28 * local_1a8;
    *(float *)((long)local_1a0 + lVar5) =
         fStack_1d4 / fVar29 +
         fVar27 * (fStack_1dc / fVar29) + fVar26 * (local_1e0 / fVar29) +
         fVar28 * (local_1d8 / fVar29);
    *(float *)((long)local_1a0 + lVar5 + 4) =
         fStack_1c4 / fVar29 +
         fVar27 * (fStack_1cc / fVar29) + fVar26 * (local_1d0 / fVar29) +
         fVar28 * (local_1c8 / fVar29);
    *(float *)((long)local_1a0 + lVar5 + 8) =
         fStack_1b4 / fVar29 +
         fVar27 * (fStack_1bc / fVar29) + fVar26 * (local_1c0 / fVar29) +
         fVar28 * (local_1b8 / fVar29);
    lVar5 = lVar4;
  } while (lVar4 != 0x60);
  FUN_039427b0(0x3f800000,param_1,local_1a0,&local_170,param_6);
  local_1f0 = 0x3f80000000000000;
  uStack_1e8 = 0x3f80000000000000;
  FUN_039427b0(0x3f800000,param_1,local_1a0,auStack_194,&local_1f0);
  FUN_039427b0(0x3f800000,param_1,&local_170,lVar2,param_6);
  FUN_039427b0(0x3f800000,param_1,auStack_194,lVar2,param_6);
  local_1f0 = 0x3f80000000000000;
  uStack_1e8 = 0x3f80000000000000;
  FUN_039427b0(0x3f800000,param_1,auStack_194,&uStack_188,&local_1f0);
  FUN_039427b0(0x3f800000,param_1,lVar2,&uStack_158,param_6);
  FUN_039427b0(0x3f800000,param_1,&uStack_188,&uStack_158,param_6);
  local_1f0 = 0x3f80000000000000;
  uStack_1e8 = 0x3f80000000000000;
  FUN_039427b0(0x3f800000,param_1,&uStack_188,lVar1,&local_1f0);
  FUN_039427b0(0x3f800000,param_1,&uStack_158,lVar3,param_6);
  FUN_039427b0(0x3f800000,param_1,lVar1,lVar3,param_6);
  local_1f0 = 0x3f80000000000000;
  uStack_1e8 = 0x3f80000000000000;
  FUN_039427b0(0x3f800000,param_1,lVar1,local_1a0,&local_1f0);
  FUN_039427b0(0x3f800000,param_1,lVar3,&local_170,param_6);
  return;
}

