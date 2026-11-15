
ulong FUN_0240bf18(long param_1,char *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  float *pfVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  byte bVar9;
  undefined2 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined *local_178;
  undefined *puStack_170;
  undefined8 local_168;
  undefined *local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined8 local_148;
  float local_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  char local_110;
  undefined8 local_108;
  float local_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  char local_d0;
  undefined4 local_c4 [2];
  undefined1 local_ba;
  uint local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined4 local_86;
  undefined1 local_82;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  
  fVar22 = *(float *)(param_2 + 4);
  fVar23 = *(float *)(param_2 + 0xc);
  fVar25 = SQRT(fVar22 * fVar22 + 0.0 + fVar23 * fVar23);
  if (0.0 < fVar25) {
    fVar25 = 1.0 / fVar25;
    fVar22 = fVar22 * fVar25;
    fVar23 = fVar23 * fVar25;
  }
  pcVar2 = (char *)(param_1 + 0x12f8);
  if ((fVar22 == 0.0) && (fVar23 == 0.0)) {
    uVar12 = 0x80000000;
  }
  else {
    uVar12 = FUN_006f0400();
    uVar12 = uVar12 ^ 0x80000000;
  }
  lVar19 = *(long *)(param_1 + 0x68);
  if (param_2[0x10] == '\0') {
    lVar20 = lVar19 + 0x278;
    if (*param_2 != '\0') {
      lVar20 = lVar19 + 0x284;
    }
  }
  else {
    uVar18 = *(uint *)(lVar19 + 0x2b4);
    if (uVar18 - uVar12 != 0) {
      uVar4 = uVar18 - uVar12;
      if (uVar18 <= uVar12) {
        uVar4 = uVar12 - uVar18;
      }
      uVar18 = -uVar4;
      if (uVar4 < 0x80000001) {
        uVar18 = uVar4;
      }
      if (45.0 < (float)uVar18 * 8.381903e-08) {
        return 0;
      }
    }
    lVar20 = lVar19 + 0x278;
    if (*param_2 != '\0') {
      lVar20 = lVar19 + 0x284;
    }
    puVar7 = PTR_DAT_04bc3038;
    if (*pcVar2 != '\0') {
      puVar7 = (undefined *)(param_1 + 0xeec);
    }
    FUN_02569464(&local_188,puVar7);
    if ((uint)local_188 - uVar12 != 0) {
      uVar18 = (uint)local_188 - uVar12;
      if ((uint)local_188 <= uVar12) {
        uVar18 = uVar12 - (uint)local_188;
      }
      uVar12 = -uVar18;
      if (uVar18 < 0x80000001) {
        uVar12 = uVar18;
      }
      if (45.0 < (float)uVar12 * 8.381903e-08) {
        return 0;
      }
    }
  }
  uVar16 = FUN_0240b654(lVar20,0);
  puVar7 = PTR_DAT_04bc3038;
  uVar17 = 0;
  if ((uVar16 & 1) == 0) {
    puVar1 = (undefined *)(param_1 + 0xeec);
    cVar8 = param_2[0x11];
    local_188 = (ulong)CONCAT31((int3)((uint)local_188 >> 8),*param_2);
    local_180 = CONCAT31(local_180._1_3_,param_2[0x10]);
    puVar5 = PTR_DAT_04bc3038;
    if (*pcVar2 != '\0') {
      puVar5 = puVar1;
    }
    FUN_02569464((long)&local_188 + 4,puVar5);
    local_17c = 0;
    local_178 = (undefined *)CONCAT71(local_178._1_7_,param_2[0x11]);
    uVar17 = FUN_0240c470(param_1,&local_188,0);
    puVar5 = PTR_DAT_04bb2010;
    iVar13 = (int)uVar17;
    if (iVar13 != 1) {
      local_180 = 0;
      bVar11 = iVar13 == 2;
      local_188 = 0;
      local_168 = 0;
      local_148 = 0;
      local_178 = PTR_DAT_04bbc1a0 + 0x10;
      local_140 = 0.0;
      local_128 = 0;
      puStack_170 = PTR_DAT_04bb2010 + 0x10;
      local_108 = 0;
      local_100 = 0.0;
      local_e8 = 0;
      local_150 = 0;
      local_110 = '\0';
      local_d0 = '\0';
      uStack_158 = 0;
      local_118 = 0;
      local_d8 = 0;
      if (cVar8 == '\0') {
        puVar21 = &local_108;
        local_a8 = (undefined *)((ulong)local_a8 & 0xffffffffffffff00);
        local_b0 = (undefined *)CONCAT71(local_b0._1_7_,param_2[0x10]);
        puVar6 = puVar7;
        if (*pcVar2 != '\0') {
          puVar6 = puVar1;
        }
        local_160 = puStack_170;
        local_138 = local_178;
        puStack_130 = puStack_170;
        local_120 = puStack_170;
        local_f8 = local_178;
        puStack_f0 = puStack_170;
        local_e0 = puStack_170;
        local_b8._0_1_ = *param_2;
        FUN_02569464(local_c4,puVar6);
        local_b0 = (undefined *)CONCAT44(0x41d80000,(undefined4)local_b0);
        local_b4 = local_c4[0];
        iVar14 = FUN_0240c470(param_1,&local_b8,&local_148);
        local_a8 = (undefined *)((ulong)local_a8 & 0xffffffffffffff00);
        local_b8 = CONCAT31(local_b8._1_3_,*param_2);
        local_b0 = (undefined *)CONCAT71(local_b0._1_7_,param_2[0x10]);
        puVar6 = puVar7;
        if (*pcVar2 != '\0') {
          puVar6 = puVar1;
        }
        FUN_02569464(local_c4,puVar6);
        local_b0 = (undefined *)CONCAT44(0xc1d80000,(undefined4)local_b0);
        local_b4 = local_c4[0];
        iVar15 = FUN_0240c470(param_1,&local_b8,puVar21);
        bVar11 = (iVar13 == 2 || iVar14 == 2) || iVar15 == 2;
        if (local_110 != '\0' || local_d0 != '\0') {
          bVar9 = *(byte *)(param_1 + 0x1ee8);
          lVar19 = *(long *)(param_1 + 0x68);
          if (*pcVar2 != '\0') {
            puVar7 = puVar1;
          }
          FUN_02569464(&local_b8,puVar7);
          uVar12 = (uint)bVar9;
          bVar11 = 7 < uVar12;
          uVar18 = uVar12;
          if (bVar11) {
            uVar18 = 0xff;
            uVar12 = 0xffffffff;
          }
          pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(local_b8 >> 0x14) & 0xff0));
          fVar23 = (float)(local_b8 & 0xffffff) * 5.9604645e-08;
          fVar25 = *pfVar3 + fVar23 * pfVar3[1];
          fVar22 = pfVar3[2] + fVar23 * pfVar3[3];
          fVar23 = *(float *)(lVar19 + 0x278) +
                   fVar25 * 0.0 * 0.0 + fVar22 * 0.0 + (fVar25 + 0.0) * 50.0;
          fVar22 = *(float *)(lVar19 + 0x280) + (fVar22 * 0.0 * 0.0 - fVar25 * 0.0) + fVar22 * 50.0;
          fVar25 = fVar23 - (float)local_148;
          fVar24 = fVar22 - local_140;
          fVar23 = fVar23 - (float)local_108;
          fVar22 = fVar22 - local_100;
          lVar20 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar18 * 0x740;
          lVar19 = lVar20;
          if (bVar11) {
            lVar19 = *(long *)PTR_DAT_04bb4f78 + 0x20;
          }
          *(undefined8 *)(lVar19 + 0x420) = 0x100000000;
          *(undefined4 *)(lVar19 + 0x4c0) = 0;
          uVar10 = *(undefined2 *)PTR_DAT_04bb6298;
          if (SQRT(fVar22 * fVar22 + fVar23 * fVar23) <= SQRT(fVar24 * fVar24 + fVar25 * fVar25)) {
            *(uint *)(lVar19 + 0x4d4) = uVar12;
            if (bVar9 < 8) {
              *(byte *)(lVar20 + 0x4d8) = bVar9;
            }
            *(undefined1 *)(lVar19 + 0x4d9) = 1;
            local_a0 = (undefined4)local_e8;
            uStack_9c = local_e8._4_4_;
            local_90 = (undefined4)local_d8;
            uStack_8c = local_d8._4_4_;
          }
          else {
            *(uint *)(lVar19 + 0x4d4) = uVar12;
            if (bVar9 < 8) {
              *(byte *)(lVar20 + 0x4d8) = bVar9;
            }
            *(undefined1 *)(lVar19 + 0x4d9) = 1;
            puVar21 = &local_148;
            local_a0 = (undefined4)local_128;
            uStack_9c = local_128._4_4_;
            local_90 = (undefined4)local_118;
            uStack_8c = local_118._4_4_;
          }
          local_a8 = puVar5 + 0x10;
          local_82 = 0;
          local_b0 = PTR_DAT_04bbc1a0 + 0x10;
          local_78 = 0;
          local_b8 = CONCAT22(local_b8._2_2_,uVar10);
          local_86 = 0x100;
          local_80 = 0xffffffffffffffff;
          local_74 = 0x41200000;
          local_6c = 0xff00;
          local_88 = 0xff00;
          if (*(int *)(lVar19 + 0x4d0) == 0x15) {
            local_88 = 0x1400;
          }
          local_ba = 0;
          local_98 = local_a8;
          uVar16 = FUN_023016c0(lVar19 + 0x4c8,&local_b8,local_c4);
          if ((uVar16 & 1) == 0) {
            return 0;
          }
          FUN_0240df04(param_1,puVar21);
          return 1;
        }
      }
      else {
        iVar15 = 0;
        iVar14 = 0;
      }
      uVar12 = 2;
      if (!bVar11) {
        uVar12 = 0;
      }
      if (iVar14 == 1 || iVar15 == 1) {
        uVar12 = 1;
      }
      uVar17 = (ulong)uVar12;
    }
  }
  return uVar17;
}

