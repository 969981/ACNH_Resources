
void FUN_03941e10(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  float fStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *puStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118 [2];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *puStack_100;
  undefined8 local_f8;
  undefined1 *puStack_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  
  FUN_038e6ab4(&local_e8,param_3);
  fVar24 = param_2[5];
  fVar25 = param_2[6];
  fVar26 = param_2[7];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar16 = param_2[10];
  fStack_14c = local_b8;
  lVar1 = (long)&local_140 + 4;
  fVar17 = param_2[0xb];
  local_148 = 0xbf800000bf800000;
  local_140 = 0x3f800000bf800000;
  local_138 = 0xbf800000bf800000;
  puStack_130 = &DAT_3f8000003f800000;
  lVar2 = (long)&local_128 + 4;
  local_128 = 0xbf800000bf800000;
  uStack_120 = 0xbf8000003f800000;
  lVar3 = (long)&local_110 + 4;
  local_118[0] = -1.0;
  local_118[1] = -1.0;
  local_110 = &DAT_3f8000003f800000;
  lVar4 = (long)&local_f8 + 4;
  fVar10 = *param_2;
  fVar7 = param_2[1];
  fVar11 = param_2[2];
  fVar8 = param_2[3];
  fVar23 = param_2[4];
  local_108 = 0x3f800000bf800000;
  puStack_100 = &DAT_3f8000003f800000;
  local_f8 = 0xbf8000003f800000;
  puStack_f0 = &DAT_3f8000003f800000;
  lVar6 = 4;
  do {
    fVar18 = *(float *)((long)local_118 + lVar6 + -0x34);
    fVar19 = *(float *)((long)local_118 + lVar6 + -0x30);
    lVar5 = lVar6 + 0xc;
    fVar21 = *(float *)((long)local_118 + lVar6 + -0x2c);
    fVar20 = *(float *)((long)local_118 + lVar6 + -4);
    fVar22 = *(float *)((long)local_118 + lVar6);
    fVar15 = 1.0 / (local_ac + local_b4 * fVar19 + fVar18 * local_b8 + fVar21 * local_b0);
    fVar9 = (local_dc + local_e4 * fVar19 + fVar18 * local_e8 + fVar21 * local_e0) * fVar15;
    fVar12 = (local_cc + local_d4 * fVar19 + fVar18 * local_d8 + fVar21 * local_d0) * fVar15;
    fVar15 = (local_bc + local_c4 * fVar19 + fVar18 * local_c8 + fVar21 * local_c0) * fVar15;
    fVar19 = *(float *)((long)local_118 + lVar6 + 4);
    *(float *)((long)local_118 + lVar6 + -0x34) =
         fVar8 + fVar7 * fVar12 + fVar9 * fVar10 + fVar15 * fVar11;
    fVar18 = 1.0 / (local_ac + local_b4 * fVar22 + fVar20 * local_b8 + fVar19 * local_b0);
    *(float *)((long)local_118 + lVar6 + -0x30) =
         fVar26 + fVar24 * fVar12 + fVar9 * fVar23 + fVar15 * fVar25;
    *(float *)((long)local_118 + lVar6 + -0x2c) =
         fVar17 + fVar14 * fVar12 + fVar9 * fVar13 + fVar15 * fVar16;
    fVar12 = (local_dc + local_e4 * fVar22 + fVar20 * local_e8 + fVar19 * local_e0) * fVar18;
    fVar9 = (local_cc + local_d4 * fVar22 + fVar20 * local_d8 + fVar19 * local_d0) * fVar18;
    fVar18 = (local_bc + local_c4 * fVar22 + fVar20 * local_c8 + fVar19 * local_c0) * fVar18;
    *(float *)((long)local_118 + lVar6 + -4) =
         fVar8 + fVar7 * fVar9 + fVar12 * fVar10 + fVar18 * fVar11;
    *(float *)((long)local_118 + lVar6) =
         fVar26 + fVar24 * fVar9 + fVar12 * fVar23 + fVar18 * fVar25;
    *(float *)((long)local_118 + lVar6 + 4) =
         fVar17 + fVar14 * fVar9 + fVar12 * fVar13 + fVar18 * fVar16;
    lVar6 = lVar5;
  } while (lVar5 != 0x34);
  FUN_039424e0(param_1,param_4,param_5);
  FUN_039427b0(0x3f800000,param_1,&local_148,lVar1,param_7);
  FUN_039427b0(0x3f800000,param_1,lVar1,&puStack_130,param_7);
  FUN_039427b0(0x3f800000,param_1,&puStack_130,lVar2,param_7);
  FUN_039427b0(0x3f800000,param_1,lVar2,&local_148,param_7);
  FUN_039427b0(0x3f800000,param_1,local_118,lVar3,param_7);
  FUN_039427b0(0x3f800000,param_1,lVar3,&puStack_100,param_7);
  FUN_039427b0(0x3f800000,param_1,&puStack_100,lVar4,param_7);
  FUN_039427b0(0x3f800000,param_1,lVar4,local_118,param_7);
  FUN_039427b0(0x3f800000,param_1,&local_148,local_118,param_7);
  FUN_039427b0(0x3f800000,param_1,lVar1,lVar3,param_7);
  FUN_039427b0(0x3f800000,param_1,&puStack_130,&puStack_100,param_7);
  FUN_039427b0(0x3f800000,param_1,lVar2,lVar4,param_7);
  return;
}

