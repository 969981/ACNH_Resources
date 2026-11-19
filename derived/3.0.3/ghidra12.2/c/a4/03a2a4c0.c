
void FUN_03a2a4c0(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
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
  float local_17c;
  float fStack_178;
  float local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  if (*(char *)(param_1 + 0x338) != '\0') {
    uVar2 = *(uint *)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
    uVar1 = param_3;
    if (uVar2 <= param_3) {
      uVar1 = 0;
    }
    if (*(char *)(param_1 + 0x33c) == '\0') {
      lVar3 = lVar7;
    }
    else {
      lVar3 = lVar7 + (long)(int)uVar1 * 0x548;
      FUN_039437e0(*(float *)(param_1 + 0x350) * 0.5,param_2,lVar3 + 0x180,param_5,lVar3 + 0x18c,
                   lVar3 + 0x1ec);
      uVar2 = *(uint *)(param_1 + 8);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    lVar7 = lVar7 + (long)(int)uVar1 * 0x548;
    uVar1 = param_3;
    if (uVar2 <= param_3) {
      uVar1 = 0;
    }
    lVar3 = lVar3 + (long)(int)uVar1 * 0x548;
    local_138._0_4_ = *(float *)(param_1 + 0x34c) + *(float *)(lVar7 + 0x17c);
    local_140 = (undefined **)
                CONCAT44(*(float *)(param_1 + 0x348) + *(float *)(lVar7 + 0x178),
                         *(float *)(param_1 + 0x344) + *(float *)(lVar7 + 0x174));
    FUN_039437e0(*(float *)(param_1 + 0x350) * 0.5,param_2,&local_140,param_5,lVar3 + 0x18c,
                 lVar3 + 0x1ec);
    uVar1 = param_3;
    if (*(uint *)(param_1 + 8) <= param_3) {
      uVar1 = 0;
    }
    lVar3 = *(long *)(param_1 + 0x10) + (long)(int)uVar1 * 0x548;
    local_140 = (undefined **)
                CONCAT44(*(float *)(param_1 + 0x348) + *(float *)(lVar7 + 0x178),
                         *(float *)(param_1 + 0x344) + *(float *)(lVar7 + 0x174));
    local_138 = CONCAT44(local_138._4_4_,*(float *)(param_1 + 0x34c) + *(float *)(lVar7 + 0x17c));
    FUN_039437e0(*(float *)(param_1 + 0x354) * 0.5,param_2,&local_140,param_6,lVar3 + 0x18c,
                 lVar3 + 0x1ec);
    uVar1 = param_3;
    if (*(uint *)(param_1 + 8) <= param_3) {
      uVar1 = 0;
    }
    lVar3 = *(long *)(param_1 + 0x10) + (long)(int)uVar1 * 0x548;
    FUN_039424e0(param_2,lVar3 + 0x18c,lVar3 + 0x1ec);
    if (*(uint *)(param_1 + 8) <= param_3) {
      param_3 = 0;
    }
    lVar3 = *(long *)(param_1 + 0x10) + (long)(int)param_3 * 0x548;
    uStack_d8 = *(undefined8 *)(lVar3 + 0x194);
    local_e0 = *(undefined8 *)(lVar3 + 0x18c);
    uStack_c8 = *(undefined8 *)(lVar3 + 0x1a4);
    local_d0 = *(undefined8 *)(lVar3 + 0x19c);
    uStack_b8 = *(undefined8 *)(lVar3 + 0x1b4);
    local_c0 = *(undefined8 *)(lVar3 + 0x1ac);
    FUN_007535b4(&local_e0,&local_e0);
    local_fc = (local_e0._4_4_ * -0.0 + (float)local_e0 * -0.0) - (float)uStack_d8;
    fStack_f8 = (local_d0._4_4_ * -0.0 + (float)local_d0 * -0.0) - (float)uStack_c8;
    local_f4 = (local_c0._4_4_ * -0.0 + (float)local_c0 * -0.0) - (float)uStack_b8;
    if ((((local_fc < -0.1) || (0.1 < local_fc)) || (fStack_f8 < -0.1)) ||
       (((0.1 < fStack_f8 || (local_f4 < -0.1)) || (0.1 < local_f4)))) {
      local_100 = 0;
      local_128 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      local_120 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_118 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      local_110 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      local_138 = *(undefined8 *)PTR_DAT_04bb2f80;
      local_130 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
      uStack_108 = 0;
      local_e8 = 0;
      local_140 = &PTR_FUN_04b65548;
      local_f0 = 0x3f80000000000000;
      FUN_038e4634(&local_140,&local_138);
      local_160 = local_128;
      uStack_158 = local_120;
      local_150 = local_118;
      uStack_148 = local_110;
      local_170 = local_138;
      uStack_168 = local_130;
      FUN_007535b4(&local_170,&local_170);
      if (0 < *(int *)(param_1 + 0x368)) {
        iVar4 = 0;
        fVar35 = *(float *)(lVar7 + 0x17c);
        fVar8 = (float)local_170;
        fVar29 = fVar8 * 0.0;
        fVar11 = (float)((ulong)local_170 >> 0x20);
        fVar32 = fVar11 * 0.0;
        fVar12 = (float)uStack_168;
        fVar33 = fVar12 * 0.0;
        fVar13 = (float)((ulong)uStack_168 >> 0x20);
        fVar34 = fVar13 * 0.0;
        fVar14 = (float)local_160;
        fVar16 = (float)((ulong)local_160 >> 0x20);
        fVar17 = (float)uStack_158;
        fVar18 = (float)((ulong)uStack_158 >> 0x20);
        iVar5 = *(int *)(param_1 + 0x35c);
        fVar19 = (float)local_150;
        fVar23 = (float)((ulong)local_150 >> 0x20);
        fVar24 = (float)uStack_148;
        fVar25 = (float)((ulong)uStack_148 >> 0x20);
        fVar20 = *(float *)(param_1 + 0x350) * 0.5;
        fVar21 = *(float *)(param_1 + 0x344);
        fVar26 = *(float *)(lVar7 + 0x174);
        fVar30 = *(float *)(lVar7 + 0x178);
        fVar27 = *(float *)(param_1 + 0x348);
        fVar31 = *(float *)(param_1 + 0x34c);
        fVar28 = 1.0 / (float)(*(int *)(param_1 + 0x368) * iVar5);
        do {
          fVar38 = *(float *)(param_1 + 0x364) * 3.1415927;
          fVar9 = sinf(fVar38);
          fVar38 = cosf(fVar38);
          fVar36 = *(float *)(param_1 + 0x364) * 3.1415927 *
                   (float)(*(int *)(param_1 + 0x35c) * iVar4);
          fVar10 = sinf(fVar36);
          fVar36 = cosf(fVar36);
          if (*(int *)(param_1 + 0x35c) < 1) {
            iVar5 = *(int *)(param_1 + 0x35c);
          }
          else {
            fVar15 = (float)iVar5;
            iVar6 = 0;
            fVar39 = fVar10 + fVar36 * 0.0;
            fVar10 = fVar36 - fVar10 * 0.0;
            do {
              local_174 = 0.0;
              fVar37 = fVar39 * -fVar9 + fVar10 * fVar38;
              fVar39 = fVar38 * fVar39 + fVar10 * fVar9;
              local_17c = fVar37;
              fStack_178 = fVar39;
              fVar10 = powf(fVar28 * fVar15 * (float)iVar4 + (float)iVar6 * fVar28,
                            *(float *)(param_1 + 0x358));
              fVar22 = fVar10 * fStack_178;
              fVar36 = fVar10 * local_17c;
              fVar10 = fVar10 * local_174;
              fStack_178 = fVar18 + fVar34 + fVar25 * 0.0 + 0.0 + fVar27 + fVar30 +
                           fVar20 * (fVar16 + fVar32 + fVar23 * 0.0 + 0.0) * fVar22 +
                           fVar36 * fVar20 * (fVar14 + fVar29 + fVar19 * 0.0 + 0.0) +
                           fVar10 * fVar20 * (fVar17 + fVar33 + fVar24 * 0.0 + 0.0);
              local_17c = fVar13 + fVar18 * 0.0 + fVar25 * 0.0 + 0.0 + fVar21 + fVar26 +
                          fVar20 * (fVar11 + fVar16 * 0.0 + fVar23 * 0.0 + 0.0) * fVar22 +
                          fVar36 * fVar20 * (fVar8 + fVar14 * 0.0 + fVar19 * 0.0 + 0.0) +
                          fVar10 * fVar20 * (fVar12 + fVar17 * 0.0 + fVar24 * 0.0 + 0.0);
              local_174 = fVar25 + fVar34 + fVar18 * 0.0 + 0.0 + fVar31 + fVar35 +
                          fVar20 * (fVar23 + fVar32 + fVar16 * 0.0 + 0.0) * fVar22 +
                          fVar36 * fVar20 * (fVar19 + fVar29 + fVar14 * 0.0 + 0.0) +
                          fVar10 * fVar20 * (fVar24 + fVar33 + fVar17 * 0.0 + 0.0);
              FUN_03947210(0x3f800000,param_2,&local_17c,param_4);
              iVar6 = iVar6 + 1;
              iVar5 = *(int *)(param_1 + 0x35c);
              fVar10 = fVar37;
            } while (iVar6 < iVar5);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x368));
      }
    }
  }
  return;
}

