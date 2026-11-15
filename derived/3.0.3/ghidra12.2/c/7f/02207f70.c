
/* WARNING: Removing unreachable block (ram,0x022080c4) */

void FUN_02207f70(undefined8 param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  undefined **ppuVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_160;
  undefined *local_158 [2];
  int local_148;
  int iStack_144;
  undefined *local_140;
  int local_138;
  int iStack_134;
  undefined *local_130;
  undefined *puStack_128;
  int local_120;
  int iStack_11c;
  undefined *local_118;
  int local_110;
  int iStack_10c;
  undefined *local_108;
  undefined *puStack_100;
  int local_f8;
  int iStack_f4;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  undefined *local_e0;
  undefined *puStack_d8;
  int local_d0;
  int iStack_cc;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined4 local_8c;
  
  puVar11 = PTR_DAT_04bb30a0;
  puVar4 = PTR_DAT_04bbc1a0 + 0x10;
  puVar5 = PTR_DAT_04bb2010 + 0x10;
  iVar16 = *(int *)(*(long *)PTR_DAT_04bb5c90 + 0x28);
  iVar10 = *(int *)(*(long *)PTR_DAT_04bb5c90 + 0x2c);
  local_160 = 0;
  local_138 = iVar16 + 8;
  iStack_134 = iVar10 + 0xd;
  local_148 = iVar16 + 3;
  iVar1 = iVar10 + 10;
  local_110 = iVar16 + 4;
  iStack_10c = iVar10 + 0x11;
  local_e8 = iVar16 + 0xe;
  iVar2 = iVar16 + 7;
  iStack_11c = iVar10 + 0xe;
  local_d0 = iVar16 + 0xd;
  local_f8 = iVar16 + 9;
  iVar3 = iVar16 + 6;
  iVar6 = iVar3;
  if (iVar2 <= iVar3) {
    iVar6 = iVar2;
  }
  if (iVar3 <= iVar2) {
    iVar3 = iVar2;
  }
  iVar2 = iVar16 + 10;
  iVar16 = iVar16 + 0xb;
  local_90 = 1;
  local_8c = 1;
  iVar7 = iVar2;
  if (iVar16 <= iVar2) {
    iVar7 = iVar16;
  }
  local_a8 = 0;
  if (iVar2 <= iVar16) {
    iVar2 = iVar16;
  }
  uStack_98 = 0;
  uVar8 = 0x6e090aaa;
  if (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) != 1) {
    uVar8 = 0x55acd0a6;
  }
  local_158[0] = puVar4;
  local_158[1] = puVar5;
  iStack_144 = iVar1;
  local_140 = puVar5;
  local_130 = puVar4;
  puStack_128 = puVar5;
  local_120 = local_148;
  local_118 = puVar5;
  local_108 = puVar4;
  puStack_100 = puVar5;
  iStack_f4 = iVar1;
  local_f0 = puVar5;
  iStack_e4 = iStack_134;
  local_e0 = puVar4;
  puStack_d8 = puVar5;
  iStack_cc = iStack_11c;
  local_c8 = puVar5;
  local_c0 = local_e8;
  iStack_bc = iStack_10c;
  local_b8 = puVar4;
  puStack_b0 = puVar5;
  local_a0 = puVar5;
  uVar12 = FUN_0118ad90(&local_b8,uVar8);
  iVar13 = 0;
  iVar16 = 0;
  if ((uVar12 & 1) != 0) {
    if (3 < local_90) {
      local_90 = 0;
    }
    iVar16 = (&DAT_05300528)[(ulong)local_90 * 8] + (int)local_a8;
    iVar13 = (&DAT_0530052c)[(ulong)local_90 * 8] + local_a8._4_4_;
  }
  local_a8 = 0;
  local_90 = 2;
  local_8c = 2;
  uStack_98 = 0;
  uVar8 = 0x3b84b490;
  if (*(int *)(*(long *)puVar11 + 0x65204) != 1) {
    uVar8 = 0x995cbf71;
  }
  local_b8 = puVar4;
  puStack_b0 = puVar5;
  local_a0 = puVar5;
  uVar12 = FUN_0118ad90(&local_b8,uVar8);
  if ((uVar12 & 1) == 0) {
    iVar14 = 0;
    iVar17 = 0;
  }
  else {
    uVar9 = local_90;
    if (3 < local_90) {
      uVar9 = 0;
    }
    iVar17 = (&DAT_05300528)[(ulong)uVar9 * 8] + (int)local_a8;
    iVar14 = (&DAT_0530052c)[(ulong)uVar9 * 8] + local_a8._4_4_;
  }
  fVar24 = ((float)iVar16 * 5.0 + 5.0 + (float)iVar17 * 5.0 + 5.0) * 0.5;
  fVar23 = ((float)iVar13 * 5.0 + 5.0 + (float)iVar14 * 5.0 + 5.0) * 0.5;
  fVar22 = fVar23 + -5.0;
  if (fVar24 <= *param_2) {
    if (param_2[2] < fVar22) {
      lVar20 = 0;
      lVar15 = 2;
      goto LAB_0220823c;
    }
    lVar15 = 3;
    lVar20 = 1;
LAB_02208264:
    lVar21 = 0;
    lVar18 = 2;
  }
  else {
    if (fVar22 <= param_2[2]) {
      lVar15 = 1;
      lVar20 = 3;
      goto LAB_02208264;
    }
    lVar15 = 0;
    lVar20 = 2;
LAB_0220823c:
    lVar21 = 1;
    lVar18 = 3;
  }
  ppuVar19 = local_158 + lVar15 * 5;
  iVar10 = iVar10 + 0xb;
  uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
  if ((uVar12 & 1) == 0) {
LAB_022082d8:
    uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
    if ((uVar12 & 1) != 0) {
      if ((((local_160._4_4_ < iVar6) || (iVar3 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))) &&
         ((((local_160._4_4_ < iVar7 || (iVar2 < local_160._4_4_)) || ((int)local_160 < iVar1)) ||
          (iVar10 < (int)local_160)))) goto LAB_0220870c;
    }
    uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
    if ((uVar12 & 1) != 0) {
      if ((((local_160._4_4_ < iVar6) || (iVar3 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))) &&
         (((local_160._4_4_ < iVar7 || (iVar2 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))))) goto LAB_0220870c;
    }
    ppuVar19 = local_158 + lVar20 * 5;
    uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
    if ((uVar12 & 1) != 0) {
      if (((((local_160._4_4_ < iVar6) || (iVar3 < local_160._4_4_)) || ((int)local_160 < iVar1)) ||
          (iVar10 < (int)local_160)) &&
         (((local_160._4_4_ < iVar7 || (iVar2 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))))) goto LAB_0220870c;
    }
    uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
    if ((uVar12 & 1) != 0) {
      if ((((local_160._4_4_ < iVar6) || (iVar3 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))) &&
         ((((local_160._4_4_ < iVar7 || (iVar2 < local_160._4_4_)) || ((int)local_160 < iVar1)) ||
          (iVar10 < (int)local_160)))) goto LAB_0220870c;
    }
    uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
    if ((uVar12 & 1) != 0) {
      if ((((local_160._4_4_ < iVar6) || (iVar3 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))) &&
         (((local_160._4_4_ < iVar7 || (iVar2 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))))) goto LAB_0220870c;
    }
    ppuVar19 = local_158 + lVar21 * 5;
    uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
    if ((uVar12 & 1) != 0) {
      if (((((local_160._4_4_ < iVar6) || (iVar3 < local_160._4_4_)) || ((int)local_160 < iVar1)) ||
          (iVar10 < (int)local_160)) &&
         (((local_160._4_4_ < iVar7 || (iVar2 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))))) goto LAB_0220870c;
    }
    uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
    if ((uVar12 & 1) != 0) {
      if ((((local_160._4_4_ < iVar6) || (iVar3 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))) &&
         ((((local_160._4_4_ < iVar7 || (iVar2 < local_160._4_4_)) || ((int)local_160 < iVar1)) ||
          (iVar10 < (int)local_160)))) goto LAB_0220870c;
    }
    uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
    if ((uVar12 & 1) != 0) {
      if ((((local_160._4_4_ < iVar6) || (iVar3 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))) &&
         (((local_160._4_4_ < iVar7 || (iVar2 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))))) goto LAB_0220870c;
    }
    ppuVar19 = local_158 + lVar18 * 5;
    uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
    if ((uVar12 & 1) != 0) {
      if (((((local_160._4_4_ < iVar6) || (iVar3 < local_160._4_4_)) || ((int)local_160 < iVar1)) ||
          (iVar10 < (int)local_160)) &&
         (((local_160._4_4_ < iVar7 || (iVar2 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))))) goto LAB_0220870c;
    }
    uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
    if ((uVar12 & 1) != 0) {
      if ((((local_160._4_4_ < iVar6) || (iVar3 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))) &&
         ((((local_160._4_4_ < iVar7 || (iVar2 < local_160._4_4_)) || ((int)local_160 < iVar1)) ||
          (iVar10 < (int)local_160)))) goto LAB_0220870c;
    }
    uVar12 = FUN_021fead0((long)&local_160 + 4,&local_160,param_1,ppuVar19);
    if ((uVar12 & 1) != 0) {
      if ((((local_160._4_4_ < iVar6) || (iVar3 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))) &&
         (((local_160._4_4_ < iVar7 || (iVar2 < local_160._4_4_)) ||
          (((int)local_160 < iVar1 || (iVar10 < (int)local_160)))))) goto LAB_0220870c;
    }
    fVar23 = fVar23 + -20.0;
    *param_3 = fVar24;
    param_3[1] = 0.0;
  }
  else {
    if (((((iVar6 <= local_160._4_4_) && (local_160._4_4_ <= iVar3)) && (iVar1 <= (int)local_160))
        && ((int)local_160 <= iVar10)) ||
       (((iVar7 <= local_160._4_4_ && (local_160._4_4_ <= iVar2)) &&
        ((iVar1 <= (int)local_160 && ((int)local_160 <= iVar10)))))) goto LAB_022082d8;
LAB_0220870c:
    if (param_3 == (float *)0x0) {
      return;
    }
    *param_3 = (float)local_160._4_4_ * 5.0 + 2.5;
    fVar23 = (float)(int)local_160 * 5.0 + 2.5;
  }
  param_3[2] = fVar23;
  return;
}

