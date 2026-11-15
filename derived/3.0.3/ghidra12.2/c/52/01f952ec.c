
void FUN_01f952ec(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  short *psVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_318 [25];
  undefined4 local_2b4;
  int local_290;
  int iStack_28c;
  int local_280;
  int iStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  float local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined1 local_240;
  undefined1 local_20c;
  undefined1 local_16c [4];
  undefined *local_168;
  undefined *puStack_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined *puStack_138;
  int local_130;
  int iStack_12c;
  undefined *local_128;
  int local_120;
  int iStack_11c;
  undefined *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  short local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  uint *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined8 local_c8;
  undefined *puStack_c0;
  int local_b8;
  int iStack_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined8 local_98;
  float local_90;
  float local_8c [2];
  float local_84;
  undefined1 local_78 [4];
  undefined1 auStack_74 [4];
  
  if ((*(long *)PTR_DAT_04bb4978 == 0) ||
     (lVar11 = FUN_036f9e68(*(long *)PTR_DAT_04bb4978,(int)param_1[0x15e9]), lVar11 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x01f953c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1,1,0,1);
    return;
  }
  FUN_01f93710(param_1,local_8c,auStack_74);
  lVar11 = param_1[1];
  if (*(int *)(lVar11 + 0x750) == 1) {
    FUN_01f97c10(param_1);
    return;
  }
  local_318[0] = *(uint *)(lVar11 + 0x230);
  lVar11 = *(long *)(lVar11 + 0x68) + 0x278;
  FUN_021e8490(local_318,lVar11,param_1 + 0x31,1,0);
  local_98 = 0;
  local_90 = 0.0;
  local_78[0] = 0;
  local_b0 = PTR_DAT_04bbfe68 + 0x10;
  local_a8 = 0;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar17 = &DAT_055c04a0;
  }
  else {
    puVar17 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar17 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar9 = FUN_006bd550(*puVar17,0);
      puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar17 = &DAT_055c04a0;
      }
    }
  }
  local_a4 = *(undefined4 *)(puVar17 + 7);
  local_a0 = FUN_017baf44();
  puVar2 = PTR_DAT_04bb2010;
  local_a0 = local_a0 & 1;
  local_d0 = PTR_DAT_04bb2010 + 0x10;
  local_c8 = 0;
  local_b8 = (int)((float)(int)local_8c[0] / 5.0) - (uint)(local_8c[0] < 0.0);
  iStack_b4 = (int)((float)(int)local_84 / 5.0) - (uint)(local_84 < 0.0);
  puStack_c0 = local_d0;
  psVar12 = (short *)FUN_01a5190c(&local_b0,0,&puStack_c0,&local_d0);
  puVar3 = PTR_DAT_04bb43c0;
  local_d8 = *(undefined4 *)psVar12;
  local_d4 = *(undefined4 *)(psVar12 + 2);
  if (*psVar12 == -2) goto LAB_01f957ac;
  local_f0 = PTR_DAT_04bc0510 + 0x10;
  local_e0 = (uint *)0x0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  local_e8 = *psVar12;
  local_e6 = (char)psVar12[1];
  local_e5 = *(undefined1 *)((long)psVar12 + 3);
  local_e4 = local_d4;
  uVar10 = FUN_0277d6c4(&local_e8);
  if (*(long *)puVar3 == 0) {
LAB_01f95668:
    local_318[0] = 0;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_01f95668;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar10 = FUN_0277d6c4(&local_d8);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar10) goto LAB_01f95668;
    puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8);
    if (puVar15 == (uint *)0x0) goto LAB_01f95668;
    local_318[0] = 0;
    uVar10 = *puVar15;
    local_e0 = puVar15;
    if ((uVar10 != 0) && (puVar15 != (uint *)(ulong)uVar10)) {
      puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
      local_318[0] = 0;
      if (*puVar16 != 0) {
        uVar10 = puVar16[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar16 + lVar14 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar14 != 0) {
            uVar7 = 0;
            if ((ulong)uVar10 != 0) {
              uVar7 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar10);
            }
            if (*puVar16 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < *(uint *)PTR_DAT_04bc0048) &&
               (local_318[0] = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar7 * 2),
               local_318[0] < 0x52)) goto LAB_01f9566c;
          }
        }
        goto LAB_01f95668;
      }
    }
  }
