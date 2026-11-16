
void FUN_028c1800(long *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  byte bVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined4 uVar28;
  uint *puVar29;
  undefined **ppuVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined **local_188;
  undefined **local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined *puStack_160;
  undefined *local_158;
  uint local_150;
  uint local_14c;
  int local_148;
  undefined4 local_140 [2];
  uint *local_138;
  uint local_12c;
  int iStack_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined ***local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8 [2];
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined **local_d8;
  undefined **local_d0;
  undefined **ppuStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  undefined **local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined **local_80;
  undefined8 local_74;
  undefined4 uStack_6c;
  
  if (param_2 == (undefined **)0x0) {
    uVar19 = 4;
    goto LAB_028c2968;
  }
  (**(code **)(*param_2 + 0x78))(param_2);
  *param_1 = (long)param_2;
  local_180 = (undefined **)0x0;
  local_178 = (undefined **)0x4;
  local_170 = (undefined *)((ulong)local_170._4_4_ << 0x20);
  local_188 = param_2;
  uVar24 = FUN_028c8500(&local_188);
  if ((uVar24 & 1) != 0) {
LAB_028c185c:
    uVar13 = local_178._4_4_;
    uVar14 = (uint)local_170;
    uVar24 = 0;
    puVar29 = &DAT_04a92444;
    do {
      if ((puVar29[-1] == local_178._4_4_) && (*puVar29 == (uint)local_170)) {
        ppuVar1 = (undefined **)(param_1 + 1);
        ppuVar32 = (undefined **)*param_1;
        local_e8 = CONCAT44(local_e8._4_4_,4);
        ppuVar30 = ppuVar1 + (ulong)*(uint *)(param_1 + 0x2d) * 0x16;
        if (1 < *(uint *)(param_1 + 0x2d)) {
          ppuVar30 = ppuVar1;
        }
        if (ppuVar32 == (undefined **)0x0) goto LAB_028c2944;
        *(uint *)ppuVar30 = local_178._4_4_;
        *(uint *)((long)ppuVar30 + 4) = (uint)local_170;
        local_178 = (undefined **)CONCAT44((uint)local_170,local_178._4_4_);
        local_188 = ppuVar30;
        local_180 = ppuVar32;
        uVar24 = FUN_028c871c(&local_188);
        if ((uVar24 & 1) == 0) goto LAB_028c2944;
        local_188 = (undefined **)0x0;
        local_180 = (undefined **)CONCAT44(local_180._4_4_,3);
        uVar24 = FUN_028c8370(&local_188);
        if ((uVar24 & 1) == 0) goto LAB_028c2200;
        if ((int)local_180 == 0) {
          local_170 = (undefined *)0x0;
          local_168 = (undefined *)0x4ffffffff;
          local_178 = (undefined **)ppuVar30[0xc];
          local_188 = ppuVar30 + 1;
          local_180 = ppuVar32;
          FUN_028c8a30(&local_188);
          switch(local_168._4_4_) {
          case 0:
            *(undefined1 *)((long)ppuVar30 + 0xaa) = 1;
            break;
          case 1:
            break;
          default:
            local_168._4_4_ = 3;
          case 2:
            local_178._0_4_ = local_168._4_4_;
            goto LAB_028c2950;
          }
        }
        if (*(char *)((long)ppuVar30 + 0xaa) != '\0') {
          puVar31 = ppuVar30[0xc];
          iVar18 = FUN_027b78b0(puVar31,DAT_05573f48);
          if (iVar18 == -1) goto LAB_028c2944;
          FUN_03ea9348(&local_188,puVar31 + 8,iVar18);
          ppuVar34 = local_180;
          ppuVar35 = local_188;
          if (local_188 == (undefined **)0x0) goto LAB_028c2944;
          ppuVar33 = (undefined **)ppuVar30[0xc];
          puVar31 = (undefined *)(**(code **)(*(long *)ppuVar30[1] + 0x18))();
          local_170 = (undefined *)0x0;
          local_168 = (undefined *)0x0;
          local_188 = (undefined **)0x0;
          local_180 = (undefined **)0x0;
          local_178 = (undefined **)0x0;
          if (ppuVar33 != (undefined **)0x0) {
            if (*(uint *)((long)ppuVar33 + 0x2c) == 1) {
              local_180 = ppuVar35;
              local_178 = ppuVar34;
              local_188 = ppuVar33;
              local_170 = puVar31;
            }
          }
          local_b0 = (undefined **)0x0;
          local_120 = 0x9e6968f4;
          local_98 = 0;
          local_90 = 0;
          local_a8 = (undefined **)0x0;
          local_a0 = (undefined **)0x0;
          local_118 = (undefined ***)DAT_0417bcbc;
          uStack_110 = 0;
          local_f8[0] = 2;
          local_f0 = &local_120;
          uVar24 = FUN_0272d760(&local_188,&local_b0,local_f8);
          if ((uVar24 & 1) == 0) goto LAB_028c2944;
          local_d8 = local_a8;
          local_d0 = local_a0;
          uVar19 = FUN_0272e334(&local_d8,0xc4f573e2);
          iVar18 = FUN_0272da84(&local_b0,uVar19);
          if (iVar18 != 8) goto LAB_028c2944;
          local_74._0_4_ = 0xc4f573e2;
          local_74._4_4_ = 0;
          uStack_6c = 0;
          local_140[0] = 1;
          local_d8 = (undefined **)0x0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = (undefined **)0x0;
          ppuStack_c8 = (undefined **)0x0;
          local_138 = (uint *)&local_74;
          uVar24 = FUN_0272d760(&local_b0,&local_d8,local_140);
          bVar16 = (uVar24 & 1) == 0;
          if (!bVar16) {
            local_88 = local_d0;
            local_80 = ppuStack_c8;
            uVar19 = FUN_0272e334(&local_88,0x6551fdb2);
            plVar25 = (long *)FUN_0272e550(&local_d8,local_c0,uVar19,0,0);
            *(bool *)(ppuVar30 + 0x13) = *plVar25 != 0 || plVar25[1] != 0;
          }
          local_74._0_4_ = 0xc4f573e2;
          local_74._4_4_ = 1;
          uStack_6c = 0;
          local_140[0] = 1;
          local_d8 = (undefined **)0x0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = (undefined **)0x0;
          ppuStack_c8 = (undefined **)0x0;
          local_138 = (uint *)&local_74;
          uVar24 = FUN_0272d760(&local_b0,&local_d8,local_140);
          bVar2 = (uVar24 & 1) == 0;
          if (!bVar2) {
            local_88 = local_d0;
            local_80 = ppuStack_c8;
            uVar19 = FUN_0272e334(&local_88,0x6551fdb2);
            plVar25 = (long *)FUN_0272e550(&local_d8,local_c0,uVar19,0,0);
            *(bool *)((long)ppuVar30 + 0x9a) = *plVar25 != 0 || plVar25[1] != 0;
          }
          local_74._0_4_ = 0xc4f573e2;
          local_74._4_4_ = 2;
          uStack_6c = 0;
          local_140[0] = 1;
          local_d8 = (undefined **)0x0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = (undefined **)0x0;
          ppuStack_c8 = (undefined **)0x0;
          local_138 = (uint *)&local_74;
          uVar24 = FUN_0272d760(&local_b0,&local_d8,local_140);
          bVar3 = (uVar24 & 1) == 0;
          if (!bVar3) {
            local_88 = local_d0;
            local_80 = ppuStack_c8;
            uVar19 = FUN_0272e334(&local_88,0x6551fdb2);
            plVar25 = (long *)FUN_0272e550(&local_d8,local_c0,uVar19,0,0);
            *(bool *)((long)ppuVar30 + 0x9c) = *plVar25 != 0 || plVar25[1] != 0;
          }
          local_74._0_4_ = 0xc4f573e2;
          local_74._4_4_ = 3;
          uStack_6c = 0;
          local_140[0] = 1;
          local_d8 = (undefined **)0x0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = (undefined **)0x0;
          ppuStack_c8 = (undefined **)0x0;
          local_138 = (uint *)&local_74;
          uVar24 = FUN_0272d760(&local_b0,&local_d8,local_140);
          bVar4 = (uVar24 & 1) == 0;
          if (!bVar4) {
            local_88 = local_d0;
            local_80 = ppuStack_c8;
            uVar19 = FUN_0272e334(&local_88,0x6551fdb2);
            plVar25 = (long *)FUN_0272e550(&local_d8,local_c0,uVar19,0,0);
            *(bool *)((long)ppuVar30 + 0x9e) = *plVar25 != 0 || plVar25[1] != 0;
          }
          local_74._0_4_ = 0xc4f573e2;
          local_74._4_4_ = 4;
          uStack_6c = 0;
          local_140[0] = 1;
          local_d8 = (undefined **)0x0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = (undefined **)0x0;
          ppuStack_c8 = (undefined **)0x0;
          local_138 = (uint *)&local_74;
          uVar24 = FUN_0272d760(&local_b0,&local_d8,local_140);
          bVar5 = (uVar24 & 1) == 0;
          if (!bVar5) {
            local_88 = local_d0;
            local_80 = ppuStack_c8;
            uVar19 = FUN_0272e334(&local_88,0x6551fdb2);
            plVar25 = (long *)FUN_0272e550(&local_d8,local_c0,uVar19,0,0);
            *(bool *)(ppuVar30 + 0x14) = *plVar25 != 0 || plVar25[1] != 0;
          }
          local_74._0_4_ = 0xc4f573e2;
          local_74._4_4_ = 5;
          uStack_6c = 0;
          local_140[0] = 1;
          local_d8 = (undefined **)0x0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = (undefined **)0x0;
          ppuStack_c8 = (undefined **)0x0;
          local_138 = (uint *)&local_74;
          uVar24 = FUN_0272d760(&local_b0,&local_d8,local_140);
          bVar6 = (uVar24 & 1) == 0;
          if (!bVar6) {
            local_88 = local_d0;
            local_80 = ppuStack_c8;
            uVar19 = FUN_0272e334(&local_88,0x6551fdb2);
            plVar25 = (long *)FUN_0272e550(&local_d8,local_c0,uVar19,0,0);
            *(bool *)((long)ppuVar30 + 0xa2) = *plVar25 != 0 || plVar25[1] != 0;
          }
          local_74._0_4_ = 0xc4f573e2;
          local_74._4_4_ = 6;
          uStack_6c = 0;
          local_140[0] = 1;
          local_d8 = (undefined **)0x0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = (undefined **)0x0;
          ppuStack_c8 = (undefined **)0x0;
          local_138 = (uint *)&local_74;
          uVar24 = FUN_0272d760(&local_b0,&local_d8,local_140);
          bVar7 = (uVar24 & 1) == 0;
          if (!bVar7) {
            local_88 = local_d0;
            local_80 = ppuStack_c8;
            uVar19 = FUN_0272e334(&local_88,0x6551fdb2);
            plVar25 = (long *)FUN_0272e550(&local_d8,local_c0,uVar19,0,0);
            *(bool *)((long)ppuVar30 + 0xa4) = *plVar25 != 0 || plVar25[1] != 0;
          }
          local_74._0_4_ = 0xc4f573e2;
          local_74._4_4_ = 7;
          uStack_6c = 0;
          local_140[0] = 1;
          local_d8 = (undefined **)0x0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = (undefined **)0x0;
          ppuStack_c8 = (undefined **)0x0;
          local_138 = (uint *)&local_74;
          uVar24 = FUN_0272d760(&local_b0,&local_d8,local_140);
          if ((uVar24 & 1) == 0) goto LAB_028c2944;
          local_88 = local_d0;
          local_80 = ppuStack_c8;
          uVar19 = FUN_0272e334(&local_88,0x6551fdb2);
          plVar25 = (long *)FUN_0272e550(&local_d8,local_c0,uVar19,0,0);
          *(bool *)((long)ppuVar30 + 0xa6) = *plVar25 != 0 || plVar25[1] != 0;
          if (bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar3 || (bVar2 || bVar16))))))
          goto LAB_028c2944;
        }
        ppuVar35 = ppuVar30 + 2;
        local_b0 = &PTR_FUN_04a925f0;
        bVar16 = (0x80084 < uVar13 && 0x80007 < uVar14) && (uVar13 < 0x80085 || uVar14 != 0x80008);
        uVar24 = 0;
        goto LAB_028c1f5c;
      }
      if ((local_178._4_4_ < puVar29[-1]) || (0xc < uVar24)) break;
      uVar20 = *puVar29;
      uVar24 = uVar24 + 1;
      puVar29 = puVar29 + 4;
    } while (uVar20 <= (uint)local_170);
    uVar19 = 3;
    goto LAB_028c2968;
  }
  if (((uint)local_178 & 0xfffffffe) != 2) {
    local_170 = (undefined *)((ulong)local_170 & 0xffffffff00000000);
    local_180 = (undefined **)0x100000002;
    local_178 = (undefined **)0x4;
    local_188 = param_2;
    uVar24 = FUN_028c8500(&local_188);
    if ((uVar24 & 1) != 0) goto LAB_028c185c;
    if (((uint)local_178 & 0xfffffffe) != 2) {
      local_178._0_4_ = 1;
    }
  }
  goto LAB_028c2950;
  while( true ) {
    uVar27 = 0xffffffff;
    if (uVar24 != 7) {
      uVar27 = uVar24 + 1;
    }
    if (7 < uVar24) {
      uVar27 = uVar24;
    }
    uVar24 = uVar27;
    if (uVar27 == 0xffffffff) break;
LAB_028c1f5c:
    ppuVar34 = (undefined **)((long)(ppuVar30 + 0x13) + uVar24 * 2);
    if (7 < uVar24) {
      ppuVar34 = ppuVar30 + 0x13;
    }
    if (*(char *)ppuVar34 != '\0') {
      if (DAT_05ae7600 == 0) {
        ppuVar33 = malloc(0x28);
      }
      else {
        ppuVar33 = (undefined **)(**(code **)(*ppuVar32 + 0x30))(ppuVar32,0x28,8);
      }
      uVar27 = uVar24;
      if (7 < uVar24) {
        uVar27 = 0;
      }
      ppuVar33[4] = (undefined *)0x0;
      ppuVar33[3] = (undefined *)0x0;
      ppuVar33[2] = (undefined *)0x0;
      *ppuVar33 = (undefined *)0x0;
      ppuVar33[1] = (undefined *)0x0;
      ppuVar35[uVar27] = (undefined *)ppuVar33;
      ppuVar8 = ppuVar35 + uVar24;
      if (7 < uVar24) {
        ppuVar8 = ppuVar35;
      }
      local_178 = (undefined **)ppuVar30[0xd];
      puVar9 = ppuVar30[0xe];
      puVar31 = ppuVar30[0xf];
      ppuVar10 = (undefined **)ppuVar30[0x10];
      uVar19 = (undefined4)uVar24;
      local_168 = (undefined *)CONCAT44(4,uVar19);
      local_170 = (undefined *)0x100000001;
      local_188 = ppuVar33;
      local_180 = ppuVar32;
      FUN_028c8a30(&local_188);
      if (local_168._4_4_ != 0) goto LAB_028c231c;
      local_188 = ppuVar33 + 1;
      local_168 = (undefined *)CONCAT44(4,uVar19);
      local_170 = (undefined *)0x200000001;
      local_180 = ppuVar32;
      local_178 = (undefined **)puVar9;
      FUN_028c8a30(&local_188);
      if (local_168._4_4_ != 0) goto LAB_028c231c;
      local_168 = (undefined *)CONCAT44(4,uVar19);
      local_170 = (undefined *)0x300000001;
      local_188 = ppuVar33 + 2;
      local_180 = ppuVar32;
      local_178 = (undefined **)puVar31;
      FUN_028c8a30(&local_188);
      if (local_168._4_4_ != 0) goto LAB_028c231c;
      local_168 = (undefined *)CONCAT44(4,uVar19);
      local_170 = (undefined *)0x400000001;
      local_188 = ppuVar33 + 3;
      local_180 = ppuVar32;
      local_178 = ppuVar10;
      FUN_028c8a30(&local_188);
      if (local_168._4_4_ != 0) goto LAB_028c231c;
      if (bVar16) {
        uVar26 = (**(code **)(**(long **)ppuVar35[uVar27] + 0x18))();
        uVar27 = (*(code *)*local_b0)(&local_b0,uVar26,ppuVar30[0xd]);
        if ((uVar27 & 1) != 0) {
          *(char *)((long)ppuVar34 + 1) = '\x01';
          local_168 = (undefined *)CONCAT44(4,uVar19);
          local_178 = (undefined **)ppuVar30[0x11];
          local_170 = (undefined *)0x600000001;
          local_188 = (undefined **)(*ppuVar8 + 0x20);
          local_180 = ppuVar32;
          FUN_028c8a30(&local_188);
          if (local_168._4_4_ != 0) goto LAB_028c231c;
        }
      }
    }
  }
  if ((uVar13 < 0x70006) || (uVar14 < 0x70001)) {
LAB_028c2174:
    cVar12 = *(char *)((long)ppuVar30 + 0xaa);
joined_r0x028c2178:
    if ((cVar12 != '\0') || (*(char *)(ppuVar30 + 0x15) != '\0')) {
      uVar20 = *(uint *)(param_1 + 0x2d);
      ppuVar30 = ppuVar1 + (ulong)uVar20 * 0x16;
      if (1 < uVar20) {
        ppuVar30 = ppuVar1;
      }
      if (*(char *)((long)ppuVar30 + 0xaa) == '\0') {
        if (*(char *)(ppuVar30 + 0x15) == '\0') goto LAB_028c2780;
        bVar16 = false;
        bVar15 = false;
LAB_028c265c:
        local_180 = ppuVar30 + 0x15;
        local_188 = (undefined **)ppuVar30[10];
        local_178 = (undefined **)ppuVar30[0xd];
        local_170 = ppuVar30[0xe];
        local_168 = ppuVar30[0xf];
        puStack_160 = ppuVar30[0x10];
        local_158 = ppuVar30[0x11];
        local_150 = *(uint *)ppuVar30;
        local_14c = *(uint *)((long)ppuVar30 + 4);
        local_148 = 0;
        FUN_028c8c68(&local_188);
        iVar18 = local_148;
        plVar25 = (long *)ppuVar30[0xb];
        iVar23 = 3;
        if ((plVar25 != (long *)0x0) &&
           (ppuVar30 = (undefined **)ppuVar30[0x12], ppuVar30 != (undefined **)0x0)) {
          local_188 = (undefined **)0x0;
          local_170 = (undefined *)0x0;
          local_168 = (undefined *)0x0;
          local_180 = (undefined **)0x0;
          local_178 = (undefined **)0x0;
          iVar23 = FUN_027b78b0(ppuVar30,DAT_05573f5c);
          if (iVar23 == -1) {
            ppuVar32 = (undefined **)0x0;
            ppuVar35 = (undefined **)0x0;
          }
          else {
            FUN_03ea9348(&local_b0,ppuVar30 + 1,iVar23);
            ppuVar32 = (undefined **)0x0;
            if (local_b0 != (undefined **)0x0) {
              ppuVar32 = local_a8;
            }
            ppuVar35 = local_b0;
          }
          puVar31 = (undefined *)(**(code **)(*plVar25 + 0x18))(plVar25);
          if (*(uint *)((long)ppuVar30 + 0x2c) == 1) {
            local_168 = (undefined *)0x0;
            local_188 = ppuVar30;
            local_180 = ppuVar35;
            local_178 = ppuVar32;
            local_170 = puVar31;
          }
          bVar17 = FUN_028c90c0(&local_188);
          if (iVar18 == 3) {
            bVar16 = true;
          }
          if (!bVar16) {
            bVar15 = bVar15 | bVar17 | iVar18 == 2;
            goto LAB_028c2758;
          }
LAB_028c2748:
          iVar23 = 3;
        }
      }
      else {
        plVar25 = (long *)ppuVar30[1];
        iVar18 = 3;
        if ((plVar25 != (long *)0x0) &&
           (ppuVar32 = (undefined **)ppuVar30[0xc], ppuVar32 != (undefined **)0x0)) {
          local_b0 = (undefined **)0x0;
          local_98 = 0;
          local_90 = 0;
          local_a8 = (undefined **)0x0;
          local_a0 = (undefined **)0x0;
          iVar18 = FUN_027b78b0(ppuVar32,DAT_05573f48);
          if (iVar18 == -1) {
            ppuVar35 = (undefined **)0x0;
            ppuVar34 = (undefined **)0x0;
          }
          else {
            FUN_03ea9348(&local_188,ppuVar32 + 1,iVar18);
            ppuVar35 = (undefined **)0x0;
            if (local_188 != (undefined **)0x0) {
              ppuVar35 = local_180;
            }
            ppuVar34 = local_188;
          }
          uVar26 = (**(code **)(*plVar25 + 0x18))(plVar25);
          if (*(uint *)((long)ppuVar32 + 0x2c) == 1) {
            local_90 = 0;
            local_b0 = ppuVar32;
            local_a8 = ppuVar34;
            local_a0 = ppuVar35;
            local_98 = uVar26;
          }
          local_188 = (undefined **)0x0;
          local_d0 = (undefined **)&local_120;
          local_120 = 0x9e6968f4;
          local_118 = (undefined ***)((ulong)local_118 & 0xffffffff00000000);
          local_170 = (undefined *)0x0;
          local_168 = (undefined *)0x0;
          local_180 = (undefined **)0x0;
          local_178 = (undefined **)0x0;
          local_d8 = (undefined **)CONCAT44(local_d8._4_4_,1);
          FUN_0272d760(&local_b0,&local_188,&local_d8);
          uVar20 = FUN_028c90c0(&local_188);
          local_188 = (undefined **)0x0;
          local_d8 = (undefined **)0x9e6968f4;
          local_170 = (undefined *)0x0;
          local_168 = (undefined *)0x0;
          local_180 = (undefined **)0x0;
          local_178 = (undefined **)0x0;
          local_d0 = (undefined **)DAT_0417bcd4;
          ppuStack_c8 = (undefined **)0x0;
          local_120 = CONCAT44(local_120._4_4_,2);
          local_118 = &local_d8;
          FUN_0272d760(&local_b0,&local_188,&local_120);
          uVar21 = FUN_028c90c0(&local_188);
          local_170 = (undefined *)0x0;
          local_168 = (undefined *)0x0;
          local_188 = (undefined **)0x0;
          local_180 = (undefined **)0x0;
          local_178 = (undefined **)0x0;
          local_120 = 0xd23e4730;
          local_118 = (undefined ***)((ulong)local_118 & 0xffffffff00000000);
          local_d8 = (undefined **)CONCAT44(local_d8._4_4_,1);
          local_d0 = (undefined **)&local_120;
          FUN_0272d760(&local_b0,&local_188,&local_d8);
          uVar22 = FUN_028c90c0(&local_188);
          local_d8 = (undefined **)0x0;
          local_f0 = &local_e8;
          local_c0 = 0;
          uStack_b8 = 0;
          local_e0 = 0;
          local_f8[0] = 1;
          local_d0 = (undefined **)0x0;
          ppuStack_c8 = (undefined **)0x0;
          local_e8 = 0xd23e4730;
          FUN_0272d760(&local_b0,&local_d8,local_f8);
          local_188 = local_d0;
          local_180 = ppuStack_c8;
          iVar18 = FUN_0272e334(&local_188,0x168fb454);
          if ((-1 < iVar18) && (iVar18 = FUN_0272da84(&local_d8,iVar18), 0 < iVar18)) {
            iVar23 = 0;
            do {
              local_120 = 0;
              local_12c = 0x168fb454;
              local_138 = &local_12c;
              local_124 = 0;
              local_108 = 0;
              uStack_100 = 0;
              local_140[0] = 1;
              local_118 = (undefined ***)0x0;
              uStack_110 = 0;
              iStack_128 = iVar23;
              FUN_0272d760(&local_d8,&local_120,local_140);
              local_188 = (undefined **)0x0;
              local_74._0_4_ = 0x8b37691;
              local_74._4_4_ = 0;
              local_170 = (undefined *)0x0;
              local_168 = (undefined *)0x0;
              uStack_6c = 0;
              local_88._0_4_ = 1;
              local_180 = (undefined **)0x0;
              local_178 = (undefined **)0x0;
              local_80 = (undefined **)&local_74;
              FUN_0272d760(&local_120,&local_188,&local_88);
              FUN_028c90c0(&local_188);
              local_188 = (undefined **)0x0;
              local_74._0_4_ = 0x68cb8460;
              local_74._4_4_ = 0;
              local_170 = (undefined *)0x0;
              local_168 = (undefined *)0x0;
              uStack_6c = 0;
              local_88 = (undefined **)CONCAT44(local_88._4_4_,1);
              local_180 = (undefined **)0x0;
              local_178 = (undefined **)0x0;
              local_80 = (undefined **)&local_74;
              FUN_0272d760(&local_120,&local_188,&local_88);
              FUN_028c90c0(&local_188);
              iVar23 = iVar23 + 1;
            } while (iVar18 != iVar23);
          }
          iVar18 = 1;
          if (((uVar20 | uVar21 | uVar22) & 1) != 0) {
            iVar18 = 2;
          }
        }
        bVar15 = iVar18 == 2;
        bVar16 = iVar18 == 3;
        uVar24 = 0;
        do {
          ppuVar32 = (undefined **)((long)(ppuVar30 + 0x13) + uVar24 * 2);
          if (7 < uVar24) {
            ppuVar32 = ppuVar30 + 0x13;
          }
          if (*(char *)ppuVar32 != '\0') {
            local_178 = (undefined **)ppuVar30[0xd];
            local_170 = ppuVar30[0xe];
            local_168 = ppuVar30[0xf];
            puStack_160 = ppuVar30[0x10];
            local_158 = ppuVar30[0x11];
            local_188 = ppuVar30 + 2 + uVar24;
            if (7 < uVar24) {
              local_188 = ppuVar30 + 2;
            }
            local_188 = (undefined **)*local_188;
            local_150 = *(uint *)ppuVar30;
            local_14c = *(uint *)((long)ppuVar30 + 4);
            local_148 = 0;
            local_180 = ppuVar32;
            FUN_028c8c68(&local_188);
            bVar15 = bVar15 | local_148 == 2;
            bVar16 = (bool)(bVar16 | local_148 == 3);
          }
          uVar27 = 0xffffffff;
          if (uVar24 != 7) {
            uVar27 = uVar24 + 1;
          }
          if (7 < uVar24) {
            uVar27 = uVar24;
          }
          uVar24 = uVar27;
        } while (uVar27 != 0xffffffff);
        if (*(char *)(ppuVar30 + 0x15) != '\0') goto LAB_028c265c;
        if (bVar16) goto LAB_028c2748;
LAB_028c2758:
        if ((bVar15 & 1) == 0) {
          uVar20 = *(uint *)(param_1 + 0x2d);
LAB_028c2780:
          ppuVar30 = ppuVar1 + (ulong)uVar20 * 0x16;
          if (1 < uVar20) {
            ppuVar30 = ppuVar1;
          }
          *(undefined1 *)((long)param_1 + 0x16c) = *(undefined1 *)(ppuVar30 + 0x13);
          *(undefined1 *)((long)param_1 + 0x16d) = *(undefined1 *)((long)ppuVar30 + 0x99);
          *(undefined1 *)((long)param_1 + 0x16e) = *(undefined1 *)((long)ppuVar30 + 0x9a);
          *(undefined1 *)((long)param_1 + 0x16f) = *(undefined1 *)((long)ppuVar30 + 0x9b);
          *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)((long)ppuVar30 + 0x9c);
          *(undefined1 *)((long)param_1 + 0x171) = *(undefined1 *)((long)ppuVar30 + 0x9d);
          *(undefined1 *)((long)param_1 + 0x172) = *(undefined1 *)((long)ppuVar30 + 0x9e);
          *(undefined1 *)((long)param_1 + 0x173) = *(undefined1 *)((long)ppuVar30 + 0x9f);
          *(undefined1 *)((long)param_1 + 0x174) = *(undefined1 *)(ppuVar30 + 0x14);
          *(undefined1 *)((long)param_1 + 0x175) = *(undefined1 *)((long)ppuVar30 + 0xa1);
          *(undefined1 *)((long)param_1 + 0x176) = *(undefined1 *)((long)ppuVar30 + 0xa2);
          *(undefined1 *)((long)param_1 + 0x177) = *(undefined1 *)((long)ppuVar30 + 0xa3);
          *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)((long)ppuVar30 + 0xa4);
          *(undefined1 *)((long)param_1 + 0x179) = *(undefined1 *)((long)ppuVar30 + 0xa5);
          *(undefined1 *)((long)param_1 + 0x17a) = *(undefined1 *)((long)ppuVar30 + 0xa6);
          *(undefined1 *)((long)param_1 + 0x17b) = *(undefined1 *)((long)ppuVar30 + 0xa7);
          *(undefined1 *)((long)param_1 + 0x17c) = *(undefined1 *)(ppuVar30 + 0x15);
          *(undefined1 *)((long)param_1 + 0x17d) = *(undefined1 *)((long)ppuVar30 + 0xa9);
          *(undefined1 *)((long)param_1 + 0x17e) = *(undefined1 *)((long)ppuVar30 + 0xaa);
          *(uint *)(param_1 + 0x30) = (uint)(uVar13 != 0xa0028 || uVar14 != 0xa0002);
                    /* WARNING: Could not recover jumptable at 0x028c286c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x78))(param_2);
          return;
        }
        iVar23 = 2;
      }
      uVar19 = 3;
      if (iVar23 != 2) {
        uVar19 = 4;
      }
      goto LAB_028c2968;
    }
    local_168._4_4_ = 1;
  }
  else {
    local_180 = (undefined **)CONCAT44(local_180._4_4_,3);
    local_188 = (undefined **)0x100000002;
    uVar24 = FUN_028c8370(&local_188);
    if ((uVar24 & 1) == 0) {
LAB_028c2200:
      local_178._0_4_ = 3;
      goto LAB_028c2950;
    }
    if ((int)local_180 != 0) goto LAB_028c2174;
    ppuVar35 = (undefined **)FUN_038aa4a0(0x28,ppuVar32,8);
    ppuVar35[4] = (undefined *)0x0;
    ppuVar35[2] = (undefined *)0x0;
    *ppuVar35 = (undefined *)0x0;
    ppuVar35[1] = (undefined *)0x0;
    ppuVar35[3] = (undefined *)0x0;
    puVar31 = ppuVar30[0xf];
    puVar9 = ppuVar30[0x10];
    ppuVar30[10] = (undefined *)ppuVar35;
    local_178 = (undefined **)ppuVar30[0xd];
    puVar11 = ppuVar30[0xe];
    local_170 = (undefined *)0x100000002;
    local_168 = (undefined *)0x4ffffffff;
    local_188 = ppuVar35;
    local_180 = ppuVar32;
    FUN_028c8a30(&local_188);
    if (local_168._4_4_ == 0) {
      local_188 = ppuVar35 + 1;
      local_168 = (undefined *)0x4ffffffff;
      local_170 = (undefined *)0x200000002;
      local_180 = ppuVar32;
      local_178 = (undefined **)puVar11;
      FUN_028c8a30(&local_188);
      if (local_168._4_4_ == 0) {
        local_168 = (undefined *)0x4ffffffff;
        local_170 = (undefined *)0x300000002;
        local_188 = ppuVar35 + 2;
        local_180 = ppuVar32;
        local_178 = (undefined **)puVar31;
        FUN_028c8a30(&local_188);
        if (local_168._4_4_ == 0) {
          local_168 = (undefined *)0x4ffffffff;
          local_170 = (undefined *)0x400000002;
          local_188 = ppuVar35 + 3;
          local_180 = ppuVar32;
          local_178 = (undefined **)puVar9;
          FUN_028c8a30(&local_188);
          if (local_168._4_4_ == 0) {
            *(undefined1 *)(ppuVar30 + 0x15) = 1;
            if (bVar16) {
              uVar26 = (**(code **)(**(long **)ppuVar30[10] + 0x18))();
              uVar24 = (*(code *)*local_b0)(&local_b0,uVar26,ppuVar30[0xd]);
              if ((uVar24 & 1) != 0) {
                *(undefined1 *)((long)ppuVar30 + 0xa9) = 1;
                local_178 = (undefined **)ppuVar30[0x11];
                local_170 = (undefined *)0x600000002;
                local_168 = (undefined *)0x4ffffffff;
                local_188 = (undefined **)(ppuVar30[10] + 0x20);
                local_180 = ppuVar32;
                FUN_028c8a30(&local_188);
                if (local_168._4_4_ != 0) goto LAB_028c231c;
              }
            }
            local_170 = (undefined *)0x500000002;
            local_168 = (undefined *)0x4ffffffff;
            local_178 = (undefined **)ppuVar30[0x12];
            local_188 = ppuVar30 + 0xb;
            local_180 = ppuVar32;
            FUN_028c8a30(&local_188);
            if (local_168._4_4_ - 1 < 2) {
              local_168._4_4_ = 2;
            }
            else {
              if (local_168._4_4_ == 0) {
                cVar12 = *(char *)((long)ppuVar30 + 0xaa);
                goto joined_r0x028c2178;
              }
              if (local_168._4_4_ != 3) {
LAB_028c2944:
                local_168._4_4_ = 3;
              }
            }
            goto LAB_028c2948;
          }
        }
      }
    }
LAB_028c231c:
    uVar13 = local_168._4_4_ - 1;
    local_168._4_4_ = 2;
    if (1 < uVar13) {
      local_168._4_4_ = 3;
    }
  }
LAB_028c2948:
  local_178._0_4_ = local_168._4_4_;
LAB_028c2950:
  uVar28 = 3;
  if ((uint)local_178 != 2) {
    uVar28 = 4;
  }
  uVar19 = 2;
  if ((uint)local_178 != 1) {
    uVar19 = uVar28;
  }
LAB_028c2968:
  *(undefined4 *)(param_1 + 0x30) = uVar19;
  return;
}

