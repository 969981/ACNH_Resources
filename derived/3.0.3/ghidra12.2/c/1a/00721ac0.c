
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00721ac0(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  uint *puVar19;
  int *piVar20;
  undefined4 uVar21;
  ulong uVar22;
  long lVar23;
  void *pvVar24;
  ulong uVar25;
  undefined8 *puVar26;
  void *pvVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined8 local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined1 local_41c [4];
  undefined *local_418;
  undefined1 *local_410;
  int local_408;
  undefined1 local_404 [127];
  undefined1 local_385;
  undefined *local_380;
  undefined1 *local_378;
  undefined4 local_370;
  undefined1 local_36c [79];
  undefined1 local_31d;
  undefined1 local_2ed;
  undefined *local_2e8;
  undefined1 *local_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4 [127];
  undefined1 local_255;
  undefined *local_250;
  undefined1 *local_248;
  undefined4 local_240;
  undefined1 local_23c [127];
  undefined1 local_1bd;
  undefined8 local_1b8;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined2 local_190;
  undefined2 uStack_18e;
  undefined8 uStack_18c;
  int local_180;
  undefined4 uStack_17c;
  void *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb27c0;
  if (*(long *)(param_1 + 0x2a0) == 0) {
    return;
  }
  lVar23 = *(long *)(param_1 + 0x278);
  if (lVar23 == 0) {
    *(undefined4 *)(param_1 + 0x280) = 0;
    if ((*(long *)(*(long *)puVar1 + 0x1d8) == 0) ||
       (lVar23 = *(long *)(*(long *)(*(long *)puVar1 + 0x1d8) + 0x20), lVar23 == 0)) {
      lVar23 = 0;
      *(undefined8 *)(param_1 + 0x278) = 0;
      lVar29 = 1;
    }
    else {
      lVar29 = 1;
      local_430 = PTR_DAT_04bb2020 + 0x10;
      local_428._0_4_ = 0x40617f9;
      local_428._4_4_ = 0;
      lVar23 = FUN_038c6d48(0,&local_430,lVar23,8,1,0);
      *(long *)(param_1 + 0x278) = lVar23;
      if (lVar23 != 0) goto LAB_00721b04;
    }
  }
  else {
LAB_00721b04:
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar29 = *(long *)(lVar13 + 0xa8);
    *(long *)(lVar13 + 0xa8) = lVar23;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_006e9528(&local_180,"KKFesConductor/%s",param_2[1]);
  pvVar27 = *(void **)(param_1 + 0x2e0);
  (**(code **)(CONCAT44(uStack_17c,local_180) + 0x18))(&local_180);
  pvVar24 = local_178;
  if (pvVar27 != local_178) {
    (**(code **)(CONCAT44(uStack_17c,local_180) + 0x18))(&local_180);
    lVar13 = 0;
    do {
      if (*(char *)((long)local_178 + lVar13) == '\0') goto LAB_00721c3c;
      if (*(char *)((long)local_178 + lVar13 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_00721c3c;
      }
      if (*(char *)((long)local_178 + lVar13 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_00721c3c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_00721c3c:
    iVar11 = (int)lVar13;
    if (*(int *)(param_1 + 0x2e8) <= (int)lVar13) {
      iVar11 = *(int *)(param_1 + 0x2e8) + -1;
    }
    memcpy(pvVar27,pvVar24,(long)iVar11);
    *(undefined1 *)((long)pvVar27 + (long)iVar11) = 0;
  }
  local_31d = 0;
  *(undefined1 *)(param_1 + 0x3f0) = 1;
  local_420 = 0x100;
  local_428 = local_41c;
  local_41c[0] = 0;
  local_430 = PTR_DAT_04bb21f8 + 0x10;
  uVar14 = (**(code **)(*(long *)(param_1 + 0x2a8) + 0xf0))(param_1 + 0x2a8,&local_430,1);
  if ((uVar14 & 1) != 0) {
    FUN_03c27e60(param_1 + 0x2a8,&local_430,lVar23);
  }
  if (lVar29 != 1) {
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar23 + 0xa8) = lVar29;
  }
  puVar1 = PTR_DAT_04bb2698;
  uVar4 = *(uint *)(param_1 + 0x478);
  uVar14 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
    return;
  }
  if (*(long *)(param_1 + 0x290) != 0) {
    pvVar24 = (void *)(*(long *)(param_1 + 0x290) + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar24);
    }
    else {
      plVar15 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar24);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15,pvVar24);
      }
    }
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined4 *)(param_1 + 0x288) = 0;
  }
  lVar23 = *(long *)puVar1;
  uVar25 = uVar14 * 0x3b0 | 8;
  if (lVar23 == 0) {
    puVar16 = malloc(uVar25);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      puVar26 = (undefined8 *)(lVar23 + 8);
      if (lVar29 != 0) {
        puVar26 = (undefined8 *)(lVar29 + 0xa8);
      }
      param_3 = (long *)*puVar26;
      if (param_3 == (long *)0x0) goto LAB_00722014;
    }
    puVar16 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,uVar25,8);
  }
  if (puVar16 != (ulong *)0x0) {
    *puVar16 = uVar14;
    puVar1 = PTR_DAT_04bb2d88 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    lVar23 = 0;
    do {
      memset((void *)((long)puVar16 + lVar23 + 0x10),0,0x2a8);
      *(undefined1 *)((long)puVar16 + lVar23 + 0x14) = 1;
      *(undefined **)((long)puVar16 + lVar23 + 0x20) = puVar1;
      *(long *)((long)puVar16 + lVar23 + 0x28) = (long)puVar16 + lVar23 + 0x34;
      *(undefined8 *)((long)puVar16 + lVar23 + 8) = 0x100000002;
      *(undefined1 *)((long)puVar16 + lVar23 + 0x1c) = 1;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x30) = 0x80;
      *(undefined4 *)((long)puVar16 + lVar23 + 200) = 0x80;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x160) = 0x80;
      *(undefined1 *)((long)puVar16 + lVar23 + 0x1e3) = 0;
      *(undefined **)((long)puVar16 + lVar23 + 0xb8) = puVar1;
      *(long *)((long)puVar16 + lVar23 + 0xc0) = (long)puVar16 + lVar23 + 0xcc;
      puVar26 = (undefined8 *)((long)puVar16 + lVar23 + 0x164);
      *(undefined8 **)((long)puVar16 + lVar23 + 0x158) = puVar26;
      if (puVar26 != &DAT_0407ebb1) {
        *(undefined1 *)puVar26 = 0;
      }
      puVar5 = PTR_DAT_04bb2d88;
      puVar26 = (undefined8 *)((long)puVar16 + lVar23 + 0x1fc);
      *(undefined8 **)((long)puVar16 + lVar23 + 0x1f0) = puVar26;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x1f8) = 0x80;
      *(undefined1 *)((long)puVar16 + lVar23 + 0x27b) = 0;
      *(undefined **)((long)puVar16 + lVar23 + 0x150) = puVar5 + 0x10;
      if (puVar26 != &DAT_0407ebb1) {
        *(undefined1 *)puVar26 = 0;
      }
      *(undefined **)((long)puVar16 + lVar23 + 0x1e8) = puVar5 + 0x10;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x280) = 0xefffffffffffffff;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x318) = 0;
      lVar29 = lVar23 + 0x3b0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x288) = 0x4efffffff;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x2ac) = 0x100000000;
      *(undefined ***)((long)puVar16 + lVar23 + 0x2b8) = &PTR_LAB_04902fc8;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x2d8) = 0x3f80000000000000;
      *(undefined8 *)((long)puVar16 + lVar23 + 800) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x2e0) = 0xffffffff00000000;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x2e8) = 0xffffffff00000000;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x328) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x330) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x338) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x340) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x348) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x350) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x358) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x360) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x368) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x370) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x378) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x380) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x388) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x31c) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x32c) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x334) = 0xbf800000;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x360) = 0xffffffff;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x290) = 0x400000004;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x298) = 0x400000004;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x2a0) = 0x400000004;
      *(undefined2 *)((long)puVar16 + lVar23 + 0x2a8) = 0;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x2c0) = 0;
      *(undefined1 *)((long)puVar16 + lVar23 + 0x2c4) = 1;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x2c8) = 0x100000002;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x2d0) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x2f0) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x2f8) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x300) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x308) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x310) = 0;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x2f0) = 0xffffffff;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x300) = 0xffffffff;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x308) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x310) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x324) = 0xffffffff;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x34c) = 0;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x34f) = 0;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x36c) = 0xffffffff;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x374) = 0xffffffff;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x37c) = 0xffffffff;
      *(undefined4 *)((long)puVar16 + lVar23 + 900) = 0xffffffff;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x394) = 0xffffffff;
      *(undefined8 **)((long)puVar16 + lVar23 + 0x3a0) = &DAT_0407ebb1;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x3b0) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x33c) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x344) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x354) = 0xffffffff;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x35b) = 0;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x367) = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x38c) = 0xffffffffffffffff;
      *(undefined **)((long)puVar16 + lVar23 + 0x398) = puVar2;
      *(undefined4 *)((long)puVar16 + lVar23 + 0x3a8) = 4;
      lVar23 = lVar29;
    } while (uVar14 * 0x3b0 != lVar29);
    *(uint *)(param_1 + 0x288) = uVar4;
    *(ulong **)(param_1 + 0x290) = puVar16 + 1;
  }