LAB_01f9566c:
  if (local_318[0] - 1 < 9) {
    puVar2 = puVar2 + 0x10;
    local_108 = 0;
    local_f8 = 0;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    local_118 = puVar3;
    puStack_110 = puVar2;
    local_100 = puVar2;
    FUN_01afb480(&local_f0,&local_118);
    iVar9 = (int)local_c8 + (int)local_108;
    iVar4 = (int)local_c8 + (int)local_f8;
    iVar5 = local_c8._4_4_ + local_108._4_4_;
    iVar6 = local_c8._4_4_ + local_f8._4_4_;
    local_130 = iVar9;
    if (iVar4 <= iVar9) {
      local_130 = iVar4;
    }
    local_120 = iVar9;
    if (iVar9 <= iVar4) {
      local_120 = iVar4;
    }
    iStack_12c = iVar5;
    if (iVar6 <= iVar5) {
      iStack_12c = iVar6;
    }
    local_158 = 0;
    iStack_11c = iVar5;
    if (iVar5 <= iVar6) {
      iStack_11c = iVar6;
    }
    local_16c[0] = 0;
    local_148 = 0;
    local_168 = puVar3;
    puStack_160 = puVar2;
    local_150 = puVar2;
    local_140 = puVar3;
    puStack_138 = puVar2;
    local_128 = puVar2;
    uVar13 = FUN_01517328(&local_168,local_16c,&puStack_138,&local_d8);
    if ((uVar13 & 1) != 0) {
      iVar1 = ((int)local_148 - (int)local_158) + 1;
      if (iVar1 + iVar1 * (local_148._4_4_ - local_158._4_4_) == 8) {
        local_78[0] = 1;
        fVar18 = (float)iVar9 * 5.0 + 5.0;
        local_90 = (float)iVar5 * 5.0 + 5.0;
        fVar19 = local_8c[0] - (float)iVar4 * 5.0;
        fVar20 = local_84 - (float)iVar6 * 5.0;
        local_8c[0] = local_8c[0] - fVar18;
        local_84 = local_84 - local_90;
        bVar8 = fVar20 * fVar20 + fVar19 * fVar19 <= local_84 * local_84 + local_8c[0] * local_8c[0]
        ;
        if (bVar8) {
          fVar18 = (float)iVar4 * 5.0;
        }
        local_98 = (ulong)(uint)fVar18;
        if (bVar8) {
          local_90 = (float)iVar6 * 5.0;
        }
      }
      else {
        uVar13 = FUN_021f2630(&local_d8,&local_140,lVar11,param_1 + 0x31,&local_98,local_78,0);
        if ((uVar13 & 1) == 0) {
          FUN_02194660(param_1 + 0x15ee);
          FUN_01f95268(param_1);
          return;
        }
      }
      FUN_01e63f1c(local_318);
      local_268 = local_d8;
      uStack_264 = local_d4;
      local_290 = local_130;
      iStack_28c = iStack_12c;
      local_280 = local_120;
      iStack_27c = iStack_11c;
      local_278 = (undefined4)local_98;
      uStack_274 = local_98._4_4_;
      local_270 = local_90;
      local_240 = local_78[0];
      local_318[0] = 0x14;
      local_2b4 = 1;
      local_20c = 1;
      local_260 = 0x3f000000;
      if ((int)param_1[0x15f0] < *(int *)((long)param_1 + 0xaf84)) {
        FUN_021920b0(param_1 + 0x15f0,local_318);
      }
      FUN_01f97c10(param_1);
      return;
    }
  }
LAB_01f957ac:
  (**(code **)(*param_1 + 0x38))(param_1,1,0,1);
  return;
}

