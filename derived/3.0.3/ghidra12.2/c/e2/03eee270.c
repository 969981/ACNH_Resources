
undefined8 FUN_03eee270(long param_1,long *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  size_t __size;
  undefined *puVar3;
  void *pvVar4;
  long lVar5;
  uint uVar6;
  void **ppvVar7;
  undefined8 uVar8;
  short sVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong *puVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  short *psVar26;
  void **ppvVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  undefined8 uVar33;
  void *pvVar34;
  ulong uVar35;
  ulong uVar36;
  undefined4 *puVar37;
  void *local_178;
  undefined4 local_170;
  long local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 local_6c;
  
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_178 = (void *)0x0;
  local_168 = 0;
  local_158 = 0;
  local_148 = 0;
  local_138 = 0;
  local_170 = 0xffffffff;
  local_160 = 0xffffffff;
  local_150 = 0xffffffff;
  local_140 = 0xffffffff;
  local_130 = 0xffffffff;
  local_128 = 0;
  local_120 = 0xffffffff;
  local_118 = 0;
  local_110 = 0xffffffff;
  local_108 = 0;
  local_100 = 0xffffffff;
  local_f8 = 0;
  local_f0 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x260);
  uVar24 = *(uint *)(*(long *)(param_1 + 0x20) + 0x240);
  uVar35 = (ulong)uVar24;
  local_e8 = 0;
  local_e0 = 0xffffffff;
  local_d8 = 0;
  local_d0 = 0xffffffff;
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  local_a8 = 0;
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_90 = 0xffffffff;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (0 < (int)uVar24) {
    lVar32 = *(long *)PTR_DAT_04bb2698;
    if (lVar32 == 0) {
      puVar18 = malloc(uVar35 << 6);
joined_r0x03eee3ac:
      if (puVar18 != (undefined8 *)0x0) {
        uVar33 = *(undefined8 *)PTR_DAT_04bd0da0;
        uVar8 = *(undefined8 *)((long)PTR_DAT_04bd0da0 + 8);
        puVar22 = puVar18;
        do {
          *puVar22 = uVar33;
          puVar22[1] = uVar8;
          puVar22[2] = uVar33;
          puVar22[3] = uVar8;
          puVar22[4] = uVar33;
          puVar22[5] = uVar8;
          puVar22[6] = 0x3f800000ffffffff;
          puVar22[7] = 0;
          puVar22 = puVar22 + 8;
        } while (puVar22 != puVar18 + uVar35 * 8);
        *(uint *)(param_1 + 0x70) = uVar24;
        *(undefined8 **)(param_1 + 0x78) = puVar18;
      }
    }
    else {
      plVar17 = param_2;
      if (param_2 != (long *)0x0) {
LAB_03eee388:
        puVar18 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,uVar35 << 6,8);
        goto joined_r0x03eee3ac;
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar17 = (long *)(lVar32 + 8);
      if (lVar16 != 0) {
        plVar17 = (long *)(lVar16 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 != (long *)0x0) goto LAB_03eee388;
    }
    lVar32 = 0;
    uVar36 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar25 = uVar36 & 0xffffffff;
      lVar16 = *(long *)(param_1 + 0x78);
      if (*(uint *)(param_1 + 0x70) <= uVar36) {
        uVar25 = 0;
      }
      uVar33 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      puVar18 = &DAT_0407ebb1;
      if (uVar36 < *(uint *)(*(long *)(param_1 + 0x20) + 0x270)) {
        lVar29 = *(long *)(*(long *)(param_1 + 0x20) + 0x278) + lVar32;
        plVar17 = (long *)(lVar29 + 0x18);
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puVar18 = *(undefined8 **)(lVar29 + 0x20);
      }
      uStack_70 = SUB84(puVar18,0);
      local_6c = (undefined4)((ulong)puVar18 >> 0x20);
      local_78 = puVar1;
      uVar13 = FUN_03ef8040(uVar33,&local_78);
      lVar16 = lVar16 + uVar25 * 0x40;
      *(uint *)(lVar16 + 0x30) = uVar13;
      if (*(short *)(lVar16 + 0x30) == -1 || uVar13 >> 0x10 == 0xffff) {
        pvVar34 = *(void **)(param_1 + 0x78);
        if (pvVar34 != (void *)0x0) {
          if (DAT_05ae7600 == 0) {
            free(pvVar34);
          }
          else {
            plVar17 = (long *)FUN_038cb610(DAT_05ae7600,pvVar34);
            if (plVar17 != (long *)0x0) {
              (**(code **)(*plVar17 + 0x38))(plVar17,pvVar34);
            }
          }
          local_170 = 0xffffffff;
          *(undefined4 *)(param_1 + 0x34) = 0;
          *(undefined8 *)(param_1 + 0x78) = 0;
          *(undefined4 *)(param_1 + 0x70) = 0;
          plVar17 = &DAT_05ae7600;
          goto LAB_03eee6a4;
        }
        break;
      }
      uVar36 = uVar36 + 1;
      lVar32 = lVar32 + 0x28;
    } while (uVar35 != uVar36);
  }
  plVar17 = (long *)PTR_DAT_04bb2698;
  uVar13 = *(uint *)(param_1 + 0x70);
  pvVar34 = *(void **)(param_1 + 0x78);
  if (uVar13 == 0) {
    local_170 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = 0;
    plVar17 = (long *)PTR_DAT_04bb2698;
    if (pvVar34 != (void *)0x0) goto LAB_03eee630;
  }
  else {
    local_170 = *(uint *)((long)pvVar34 + 0x30);
    local_178 = pvVar34;
    puVar2 = (uint *)(param_1 + 0x34);
    if ((local_170 < 0xffff0000) && ((local_170 & 0xffff) != 0xffff)) {
      *puVar2 = 1;
      if ((int)uVar24 < 2) {
      }
      else {
        lVar32 = *(long *)(param_1 + 0x18);
        uVar28 = 1;
        psVar26 = (short *)((long)&local_160 + 2);
        uVar30 = 1;
        do {
          if (0xf < uVar28) {
LAB_03eee660:
            *puVar2 = 0;
            lVar32 = *plVar17;
            goto joined_r0x03eee634;
          }
          lVar16 = *(long *)(lVar32 + 8);
          iVar23 = (int)psVar26[-8];
          if (*(uint *)(lVar16 + 0x18) <= (uint)(int)psVar26[-8]) {
            iVar23 = 0;
          }
          sVar9 = *(short *)(*(long *)(lVar16 + 0x20) + (long)iVar23 * 2);
          if ((int)sVar9 == 0xffffffff) {
            uVar31 = 0xffffffff;
          }
          else {
            uVar31 = (uint)sVar9;
            if (*(uint *)(lVar16 + 8) < (uint)(int)sVar9 || *(uint *)(lVar16 + 8) == uVar31) {
              uVar31 = 0;
            }
            uVar31 = CONCAT22(sVar9,*(undefined2 *)
                                     (*(long *)(lVar16 + 0x10) + (long)(int)uVar31 * 2));
          }
          *(uint *)(psVar26 + -1) = uVar31;
          if ((((uVar31 ^ 0xffffffff) & 0xffff) == 0) || (*psVar26 == -1)) goto LAB_03eee660;
          uVar6 = uVar30;
          if (uVar13 <= uVar30) {
            uVar6 = 0;
          }
          pvVar4 = (void *)((long)pvVar34 + (long)(int)uVar6 * 0x40);
          if (uVar31 == *(uint *)((long)pvVar4 + 0x30)) {
            uVar30 = uVar30 + 1;
            *(void **)(psVar26 + -5) = pvVar4;
          }
          uVar28 = uVar28 + 1;
          psVar26 = psVar26 + 8;
          *puVar2 = uVar28;
        } while ((int)uVar30 < (int)uVar24);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x34) = 0;
LAB_03eee630:
      lVar32 = *plVar17;
joined_r0x03eee634:
      if (lVar32 == 0) {
        free(pvVar34);
      }
      else {
        plVar19 = (long *)FUN_038cb610(lVar32,pvVar34);
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x38))(plVar19,pvVar34);
        }
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
LAB_03eee6a4:
  uVar24 = *(uint *)(param_1 + 0x30);
  if (0 < (int)uVar24) {
    lVar32 = *plVar17;
    __size = (ulong)uVar24 * 0x88 + 8;
    if (lVar32 == 0) {
      puVar20 = malloc(__size);
    }
    else {
      plVar19 = param_2;
      if (param_2 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar19 = (long *)(lVar32 + 8);
        if (lVar16 != 0) {
          plVar19 = (long *)(lVar16 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_03eee794;
      }
      puVar20 = (ulong *)(**(code **)(*plVar19 + 0x30))(plVar19,__size,8);
    }
    if (puVar20 != (ulong *)0x0) {
      puVar21 = puVar20 + 1;
      *puVar20 = (ulong)uVar24;
      uVar36 = DAT_041e93ec;
      uVar35 = DAT_041e93e4;
      puVar20 = puVar21;
      do {
        *puVar20 = 0xffffffffffffffff;
        puVar20[1] = 0;
        *(undefined4 *)(puVar20 + 2) = 0;
        *(ulong *)((long)puVar20 + 0x14) = uVar35;
        *(ulong *)((long)puVar20 + 0x1c) = uVar36;
        *(ulong *)((long)puVar20 + 0x24) = uVar35;
        *(ulong *)((long)puVar20 + 0x2c) = uVar36;
        *(undefined8 *)((long)puVar20 + 0x34) = 0;
        *(undefined4 *)((long)puVar20 + 0x3c) = 0;
        *(undefined4 *)(puVar20 + 0xc) = 0;
        *(ulong *)((long)puVar20 + 100) = uVar35;
        *(ulong *)((long)puVar20 + 0x6c) = uVar36;
        *(undefined4 *)((long)puVar20 + 0x84) = 0;
        *(undefined8 *)((long)puVar20 + 0x7c) = 0;
        *(undefined8 *)((long)puVar20 + 0x74) = 0;
        puVar20[8] = 0xffffffffffffffff;
        puVar20[9] = uVar35;
        puVar20[10] = uVar36;
        puVar20[0xb] = 0;
        puVar20 = puVar20 + 0x11;
      } while (puVar20 != puVar21 + (ulong)uVar24 * 0x11);
      *(uint *)(param_1 + 0x90) = uVar24;
      *(ulong **)(param_1 + 0x98) = puVar21;
    }
  }
LAB_03eee794:
  uVar24 = *(uint *)(param_1 + 0x34);
  uVar35 = (ulong)uVar24;
  if ((int)uVar24 < 1) goto LAB_03eee928;
  lVar32 = *plVar17;
  if (lVar32 == 0) {
    puVar18 = malloc(uVar35 << 4);
joined_r0x03eee804:
    if (puVar18 != (undefined8 *)0x0) {
      uVar36 = uVar35 & 3;
      puVar22 = puVar18;
      if ((uVar24 & 3) != 0) {
        do {
          *puVar22 = 0;
          uVar36 = uVar36 - 1;
          *(undefined4 *)(puVar22 + 1) = 0xffffffff;
          puVar22 = puVar22 + 2;
        } while (uVar36 != 0);
      }
      if (2 < (uVar35 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar22 = 0;
          *(undefined4 *)(puVar22 + 1) = 0xffffffff;
          puVar22[2] = 0;
          *(undefined4 *)(puVar22 + 3) = 0xffffffff;
          puVar22[4] = 0;
          *(undefined4 *)(puVar22 + 5) = 0xffffffff;
          puVar22[6] = 0;
          *(undefined4 *)(puVar22 + 7) = 0xffffffff;
          puVar22 = puVar22 + 8;
        } while (puVar22 != puVar18 + uVar35 * 2);
      }
      *(uint *)(param_1 + 0x80) = uVar24;
      *(undefined8 **)(param_1 + 0x88) = puVar18;
    }
  }
  else {
    if (param_2 != (long *)0x0) {
LAB_03eee7dc:
      puVar18 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,uVar35 << 4,8);
      goto joined_r0x03eee804;
    }
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar18 = (undefined8 *)(lVar32 + 8);
    if (lVar16 != 0) {
      puVar18 = (undefined8 *)(lVar16 + 0xa8);
    }
    param_2 = (long *)*puVar18;
    if (param_2 != (long *)0x0) goto LAB_03eee7dc;
  }
  if (0 < (int)*(uint *)(param_1 + 0x34)) {
    uVar35 = 0;
    ppvVar27 = &local_178;
    do {
      ppvVar7 = ppvVar27;
      if (0xf < uVar35) {
        ppvVar7 = &local_178;
      }
      ppvVar27 = ppvVar27 + 2;
      uVar36 = uVar35;
      if (*(uint *)(param_1 + 0x80) <= uVar35) {
        uVar36 = 0;
      }
      uVar35 = uVar35 + 1;
      puVar18 = (undefined8 *)(*(long *)(param_1 + 0x88) + uVar36 * 0x10);
      pvVar34 = *ppvVar7;
      *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(ppvVar7 + 1);
      *puVar18 = pvVar34;
    } while ((long)uVar35 < (long)*(int *)(param_1 + 0x34));
  }
  lVar32 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  sVar9 = *(short *)(*(long *)(param_1 + 0x88) + (long)*(int *)(param_1 + 0x80) * 0x10 + -6);
  iVar23 = (int)sVar9;
  if (*(uint *)(lVar32 + 0x18) <= (uint)(int)sVar9) {
    iVar23 = 0;
  }
  sVar9 = *(short *)(*(long *)(lVar32 + 0x20) + (long)iVar23 * 2);
  if ((int)sVar9 == 0xffffffff) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar24 = (uint)sVar9;
    if (*(uint *)(lVar32 + 8) < (uint)(int)sVar9 || *(uint *)(lVar32 + 8) == uVar24) {
      uVar24 = 0;
    }
    uVar14 = CONCAT22(sVar9,*(undefined2 *)(*(long *)(lVar32 + 0x10) + (long)(int)uVar24 * 2));
  }
  *(undefined4 *)(param_1 + 0x68) = uVar14;