LAB_00722014:
  uVar25 = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  puVar18 = local_428;
  do {
    local_430._0_4_ = 2;
    local_430._4_4_ = 1;
    local_408 = 0x80;
    local_370 = 0x80;
    local_2d8 = 0x80;
    local_240 = 0x80;
    local_428._0_4_ = 0;
    local_428._4_4_ = CONCAT31((int3)((ulong)puVar18 >> 0x28),1);
    local_420 = 0;
    local_41c[0] = 1;
    local_385 = 0;
    local_404[0] = 0;
    local_2ed = 0;
    local_36c[0] = 0;
    local_255 = 0;
    local_2d4[0] = 0;
    local_1bd = 0;
    local_23c[0] = 0;
    local_190 = 0;
    local_190._1_1_ = 0;
    local_1a8 = 0x400000004;
    local_1a0 = 4;
    uStack_19c = 4;
    local_198 = 4;
    uStack_194 = 4;
    local_1b8 = 0xefffffffffffffff;
    uStack_18c = 0x100000000;
    uStack_18c._4_4_ = 1;
    lVar29 = *(long *)(*(long *)(param_1 + 0x460) + uVar25 * 8);
    local_418 = puVar1;
    local_410 = local_404;
    local_380 = puVar1;
    local_378 = local_36c;
    local_2e8 = puVar1;
    local_2e0 = local_2d4;
    local_250 = puVar1;
    local_248 = local_23c;
    puVar17 = (undefined4 *)(**(code **)(*(long *)(lVar29 + 0x158) + 0xf0))(lVar29 + 0x158);
    uVar9 = uStack_18c;
    uVar8 = local_190;
    local_420 = *puVar17;
    uVar10 = local_190._1_1_;
    local_190 = uVar8;
    uVar21 = uStack_18c._4_4_;
    uStack_18c = uVar9;
    uVar8 = local_190;
    local_190._1_1_ = uVar10;
    uVar9 = uStack_18c;
    uStack_18c._4_4_ = uVar21;
    puVar18 = (undefined1 *)(**(code **)(*(long *)(lVar29 + 0x188) + 0xf0))(lVar29 + 0x188);
    uVar9 = uStack_18c;
    uVar8 = local_190;
    lVar23 = 0;
    local_41c[0] = *puVar18;
    uVar10 = local_190._1_1_;
    uVar21 = uStack_18c._4_4_;
    do {
      uStack_18c._4_4_ = uVar21;
      local_190._1_1_ = uVar10;
      uStack_18c = uVar9;
      local_190 = uVar8;
      uVar21 = uStack_18c._4_4_;
      uVar10 = local_190._1_1_;
      local_190._1_1_ = uVar10;
      uStack_18c._4_4_ = uVar21;
      if (lVar23 < *(int *)(lVar29 + 0x230)) {
        uVar8 = local_190;
        uVar9 = uStack_18c;
        plVar15 = (long *)(**(code **)(**(long **)(*(long *)(lVar29 + 0x218) + lVar23 * 8) + 0xf0))
                                    ();
        uVar9 = uStack_18c;
        uVar8 = local_190;
        pvVar24 = *(void **)(local_404 + lVar23 * 0x98 + -0xc);
        uVar10 = local_190._1_1_;
        local_190 = uVar8;
        uVar21 = uStack_18c._4_4_;
        uStack_18c = uVar9;
        uVar8 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        (**(code **)(*plVar15 + 0x18))();
        uVar9 = uStack_18c;
        uVar8 = local_190;
        pvVar27 = (void *)plVar15[1];
        if (pvVar24 != pvVar27) {
          uVar10 = local_190._1_1_;
          local_190 = uVar8;
          uVar21 = uStack_18c._4_4_;
          uStack_18c = uVar9;
          uVar8 = local_190;
          local_190._1_1_ = uVar10;
          uVar9 = uStack_18c;
          uStack_18c._4_4_ = uVar21;
          (**(code **)(*plVar15 + 0x18))(plVar15);
          uVar9 = uStack_18c;
          uVar8 = local_190;
          lVar13 = 0;
          do {
            if (*(char *)(plVar15[1] + lVar13) == '\0') goto LAB_007222d8;
            lVar3 = plVar15[1] + lVar13;
            if (*(char *)(lVar3 + 1) == '\0') {
              lVar13 = lVar13 + 1;
              goto LAB_007222d8;
            }
            if (*(char *)(lVar3 + 2) == '\0') {
              lVar13 = lVar13 + 2;
              goto LAB_007222d8;
            }
            lVar13 = lVar13 + 3;
          } while (lVar13 != 0x80001);
          lVar13 = 0;
LAB_007222d8:
          iVar11 = (int)lVar13;
          if (*(int *)(local_404 + lVar23 * 0x98 + -4) <= (int)lVar13) {
            iVar11 = *(int *)(local_404 + lVar23 * 0x98 + -4) + -1;
          }
          uVar10 = local_190._1_1_;
          local_190 = uVar8;
          uVar21 = uStack_18c._4_4_;
          uStack_18c = uVar9;
          uVar8 = local_190;
          local_190._1_1_ = uVar10;
          uVar9 = uStack_18c;
          uStack_18c._4_4_ = uVar21;
          memcpy(pvVar24,pvVar27,(long)iVar11);
          uVar9 = uStack_18c;
          uVar8 = local_190;
          *(undefined1 *)((long)pvVar24 + (long)iVar11) = 0;
        }
      }
      else {
        lVar13 = 0;
        local_170 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        pvVar24 = *(void **)(local_404 + lVar23 * 0x98 + -0xc);
        local_108 = 0;
        uStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_168 = 0;
        uStack_160 = 0;
        do {
          if (*(char *)((long)&local_170 + lVar13 + 4) == '\0') goto LAB_0072219c;
          if (*(char *)((long)&local_170 + lVar13 + 5) == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_0072219c;
          }
          if (*(char *)((long)&local_170 + lVar13 + 6) == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_0072219c;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_0072219c:
        iVar11 = (int)lVar13;
        if (*(int *)(local_404 + lVar23 * 0x98 + -4) <= (int)lVar13) {
          iVar11 = *(int *)(local_404 + lVar23 * 0x98 + -4) + -1;
        }
        uVar8 = local_190;
        uVar9 = uStack_18c;
        memcpy(pvVar24,(void *)((long)&local_170 + 4),(long)iVar11);
        uVar9 = uStack_18c;
        uVar8 = local_190;
        *(undefined1 *)((long)pvVar24 + (long)iVar11) = 0;
      }
      uStack_18c = uVar9;
      local_190 = uVar8;
      uVar21 = uStack_18c._4_4_;
      uVar10 = local_190._1_1_;
      lVar23 = lVar23 + 1;
      uVar8 = local_190;
      uVar9 = uStack_18c;
    } while (lVar23 != 4);
    local_190._1_1_ = uVar10;
    uStack_18c._4_4_ = uVar21;
    puVar19 = (uint *)(**(code **)(*(long *)(lVar29 + 0x240) + 0xf0))(lVar29 + 0x240);
    uVar9 = uStack_18c;
    uVar8 = local_190;
    local_1b8 = (ulong)*puVar19;
    if (0 < *(int *)(lVar29 + 0x2e8)) {
      lVar23 = 0;
      do {
        uStack_18c = uVar9;
        local_190 = uVar8;
        uVar21 = uStack_18c._4_4_;
        uVar10 = local_190._1_1_;
        uVar8 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        piVar20 = (int *)(**(code **)(**(long **)(*(long *)(lVar29 + 0x2d0) + lVar23 * 8) + 0xf0))()
        ;
        uVar9 = uStack_18c;
        uVar8 = local_190;
        local_180 = *piVar20;
        if (((DAT_04c92da0 & 1) == 0) &&
           (uVar10 = local_190._1_1_, local_190 = uVar8, uVar21 = uStack_18c._4_4_,
           uStack_18c = uVar9, uVar8 = local_190, local_190._1_1_ = uVar10, uVar9 = uStack_18c,
           uStack_18c._4_4_ = uVar21, iVar11 = __cxa_guard_acquire(&DAT_04c92da0),
           uVar9 = uStack_18c, uVar8 = local_190, iVar11 != 0)) {
          uVar10 = local_190._1_1_;
          local_190 = uVar8;
          uVar21 = uStack_18c._4_4_;
          uStack_18c = uVar9;
          uVar8 = local_190;
          local_190._1_1_ = uVar10;
          uVar9 = uStack_18c;
          uStack_18c._4_4_ = uVar21;
          FUN_007300f0();
          uVar9 = uStack_18c;
          uVar8 = local_190;
          uVar10 = local_190._1_1_;
          local_190 = uVar8;
          uVar21 = uStack_18c._4_4_;
          uStack_18c = uVar9;
          uVar8 = local_190;
          local_190._1_1_ = uVar10;
          uVar9 = uStack_18c;
          uStack_18c._4_4_ = uVar21;
          __cxa_guard_release(&DAT_04c92da0);
          uVar9 = uStack_18c;
          uVar8 = local_190;
        }
        uStack_18c = uVar9;
        local_190 = uVar8;
        uVar21 = uStack_18c._4_4_;
        uVar10 = local_190._1_1_;
        uVar22 = (ulong)local_180;
        lVar23 = lVar23 + 1;
        if ((DAT_04c92d90 & uVar22 < 0x10) == 0) {
          uVar22 = 0;
        }
        local_1b8 = CONCAT44(local_1b8._4_4_ |
                             1 << (ulong)(*(uint *)(DAT_04c92d98 + uVar22 * 4) & 0x1f),
                             (undefined4)local_1b8);
        uVar8 = local_190;
        uVar9 = uStack_18c;
        local_190._1_1_ = uVar10;
        uStack_18c._4_4_ = uVar21;
      } while (lVar23 < *(int *)(lVar29 + 0x2e8));
    }
    uStack_18c = uVar9;
    local_190 = uVar8;
    uVar21 = uStack_18c._4_4_;
    uVar10 = local_190._1_1_;
    uVar4 = 0;
    uVar8 = local_190;
    uVar9 = uStack_18c;
    if (0 < *(int *)(lVar29 + 0x370)) {
      lVar23 = 0;
      local_190._1_1_ = uVar10;
      uStack_18c._4_4_ = uVar21;
      do {
        uStack_18c = uVar9;
        local_190 = uVar8;
        uVar21 = uStack_18c._4_4_;
        uVar10 = local_190._1_1_;
        uVar8 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        piVar20 = (int *)(**(code **)(**(long **)(*(long *)(lVar29 + 0x358) + lVar23 * 8) + 0xf0))()
        ;
        uVar9 = uStack_18c;
        uVar8 = local_190;
        local_180 = *piVar20;
        uVar10 = local_190._1_1_;
        local_190 = uVar8;
        uVar21 = uStack_18c._4_4_;
        uStack_18c = uVar9;
        uVar8 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        uVar12 = FUN_00723098(&local_180);
        uVar9 = uStack_18c;
        uVar8 = local_190;
        lVar23 = lVar23 + 1;
        uVar4 = uVar4 | 1 << (ulong)(uVar12 & 0x1f);
        uVar10 = local_190._1_1_;
        uVar21 = uStack_18c._4_4_;
      } while (lVar23 < *(int *)(lVar29 + 0x370));
    }
    uStack_18c._4_4_ = uVar21;
    local_190._1_1_ = uVar10;
    uStack_18c = uVar9;
    local_190 = uVar8;
    uVar21 = uStack_18c._4_4_;
    uVar10 = local_190._1_1_;
    if (*(int *)(lVar29 + 0x3f8) < 1) {
      _local_1b0 = CONCAT44(4,uVar4);
      uVar8 = local_190;
      uVar9 = uStack_18c;
      local_190._1_1_ = uVar10;
      uStack_18c._4_4_ = uVar21;
LAB_007224c0:
      uStack_18c = uVar9;
      local_190 = uVar8;
      uVar6 = uStack_18c._4_4_;
      uVar10 = local_190._1_1_;
      uVar21 = 4;
      local_1a8 = 4;
      uVar8 = local_190;
      uVar9 = uStack_18c;
      local_190._1_1_ = uVar10;
      uStack_18c._4_4_ = uVar6;
    }
    else {
      uVar8 = local_190;
      local_190._1_1_ = uVar10;
      uVar9 = uStack_18c;
      uStack_18c._4_4_ = uVar21;
      puVar17 = (undefined4 *)(**(code **)(*(long *)**(undefined8 **)(lVar29 + 0x3e0) + 0xf0))();
      uVar9 = uStack_18c;
      uVar8 = local_190;
      _local_1b0 = CONCAT44(*puVar17,uVar4);
      if (*(int *)(lVar29 + 0x3f8) < 2) goto LAB_007224c0;
      uVar10 = local_190._1_1_;
      local_190 = uVar8;
      uVar21 = uStack_18c._4_4_;
      uStack_18c = uVar9;
      uVar8 = local_190;
      local_190._1_1_ = uVar10;
      uVar9 = uStack_18c;
      uStack_18c._4_4_ = uVar21;
      puVar17 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar29 + 0x3e0) + 8) + 0xf0))();
      uVar9 = uStack_18c;
      uVar8 = local_190;
      local_1a8 = CONCAT44(local_1a8._4_4_,*puVar17);
      if (*(int *)(lVar29 + 0x3f8) < 3) {
        uVar21 = 4;
      }
      else {
        uVar10 = local_190._1_1_;
        local_190 = uVar8;
        uVar21 = uStack_18c._4_4_;
        uStack_18c = uVar9;
        uVar8 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        puVar17 = (undefined4 *)
                  (**(code **)(**(long **)(*(long *)(lVar29 + 0x3e0) + 0x10) + 0xf0))();
        uVar6 = uStack_18c._4_4_;
        uVar10 = local_190._1_1_;
        uVar21 = *puVar17;
        uVar8 = local_190;
        uVar9 = uStack_18c;
        local_190._1_1_ = uVar10;
        uStack_18c._4_4_ = uVar6;
      }
    }
    uStack_18c = uVar9;
    local_190 = uVar8;
    uVar6 = uStack_18c._4_4_;
    uVar10 = local_190._1_1_;
    local_1a8 = CONCAT44(uVar21,(undefined4)local_1a8);
    if (*(int *)(lVar29 + 0x480) < 1) {
      local_1a0 = 4;
      uVar8 = local_190;
      uVar9 = uStack_18c;
      local_190._1_1_ = uVar10;
      uStack_18c._4_4_ = uVar6;
LAB_00722578:
      uStack_18c = uVar9;
      local_190 = uVar8;
      uVar21 = uStack_18c._4_4_;
      uVar10 = local_190._1_1_;
      uStack_19c = 4;
      local_198 = 4;
      uVar8 = local_190;
      uVar9 = uStack_18c;
      local_190._1_1_ = uVar10;
      uStack_18c._4_4_ = uVar21;
LAB_00722588:
      uStack_18c = uVar9;
      local_190 = uVar8;
      uVar21 = uStack_18c._4_4_;
      uVar10 = local_190._1_1_;
      uStack_194 = 4;
      uVar8 = local_190;
      uVar9 = uStack_18c;
      local_190._1_1_ = uVar10;
      uStack_18c._4_4_ = uVar21;
    }
    else {
      uVar8 = local_190;
      local_190._1_1_ = uVar10;
      uVar9 = uStack_18c;
      uStack_18c._4_4_ = uVar6;
      puVar17 = (undefined4 *)(**(code **)(*(long *)**(undefined8 **)(lVar29 + 0x468) + 0xf0))();
      uVar9 = uStack_18c;
      uVar8 = local_190;
      local_1a0 = *puVar17;
      if (*(int *)(lVar29 + 0x480) < 2) goto LAB_00722578;
      uVar10 = local_190._1_1_;
      local_190 = uVar8;
      uVar21 = uStack_18c._4_4_;
      uStack_18c = uVar9;
      uVar8 = local_190;
      local_190._1_1_ = uVar10;
      uVar9 = uStack_18c;
      uStack_18c._4_4_ = uVar21;
      puVar17 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar29 + 0x468) + 8) + 0xf0))();
      uVar9 = uStack_18c;
      uVar8 = local_190;
      uStack_19c = *puVar17;
      if (2 < *(int *)(lVar29 + 0x480)) {
        uVar10 = local_190._1_1_;
        local_190 = uVar8;
        uVar21 = uStack_18c._4_4_;
        uStack_18c = uVar9;
        uVar8 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        puVar17 = (undefined4 *)
                  (**(code **)(**(long **)(*(long *)(lVar29 + 0x468) + 0x10) + 0xf0))();
        uVar9 = uStack_18c;
        uVar8 = local_190;
        local_198 = *puVar17;
        if (3 < *(int *)(lVar29 + 0x480)) {
          uVar10 = local_190._1_1_;
          local_190 = uVar8;
          uVar21 = uStack_18c._4_4_;
          uStack_18c = uVar9;
          uVar8 = local_190;
          local_190._1_1_ = uVar10;
          uVar9 = uStack_18c;
          uStack_18c._4_4_ = uVar21;
          puVar17 = (undefined4 *)
                    (**(code **)(**(long **)(*(long *)(lVar29 + 0x468) + 0x18) + 0xf0))();
          uVar21 = uStack_18c._4_4_;
          uVar10 = local_190._1_1_;
          uStack_194 = *puVar17;
          uVar8 = local_190;
          uVar9 = uStack_18c;
          local_190._1_1_ = uVar10;
          uStack_18c._4_4_ = uVar21;
          goto LAB_0072258c;
        }
        goto LAB_00722588;
      }
      uStack_194 = 4;
      local_198 = 4;
    }
LAB_0072258c:
    uStack_18c = uVar9;
    local_190 = uVar8;
    uVar21 = uStack_18c._4_4_;
    uVar10 = local_190._1_1_;
    uVar8 = local_190;
    local_190._1_1_ = uVar10;
    uVar9 = uStack_18c;
    uStack_18c._4_4_ = uVar21;
    puVar17 = (undefined4 *)(**(code **)(*(long *)(lVar29 + 0x490) + 0xf0))(lVar29 + 0x490);
    uVar9 = uStack_18c;
    uVar8 = local_190;
    local_430._0_4_ = *puVar17;
    uVar10 = local_190._1_1_;
    local_190 = uVar8;
    uVar21 = uStack_18c._4_4_;
    uStack_18c = uVar9;
    uVar8 = local_190;
    local_190._1_1_ = uVar10;
    uVar9 = uStack_18c;
    uStack_18c._4_4_ = uVar21;
    puVar17 = (undefined4 *)(**(code **)(*(long *)(lVar29 + 0x4c0) + 0xf0))(lVar29 + 0x4c0);
    uVar9 = uStack_18c;
    uVar8 = local_190;
    local_430._4_4_ = *puVar17;
    uVar10 = local_190._1_1_;
    local_190 = uVar8;
    uVar21 = uStack_18c._4_4_;
    uStack_18c = uVar9;
    uVar8 = local_190;
    local_190._1_1_ = uVar10;
    uVar9 = uStack_18c;
    uStack_18c._4_4_ = uVar21;
    puVar17 = (undefined4 *)(**(code **)(*(long *)(lVar29 + 0x4f0) + 0xf0))(lVar29 + 0x4f0);
    uVar9 = uStack_18c;
    uVar8 = local_190;
    local_428._0_4_ = *puVar17;
    uVar10 = local_190._1_1_;
    local_190 = uVar8;
    uVar21 = uStack_18c._4_4_;
    uStack_18c = uVar9;
    uVar8 = local_190;
    local_190._1_1_ = uVar10;
    uVar9 = uStack_18c;
    uStack_18c._4_4_ = uVar21;
    puVar18 = (undefined1 *)(**(code **)(*(long *)(lVar29 + 0x520) + 0xf0))(lVar29 + 0x520);
    uVar9 = uStack_18c;
    local_190._1_1_ = SUB21(local_190,1);
    local_190 = CONCAT11(local_190._1_1_,*puVar18);
    uVar21 = uStack_18c._4_4_;
    uStack_18c = uVar9;
    uVar9 = uStack_18c;
    uStack_18c._4_4_ = uVar21;
    puVar18 = (undefined1 *)(**(code **)(*(long *)(lVar29 + 0x550) + 0xf0))(lVar29 + 0x550);
    uVar9 = uStack_18c;
    uVar8 = local_190;
    local_190._1_1_ = *puVar18;
    local_190._0_1_ = (undefined1)uVar8;
    uVar21 = uStack_18c._4_4_;
    uStack_18c = uVar9;
    uVar9 = uStack_18c;
    uStack_18c._4_4_ = uVar21;
    puVar17 = (undefined4 *)(**(code **)(*(long *)(lVar29 + 0x580) + 0xf0))(lVar29 + 0x580);
    uVar7 = local_190;
    uStack_18c._4_4_ = SUB84(uStack_18c,4);
    uStack_18c = CONCAT44(uStack_18c._4_4_,*puVar17);
    uVar10 = local_190._1_1_;
    local_190 = uVar7;
    uVar7 = local_190;
    local_190._1_1_ = uVar10;
    puVar17 = (undefined4 *)(**(code **)(*(long *)(lVar29 + 0x5b0) + 0xf0))(lVar29 + 0x5b0);
    uVar9 = uStack_18c;
    uVar7 = local_190;
    uStack_18c._4_4_ = *puVar17;
    uStack_18c._0_4_ = (undefined4)uVar9;
    if (uVar25 < *(uint *)(param_1 + 0x288)) {
      lVar23 = *(long *)(param_1 + 0x290);
      puVar26 = (undefined8 *)(lVar23 + uVar25 * 0x3b0);
      *(undefined4 *)(puVar26 + 0x58) = (undefined4)local_430;
      *(undefined4 *)((long)puVar26 + 0x2c4) = local_430._4_4_;
      *(undefined4 *)(puVar26 + 0x59) = (undefined4)local_428;
      *(undefined1 *)((long)puVar26 + 0x2ba) = 0;
      *(undefined8 *)((long)puVar26 + 0x2cc) = 0;
      *(undefined2 *)(puVar26 + 0x57) = 1;
      puVar28 = (undefined1 *)puVar26[4];
      *(undefined1 *)((long)puVar26 + 700) = local_428._4_1_;
      *(undefined8 *)((long)puVar26 + 0x2d4) = 0x3f800000;
      *(undefined8 *)((long)puVar26 + 0x2dc) = 0xffffffff;
      *(undefined4 *)((long)puVar26 + 0x2e4) = 0xffffffff;
      *(ulong *)((long)puVar26 + 5) =
           CONCAT17(local_428._4_1_,CONCAT43((undefined4)local_428,local_430._5_3_));
      *puVar26 = CONCAT44(local_430._4_4_,(undefined4)local_430);
      *(undefined1 *)((long)puVar26 + 0x14) = local_41c[0];
      *(undefined4 *)(puVar26 + 2) = local_420;
      uVar10 = local_190._1_1_;
      local_190 = uVar7;
      uVar7 = local_190;
      local_190._1_1_ = uVar10;
      (**(code **)(local_418 + 0x18))(&local_418);
      uVar21 = uStack_18c._4_4_;
      uVar10 = local_190._1_1_;
      puVar18 = local_410;
      if (puVar28 != local_410) {
        uVar7 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        (**(code **)(local_418 + 0x18))(&local_418);
        uVar9 = uStack_18c;
        uVar7 = local_190;
        lVar29 = 0;
        do {
          if (local_410[lVar29] == '\0') goto LAB_00722744;
          if (local_410[lVar29 + 1] == '\0') {
            lVar29 = lVar29 + 1;
            goto LAB_00722744;
          }
          if (local_410[lVar29 + 2] == '\0') {
            lVar29 = lVar29 + 2;
            goto LAB_00722744;
          }
          lVar29 = lVar29 + 3;
        } while (lVar29 != 0x80001);
        lVar29 = 0;
LAB_00722744:
        iVar11 = (int)lVar29;
        if (*(int *)(puVar26 + 5) <= (int)lVar29) {
          iVar11 = *(int *)(puVar26 + 5) + -1;
        }
        uVar10 = local_190._1_1_;
        local_190 = uVar7;
        uVar21 = uStack_18c._4_4_;
        uStack_18c = uVar9;
        uVar7 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        memcpy(puVar28,puVar18,(long)iVar11);
        uVar21 = uStack_18c._4_4_;
        uVar10 = local_190._1_1_;
        puVar28[iVar11] = 0;
      }
      uStack_18c._4_4_ = uVar21;
      local_190._1_1_ = uVar10;
      uVar21 = uStack_18c._4_4_;
      uVar10 = local_190._1_1_;
      puVar28 = (undefined1 *)puVar26[0x17];
      uVar7 = local_190;
      local_190._1_1_ = uVar10;
      uVar9 = uStack_18c;
      uStack_18c._4_4_ = uVar21;
      (**(code **)(local_380 + 0x18))(&local_380);
      uVar9 = uStack_18c;
      uVar7 = local_190;
      puVar18 = local_378;
      if (puVar28 != local_378) {
        uVar10 = local_190._1_1_;
        local_190 = uVar7;
        uVar21 = uStack_18c._4_4_;
        uStack_18c = uVar9;
        uVar7 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        (**(code **)(local_380 + 0x18))(&local_380);
        uVar9 = uStack_18c;
        uVar7 = local_190;
        lVar29 = 0;
        do {
          if (local_378[lVar29] == '\0') goto LAB_007227e0;
          if (local_378[lVar29 + 1] == '\0') {
            lVar29 = lVar29 + 1;
            goto LAB_007227e0;
          }
          if (local_378[lVar29 + 2] == '\0') {
            lVar29 = lVar29 + 2;
            goto LAB_007227e0;
          }
          lVar29 = lVar29 + 3;
        } while (lVar29 != 0x80001);
        lVar29 = 0;
LAB_007227e0:
        iVar11 = (int)lVar29;
        if (*(int *)(puVar26 + 0x18) <= (int)lVar29) {
          iVar11 = *(int *)(puVar26 + 0x18) + -1;
        }
        uVar10 = local_190._1_1_;
        local_190 = uVar7;
        uVar21 = uStack_18c._4_4_;
        uStack_18c = uVar9;
        uVar7 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        memcpy(puVar28,puVar18,(long)iVar11);
        uVar21 = uStack_18c._4_4_;
        uVar10 = local_190._1_1_;
        puVar28[iVar11] = 0;
        uVar7 = local_190;
        uVar9 = uStack_18c;
        local_190._1_1_ = uVar10;
        uStack_18c._4_4_ = uVar21;
      }
      uStack_18c = uVar9;
      local_190 = uVar7;
      uVar21 = uStack_18c._4_4_;
      uVar10 = local_190._1_1_;
      puVar28 = (undefined1 *)puVar26[0x2a];
      uVar7 = local_190;
      local_190._1_1_ = uVar10;
      uVar9 = uStack_18c;
      uStack_18c._4_4_ = uVar21;
      (**(code **)(local_2e8 + 0x18))(&local_2e8);
      uVar9 = uStack_18c;
      uVar7 = local_190;
      puVar18 = local_2e0;
      if (puVar28 != local_2e0) {
        uVar10 = local_190._1_1_;
        local_190 = uVar7;
        uVar21 = uStack_18c._4_4_;
        uStack_18c = uVar9;
        uVar7 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        (**(code **)(local_2e8 + 0x18))(&local_2e8);
        uVar9 = uStack_18c;
        uVar7 = local_190;
        lVar29 = 0;
        do {
          if (local_2e0[lVar29] == '\0') goto LAB_0072287c;
          if (local_2e0[lVar29 + 1] == '\0') {
            lVar29 = lVar29 + 1;
            goto LAB_0072287c;
          }
          if (local_2e0[lVar29 + 2] == '\0') {
            lVar29 = lVar29 + 2;
            goto LAB_0072287c;
          }
          lVar29 = lVar29 + 3;
        } while (lVar29 != 0x80001);
        lVar29 = 0;
LAB_0072287c:
        iVar11 = (int)lVar29;
        if (*(int *)(puVar26 + 0x2b) <= (int)lVar29) {
          iVar11 = *(int *)(puVar26 + 0x2b) + -1;
        }
        uVar10 = local_190._1_1_;
        local_190 = uVar7;
        uVar21 = uStack_18c._4_4_;
        uStack_18c = uVar9;
        uVar7 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        memcpy(puVar28,puVar18,(long)iVar11);
        uVar21 = uStack_18c._4_4_;
        uVar10 = local_190._1_1_;
        puVar28[iVar11] = 0;
        uVar7 = local_190;
        uVar9 = uStack_18c;
        local_190._1_1_ = uVar10;
        uStack_18c._4_4_ = uVar21;
      }
      uStack_18c = uVar9;
      local_190 = uVar7;
      uVar21 = uStack_18c._4_4_;
      uVar10 = local_190._1_1_;
      puVar28 = (undefined1 *)puVar26[0x3d];
      uVar7 = local_190;
      local_190._1_1_ = uVar10;
      uVar9 = uStack_18c;
      uStack_18c._4_4_ = uVar21;
      (**(code **)(local_250 + 0x18))(&local_250);
      uVar9 = uStack_18c;
      uVar7 = local_190;
      puVar18 = local_248;
      if (puVar28 != local_248) {
        uVar10 = local_190._1_1_;
        local_190 = uVar7;
        uVar21 = uStack_18c._4_4_;
        uStack_18c = uVar9;
        uVar7 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        (**(code **)(local_250 + 0x18))(&local_250);
        uVar9 = uStack_18c;
        uVar7 = local_190;
        lVar29 = 0;
        do {
          if (local_248[lVar29] == '\0') goto LAB_0072291c;
          if (local_248[lVar29 + 1] == '\0') {
            lVar29 = lVar29 + 1;
            goto LAB_0072291c;
          }
          if (local_248[lVar29 + 2] == '\0') {
            lVar29 = lVar29 + 2;
            goto LAB_0072291c;
          }
          lVar29 = lVar29 + 3;
        } while (lVar29 != 0x80001);
        lVar29 = 0;
LAB_0072291c:
        iVar11 = (int)lVar29;
        if (*(int *)(puVar26 + 0x3e) <= (int)lVar29) {
          iVar11 = *(int *)(puVar26 + 0x3e) + -1;
        }
        uVar10 = local_190._1_1_;
        local_190 = uVar7;
        uVar21 = uStack_18c._4_4_;
        uStack_18c = uVar9;
        uVar7 = local_190;
        local_190._1_1_ = uVar10;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
        memcpy(puVar28,puVar18,(long)iVar11);
        uVar21 = uStack_18c._4_4_;
        puVar28[iVar11] = 0;
        uVar7 = local_190;
        uVar9 = uStack_18c;
        uStack_18c._4_4_ = uVar21;
      }
      uStack_18c = uVar9;
      local_190 = uVar7;
      uVar21 = uStack_18c._4_4_;
      *(uint *)(puVar26 + 0x50) = local_1b0;
      puVar26[0x4f] = local_1b8;
      *(undefined4 *)((long)puVar26 + 0x284) = uStack_1ac;
      *(undefined4 *)(puVar26 + 0x51) = (undefined4)local_1a8;
      *(undefined4 *)((long)puVar26 + 0x28c) = local_1a8._4_4_;
      *(undefined4 *)(puVar26 + 0x52) = local_1a0;
      *(undefined4 *)((long)puVar26 + 0x294) = uStack_19c;
      *(undefined4 *)(puVar26 + 0x53) = local_198;
      *(undefined4 *)((long)puVar26 + 0x29c) = uStack_194;
      puVar26[0x54] = CONCAT84(uStack_18c,CONCAT22(uStack_18e,(ushort)local_190));
      *(undefined4 *)(puVar26 + 0x55) = uVar21;
      *(long *)(lVar23 + uVar25 * 0x3b0 + 0x3a8) = param_1;
      if (((*(long *)(param_1 + 0x2a0) != 0) && (uVar4 = *(uint *)(puVar26 + 0x4f), -1 < (int)uVar4)
          ) && ((int)uVar4 < *(int *)(param_1 + 0x298))) {
        lVar23 = lVar23 + uVar25 * 0x3b0;
        *(undefined4 *)(lVar23 + 0x38c) =
             *(undefined4 *)(*(long *)(param_1 + 0x2a0) + (ulong)uVar4 * 0x50);
        if (*(uint *)(param_1 + 0x298) <= uVar4) {
          uVar4 = 0;
        }
        *(undefined8 *)(lVar23 + 0x398) =
             *(undefined8 *)(*(long *)(param_1 + 0x2a0) + (ulong)uVar4 * 0x50 + 0x20);
      }
    }
    puVar18 = (undefined1 *)((ulong)local_428._4_4_ << 0x20);
    uVar25 = uVar25 + 1;
    if (uVar25 == uVar14) {
      return;
    }
  } while( true );
}