LAB_03eee928:
  uVar24 = *(uint *)(param_1 + 0x28);
  iVar23 = *(int *)(param_1 + 0x30);
  if (((int)uVar24 < 0) || (iVar23 <= (int)uVar24)) {
    uVar24 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (0 < iVar23) {
    lVar32 = 0;
    uVar35 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar16 = *(long *)(param_1 + 0x98);
      uVar36 = uVar35;
      if (*(uint *)(param_1 + 0x90) <= uVar35) {
        uVar36 = 0;
      }
      lVar29 = *(long *)(*(long *)(param_1 + 0x20) + 0x2e0) + lVar32;
      if (*(uint *)(*(long *)(param_1 + 0x20) + 0x2d8) <= uVar35) {
        lVar29 = 0;
      }
      *(long *)(lVar16 + uVar36 * 0x88 + 0x80) = lVar29;
      if (lVar29 == 0) goto LAB_03eeec6c;
      puVar37 = (undefined4 *)(lVar16 + uVar36 * 0x88);
      uVar33 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      (**(code **)(*(long *)(lVar29 + 0x100) + 0x18))(lVar29 + 0x100);
      uStack_70 = (undefined4)*(undefined8 *)(lVar29 + 0x108);
      local_6c = (undefined4)((ulong)*(undefined8 *)(lVar29 + 0x108) >> 0x20);
      local_78 = puVar1;
      uVar14 = FUN_03ef8040(uVar33,&local_78);
      *puVar37 = uVar14;
      uVar33 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      (**(code **)(*(long *)(lVar29 + 0x128) + 0x18))(lVar29 + 0x128);
      uStack_70 = (undefined4)*(undefined8 *)(lVar29 + 0x130);
      local_6c = (undefined4)((ulong)*(undefined8 *)(lVar29 + 0x130) >> 0x20);
      local_78 = puVar1;
      uVar14 = FUN_03ef8040(uVar33,&local_78);
      puVar37[1] = uVar14;
      puVar37[2] = *(undefined4 *)(lVar29 + 0x150);
      puVar37[3] = *(undefined4 *)(lVar29 + 0x154);
      puVar37[4] = *(undefined4 *)(lVar29 + 0x158);
      FUN_03ef41a0(puVar37 + 5,*(undefined4 *)(lVar29 + 0x1a0),*(undefined4 *)(lVar29 + 0x1c0),
                   lVar29 + 0x178);
      puVar37[0xd] = *(undefined4 *)(lVar29 + 0x200);
      puVar37[0xe] = *(undefined4 *)(lVar29 + 0x204);
      puVar37[0xf] = *(undefined4 *)(lVar29 + 0x208);
      local_78._0_4_ = (undefined4)*(undefined8 *)PTR_DAT_04bd0da0;
      uVar14 = (undefined4)local_78;
      local_78._4_4_ = (undefined4)((ulong)*(undefined8 *)PTR_DAT_04bd0da0 >> 0x20);
      uVar10 = local_78._4_4_;
      uStack_70 = (undefined4)*(undefined8 *)(PTR_DAT_04bd0da0 + 8);
      uVar11 = uStack_70;
      local_6c = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_04bd0da0 + 8) >> 0x20);
      uVar12 = local_6c;
      FUN_03ef41a0(&local_78,*(undefined4 *)(lVar29 + 0x250),*(undefined4 *)(lVar29 + 0x270),
                   lVar29 + 0x228);
      puVar37[9] = (undefined4)local_78;
      *(ulong *)(puVar37 + 10) = CONCAT44(uStack_70,local_78._4_4_);
      puVar37[0xc] = local_6c;
      if (*(char *)(lVar29 + 0x2f0) != '\0') {
        uVar33 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
        (**(code **)(*(long *)(lVar29 + 0x310) + 0x18))(lVar29 + 0x310);
        puVar3 = PTR_DAT_04bb2020 + 0x10;
        uStack_70 = (undefined4)*(undefined8 *)(lVar29 + 0x318);
        local_6c = (undefined4)((ulong)*(undefined8 *)(lVar29 + 0x318) >> 0x20);
        local_78 = puVar3;
        uVar15 = FUN_03ef8040(uVar33,&local_78);
        lVar16 = lVar16 + uVar36 * 0x88;
        *(undefined4 *)(lVar16 + 0x40) = uVar15;
        uVar33 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
        (**(code **)(*(long *)(lVar29 + 0x338) + 0x18))(lVar29 + 0x338);
        uStack_70 = (undefined4)*(undefined8 *)(lVar29 + 0x340);
        local_6c = (undefined4)((ulong)*(undefined8 *)(lVar29 + 0x340) >> 0x20);
        local_78 = puVar3;
        uVar15 = FUN_03ef8040(uVar33,&local_78);
        *(undefined4 *)(lVar16 + 0x44) = uVar15;
        *(undefined4 *)(lVar16 + 0x58) = *(undefined4 *)(lVar29 + 0x360);
        *(undefined4 *)(lVar16 + 0x5c) = *(undefined4 *)(lVar29 + 0x364);
        *(undefined4 *)(lVar16 + 0x60) = *(undefined4 *)(lVar29 + 0x368);
        local_78._0_4_ = uVar14;
        local_78._4_4_ = uVar10;
        uStack_70 = uVar11;
        local_6c = uVar12;
        FUN_03ef41a0(&local_78,*(undefined4 *)(lVar29 + 0x3b0),*(undefined4 *)(lVar29 + 0x3d0),
                     lVar29 + 0x388);
        *(undefined4 *)(lVar16 + 0x48) = (undefined4)local_78;
        *(ulong *)(lVar16 + 0x4c) = CONCAT44(uStack_70,local_78._4_4_);
        *(undefined4 *)(lVar16 + 0x54) = local_6c;
      }
      iVar23 = *(int *)(param_1 + 0x30);
      uVar35 = uVar35 + 1;
      lVar32 = lVar32 + 0x758;
    } while ((long)uVar35 < (long)iVar23);
    uVar24 = *(uint *)(param_1 + 0x28);
  }
  uVar33 = 0;
  if ((-1 < (int)uVar24) && (uVar33 = 0, (int)uVar24 < iVar23)) {
    if (*(uint *)(param_1 + 0x90) <= uVar24) {
      uVar24 = 0;
    }
    uVar13 = *(uint *)(param_1 + 0x70);
    lVar16 = *(long *)(*(long *)(param_1 + 0x98) + (ulong)uVar24 * 0x88 + 0x80);
    lVar32 = *(long *)(param_1 + 0x78);
    if (lVar16 == 0) {
      if (uVar13 != 0) {
        uVar24 = 0;
        do {
          *(undefined8 *)(lVar32 + ((long)((ulong)uVar24 << 0x20) >> 0x1a) + 0x38) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar13 != uVar24);
      }
LAB_03eeec6c:
      uVar33 = 0;
    }
    else {
      if (uVar13 != 0) {
        lVar29 = 0;
        uVar35 = 0;
        uVar24 = 0;
        do {
          lVar5 = *(long *)(lVar16 + 0x750) + lVar29;
          if (*(uint *)(lVar16 + 0x748) <= uVar35) {
            lVar5 = 0;
          }
          *(long *)(lVar32 + ((long)((ulong)uVar24 << 0x20) >> 0x1a) + 0x38) = lVar5;
          if (lVar5 == 0) goto LAB_03eeec6c;
          uVar24 = uVar24 + 1;
          uVar35 = uVar35 + 1;
          lVar29 = lVar29 + 0x140;
        } while (uVar13 != uVar24);
      }
      plVar17 = (long *)(param_1 + 0xa0);
      uVar35 = (**(code **)(*plVar17 + 8))(plVar17);
      if ((uVar35 & 1) != 0) {
        (*(code *)**(undefined8 **)(param_1 + 0xa0))(plVar17,param_1);
      }
      uVar33 = 1;
    }
  }
  return uVar33;
}

