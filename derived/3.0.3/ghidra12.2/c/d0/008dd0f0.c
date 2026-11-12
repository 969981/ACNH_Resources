
/* WARNING: Removing unreachable block (ram,0x008e005c) */
/* WARNING: Removing unreachable block (ram,0x008df7f4) */
/* WARNING: Removing unreachable block (ram,0x008dfa44) */
/* WARNING: Removing unreachable block (ram,0x008e0dc0) */
/* WARNING: Removing unreachable block (ram,0x008dfc0c) */
/* WARNING: Removing unreachable block (ram,0x008dd698) */
/* WARNING: Removing unreachable block (ram,0x008dd504) */
/* WARNING: Removing unreachable block (ram,0x008dd48c) */
/* WARNING: Removing unreachable block (ram,0x008dd57c) */
/* WARNING: Removing unreachable block (ram,0x008e1024) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_008dd0f0(long param_1,uint *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  ushort uVar11;
  short sVar12;
  uint3 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  long *plVar27;
  uint *puVar28;
  long *plVar29;
  uint *puVar30;
  ulong uVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  bool bVar34;
  long lVar35;
  int *piVar36;
  undefined **ppuVar37;
  char *pcVar38;
  undefined8 *puVar39;
  long lVar40;
  int iVar41;
  uint uVar42;
  uint *puVar43;
  undefined4 uVar44;
  long lVar45;
  ulong uVar46;
  long lVar47;
  undefined8 uVar48;
  ulong uVar49;
  undefined8 *puVar50;
  long lVar51;
  byte bVar52;
  undefined **ppuVar53;
  ulong *puVar54;
  undefined *puVar55;
  long *plVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  int iVar60;
  float fVar61;
  int iVar62;
  float fVar63;
  float fVar64;
  undefined2 local_398;
  uint local_370;
  undefined4 local_338;
  undefined *local_330;
  undefined **local_328;
  int local_320;
  undefined *local_31c [3];
  undefined1 local_2fd;
  undefined *local_2f8;
  undefined **local_2f0;
  int local_2e8;
  undefined *local_2e4 [3];
  undefined1 local_2c5;
  undefined *local_2b8;
  undefined **local_2b0;
  undefined1 local_2a8 [35];
  undefined1 local_285;
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_270 [8];
  int local_268;
  int iStack_264;
  undefined1 local_24d;
  undefined8 local_248;
  bool local_240;
  float local_23c;
  uint uStack_238;
  float local_234;
  undefined *local_230;
  undefined *puStack_228;
  undefined8 local_220;
  undefined *local_218;
  undefined8 local_210;
  uint local_204;
  ulong local_1a8 [4];
  uint local_188;
  uint local_184;
  undefined *local_170;
  undefined8 local_168;
  byte local_160;
  undefined8 local_140;
  undefined **local_138;
  undefined1 local_130 [4];
  undefined1 auStack_12c [8];
  uint uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined **local_100;
  int local_f8;
  undefined8 local_f4;
  undefined4 uStack_ec;
  undefined2 local_e8;
  undefined1 local_d5;
  uint local_d0;
  undefined8 local_cc;
  char local_c4;
  uint local_c0;
  char local_bc;
  float local_b8;
  uint local_b4;
  float local_b0;
  undefined4 local_ac;
  char local_a8;
  undefined4 local_a4;
  char local_a0;
  float local_9c;
  
  *(undefined8 *)(param_1 + 0x37f38) = &PTR_LAB_04925c98;
  uVar8 = param_2[2];
  fVar63 = (float)param_2[5];
  local_370 = *param_2;
  uVar6 = param_2[1];
  local_204 = param_2[3];
  uVar7 = param_2[4];
  *(uint *)(param_1 + 0x37e20) = local_204;
  lVar40 = param_1 + 0x37e28;
  if (*(char *)(param_1 + 0x37e38) != '\0') {
    (*(code *)**(undefined8 **)(param_1 + 0x37e28))(lVar40);
    *(undefined1 *)(param_1 + 0x37e38) = 0;
  }
  if (*(char *)(param_1 + 0x37e44) != '\0') {
    *(undefined1 *)(param_1 + 0x37e44) = 0;
  }
  if (*(char *)(param_1 + 0x37e4c) != '\0') {
    *(undefined1 *)(param_1 + 0x37e4c) = 0;
  }
  *(undefined4 *)(param_1 + 0x37e50) = 0x7fc00000;
  if (local_370 == 0 && uVar6 == 0) {
    FUN_008e27c0(param_1 + 0x31860);
    puVar55 = PTR_DAT_04bb3450;
    uVar22 = *(uint *)PTR_DAT_04bb3450;
    *(byte *)(param_1 + 0x37fbf) = (byte)uVar22 & 1;
    *(uint *)puVar55 = uVar22 | 1;
  }
  local_220 = (undefined **)0x0;
  local_230 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_228 = PTR_DAT_04bb2010 + 0x10;
  local_210 = 0;
  lVar51 = *(long *)PTR_DAT_04bb59d8;
  local_218 = puStack_228;
  if (lVar51 == 0) {
    iVar62 = 0;
    iVar21 = 0;
    iVar60 = 0;
  }
  else {
    sVar12 = *(short *)PTR_DAT_04bb6298;
    if (sVar12 == -1) {
LAB_008dd334:
      lVar51 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar51 == 0) {
        iVar41 = 0;
        iVar62 = 0;
        iVar23 = 0x10;
        iVar21 = 0x10;
      }
      else {
        iVar41 = *(int *)(lVar51 + 0xd88);
        iVar62 = *(int *)(lVar51 + 0xd8c);
        iVar21 = *(int *)(lVar51 + 0xd98);
        iVar23 = *(int *)(lVar51 + 0xd9c);
      }
      iVar60 = iVar41;
      if (iVar21 <= iVar41) {
        iVar60 = iVar21;
      }
      if (iVar41 <= iVar21) {
        iVar41 = iVar21;
      }
      iVar21 = iVar62;
      if (iVar23 <= iVar62) {
        iVar21 = iVar23;
      }
      if (iVar62 <= iVar23) {
        iVar62 = iVar23;
      }
      local_220 = (undefined **)CONCAT44(iVar21,iVar60);
    }
    else {
      local_140 = (undefined **)CONCAT44(local_140._4_4_,1);
      puVar30 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
      if (0xff < (uint)(int)sVar12) {
        puVar30 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar30 >> 1 & 1) == 0) ||
         (local_140 = (undefined **)CONCAT44(local_140._4_4_,0x1a), (*puVar30 >> 0x1a & 1) == 0))
      goto LAB_008dd334;
      lVar35 = *(long *)PTR_DAT_04bb2720;
      if (lVar35 == 0) {
        puVar50 = &DAT_055c04a0;
      }
      else {
        puVar50 = &DAT_055c04a0;
        if (*(long *)(lVar35 + 0x330) != 0) {
          puVar50 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
          iVar21 = FUN_006bd550(*puVar50,0);
          puVar50 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar21 != 0x758f7eaf) {
            puVar50 = &DAT_055c04a0;
          }
        }
      }
      if (*(int *)(puVar50 + 7) != -0x17df00c3) goto LAB_008dd334;
      iVar60 = *(int *)(lVar51 + 0x28);
      iVar21 = *(int *)(lVar51 + 0x2c);
      local_220 = *(undefined ***)(lVar51 + 0x28);
      iVar41 = *(int *)(lVar51 + 0x38);
      iVar62 = *(int *)(lVar51 + 0x3c);
    }
    local_210 = CONCAT44(iVar62,iVar41);
  }
  puVar17 = PTR_DAT_04bb5998;
  puVar2 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  puVar55 = PTR_DAT_04bb2028;
  local_248 = (undefined *)0x0;
  piVar1 = (int *)(param_1 + 0x31868);
  local_240 = false;
  local_23c = NAN;
  switch(local_204) {
  case 0:
    local_278 = (undefined **)((ulong)local_278 & 0xffffffff00000000);
    local_280._0_4_ = 0.0;
    local_280._4_4_ = 0;
    local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_138 = (undefined **)0x4086843;
    FUN_008fa8b0(&local_280,&local_140);
    puVar3 = PTR_DAT_04bb3968;
    local_234 = (float)local_278;
    local_23c = (float)local_280;
    uStack_238 = local_280._4_4_;
    FUN_020b3f80(*(undefined8 *)PTR_DAT_04bb3968);
    if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       (uVar11 = **(ushort **)PTR_DAT_04bc3a48, (uVar11 & 1) == 0)) {
      if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) == 1) goto LAB_008ddb8c;
    }
    else if (((uVar11 ^ 0xffff) & 3) == 0) {
LAB_008ddb8c:
      local_140 = &PTR_FUN_04a730d0;
      iVar21 = *(int *)(*(long *)puVar3 + 0xb88);
      if (iVar21 != 0) {
        lVar40 = (long)iVar21 << 3;
        puVar50 = *(undefined8 **)(*(long *)puVar3 + 0xb90);
        do {
          (*(code *)*local_140)(&local_140,*puVar50);
          lVar40 = lVar40 + -8;
          puVar50 = puVar50 + 1;
        } while (lVar40 != 0);
      }
    }
    break;
  case 1:
    local_278 = (undefined **)((ulong)(uint)local_278._4_4_ << 0x20);
    local_280._0_4_ = 0.0;
    local_280._4_4_ = 0;
    local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_138 = (undefined **)0x409b3a2;
    FUN_008fa8b0(&local_280,&local_140);
    local_23c = (float)local_280;
    uStack_238 = local_280._4_4_;
    local_234 = (float)local_278;
  default:
    cVar9 = '\0';
    uVar58 = 0;
    uVar22 = 0;
    bVar19 = false;
    fVar57 = NAN;
    goto LAB_008dfbb4;
  case 2:
    if (uVar6 == 0) {
      lVar51 = *(long *)PTR_DAT_04bb4e28;
      if (lVar51 == 0) {
        bVar19 = false;
        uVar22 = 0;
      }
      else {
        iVar21 = FUN_03737fb0(lVar51);
        lVar35 = (long)*piVar1;
        piVar36 = (int *)PTR_DAT_04bb3238;
        if (*piVar1 != 0) {
          do {
            lVar35 = lVar35 + -1;
            lVar45 = *(long *)(*(long *)(param_1 + 0x31870) + lVar35 * 8);
            if (*(char *)(lVar45 + 0x84) != '\0') {
              piVar36 = (int *)(lVar45 + 0x80);
              break;
            }
          } while (lVar35 != 0);
        }
        if ((iVar21 == *piVar36) && (iVar21 = FUN_037380e0(lVar51), iVar21 != 0)) {
          uVar22 = FUN_037380e0(lVar51);
        }
        else {
          uVar22 = FUN_03737fb0(lVar51);
        }
        bVar19 = true;
      }
      *(undefined4 *)(param_1 + 0x37e20) = 2;
      if (*(char *)(param_1 + 0x37e38) != '\0') {
        (*(code *)**(undefined8 **)(param_1 + 0x37e28))(lVar40);
        *(undefined1 *)(param_1 + 0x37e38) = 0;
      }
      if (*(char *)(param_1 + 0x37e44) != '\0') {
        *(undefined1 *)(param_1 + 0x37e44) = 0;
      }
      if (lVar51 == 0) {
        if (*(char *)(param_1 + 0x37e4c) != '\0') {
          *(undefined1 *)(param_1 + 0x37e4c) = 0;
        }
      }
      else {
        if (*(char *)(param_1 + 0x37e4c) == '\0') {
          *(undefined1 *)(param_1 + 0x37e4c) = 1;
        }
        *(uint *)(param_1 + 0x37e48) = uVar22;
      }
      iVar21 = 0;
      *(undefined4 *)(param_1 + 0x37e50) = 0x7fc00000;
      iVar62 = 0;
      iVar41 = 0;
      iVar60 = 0;
      uVar26 = 0;
      iVar23 = 5;
      ppuVar33 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
      ppuVar53 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      puVar55 = PTR_DAT_04bb3750 + 0x10;
      do {
        FUN_020b3f80(*(undefined8 *)PTR_DAT_04bb3968);
        if ((lVar51 != 0) && (lVar35 = *(long *)PTR_DAT_04bb27c0, lVar35 != 0)) {
          if ((uVar22 == 0) ||
             (((lVar45 = *(long *)(*(long *)(*(long *)(lVar35 + 0x1c0) + 8) +
                                  (ulong)(uVar22 >> 0x14) * 8), lVar45 == 0 ||
               ((*(uint *)(lVar45 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar45 + 0x230) != uVar22)
              ))) {
            lVar45 = 0;
          }
          if (*(int *)(lVar35 + 0x288) == 1 || *(int *)(lVar35 + 0x288) == -1) {
            plVar56 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar35 = *(long *)PTR_DAT_04bb27c0;
            iVar24 = (**(code **)(*plVar56 + 0x60))();
            if (((iVar24 < 0x11) ||
                ((*(uint *)(lVar35 + 0x5e8) < 5 &&
                 ((1 << (ulong)(*(uint *)(lVar35 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar45 != 0)
               ) {
              fVar57 = 0.0;
              lVar35 = *(long *)PTR_DAT_04bb27c0;
              if (lVar35 == 0) {
LAB_008de044:
                iVar60 = 0;
                fVar64 = 0.0;
              }
              else {
                if (((uVar22 == 0) ||
                    (plVar56 = *(long **)(*(long *)(*(long *)(lVar35 + 0x1c0) + 8) +
                                         (ulong)(uVar22 >> 0x14) * 8), plVar56 == (long *)0x0)) ||
                   (((*(uint *)(plVar56 + 0x49) >> 1 & 1) != 0 ||
                    (*(uint *)(plVar56 + 0x46) != uVar22)))) {
                  plVar56 = (long *)0x0;
                }
                if ((*(int *)(lVar35 + 0x288) == 1) || (*(int *)(lVar35 + 0x288) == -1)) {
                  plVar27 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                         (*(long *)PTR_DAT_04bb3350 + 0x68));
                  lVar35 = *(long *)PTR_DAT_04bb27c0;
                  iVar21 = (**(code **)(*plVar27 + 0x60))();
                  if (iVar21 < 0x11) {
                    uVar26 = 1;
                  }
                  else {
                    if (4 < *(uint *)(lVar35 + 0x5e8)) goto LAB_008ddfc4;
                    uVar26 = 0x1aU >> (ulong)(*(uint *)(lVar35 + 0x5e8) & 0x1f) & 1;
                  }
                  if (plVar56 != (long *)0x0) goto LAB_008ddfd8;
                  goto LAB_008de044;
                }
LAB_008ddfc4:
                uVar26 = 0;
                if (plVar56 == (long *)0x0) goto LAB_008de044;
LAB_008ddfd8:
                if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                   (iVar21 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar21 != 0)) {
                  *(undefined **)PTR_DAT_04bb37d0 = puVar55;
                  __cxa_guard_release(PTR_DAT_04bb37d8);
                }
                uVar25 = (**(code **)(*plVar56 + 0x20))(plVar56,PTR_DAT_04bb37d0);
                if ((uVar26 & uVar25) != 1) goto LAB_008de044;
                lVar35 = *(long *)PTR_DAT_04bb4e28;
                iVar21 = FUN_03722560(lVar35,plVar56 + 0x7c);
                if ((iVar21 == -1) ||
                   (lVar35 = *(long *)(*(long *)(lVar35 + 0xe8) + (long)iVar21 * 8),
                   (*(ushort *)(lVar35 + 0x114) >> 9 & 1) == 0)) goto LAB_008de044;
                fVar57 = *(float *)(lVar35 + 0x104);
                fVar64 = *(float *)(lVar35 + 0x10c);
                iVar60 = *(int *)(lVar35 + 0x110);
              }
              iVar62 = (int)((float)(int)(fVar57 + -2.5) / 5.0) - (uint)(fVar57 + -2.5 < 0.0);
              iVar21 = iVar62 + 1;
              uVar26 = iVar60 + 0x20000000U >> 0x1e;
              iVar41 = (int)((float)(int)(fVar64 + -2.5) / 5.0) - (uint)(fVar64 + -2.5 < 0.0);
              iVar60 = iVar41 + 1;
            }
          }
        }
        local_108 = (undefined *)CONCAT44(iVar41,iVar62);
        _local_130 = local_220;
        local_120 = local_210;
        uStack_ec = 1;
        local_e8 = 1;
        local_140 = ppuVar33;
        local_138 = ppuVar53;
        unique0x10003b97 = ppuVar53;
        local_118 = ppuVar33;
        local_110 = ppuVar53;
        local_100 = ppuVar53;
        local_f8 = iVar21;
        local_f4._0_4_ = iVar60;
        local_f4._4_4_ = uVar26;
        FUN_008e2920(&local_280,param_1,&local_140);
        if (!NAN((float)local_280)) {
          local_23c = (float)local_280;
          local_138 = (undefined **)0x0;
          _local_130 = (undefined **)0x0;
          cVar9 = local_270[4];
          stack0xfffffffffffffed8 =
               (undefined **)((ulong)stack0xfffffffffffffed8 & 0xffffffffffffff00);
          local_120 = local_120 & 0xffffff0000000000;
          local_140 = (undefined **)CONCAT44(local_140._4_4_,local_204);
          uStack_238 = local_280._4_4_;
          fVar57 = local_278._4_4_;
          if (NAN(local_278._4_4_)) {
            fVar57 = NAN;
          }
          uVar58 = 0;
          if (local_270[4] != '\0') {
            uVar58 = local_270._0_4_;
          }
          local_234 = (float)local_278;
          uVar13 = (uint3)((ulong)local_118 >> 0x28);
          local_118 = (undefined **)((ulong)uVar13 << 0x28);
          if (lVar51 != 0) {
            local_118._0_5_ = CONCAT14(1,uVar22);
            local_118 = (undefined **)CONCAT35(uVar13,(uint5)local_118);
          }
          local_108 = (undefined *)CONCAT44(local_108._4_4_,(float)local_278);
          local_110 = local_280;
          *(uint *)(param_1 + 0x37e20) = local_204;
          puVar55 = PTR_DAT_04bb2028;
          if (*(char *)(param_1 + 0x37e38) == '\0') {
            cVar10 = *(char *)(param_1 + 0x37e44);
joined_r0x008de294:
            if (cVar10 != '\0') {
              *(undefined1 *)(param_1 + 0x37e44) = 0;
            }
            bVar34 = true;
          }
          else {
            (*(code *)**(undefined8 **)(param_1 + 0x37e28))(lVar40);
            *(undefined1 *)(param_1 + 0x37e38) = 0;
            cVar10 = *(char *)(param_1 + 0x37e44);
            if (local_120._4_1_ == '\0') goto joined_r0x008de294;
            if (cVar10 == '\0') {
              *(undefined1 *)(param_1 + 0x37e44) = 1;
            }
            bVar34 = false;
            *(uint *)(param_1 + 0x37e40) = (uint)local_120;
          }
          if (local_118._4_1_ == '\0') {
            if (*(char *)(param_1 + 0x37e4c) != '\0') {
              *(undefined1 *)(param_1 + 0x37e4c) = 0;
            }
          }
          else {
            if (*(char *)(param_1 + 0x37e4c) == '\0') {
              *(undefined1 *)(param_1 + 0x37e4c) = 1;
            }
            *(uint *)(param_1 + 0x37e48) = (uint)local_118;
          }
          if (NAN((float)local_110)) {
            *(undefined4 *)(param_1 + 0x37e50) = 0x7fc00000;
          }
          else {
            *(uint *)(param_1 + 0x37e54) = local_110._4_4_;
            *(undefined4 *)(param_1 + 0x37e58) = (undefined4)local_108;
            *(float *)(param_1 + 0x37e50) = (float)local_110;
          }
          if (local_118._4_1_ != '\0') {
            local_118._0_5_ = (uint5)(uint)local_118;
          }
          if (!bVar34) {
            local_120._0_5_ = (uint5)(uint)local_120;
          }
          if (auStack_12c[4] != '\0') {
            (*(code *)*local_138)(&local_138);
          }
          if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
             (uVar11 = **(ushort **)PTR_DAT_04bc3a48, (uVar11 & 1) == 0)) {
            if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) != 1) goto LAB_008de39c;
          }
          else if (((uVar11 ^ 0xffff) & 3) != 0) goto LAB_008de39c;
          local_140 = &PTR_FUN_04a730d0;
          iVar21 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
          if (iVar21 != 0) {
            lVar51 = (long)iVar21 << 3;
            puVar50 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
            do {
              (*(code *)*local_140)(&local_140,*puVar50);
              lVar51 = lVar51 + -8;
              puVar50 = puVar50 + 1;
            } while (lVar51 != 0);
          }
          goto LAB_008de39c;
        }
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
      uVar58 = 0;
      cVar9 = '\0';
      fVar57 = NAN;
      puVar55 = PTR_DAT_04bb2028;
      local_280._0_4_ = local_23c;
LAB_008de39c:
      if (NAN((float)local_280)) {
        local_204 = 0;
        local_278 = (undefined **)((ulong)local_278 & 0xffffffff00000000);
        local_280 = (undefined **)0x0;
        local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_138 = (undefined **)0x4086843;
        FUN_008fa8b0(&local_280,&local_140);
        local_138 = (undefined **)0x0;
        _local_130 = (undefined **)0x0;
        stack0xfffffffffffffed8 =
             (undefined **)((ulong)stack0xfffffffffffffed8 & 0xffffffffffffff00);
        local_23c = (float)local_280;
        uStack_238 = local_280._4_4_;
        local_234 = (float)local_278;
        local_140 = (undefined **)CONCAT44(local_140._4_4_,local_204);
        local_120 = local_120 & 0xffffff0000000000;
        local_118 = (undefined **)((ulong)local_118 & 0xffffff0000000000);
        if (NAN((float)local_280)) {
          fVar64 = NAN;
        }
        else {
          local_110 = (undefined **)((ulong)local_280._4_4_ << 0x20);
          local_108 = (undefined *)CONCAT44(local_108._4_4_,(float)local_278);
          fVar64 = (float)local_280;
        }
        local_110 = (undefined **)CONCAT44(local_110._4_4_,fVar64);
        *(uint *)(param_1 + 0x37e20) = local_204;
        if (*(char *)(param_1 + 0x37e38) == '\0') {
          cVar10 = *(char *)(param_1 + 0x37e44);
joined_r0x008e2698:
          if (cVar10 != '\0') {
            *(undefined1 *)(param_1 + 0x37e44) = 0;
          }
          bVar34 = true;
        }
        else {
          (*(code *)**(undefined8 **)(param_1 + 0x37e28))(lVar40);
          *(undefined1 *)(param_1 + 0x37e38) = 0;
          cVar10 = *(char *)(param_1 + 0x37e44);
          if (local_120._4_1_ == '\0') goto joined_r0x008e2698;
          if (cVar10 == '\0') {
            *(undefined1 *)(param_1 + 0x37e44) = 1;
          }
          bVar34 = false;
          *(uint *)(param_1 + 0x37e40) = (uint)local_120;
        }
        if (local_118._4_1_ == '\0') {
          if (*(char *)(param_1 + 0x37e4c) != '\0') {
            *(undefined1 *)(param_1 + 0x37e4c) = 0;
          }
        }
        else {
          if (*(char *)(param_1 + 0x37e4c) == '\0') {
            *(undefined1 *)(param_1 + 0x37e4c) = 1;
          }
          *(uint *)(param_1 + 0x37e48) = (uint)local_118;
        }
        if (NAN((float)local_110)) {
          fVar64 = NAN;
        }
        else {
          *(uint *)(param_1 + 0x37e54) = local_110._4_4_;
          *(undefined4 *)(param_1 + 0x37e58) = (undefined4)local_108;
          fVar64 = (float)local_110;
        }
        *(float *)(param_1 + 0x37e50) = fVar64;
        if (local_118._4_1_ != '\0') {
          local_118._0_5_ = (uint5)(uint)local_118;
        }
        if (!bVar34) {
          local_120._0_5_ = (uint5)(uint)local_120;
        }
        if (auStack_12c[4] != '\0') {
          (*(code *)*local_138)(&local_138);
        }
        local_370 = 2;
        puVar55 = PTR_DAT_04bb2028;
      }
      goto LAB_008dfbb4;
    }
    local_140 = (undefined **)((ulong)local_140._4_4_ << 0x20);
    if ((*piVar1 < 1) ||
       (lVar40 = *(long *)(*(long *)(param_1 + 0x31870) + (ulong)(*piVar1 - 1) * 8), lVar40 == 0))
    goto LAB_008dd700;
    local_23c = *(float *)(lVar40 + 0x88);
    if (NAN(local_23c)) {
      local_23c = NAN;
    }
    else {
      uStack_238 = *(uint *)(lVar40 + 0x8c);
      local_234 = *(float *)(lVar40 + 0x90);
    }
    bVar19 = *(char *)(lVar40 + 0x84) == '\0';
    if (bVar19) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(uint *)(lVar40 + 0x80);
    }
    bVar19 = !bVar19;
    fVar57 = *(float *)(lVar40 + 0xa4);
    if (NAN(fVar57)) {
      fVar57 = NAN;
    }
    bVar34 = *(char *)(lVar40 + 0xa0) == '\0';
    if (bVar34) {
      uVar58 = 0;
    }
    else {
      uVar58 = *(undefined4 *)(lVar40 + 0x9c);
    }
    cVar9 = !bVar34;
    if (*(int *)(lVar40 + 0x70) != 2) {
LAB_008ddcec:
      local_204 = 0;
      local_370 = 2;
    }
LAB_008ddcf8:
    local_270._4_4_ = local_270._4_4_ & 0xffffff00;
    local_270._0_4_ = 0x20;
    local_280 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
    goto LAB_008dfbd8;
  case 3:
    if (uVar6 != 0) {
      local_140 = (undefined **)((ulong)local_140._4_4_ << 0x20);
      if ((0 < *piVar1) &&
         (lVar40 = *(long *)(*(long *)(param_1 + 0x31870) + (ulong)(*piVar1 - 1) * 8), lVar40 != 0))
      {
        local_240 = *(char *)(lVar40 + 0x7c) != '\0';
        if (local_240) {
          local_248 = *(undefined **)(lVar40 + 0x74);
        }
        local_23c = *(float *)(lVar40 + 0x88);
        if (NAN(local_23c)) {
          local_23c = NAN;
        }
        else {
          uStack_238 = *(uint *)(lVar40 + 0x8c);
          local_234 = *(float *)(lVar40 + 0x90);
        }
        fVar57 = *(float *)(lVar40 + 0xa4);
        if (NAN(fVar57)) {
          fVar57 = NAN;
        }
        bVar19 = *(char *)(lVar40 + 0xa0) == '\0';
        if (bVar19) {
          uVar58 = 0;
        }
        else {
          uVar58 = *(undefined4 *)(lVar40 + 0x9c);
        }
        cVar9 = !bVar19;
        if (*(int *)(lVar40 + 0x70) != 3) {
          uVar22 = 0;
          bVar19 = false;
          goto LAB_008ddcec;
        }
        uVar22 = 0;
        bVar19 = false;
        goto LAB_008ddcf8;
      }
LAB_008dd700:
      uVar22 = 0;
      bVar19 = false;
LAB_008dd714:
      cVar9 = false;
      uVar58 = 0;
      fVar57 = NAN;
      goto LAB_008ddcf8;
    }
    puVar30 = (uint *)(param_1 + 0x32668);
    sVar12 = *(short *)PTR_DAT_04bb6298;
    if (sVar12 == -1) {
      bVar52 = 0;
    }
    else {
      local_140 = (undefined **)CONCAT44(local_140._4_4_,1);
      puVar28 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
      if (0xff < (uint)(int)sVar12) {
        puVar28 = (uint *)PTR_DAT_04bc39f8;
      }
      bVar52 = (byte)(*puVar28 >> 1) & 1;
    }
    if (*(char *)(param_1 + 0x37e08) == '\0') {
      local_168 = (char *)((ulong)local_168 & 0xffffffff00000000);
      lVar51 = *(long *)PTR_DAT_04bb2720;
      if (lVar51 == 0) {
        puVar50 = &DAT_055c04a0;
      }
      else {
        puVar50 = &DAT_055c04a0;
        if (*(long *)(lVar51 + 0x330) != 0) {
          puVar50 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar51 + 0x338));
          iVar21 = FUN_006bd550(*puVar50,0);
          puVar50 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar21 != 0x758f7eaf) {
            puVar50 = &DAT_055c04a0;
          }
        }
      }
      local_168 = (char *)CONCAT44(*(undefined4 *)(puVar50 + 7),(undefined4)local_168);
      bVar20 = FUN_017baf44();
      puVar2 = PTR_DAT_04bb43c0;
      local_1a8[0] = 0x100000000;
      local_160 = bVar20 & 1;
      local_170 = PTR_DAT_04bb3140 + 0x10;
      puVar54 = local_1a8;
      ppuVar33 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      puVar55 = PTR_DAT_04bb2e18 + 0x10;
      puVar3 = PTR_DAT_04bc0510 + 0x10;
      lVar51 = 1;
      plVar56 = (long *)PTR_DAT_04bbbc68;
      bVar19 = false;
      do {
        local_140 = &puStack_228;
        local_138 = &local_218;
        iVar21 = (int)local_220;
        _local_130 = ppuVar33;
        stack0xfffffffffffffed8 = local_220;
        uVar22 = local_210._4_4_ + 1;
        uVar26 = local_220._4_4_;
        while (uVar22 != uVar26) {
          do {
            puVar28 = (uint *)FUN_01a5010c(&local_170,(int)*puVar54,local_130);
            local_188 = *puVar28;
            local_184 = puVar28[1];
            lVar35 = *plVar56;
            if ((((lVar35 == 0) || (*(long *)(lVar35 + 0xb0) == 0)) ||
                (*(long *)(*(long *)(lVar35 + 0xb0) + 8) == 0)) ||
               (((*(long *)(lVar35 + 0x488) == 0 || (*(long *)(*(long *)(lVar35 + 0x488) + 8) == 0))
                || ((*(long *)(lVar35 + 0x2b0) == 0 ||
                    (*(long *)(*(long *)(lVar35 + 0x2b0) + 8) == 0)))))) {
LAB_008de660:
              lVar35 = *(long *)puVar2;
              uVar26 = FUN_0277d6c4(&local_188);
              if (*(long *)puVar2 != 0) {
                lVar35 = *(long *)(lVar35 + 0x57e58);
                uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                if (((uVar26 < *(uint *)(lVar35 + 0x1d8)) &&
                    (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) &&
                   (uVar31 = FUN_0277e294(&local_188), (uVar31 & 1) != 0)) goto LAB_008de6b0;
              }
            }
            else {
              uVar26 = FUN_0277d6c4(&local_188);
              uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
              if ((*(uint *)(lVar35 + 0x1d8) <= uVar26) ||
                 (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar26 * 8) == 0))
              goto LAB_008de660;
              FUN_0124c030(&local_280,&local_188);
              iVar60 = FUN_0123db50(&local_278,local_270);
              if (iVar60 != 0x21) {
                FUN_0124c030(&local_2b8,&local_188);
                iVar60 = FUN_0123db50(&local_2b0,local_2a8._0_8_);
                if (iVar60 == 0x22) goto LAB_008deba4;
LAB_008de6b0:
                lVar45 = *(long *)puVar2;
                uVar26 = FUN_0277d6c4(&local_188);
                lVar35 = *(long *)puVar2;
                if (lVar35 != 0) {
                  lVar45 = *(long *)(lVar45 + 0x57e58);
                  uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar45 + 0x1f8);
                  if ((uVar26 < *(uint *)(lVar45 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar45 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) {
                    local_270 = (undefined1  [8])0x0;
                    local_280 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                    local_278 = (undefined **)CONCAT44(local_184,local_188);
                    uVar26 = FUN_0277d6c4(&local_278);
                    if (*(long *)puVar2 != 0) {
                      lVar35 = *(long *)(lVar35 + 0x57e58);
                      uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                      if ((uVar26 < *(uint *)(lVar35 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) {
                        lVar35 = *(long *)PTR_DAT_04bc0428;
                        uVar26 = FUN_0277d6c4(&local_188);
                        uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                        if ((uVar26 < *(uint *)(lVar35 + 0x1d8)) &&
                           (((puVar28 = *(uint **)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar26 * 8
                                                  ), puVar28 != (uint *)0x0 &&
                             (uVar26 = *puVar28, uVar26 != 0)) && (puVar28 != (uint *)(ulong)uVar26)
                            ))) {
                          puVar43 = (uint *)((long)puVar28 - (long)(ulong)uVar26);
                          if (((*puVar43 != 0) && (uVar26 = puVar43[1], uVar26 != 0)) &&
                             ((ulong)(ushort)puVar43[2] != 0)) {
                            lVar35 = 0xc;
                            if (*(char *)((long)puVar43 + 10) != '\0') {
                              lVar35 = 0x1c;
                            }
                            lVar35 = (long)puVar43 + lVar35 + (ulong)(ushort)puVar43[2] * 8;
                            if (lVar35 != 0) {
                              uVar25 = 0;
                              if ((ulong)uVar26 != 0) {
                                uVar25 = (uint)((ulong)((long)puVar28 - lVar35) / (ulong)uVar26);
                              }
                              if (*puVar43 <= uVar25) {
                                uVar25 = 0xffffffff;
                              }
                              if ((uVar25 < *(uint *)PTR_DAT_04bc00c8) &&
                                 (((*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar25 * 2) == 0x15 ||
                                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar25 * 2) == 0x17)) ||
                                  (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) +
                                             (long)(int)uVar25 * 2) == 0x16)))) {
                                plVar56 = (long *)PTR_DAT_04bbbc68;
                                goto LAB_008deba4;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                iVar60 = 0xb;
                local_280 = (undefined **)CONCAT44(local_184,(float)local_280);
                local_270 = (undefined1  [8])stack0xfffffffffffffed8;
                local_278 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
                local_280 = (undefined **)CONCAT44(local_184,local_188);
                local_268 = (int)*puVar54;
                iStack_264 = 0xb;
                lVar35 = *(long *)PTR_DAT_04bb27f8;
                if (lVar35 == 0) {
                  plVar56 = (long *)PTR_DAT_04bbbc68;
                }
                else {
                  if (*(int *)(lVar35 + 0x40) != 0) {
                    plVar56 = *(long **)(lVar35 + 0x48);
                    lVar35 = (long)*(int *)(lVar35 + 0x40) << 3;
                    do {
                      lVar45 = *plVar56;
                      uVar31 = FUN_0277d7b4(&local_280,lVar45 + 8);
                      if ((uVar31 & 1) != 0) {
                        sVar12 = *(short *)PTR_DAT_04bb6298;
                        if (sVar12 == -1) {
                          uVar26 = 0;
                        }
                        else {
                          local_2b8 = (undefined *)CONCAT44(local_2b8._4_4_,1);
                          puVar28 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
                          if (0xff < (uint)(int)sVar12) {
                            puVar28 = (uint *)PTR_DAT_04bc39f8;
                          }
                          uVar26 = *puVar28 >> 1 & 1;
                        }
                        iVar60 = 3;
                        if (uVar26 == (*(byte *)(lVar45 + 0x10) & 4) >> 2) {
                          iVar60 = 1;
                        }
                      }
                      plVar56 = plVar56 + 1;
                      lVar35 = lVar35 + -8;
                    } while (lVar35 != 0);
                  }
                  lVar45 = *(long *)puVar2;
                  uVar26 = FUN_0277d6c4(&local_280);
                  plVar56 = (long *)PTR_DAT_04bbbc68;
                  lVar35 = *(long *)puVar2;
                  if (lVar35 != 0) {
                    lVar45 = *(long *)(lVar45 + 0x57e58);
                    uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar45 + 0x1f8);
                    if ((uVar26 < *(uint *)(lVar45 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar45 + 0x1e0) + (long)(int)uVar26 * 8) != 0 &&
                        local_268 == 1)) {
                      local_2a8._0_8_ = 0;
                      local_2b0 = local_280;
                      local_2b8 = puVar3;
                      uVar26 = FUN_0277d6c4(&local_2b0);
                      if (*(long *)puVar2 != 0) {
                        lVar35 = *(long *)(lVar35 + 0x57e58);
                        uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                        if ((uVar26 < *(uint *)(lVar35 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) {
                          lVar35 = *(long *)PTR_DAT_04bc0428;
                          uVar26 = FUN_0277d6c4(&local_280);
                          uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                          if (uVar26 < *(uint *)(lVar35 + 0x1d8)) {
                            lVar35 = *(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar26 * 8);
                            if (lVar35 != 0) {
                              local_2a8._0_8_ = lVar35;
                            }
                          }
                        }
                      }
                      iVar62 = FUN_01ae7550(&local_2b8);
                      iVar60 = iVar60 - (uint)(iVar62 == 7);
                    }
                  }
                  iVar62 = FUN_0277d6c4(&local_280);
                  if ((((((iVar62 != 0xd90) && (iVar62 = FUN_0277d6c4(&local_280), iVar62 != 0x4d2))
                        && (iVar62 = FUN_0277d6c4(&local_280), iVar62 != 0xad8)) &&
                       ((iVar62 = FUN_0277d6c4(&local_280), iVar62 != 0x789 &&
                        (iVar62 = FUN_0277d6c4(&local_280), iVar62 != 0xad7)))) &&
                      (iVar62 = FUN_0277d6c4(&local_280), iVar62 != 0x4d3)) &&
                     (iVar62 = FUN_0277d6c4(&local_280), iVar62 != 0x4c1)) {
                    iVar62 = FUN_0277d6c4(&local_280);
                    if (iVar62 != 0x1002) goto LAB_008deb0c;
                  }
                  bVar34 = 3 < iVar60;
                  iVar60 = 4;
                  if (bVar34) {
                    iVar60 = 0xc;
                  }
                }
LAB_008deb0c:
                iStack_264 = iVar60;
                if ((int)*puVar30 < *(int *)(param_1 + 0x3266c)) {
                  puVar50 = *(undefined8 **)(param_1 + 0x32678);
                  if (puVar50 != (undefined8 *)0x0) {
                    *(undefined8 *)(param_1 + 0x32678) = *puVar50;
                  }
                  *(undefined2 *)puVar50 = (undefined2)local_280;
                  *(undefined1 *)((long)puVar50 + 2) = local_280._2_1_;
                  *(undefined1 *)((long)puVar50 + 3) = local_280._3_1_;
                  *(uint *)((long)puVar50 + 4) = local_280._4_4_;
                  puVar50[1] = puVar55;
                  *(undefined4 *)(puVar50 + 2) = local_270._0_4_;
                  *(undefined4 *)((long)puVar50 + 0x14) = local_270._4_4_;
                  puVar50[1] = PTR_DAT_04bb2010 + 0x10;
                  puVar50[3] = CONCAT44(iVar60,local_268);
                  if ((int)*puVar30 < *(int *)(param_1 + 0x3266c)) {
                    *(undefined8 **)(*(long *)(param_1 + 0x32670) + (long)(int)*puVar30 * 8) =
                         puVar50;
                    *puVar30 = *puVar30 + 1;
                  }
                }
              }
            }
LAB_008deba4:
            if ((int)auStack_12c._4_4_ < *(int *)(local_138 + 1)) {
              iVar60 = auStack_12c._4_4_ + 1;
              uVar26 = uStack_124;
            }
            else {
              uVar26 = uStack_124 + 1;
              iVar60 = *(int *)(local_140 + 1);
              stack0xfffffffffffffed8 = (undefined **)((ulong)uVar26 << 0x20);
            }
            stack0xfffffffffffffed8 = (undefined **)CONCAT44(uStack_124,iVar60);
          } while (iVar21 != iVar60);
        }
        puVar54 = (ulong *)((long)local_1a8 + lVar51 * 4);
        bVar34 = !bVar19;
        lVar51 = 2;
        bVar19 = true;
      } while (bVar34);
      *(char *)(param_1 + 0x37e08) = '\x01';
    }
    puVar55 = PTR_DAT_04bb2028;
    if ((int)*puVar30 < 1) {
LAB_008df648:
      cVar9 = '\0';
      fVar57 = NAN;
      uVar58 = 0;
    }
    else {
      uVar26 = nn::os::GetSystemTick();
      uVar22 = *puVar30;
      if (1 < (int)uVar22) {
        uVar26 = (uVar26 ^ uVar26 >> 0x1e) * 0x6c078965 + 1;
        uVar25 = (uVar26 ^ uVar26 >> 0x1e) * 0x6c078965 + 2;
        uVar42 = (uVar25 ^ uVar25 >> 0x1e) * 0x6c078965 + 3;
        uVar31 = (ulong)uVar22;
        uVar22 = (uVar42 ^ uVar42 >> 0x1e) * 0x6c078965 + 4;
        do {
          uVar26 = uVar26 ^ uVar26 << 0xb;
          lVar35 = *(long *)(param_1 + 0x32670);
          uVar5 = uVar26 >> 8 ^ uVar22 >> 0x13 ^ uVar26 ^ uVar22;
          lVar51 = (uVar31 - 1 & 0xffffffff) * 8;
          uVar48 = *(undefined8 *)(lVar35 + lVar51);
          uVar49 = uVar31 * uVar5 >> 0x1d & 0x7fffffff8;
          *(undefined8 *)(lVar35 + lVar51) = *(undefined8 *)(lVar35 + uVar49);
          *(undefined8 *)(*(long *)(param_1 + 0x32670) + uVar49) = uVar48;
          bVar19 = 2 < uVar31;
          uVar31 = uVar31 - 1;
          uVar26 = uVar25;
          uVar25 = uVar42;
          uVar42 = uVar22;
          uVar22 = uVar5;
        } while (bVar19);
        uVar22 = *puVar30;
        uVar26 = uVar22 - 1;
        if (uVar26 != 0 && 0 < (int)uVar22) {
          lVar51 = *(long *)(param_1 + 0x32670);
          uVar22 = 0;
          do {
            if ((int)uVar26 <= (int)uVar22) break;
            lVar35 = *(long *)(lVar51 + (ulong)uVar22 * 8);
            uVar31 = (ulong)uVar22;
            if ((uVar26 - uVar22 & 1) == 0) {
              lVar45 = lVar35;
              uVar49 = uVar31;
            }
            else {
              uVar49 = uVar31 + 1;
              lVar45 = *(long *)(lVar51 + uVar49 * 8);
              if (*(int *)(lVar45 + 0x1c) < *(int *)(lVar35 + 0x1c)) {
                *(long *)(lVar51 + uVar49 * 8) = lVar35;
                *(long *)(lVar51 + uVar31 * 8) = lVar45;
                lVar45 = lVar35;
              }
            }
            uVar46 = (ulong)uVar26;
            uVar26 = uVar22;
            if (~uVar31 + uVar46 != 0) {
              plVar56 = (long *)(lVar51 + 8 + uVar49 * 8);
              do {
                lVar35 = *plVar56;
                if (*(int *)(lVar35 + 0x1c) < *(int *)(lVar45 + 0x1c)) {
                  plVar56[-1] = lVar35;
                  *plVar56 = lVar45;
                  uVar26 = (uint)uVar49;
                }
                else {
                  lVar45 = lVar35;
                }
                lVar35 = plVar56[1];
                if (*(int *)(lVar35 + 0x1c) < *(int *)(lVar45 + 0x1c)) {
                  uVar26 = (uint)uVar49 + 1;
                  *plVar56 = lVar35;
                  plVar56[1] = lVar45;
                }
                else {
                  lVar45 = lVar35;
                }
                uVar49 = uVar49 + 2;
                plVar56 = plVar56 + 2;
              } while (uVar46 != uVar49);
            }
            if ((int)uVar26 <= (int)uVar22) break;
            lVar35 = *(long *)(lVar51 + (ulong)uVar26 * 8);
            uVar49 = (ulong)uVar26;
            uVar22 = uVar26;
            do {
              lVar45 = lVar51 + uVar49 * 8;
              lVar47 = *(long *)(lVar45 + -8);
              if (*(int *)(lVar35 + 0x1c) < *(int *)(lVar47 + 0x1c)) {
                uVar22 = (uint)uVar49;
                *(long *)(lVar45 + -8) = lVar35;
                *(long *)(lVar51 + uVar49 * 8) = lVar47;
              }
              else {
                lVar35 = lVar47;
              }
              uVar49 = uVar49 - 1;
            } while ((long)uVar31 < (long)uVar49);
          } while (uVar22 != uVar26);
          uVar22 = *puVar30;
        }
      }
      if ((int)uVar22 < 1) goto LAB_008df648;
      fVar64 = NAN;
      uVar31 = 0;
      ppuVar33 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
      ppuVar53 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      puVar3 = PTR_DAT_04bb3750 + 0x10;
      ppuVar32 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      do {
        puVar2 = PTR_DAT_04bb43c0;
        if ((long)(int)*puVar30 <= (long)uVar31) break;
        if (uVar31 < *puVar30) {
          plVar56 = *(long **)(*(long *)(param_1 + 0x32670) + uVar31 * 8);
        }
        else {
          plVar56 = (long *)0x0;
        }
        local_248 = (undefined *)*plVar56;
        if (local_240 == false) {
          local_240 = true;
        }
        local_130 = (undefined1  [4])0x0;
        auStack_12c._0_4_ = 0;
        lVar35 = *(long *)PTR_DAT_04bb43c0;
        local_120._0_4_ = 0;
        local_120._4_4_ = 0;
        local_140 = ppuVar33;
        local_138 = ppuVar53;
        unique0x10003b87 = ppuVar53;
        uVar22 = FUN_0277d6c4(&local_248);
        lVar51 = *(long *)puVar2;
        if (lVar51 == 0) {
LAB_008df004:
          lVar51 = *(long *)PTR_DAT_04bbbc68;
          if (((lVar51 != 0) &&
              (((*(long *)(lVar51 + 0xb0) != 0 && (*(long *)(*(long *)(lVar51 + 0xb0) + 8) != 0)) &&
               (*(long *)(lVar51 + 0x488) != 0)))) &&
             (((*(long *)(*(long *)(lVar51 + 0x488) + 8) != 0 && (*(long *)(lVar51 + 0x2b0) != 0))
              && (*(long *)(*(long *)(lVar51 + 0x2b0) + 8) != 0)))) {
            uVar22 = FUN_0277d6c4(&local_248);
            uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar51 + 0x1f8);
            if ((uVar22 < *(uint *)(lVar51 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar51 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
              local_120._0_4_ = *(uint *)(PTR_DAT_04bb2e10 + 8);
              local_120._4_4_ = *(int *)(PTR_DAT_04bb2e10 + 0xc);
              local_130 = (undefined1  [4])(uint)local_120;
              if (0 < (int)(uint)local_120) {
                local_130 = (undefined1  [4])0x1;
              }
              if ((int)(uint)local_120 < 2) {
                local_120._0_4_ = 1;
              }
              auStack_12c._0_4_ = local_120._4_4_;
              if (0 < local_120._4_4_) {
                auStack_12c._0_4_ = 1;
              }
              if (local_120._4_4_ < 2) {
                local_120._4_4_ = 1;
              }
            }
          }
        }
        else {
          lVar35 = *(long *)(lVar35 + 0x57e58);
          uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
          if ((*(uint *)(lVar35 + 0x1d8) <= uVar22) ||
             (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar22 * 8) == 0)) goto LAB_008df004;
          local_270 = (undefined1  [8])0x0;
          local_280 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
          local_278 = (undefined **)local_248;
          uVar22 = FUN_0277d6c4(&local_278);
          if (*(long *)puVar2 != 0) {
            lVar51 = *(long *)(lVar51 + 0x57e58);
            uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar51 + 0x1f8);
            if ((uVar22 < *(uint *)(lVar51 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar51 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
              lVar51 = *(long *)PTR_DAT_04bc0428;
              uVar22 = FUN_0277d6c4(&local_248);
              uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar51 + 0x1f8);
              if (uVar22 < *(uint *)(lVar51 + 0x1d8)) {
                ppuVar37 = *(undefined ***)(*(long *)(lVar51 + 0x1e0) + (long)(int)uVar22 * 8);
                if (ppuVar37 != (undefined **)0x0) {
                  local_270 = (undefined1  [8])ppuVar37;
                }
              }
            }
          }
          FUN_01afb480(&local_280,&local_140);
        }
        iVar21 = (int)local_130 + (int)plVar56[2];
        iVar60 = auStack_12c._0_4_ + *(int *)((long)plVar56 + 0x14);
        _local_130 = (undefined **)CONCAT44(iVar60,iVar21);
        iVar62 = (uint)local_120 + (int)plVar56[2];
        iVar41 = local_120._4_4_ + *(int *)((long)plVar56 + 0x14);
        local_120 = CONCAT44(iVar41,iVar62);
        if (local_240 == false) {
          local_248 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_248);
        }
        lVar35 = *(long *)puVar2;
        uVar22 = FUN_0277d6c4(&local_248);
        lVar51 = *(long *)puVar2;
        if (lVar51 == 0) {
LAB_008df1e8:
          lVar51 = *(long *)PTR_DAT_04bbbc68;
          if (((lVar51 != 0) &&
              (((*(long *)(lVar51 + 0xb0) != 0 && (*(long *)(*(long *)(lVar51 + 0xb0) + 8) != 0)) &&
               (*(long *)(lVar51 + 0x488) != 0)))) &&
             (((*(long *)(*(long *)(lVar51 + 0x488) + 8) != 0 && (*(long *)(lVar51 + 0x2b0) != 0))
              && (*(long *)(*(long *)(lVar51 + 0x2b0) + 8) != 0)))) {
            FUN_0277d6c4(&local_248);
          }
          uVar22 = 0;
        }
        else {
          lVar35 = *(long *)(lVar35 + 0x57e58);
          uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
          if ((*(uint *)(lVar35 + 0x1d8) <= uVar22) ||
             (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar22 * 8) == 0)) goto LAB_008df1e8;
          local_270 = (undefined1  [8])0x0;
          local_278 = (undefined **)local_248;
          local_280 = ppuVar32;
          uVar22 = FUN_0277d6c4(&local_278);
          if (*(long *)puVar2 != 0) {
            lVar51 = *(long *)(lVar51 + 0x57e58);
            uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar51 + 0x1f8);
            if ((uVar22 < *(uint *)(lVar51 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar51 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
              lVar51 = *(long *)PTR_DAT_04bc0428;
              uVar22 = FUN_0277d6c4(&local_248);
              uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar51 + 0x1f8);
              if (uVar22 < *(uint *)(lVar51 + 0x1d8)) {
                ppuVar37 = *(undefined ***)(*(long *)(lVar51 + 0x1e0) + (long)(int)uVar22 * 8);
                if (ppuVar37 != (undefined **)0x0) {
                  local_270 = (undefined1  [8])ppuVar37;
                }
              }
            }
          }
          uVar22 = FUN_01ae98d0(&local_280);
        }
        lVar51 = plVar56[2];
        uVar58 = *(undefined4 *)((long)plVar56 + 0x14);
        lVar35 = plVar56[3];
        *(uint *)(param_1 + 0x37e20) = local_204;
        *(int *)(param_1 + 0x37e30) = (int)lVar51;
        *(undefined4 *)(param_1 + 0x37e34) = uVar58;
        puVar2 = PTR_DAT_04bb2010;
        if (*(char *)(param_1 + 0x37e38) == '\0') {
          *(undefined1 *)(param_1 + 0x37e38) = 1;
          *(undefined **)(param_1 + 0x37e28) = puVar2 + 0x10;
          cVar9 = *(char *)(param_1 + 0x37e44);
        }
        else {
          cVar9 = *(char *)(param_1 + 0x37e44);
        }
        if (cVar9 == '\0') {
          *(undefined1 *)(param_1 + 0x37e44) = 1;
        }
        *(int *)(param_1 + 0x37e40) = (int)lVar35;
        if (*(char *)(param_1 + 0x37e4c) != '\0') {
          *(undefined1 *)(param_1 + 0x37e4c) = 0;
        }
        *(undefined4 *)(param_1 + 0x37e50) = 0x7fc00000;
        uVar49 = FUN_020b3f80(*(undefined8 *)PTR_DAT_04bb3968);
        if ((uVar49 & 1) != 0) {
          if (*(long *)PTR_DAT_04bb4e28 != 0) {
            uVar26 = FUN_03737fb0();
            lVar51 = *(long *)PTR_DAT_04bb27c0;
            if (lVar51 != 0) {
              if ((((uVar26 == 0) ||
                   (lVar35 = *(long *)(*(long *)(*(long *)(lVar51 + 0x1c0) + 8) +
                                      (ulong)(uVar26 >> 0x14) * 8), lVar35 == 0)) ||
                  ((*(uint *)(lVar35 + 0x248) >> 1 & 1) != 0)) ||
                 (*(uint *)(lVar35 + 0x230) != uVar26)) {
                lVar35 = 0;
              }
              if ((*(int *)(lVar51 + 0x288) == 1) || (*(int *)(lVar51 + 0x288) == -1)) {
                plVar27 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar51 = *(long *)PTR_DAT_04bb27c0;
                iVar23 = (**(code **)(*plVar27 + 0x60))();
                if (((iVar23 < 0x11) ||
                    ((*(uint *)(lVar51 + 0x5e8) < 5 &&
                     ((1 << (ulong)(*(uint *)(lVar51 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) &&
                   (lVar35 != 0)) {
                  fVar57 = 0.0;
                  lVar51 = *(long *)PTR_DAT_04bb27c0;
                  if (lVar51 == 0) {
LAB_008df548:
                    fVar64 = 0.0;
                  }
                  else {
                    if ((((uVar26 == 0) ||
                         (plVar27 = *(long **)(*(long *)(*(long *)(lVar51 + 0x1c0) + 8) +
                                              (ulong)(uVar26 >> 0x14) * 8), plVar27 == (long *)0x0))
                        || ((*(uint *)(plVar27 + 0x49) >> 1 & 1) != 0)) ||
                       (*(uint *)(plVar27 + 0x46) != uVar26)) {
                      plVar27 = (long *)0x0;
                    }
                    if ((*(int *)(lVar51 + 0x288) == 1) || (*(int *)(lVar51 + 0x288) == -1)) {
                      plVar29 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                             (*(long *)PTR_DAT_04bb3350 + 0x68));
                      lVar51 = *(long *)PTR_DAT_04bb27c0;
                      iVar23 = (**(code **)(*plVar29 + 0x60))();
                      if (iVar23 < 0x11) {
                        uVar22 = 1;
                      }
                      else {
                        if (4 < *(uint *)(lVar51 + 0x5e8)) goto LAB_008df4c0;
                        uVar22 = 0x1aU >> (ulong)(*(uint *)(lVar51 + 0x5e8) & 0x1f) & 1;
                      }
                    }
                    else {
LAB_008df4c0:
                      uVar22 = 0;
                    }
                    if (plVar27 == (long *)0x0) goto LAB_008df548;
                    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                       (iVar23 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar23 != 0)) {
                      *(undefined **)PTR_DAT_04bb37d0 = puVar3;
                      __cxa_guard_release(PTR_DAT_04bb37d8);
                    }
                    uVar26 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb37d0);
                    if ((uVar22 & uVar26) != 1) goto LAB_008df548;
                    lVar51 = *(long *)PTR_DAT_04bb4e28;
                    iVar23 = FUN_03722560(lVar51,plVar27 + 0x7c);
                    if (iVar23 == -1) goto LAB_008df548;
                    fVar64 = 0.0;
                    lVar51 = *(long *)(*(long *)(lVar51 + 0xe8) + (long)iVar23 * 8);
                    if ((*(ushort *)(lVar51 + 0x114) >> 9 & 1) != 0) {
                      fVar57 = *(float *)(lVar51 + 0x104);
                      fVar64 = *(float *)(lVar51 + 0x10c);
                    }
                  }
                  fVar61 = ((float)iVar21 * 5.0 + (float)iVar62 * 5.0 + 5.0) * 0.5;
                  fVar59 = ((float)iVar60 * 5.0 + (float)iVar41 * 5.0 + 5.0) * 0.5;
                  local_140 = (undefined **)(ulong)(uint)fVar61;
                  local_138 = (undefined **)CONCAT44(local_138._4_4_,fVar59);
                  lVar51 = *(long *)PTR_DAT_04bb27c8;
                  if (((lVar51 == 0) || (*(long *)(lVar51 + 0xa8) == 0)) ||
                     (*(char *)(lVar51 + 0x11c8) != '\0')) {
                    uVar58 = 0xc3fa0000;
                  }
                  else {
                    uVar58 = FUN_0093a950(lVar51 + 0x28,&local_140,0);
                    fVar59 = local_138._0_4_;
                    fVar61 = (float)local_140;
                  }
                  local_140 = (undefined **)CONCAT44(uVar58,(float)local_140);
                  iVar23 = FUN_006f0400(fVar61 - fVar57,fVar59 - fVar64);
                  uVar22 = iVar23 + 0x20000000U >> 0x1e;
                  local_280 = (undefined **)CONCAT44(local_280._4_4_,uVar22);
                  if (uVar22 < 4) {
                    uVar22 = *(uint *)(&DAT_04130b54 + (long)(int)uVar22 * 4);
                  }
                }
              }
            }
          }
          local_108 = (undefined *)CONCAT44(iVar60,iVar21);
          local_140 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
          local_138 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
          _local_130 = local_220;
          uStack_ec = 1;
          local_120 = local_210;
          local_e8 = CONCAT11(bVar52 ^ 1,1);
          unique0x10003b8f = local_138;
          local_118 = local_140;
          local_110 = local_138;
          local_100 = local_138;
          local_f8 = iVar62;
          local_f4._0_4_ = iVar41;
          local_f4._4_4_ = uVar22;
          FUN_008e2920(&local_280,param_1,&local_140);
          fVar64 = (float)local_280;
          if (!NAN((float)local_280)) {
            *(undefined4 *)((long)plVar56 + 0x1c) = 0x14;
            local_23c = (float)local_280;
            cVar9 = local_270[4];
            uStack_238 = local_280._4_4_;
            local_234 = (float)local_278;
            fVar57 = local_278._4_4_;
            if (NAN(local_278._4_4_)) {
              fVar57 = NAN;
            }
            lVar51 = plVar56[2];
            uVar44 = *(undefined4 *)((long)plVar56 + 0x14);
            uVar58 = 0;
            if (local_270[4] != '\0') {
              uVar58 = local_270._0_4_;
            }
            lVar35 = plVar56[3];
            *(uint *)(param_1 + 0x37e20) = local_204;
            *(int *)(param_1 + 0x37e30) = (int)lVar51;
            *(undefined4 *)(param_1 + 0x37e34) = uVar44;
            puVar55 = PTR_DAT_04bb2028;
            if (*(char *)(param_1 + 0x37e38) == '\0') {
              *(undefined **)(param_1 + 0x37e28) = PTR_DAT_04bb2010 + 0x10;
              *(undefined1 *)(param_1 + 0x37e38) = 1;
            }
            if (*(char *)(param_1 + 0x37e44) == '\0') {
              *(undefined1 *)(param_1 + 0x37e44) = 1;
            }
            *(int *)(param_1 + 0x37e40) = (int)lVar35;
            if (*(char *)(param_1 + 0x37e4c) != '\0') {
              *(undefined1 *)(param_1 + 0x37e4c) = 0;
            }
            *(uint *)(param_1 + 0x37e54) = local_280._4_4_;
            *(float *)(param_1 + 0x37e58) = (float)local_278;
            *(float *)(param_1 + 0x37e50) = (float)local_280;
            FUN_020b4420(*(undefined8 *)PTR_DAT_04bb3968);
            goto joined_r0x008dfa1c;
          }
          puVar55 = PTR_DAT_04bb2028;
          fVar64 = local_23c;
        }
        uVar31 = uVar31 + 1;
      } while (NAN(fVar64));
      uVar58 = 0;
      fVar57 = NAN;
      cVar9 = '\0';
joined_r0x008dfa1c:
      if (!NAN(fVar64)) {
        local_270._4_4_ = SUB84((ulong)local_270 >> 0x20,0);
        uVar22 = 0;
        bVar19 = false;
        goto LAB_008dfbb4;
      }
    }
    local_204 = 0;
    local_278 = (undefined **)((ulong)local_278 & 0xffffffff00000000);
    local_280._0_4_ = 0.0;
    local_280._4_4_ = 0;
    local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_138 = (undefined **)0x4086843;
    FUN_008fa8b0(&local_280,&local_140);
    local_138 = (undefined **)0x0;
    _local_130 = (undefined **)0x0;
    stack0xfffffffffffffed8 = (undefined **)((ulong)stack0xfffffffffffffed8 & 0xffffffffffffff00);
    local_23c = (float)local_280;
    uStack_238 = local_280._4_4_;
    local_120 = local_120 & 0xffffff0000000000;
    local_118 = (undefined **)((ulong)local_118 & 0xffffff0000000000);
    local_110 = (undefined **)CONCAT44(local_110._4_4_,0x7fc00000);
    local_234 = (float)local_278;
    local_140 = (undefined **)CONCAT44(local_140._4_4_,local_204);
    *(uint *)(param_1 + 0x37e20) = local_204;
    if (*(char *)(param_1 + 0x37e38) == '\0') {
      cVar10 = *(char *)(param_1 + 0x37e44);
joined_r0x008df738:
      if (cVar10 != '\0') {
        *(undefined1 *)(param_1 + 0x37e44) = 0;
      }
      bVar19 = true;
    }
    else {
      (*(code *)**(undefined8 **)(param_1 + 0x37e28))(lVar40);
      *(undefined1 *)(param_1 + 0x37e38) = 0;
      cVar10 = *(char *)(param_1 + 0x37e44);
      if (local_120._4_1_ == '\0') goto joined_r0x008df738;
      if (cVar10 == '\0') {
        *(undefined1 *)(param_1 + 0x37e44) = 1;
      }
      bVar19 = false;
      *(uint *)(param_1 + 0x37e40) = (uint)local_120;
    }
    if (local_118._4_1_ == '\0') {
      if (*(char *)(param_1 + 0x37e4c) != '\0') {
        *(undefined1 *)(param_1 + 0x37e4c) = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x37e4c) == '\0') {
        *(undefined1 *)(param_1 + 0x37e4c) = 1;
      }
      *(uint *)(param_1 + 0x37e48) = (uint)local_118;
    }
    if (NAN((float)local_110)) {
      *(undefined4 *)(param_1 + 0x37e50) = 0x7fc00000;
    }
    else {
      *(undefined4 *)(param_1 + 0x37e58) = (undefined4)local_108;
      *(uint *)(param_1 + 0x37e54) = local_110._4_4_;
      *(float *)(param_1 + 0x37e50) = (float)local_110;
    }
    if (local_118._4_1_ != '\0') {
      local_118._0_5_ = (uint5)(uint)local_118;
    }
    if (!bVar19) {
      local_120._0_5_ = (uint5)(uint)local_120;
    }
    if (auStack_12c[4] != '\0') {
      (*(code *)*local_138)(&local_138);
    }
    uVar22 = 0;
    bVar19 = false;
    local_370 = 2;
    goto LAB_008dfbb4;
  case 4:
    if (uVar6 != 0) {
      local_140 = (undefined **)((ulong)local_140._4_4_ << 0x20);
      if (*piVar1 < 1) {
LAB_008dd7e8:
        uVar22 = 0;
        bVar19 = false;
        fVar57 = NAN;
        uVar58 = 0;
        cVar9 = false;
        goto LAB_008ddcf8;
      }
      lVar40 = *(long *)(*(long *)(param_1 + 0x31870) + (ulong)(*piVar1 - 1) * 8);
      if (lVar40 == 0) goto LAB_008dd700;
      local_23c = *(float *)(lVar40 + 0x88);
      if (NAN(local_23c)) {
        uVar22 = 0;
        bVar19 = false;
        local_23c = NAN;
      }
      else {
        uStack_238 = *(uint *)(lVar40 + 0x8c);
        local_234 = *(float *)(lVar40 + 0x90);
        uVar22 = 0;
        bVar19 = false;
      }
      goto LAB_008dd714;
    }
    if (iVar62 + 1 != iVar21) {
      iVar41 = iVar60;
      do {
        local_140 = (undefined **)(ulong)(uint)((float)iVar41 * 5.0);
        local_138 = (undefined **)CONCAT44(local_138._4_4_,(float)iVar21 * 5.0);
        uVar22 = FUN_02b90ee0(&local_140);
        lVar40 = *(long *)puVar3;
        if (lVar40 != 0) {
          if ((((uVar22 == 0) ||
               (plVar56 = *(long **)(*(long *)(*(long *)(lVar40 + 0x1c0) + 8) +
                                    (ulong)(uVar22 >> 0x14) * 8), plVar56 == (long *)0x0)) ||
              ((*(uint *)(plVar56 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar56 + 0x46) != uVar22))
          {
            plVar56 = (long *)0x0;
          }
          if (*(int *)(lVar40 + 0x288) == 1 || *(int *)(lVar40 + 0x288) == -1) {
            plVar27 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
            (**(code **)(*plVar27 + 0x60))();
          }
          if (plVar56 != (long *)0x0) {
            if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
               (iVar60 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar60 != 0)) {
              *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb59a0);
            }
            (**(code **)(*plVar56 + 0x20))(plVar56,PTR_DAT_04bb5998);
            if ((*(byte *)(plVar56 + 0xac) >> 1 & 1) == 0) {
              plVar27 = plVar56 + 0xae;
            }
            else {
              local_280 = (undefined **)CONCAT44(local_280._4_4_,5);
              plVar27 = plVar56 + 0x115;
            }
            lVar40 = plVar27[4];
            iVar60 = *(int *)((long)plVar27 + 0x24);
            lVar51 = plVar27[2];
            iVar62 = *(int *)((long)plVar27 + 0x14);
            uStack_238 = *(uint *)(plVar56[0xd] + 0x27c);
            *(uint *)(param_1 + 0x37e20) = local_204;
            *(int *)(param_1 + 0x37e30) = iVar41;
            *(int *)(param_1 + 0x37e34) = iVar21;
            local_23c = ((float)(int)lVar51 * 5.0 + (float)(int)lVar40 * 5.0 + 5.0) * 0.5;
            local_234 = ((float)iVar62 * 5.0 + (float)iVar60 * 5.0 + 5.0) * 0.5;
            if (*(char *)(param_1 + 0x37e38) == '\0') {
              *(undefined **)(param_1 + 0x37e28) = PTR_DAT_04bb2010 + 0x10;
              *(undefined1 *)(param_1 + 0x37e38) = 1;
            }
            if (*(char *)(param_1 + 0x37e44) != '\0') {
              *(undefined1 *)(param_1 + 0x37e44) = 0;
            }
            if (*(char *)(param_1 + 0x37e4c) == '\0') {
              *(undefined1 *)(param_1 + 0x37e4c) = 1;
            }
            *(uint *)(param_1 + 0x37e48) = uVar22;
            if (NAN(local_23c)) {
              fVar57 = NAN;
            }
            else {
              *(uint *)(param_1 + 0x37e54) = uStack_238;
              *(float *)(param_1 + 0x37e58) = local_234;
              fVar57 = local_23c;
            }
            *(float *)(param_1 + 0x37e50) = fVar57;
            break;
          }
        }
        if (iVar41 < (int)local_210) {
          iVar41 = iVar41 + 1;
        }
        else {
          iVar21 = iVar21 + 1;
          iVar41 = (int)local_220;
        }
      } while ((iVar60 != iVar41) || (iVar62 + 1 != iVar21));
    }
    puVar3 = PTR_DAT_04bb3968;
    FUN_020b3f80(*(undefined8 *)PTR_DAT_04bb3968);
    puVar55 = PTR_DAT_04bb2028;
    if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       (uVar11 = **(ushort **)PTR_DAT_04bc3a48, (uVar11 & 1) == 0)) {
      bVar19 = *(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) == 1;
    }
    else {
      bVar19 = ((uVar11 ^ 0xffff) & 3) == 0;
    }
    if (bVar19) {
      local_140 = &PTR_FUN_04a730d0;
      iVar21 = *(int *)(*(long *)puVar3 + 0xb88);
      if (iVar21 != 0) {
        lVar40 = (long)iVar21 << 3;
        puVar50 = *(undefined8 **)(*(long *)puVar3 + 0xb90);
        do {
          (*(code *)*local_140)(&local_140,*puVar50);
          lVar40 = lVar40 + -8;
          puVar50 = puVar50 + 1;
        } while (lVar40 != 0);
      }
    }
    break;
  case 5:
    if (uVar6 != 0) {
      local_140 = (undefined **)((ulong)local_140._4_4_ << 0x20);
      if (*piVar1 < 1) goto LAB_008dd7e8;
      lVar40 = *(long *)(*(long *)(param_1 + 0x31870) + (ulong)(*piVar1 - 1) * 8);
      if (lVar40 != 0) {
        local_23c = *(float *)(lVar40 + 0x88);
        if (NAN(local_23c)) {
          local_23c = NAN;
        }
        else {
          uStack_238 = *(uint *)(lVar40 + 0x8c);
          local_234 = *(float *)(lVar40 + 0x90);
        }
        if (*(char *)(lVar40 + 0x84) != '\0') {
          uVar22 = *(uint *)(lVar40 + 0x80);
          bVar19 = true;
          goto LAB_008dd714;
        }
      }
      goto LAB_008dd700;
    }
    if (iVar62 + 1 != iVar21) {
      puVar55 = PTR_DAT_04bb2e50 + 0x10;
      iVar41 = iVar60;
      do {
        local_2b8 = (undefined *)((ulong)local_2b8 & 0xffffffff00000000);
        local_140 = (undefined **)(ulong)(uint)((float)iVar41 * 5.0);
        local_138 = (undefined **)CONCAT44(local_138._4_4_,(float)iVar21 * 5.0);
        uVar22 = FUN_02b917e0(&local_2b8,&local_140);
        lVar40 = *(long *)puVar3;
        if (lVar40 != 0) {
          if ((((uVar22 == 0) ||
               (plVar56 = *(long **)(*(long *)(*(long *)(lVar40 + 0x1c0) + 8) +
                                    (ulong)(uVar22 >> 0x14) * 8), plVar56 == (long *)0x0)) ||
              ((*(uint *)(plVar56 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar56 + 0x46) != uVar22))
          {
            plVar56 = (long *)0x0;
          }
          if (*(int *)(lVar40 + 0x288) == 1 || *(int *)(lVar40 + 0x288) == -1) {
            plVar27 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
            (**(code **)(*plVar27 + 0x60))();
          }
          if (plVar56 != (long *)0x0) {
            if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
               (iVar23 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar23 != 0)) {
              *(undefined **)puVar17 = puVar55;
              __cxa_guard_release(PTR_DAT_04bb59a0);
            }
            (**(code **)(*plVar56 + 0x20))(plVar56,puVar17);
            if ((int)plVar56[0xaa] == 0x1a) {
              if ((*(byte *)(plVar56 + 0xac) >> 1 & 1) == 0) {
                plVar27 = plVar56 + 0xae;
              }
              else {
                local_280 = (undefined **)CONCAT44(local_280._4_4_,5);
                plVar27 = plVar56 + 0x115;
              }
              lVar40 = plVar27[4];
              iVar60 = *(int *)((long)plVar27 + 0x24);
              lVar51 = plVar27[2];
              iVar62 = *(int *)((long)plVar27 + 0x14);
              uStack_238 = *(uint *)(plVar56[0xd] + 0x27c);
              *(uint *)(param_1 + 0x37e20) = local_204;
              *(int *)(param_1 + 0x37e30) = iVar41;
              *(int *)(param_1 + 0x37e34) = iVar21;
              local_23c = ((float)(int)lVar51 * 5.0 + (float)(int)lVar40 * 5.0 + 5.0) * 0.5;
              local_234 = ((float)iVar62 * 5.0 + (float)iVar60 * 5.0 + 5.0) * 0.5;
              if (*(char *)(param_1 + 0x37e38) == '\0') {
                *(undefined **)(param_1 + 0x37e28) = PTR_DAT_04bb2010 + 0x10;
                *(undefined1 *)(param_1 + 0x37e38) = 1;
              }
              if (*(char *)(param_1 + 0x37e44) != '\0') {
                *(undefined1 *)(param_1 + 0x37e44) = 0;
              }
              if (*(char *)(param_1 + 0x37e4c) == '\0') {
                *(undefined1 *)(param_1 + 0x37e4c) = 1;
              }
              *(uint *)(param_1 + 0x37e48) = uVar22;
              if (NAN(local_23c)) {
                fVar57 = NAN;
              }
              else {
                *(uint *)(param_1 + 0x37e54) = uStack_238;
                *(float *)(param_1 + 0x37e58) = local_234;
                fVar57 = local_23c;
              }
              *(float *)(param_1 + 0x37e50) = fVar57;
              break;
            }
          }
        }
        if (iVar41 < (int)local_210) {
          iVar41 = iVar41 + 1;
        }
        else {
          iVar21 = iVar21 + 1;
          iVar41 = (int)local_220;
        }
      } while ((iVar60 != iVar41) || (iVar62 + 1 != iVar21));
    }
    puVar3 = PTR_DAT_04bb3968;
    FUN_020b3f80(*(undefined8 *)PTR_DAT_04bb3968);
    puVar55 = PTR_DAT_04bb2028;
    if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       (uVar11 = **(ushort **)PTR_DAT_04bc3a48, (uVar11 & 1) == 0)) {
      bVar19 = *(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) == 1;
    }
    else {
      bVar19 = ((uVar11 ^ 0xffff) & 3) == 0;
    }
    if (bVar19) {
      local_140 = &PTR_FUN_04a730d0;
      iVar21 = *(int *)(*(long *)puVar3 + 0xb88);
      if (iVar21 != 0) {
        lVar40 = (long)iVar21 << 3;
        puVar50 = *(undefined8 **)(*(long *)puVar3 + 0xb90);
        do {
          (*(code *)*local_140)(&local_140,*puVar50);
          lVar40 = lVar40 + -8;
          puVar50 = puVar50 + 1;
        } while (lVar40 != 0);
      }
    }
    break;
  case 6:
    local_278 = (undefined **)((ulong)(uint)local_278._4_4_ << 0x20);
    local_280 = (undefined **)0x0;
    local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_138 = (undefined **)0x4086843;
    FUN_008fa8b0(&local_280,&local_140);
    local_138 = (undefined **)0x0;
    _local_130 = (undefined **)0x0;
    stack0xfffffffffffffed8 = (undefined **)((ulong)stack0xfffffffffffffed8 & 0xffffffffffffff00);
    local_23c = (float)local_280;
    uStack_238 = local_280._4_4_;
    local_234 = (float)local_278;
    local_140 = (undefined **)CONCAT44(local_140._4_4_,local_204);
    local_120 = local_120 & 0xffffff0000000000;
    local_118 = (undefined **)((ulong)local_118 & 0xffffff0000000000);
    if (NAN((float)local_280)) {
      fVar57 = NAN;
    }
    else {
      local_110._4_4_ = local_280._4_4_;
      local_108 = (undefined *)CONCAT44(local_108._4_4_,(float)local_278);
      fVar57 = (float)local_280;
    }
    local_110 = (undefined **)CONCAT44(local_110._4_4_,fVar57);
    *(uint *)(param_1 + 0x37e20) = local_204;
    if (*(char *)(param_1 + 0x37e38) == '\0') {
      cVar9 = *(char *)(param_1 + 0x37e44);
joined_r0x008ddafc:
      if (cVar9 != '\0') {
        *(undefined1 *)(param_1 + 0x37e44) = 0;
      }
      bVar19 = true;
    }
    else {
      (*(code *)**(undefined8 **)(param_1 + 0x37e28))(lVar40);
      *(undefined1 *)(param_1 + 0x37e38) = 0;
      cVar9 = *(char *)(param_1 + 0x37e44);
      if (local_120._4_1_ == '\0') goto joined_r0x008ddafc;
      if (cVar9 == '\0') {
        *(undefined1 *)(param_1 + 0x37e44) = 1;
      }
      bVar19 = false;
      *(uint *)(param_1 + 0x37e40) = (uint)local_120;
    }
    if (local_118._4_1_ == '\0') {
      if (*(char *)(param_1 + 0x37e4c) != '\0') {
        *(undefined1 *)(param_1 + 0x37e4c) = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x37e4c) == '\0') {
        *(undefined1 *)(param_1 + 0x37e4c) = 1;
      }
      *(uint *)(param_1 + 0x37e48) = (uint)local_118;
    }
    if (NAN((float)local_110)) {
      *(undefined4 *)(param_1 + 0x37e50) = 0x7fc00000;
    }
    else {
      *(undefined4 *)(param_1 + 0x37e58) = (undefined4)local_108;
      *(uint *)(param_1 + 0x37e54) = local_110._4_4_;
      *(float *)(param_1 + 0x37e50) = (float)local_110;
    }
    if (local_118._4_1_ != '\0') {
      local_118._0_5_ = (uint5)(uint)local_118;
    }
    if (!bVar19) {
      local_120._0_5_ = (uint5)(uint)local_120;
    }
    if (auStack_12c[4] != '\0') {
      (*(code *)*local_138)(&local_138);
    }
  }
  uVar22 = 0;
  fVar57 = NAN;
  bVar19 = false;
  uVar58 = 0;
  cVar9 = '\0';
LAB_008dfbb4:
  local_24d = 0;
  local_270._4_4_ = local_270._4_4_ & 0xffffff00;
  local_270._0_4_ = 0x20;
  local_278 = (undefined **)(local_270 + 4);
  local_280 = (undefined **)(puVar55 + 0x10);
  if (uVar6 == 0) {
    uVar26 = local_370;
    if (local_370 == 2) {
      local_110._0_4_ = (float)(uint)(uint3)local_110;
      local_138 = (undefined **)(local_130 + 4);
      local_140 = (undefined **)(puVar55 + 0x10);
      _local_130 = (undefined **)CONCAT35(auStack_12c._1_3_,0x20);
      bVar34 = false;
      ppuVar33 = (undefined **)(local_2a8 + 4);
      local_1a8[0] = local_1a8[0] & 0xffffffff00000000;
      puVar3 = PTR_DAT_04bb2020 + 0x10;
      puVar2 = PTR_DAT_04bb2a08 + 0x10;
      pcVar38 = PTR_s_Complete_Intro_04bb5930;
      do {
        puVar30 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        ppuVar53 = local_138;
        local_2b8 = (undefined *)CONCAT44(local_2b8._4_4_,2);
        uVar26 = *puVar30 ^ *puVar30 << 0xb;
        uVar25 = puVar30[3];
        *puVar30 = puVar30[1];
        puVar30[1] = puVar30[2];
        uVar26 = uVar26 >> 8 ^ uVar25 >> 0x13 ^ uVar26 ^ uVar25;
        puVar30[2] = uVar25;
        puVar30[3] = uVar26;
        uVar26 = (int)((ulong)uVar26 * 0xb >> 0x20) + 3;
        if (uVar26 < 0xe) {
          local_1a8[0] = CONCAT44(local_1a8[0]._4_4_,uVar26);
LAB_008dfd74:
          ppuVar32 = *(undefined ***)(pcVar38 + (ulong)uVar26 * 8 + 0x100);
        }
        else {
          ppuVar32 = (undefined **)&DAT_0407ebb1;
          uVar26 = (uint)local_1a8[0];
          if ((uint)local_1a8[0] < 0xe) goto LAB_008dfd74;
        }
        if (local_138 != ppuVar32) {
          lVar40 = 0;
          do {
            if (*(char *)((long)ppuVar32 + lVar40) == '\0') goto LAB_008dfdcc;
            if (*(char *)((long)ppuVar32 + lVar40 + 1) == '\0') {
              lVar40 = lVar40 + 1;
              goto LAB_008dfdcc;
            }
            if (*(char *)((long)ppuVar32 + lVar40 + 2) == '\0') {
              lVar40 = lVar40 + 2;
              goto LAB_008dfdcc;
            }
            lVar40 = lVar40 + 3;
          } while (lVar40 != 0x80001);
          lVar40 = 0;
LAB_008dfdcc:
          iVar21 = (int)lVar40;
          if ((int)local_130 <= (int)lVar40) {
            iVar21 = (int)local_130 + -1;
          }
          memcpy(local_138,ppuVar32,(long)iVar21);
          *(char *)((long)ppuVar53 + (long)iVar21) = '\0';
        }
        ppuVar53 = local_138;
        local_2b0 = (undefined **)&DAT_0407ebb1;
        if (local_204 < 7) {
          local_2b0 = *(undefined ***)(PTR_DAT_04bb5938 + (ulong)local_204 * 8 + 0x28);
        }
        local_2b8 = puVar3;
        (*(code *)local_140[3])(&local_140);
        lVar40 = 0;
        do {
          if (*(char *)((long)local_138 + lVar40) == '\0') goto LAB_008dfe74;
          if (*(char *)((long)local_138 + lVar40 + 1) == '\0') {
            lVar40 = lVar40 + 1;
            goto LAB_008dfe74;
          }
          if (*(char *)((long)local_138 + lVar40 + 2) == '\0') {
            lVar40 = lVar40 + 2;
            goto LAB_008dfe74;
          }
          lVar40 = lVar40 + 3;
        } while (lVar40 != 0x80001);
        lVar40 = 0;
LAB_008dfe74:
        uVar26 = (uint)lVar40 & ((int)(uint)lVar40 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_2b8 + 0x18))(&local_2b8);
        lVar40 = 0;
        do {
          if (*(char *)((long)local_2b0 + lVar40) == '\0') goto LAB_008dfed4;
          if (*(char *)((long)local_2b0 + lVar40 + 1) == '\0') {
            lVar40 = lVar40 + 1;
            goto LAB_008dfed4;
          }
          if (*(char *)((long)local_2b0 + lVar40 + 2) == '\0') {
            lVar40 = lVar40 + 2;
            goto LAB_008dfed4;
          }
          lVar40 = lVar40 + 3;
        } while (lVar40 != 0x80001);
        lVar40 = 0;
LAB_008dfed4:
        uVar25 = (uint)lVar40;
        if ((int)((int)local_130 - uVar26) <= (int)(uint)lVar40) {
          uVar25 = (int)local_130 + ~uVar26;
        }
        if (0 < (int)uVar25) {
          (**(code **)(local_2b8 + 0x18))(&local_2b8);
          memcpy((char *)((long)ppuVar53 + (ulong)uVar26),local_2b0,(ulong)uVar25);
          *(char *)((long)ppuVar53 + (long)(int)(uVar25 + uVar26)) = '\0';
        }
        ppuVar53 = local_138;
        local_2b8 = PTR_DAT_04bb2020 + 0x10;
        local_2b0 = (undefined **)PTR_DAT_04bb5940;
        (*(code *)local_140[3])(&local_140);
        lVar40 = 0;
        do {
          if (*(char *)((long)local_138 + lVar40) == '\0') goto LAB_008dff94;
          if (*(char *)((long)local_138 + lVar40 + 1) == '\0') {
            lVar40 = lVar40 + 1;
            goto LAB_008dff94;
          }
          if (*(char *)((long)local_138 + lVar40 + 2) == '\0') {
            lVar40 = lVar40 + 2;
            goto LAB_008dff94;
          }
          lVar40 = lVar40 + 3;
        } while (lVar40 != 0x80001);
        lVar40 = 0;
LAB_008dff94:
        uVar26 = (uint)lVar40 & ((int)(uint)lVar40 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_2b8 + 0x18))(&local_2b8);
        lVar40 = 0;
        do {
          if (*(char *)((long)local_2b0 + lVar40) == '\0') goto LAB_008dfff4;
          if (*(char *)((long)local_2b0 + lVar40 + 1) == '\0') {
            lVar40 = lVar40 + 1;
            goto LAB_008dfff4;
          }
          if (*(char *)((long)local_2b0 + lVar40 + 2) == '\0') {
            lVar40 = lVar40 + 2;
            goto LAB_008dfff4;
          }
          lVar40 = lVar40 + 3;
        } while (lVar40 != 0x80001);
        lVar40 = 0;
LAB_008dfff4:
        uVar25 = (uint)lVar40;
        if ((int)((int)local_130 - uVar26) <= (int)(uint)lVar40) {
          uVar25 = (int)local_130 + ~uVar26;
        }
        if (0 < (int)uVar25) {
          (**(code **)(local_2b8 + 0x18))(&local_2b8);
          memcpy((char *)((long)ppuVar53 + (ulong)uVar26),local_2b0,(ulong)uVar25);
          *(char *)((long)ppuVar53 + (long)(int)(uVar25 + uVar26)) = '\0';
        }
        local_2b8 = (undefined *)CONCAT44(local_2b8._4_4_,1);
        if (*(int *)(param_1 + 0x31f68) != 0) {
          puVar50 = *(undefined8 **)(param_1 + 0x31f70);
          puVar4 = puVar50 + *(int *)(param_1 + 0x31f68);
LAB_008e0080:
          plVar56 = (long *)*puVar50;
          if (*(uint *)(plVar56 + 0xe) == local_204) {
            local_188 = 0;
            local_2a8._0_4_ = 0x20;
            local_285 = 0;
            local_2b8 = puVar2;
            local_2b0 = ppuVar33;
            (**(code **)(*plVar56 + 0x18))(plVar56);
            ppuVar53 = (undefined **)plVar56[1];
            if (ppuVar33 != ppuVar53) {
              (**(code **)(*plVar56 + 0x18))(plVar56);
              lVar40 = 0;
              do {
                if (*(char *)(plVar56[1] + lVar40) == '\0') goto LAB_008e011c;
                lVar51 = plVar56[1] + lVar40;
                if (*(char *)(lVar51 + 1) == '\0') {
                  lVar40 = lVar40 + 1;
                  goto LAB_008e011c;
                }
                if (*(char *)(lVar51 + 2) == '\0') {
                  lVar40 = lVar40 + 2;
                  goto LAB_008e011c;
                }
                lVar40 = lVar40 + 3;
              } while (lVar40 != 0x80001);
              lVar40 = 0;
LAB_008e011c:
              iVar21 = (int)lVar40;
              if ((int)local_2a8._0_4_ <= (int)lVar40) {
                iVar21 = local_2a8._0_4_ + -1;
              }
              memcpy(ppuVar33,ppuVar53,(long)iVar21);
              *(char *)((long)ppuVar33 + (long)iVar21) = '\0';
            }
            local_2b8 = puVar55 + 0x10;
            lVar40 = 0;
            *(char *)((long)local_2b0 + (long)(int)local_2a8._0_4_ + -1) = '\0';
            do {
              if (*(char *)((long)local_2b0 + lVar40) == '\0') goto LAB_008e01a0;
              if (*(char *)((long)local_2b0 + lVar40 + 1) == '\0') {
                lVar40 = lVar40 + 1;
                goto LAB_008e01a0;
              }
              if (*(char *)((long)local_2b0 + lVar40 + 2) == '\0') {
                lVar40 = lVar40 + 2;
                goto LAB_008e01a0;
              }
              lVar40 = lVar40 + 3;
            } while (lVar40 != 0x80001);
            lVar40 = 0;
LAB_008e01a0:
            iVar60 = (int)lVar40;
            iVar21 = iVar60;
            if (1 < iVar60) {
              iVar21 = 2;
            }
            *(char *)((long)local_2b0 + (long)(iVar60 - iVar21)) = '\0';
            local_170 = PTR_DAT_04bb2020 + 0x10;
            local_168 = pcVar38;
            (**(code **)(puVar55 + 0x28))(&local_2b8);
            lVar40 = 0;
            do {
              if (*(char *)((long)local_2b0 + lVar40) == '\0') goto LAB_008e021c;
              if (*(char *)((long)local_2b0 + lVar40 + 1) == '\0') {
                lVar40 = lVar40 + 1;
                goto LAB_008e021c;
              }
              if (*(char *)((long)local_2b0 + lVar40 + 2) == '\0') {
                lVar40 = lVar40 + 2;
                goto LAB_008e021c;
              }
              lVar40 = lVar40 + 3;
            } while (lVar40 != 0x80001);
            lVar40 = 0;
LAB_008e021c:
            (**(code **)(local_170 + 0x18))(&local_170);
            lVar51 = 0;
            do {
              iVar21 = (int)lVar40;
              if (local_168[lVar51] == '\0') {
LAB_008e0268:
                iVar60 = (int)lVar51;
                if (iVar21 < iVar60) goto LAB_008e0334;
LAB_008e0280:
                if ((int)lVar51 < 1) goto LAB_008e030c;
                uVar31 = 0;
                goto LAB_008e0294;
              }
              if (local_168[lVar51 + 1] == '\0') {
                lVar51 = lVar51 + 1;
                goto LAB_008e0268;
              }
              if (local_168[lVar51 + 2] == '\0') {
                lVar51 = lVar51 + 2;
                iVar60 = (int)lVar51;
                if (iVar60 <= iVar21) goto LAB_008e0280;
                goto LAB_008e0334;
              }
              lVar51 = lVar51 + 3;
            } while (lVar51 != 0x80001);
            if (iVar21 < 0) goto LAB_008e0334;
LAB_008e030c:
            (**(code **)(local_170 + 0x18))(&local_170);
LAB_008e0390:
            (**(code **)(local_2b8 + 0x18))(&local_2b8);
            lVar40 = 0;
            do {
              if (*(char *)((long)local_2b0 + lVar40) == '\0') goto LAB_008e0480;
              if (*(char *)((long)local_2b0 + lVar40 + 1) == '\0') {
                lVar40 = lVar40 + 1;
                goto LAB_008e0480;
              }
              if (*(char *)((long)local_2b0 + lVar40 + 2) == '\0') {
                lVar40 = lVar40 + 2;
                goto LAB_008e0480;
              }
              lVar40 = lVar40 + 3;
            } while (lVar40 != 0x80001);
            lVar40 = 0;
LAB_008e0480:
            iVar60 = (int)lVar40;
            iVar62 = iVar60;
            if (1 < iVar60) {
              iVar62 = 2;
            }
            pcVar38 = PTR_s_Complete_Intro_04bb5930;
            goto LAB_008e048c;
          }
          goto LAB_008e0074;
        }
LAB_008e0574:
        lVar40 = FUN_008c1870(param_1,&local_140);
      } while ((lVar40 == 0) || (bVar34));
      uVar26 = (uint)local_1a8[0];
    }
    if (uVar26 < 0xe) goto LAB_008e05a4;
    ppuVar33 = (undefined **)&DAT_0407ebb1;
LAB_008e05b4:
    ppuVar53 = local_278;
    if (local_278 != ppuVar33) {
      lVar40 = 0;
      do {
        if (*(char *)((long)ppuVar33 + lVar40) == '\0') goto LAB_008e0600;
        if (*(char *)((long)ppuVar33 + lVar40 + 1) == '\0') {
          lVar40 = lVar40 + 1;
          goto LAB_008e0600;
        }
        if (*(char *)((long)ppuVar33 + lVar40 + 2) == '\0') {
          lVar40 = lVar40 + 2;
          goto LAB_008e0600;
        }
        lVar40 = lVar40 + 3;
      } while (lVar40 != 0x80001);
      lVar40 = 0;
LAB_008e0600:
      iVar21 = (int)lVar40;
      if ((int)local_270._0_4_ <= (int)lVar40) {
        iVar21 = local_270._0_4_ + -1;
      }
      memcpy(local_278,ppuVar33,(long)iVar21);
      *(undefined1 *)((long)ppuVar53 + (long)iVar21) = 0;
    }
    ppuVar33 = local_278;
    if (local_370 != 1) {
      if (local_370 != 0) {
        if (local_204 < 7) {
          local_138 = *(undefined ***)(PTR_DAT_04bb5938 + (ulong)local_204 * 8 + 0x28);
        }
        else {
          local_138 = (undefined **)&DAT_0407ebb1;
        }
        local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        (**(code **)((long)local_280 + 0x18))(&local_280);
        lVar40 = 0;
        do {
          if (*(char *)((long)local_278 + lVar40) == '\0') goto LAB_008e073c;
          if (*(char *)((long)local_278 + lVar40 + 1) == '\0') {
            lVar40 = lVar40 + 1;
            goto LAB_008e073c;
          }
          if (*(char *)((long)local_278 + lVar40 + 2) == '\0') {
            lVar40 = lVar40 + 2;
            goto LAB_008e073c;
          }
          lVar40 = lVar40 + 3;
        } while (lVar40 != 0x80001);
        lVar40 = 0;
LAB_008e073c:
        uVar26 = (uint)lVar40 & ((int)(uint)lVar40 >> 0x1f ^ 0xffffffffU);
        (**(code **)((long)local_140 + 0x18))(&local_140);
        lVar40 = 0;
        do {
          if (*(char *)((long)local_138 + lVar40) == '\0') goto LAB_008e0b74;
          if (*(char *)((long)local_138 + lVar40 + 1) == '\0') goto LAB_008e0b68;
          if (*(char *)((long)local_138 + lVar40 + 2) == '\0') goto LAB_008e0b70;
          lVar40 = lVar40 + 3;
        } while (lVar40 != 0x80001);
LAB_008e0788:
        lVar40 = 0;
        goto LAB_008e0b74;
      }
      if (*(long *)PTR_DAT_04bb59d8 != 0) {
        lVar40 = *(long *)PTR_DAT_04bb2720;
        if (lVar40 == 0) {
          puVar50 = &DAT_055c04a0;
        }
        else {
          puVar50 = &DAT_055c04a0;
          if (*(long *)(lVar40 + 0x330) != 0) {
            puVar50 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar40 + 0x338));
            iVar21 = FUN_006bd550(*puVar50,0);
            puVar50 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar21 != 0x758f7eaf) {
              puVar50 = &DAT_055c04a0;
            }
          }
        }
        if (*(int *)(puVar50 + 7) == -0x17df00c3) {
          iVar21 = FUN_0375f1a4(*(undefined8 *)PTR_DAT_04bb59d8);
          ppuVar33 = local_278;
          if (iVar21 == 0) {
            local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            local_138 = (undefined **)&DAT_0407bd02;
            (**(code **)((long)local_280 + 0x18))(&local_280);
            lVar40 = 0;
            do {
              if (*(char *)((long)local_278 + lVar40) == '\0') goto LAB_008e0ad4;
              if (*(char *)((long)local_278 + lVar40 + 1) == '\0') {
                lVar40 = lVar40 + 1;
                goto LAB_008e0ad4;
              }
              if (*(char *)((long)local_278 + lVar40 + 2) == '\0') {
                lVar40 = lVar40 + 2;
                goto LAB_008e0ad4;
              }
              lVar40 = lVar40 + 3;
            } while (lVar40 != 0x80001);
            lVar40 = 0;
LAB_008e0ad4:
            uVar26 = (uint)lVar40 & ((int)(uint)lVar40 >> 0x1f ^ 0xffffffffU);
            (**(code **)((long)local_140 + 0x18))(&local_140);
            lVar40 = 0;
            do {
              if (*(char *)((long)local_138 + lVar40) == '\0') goto LAB_008e0b74;
              if (*(char *)((long)local_138 + lVar40 + 1) == '\0') goto LAB_008e0b68;
              if (*(char *)((long)local_138 + lVar40 + 2) == '\0') goto LAB_008e0b70;
              lVar40 = lVar40 + 3;
            } while (lVar40 != 0x80001);
          }
          else if (iVar21 == 2) {
            local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            local_138 = (undefined **)&DAT_0405bff7;
            (**(code **)((long)local_280 + 0x18))(&local_280);
            lVar40 = 0;
            do {
              if (*(char *)((long)local_278 + lVar40) == '\0') goto LAB_008e0a88;
              if (*(char *)((long)local_278 + lVar40 + 1) == '\0') {
                lVar40 = lVar40 + 1;
                goto LAB_008e0a88;
              }
              if (*(char *)((long)local_278 + lVar40 + 2) == '\0') {
                lVar40 = lVar40 + 2;
                goto LAB_008e0a88;
              }
              lVar40 = lVar40 + 3;
            } while (lVar40 != 0x80001);
            lVar40 = 0;
LAB_008e0a88:
            uVar26 = (uint)lVar40 & ((int)(uint)lVar40 >> 0x1f ^ 0xffffffffU);
            (**(code **)((long)local_140 + 0x18))(&local_140);
            lVar40 = 0;
            do {
              if (*(char *)((long)local_138 + lVar40) == '\0') goto LAB_008e0b74;
              if (*(char *)((long)local_138 + lVar40 + 1) == '\0') goto LAB_008e0b68;
              if (*(char *)((long)local_138 + lVar40 + 2) == '\0') goto LAB_008e0b70;
              lVar40 = lVar40 + 3;
            } while (lVar40 != 0x80001);
          }
          else {
            if (iVar21 != 1) goto LAB_008e0bc0;
            local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            local_138 = (undefined **)&DAT_04076984;
            (**(code **)((long)local_280 + 0x18))(&local_280);
            lVar40 = 0;
            do {
              if (*(char *)((long)local_278 + lVar40) == '\0') goto LAB_008e0b20;
              if (*(char *)((long)local_278 + lVar40 + 1) == '\0') {
                lVar40 = lVar40 + 1;
                goto LAB_008e0b20;
              }
              if (*(char *)((long)local_278 + lVar40 + 2) == '\0') {
                lVar40 = lVar40 + 2;
                goto LAB_008e0b20;
              }
              lVar40 = lVar40 + 3;
            } while (lVar40 != 0x80001);
            lVar40 = 0;
LAB_008e0b20:
            uVar26 = (uint)lVar40 & ((int)(uint)lVar40 >> 0x1f ^ 0xffffffffU);
            (**(code **)((long)local_140 + 0x18))(&local_140);
            lVar40 = 0;
            do {
              if (*(char *)((long)local_138 + lVar40) == '\0') goto LAB_008e0b74;
              if (*(char *)((long)local_138 + lVar40 + 1) == '\0') goto LAB_008e0b68;
              if (*(char *)((long)local_138 + lVar40 + 2) == '\0') goto LAB_008e0b70;
              lVar40 = lVar40 + 3;
            } while (lVar40 != 0x80001);
          }
          goto LAB_008e0788;
        }
      }
    }
    goto LAB_008e0bc0;
  }
LAB_008dfbd8:
  local_24d = 0;
  ppuVar33 = (undefined **)(local_270 + 4);
  local_278 = ppuVar33;
  if ((local_370 == 0) && (uVar6 == 1)) {
    uVar26 = 0;
    local_370 = 0;
LAB_008e05a4:
    ppuVar33 = *(undefined ***)(PTR_s_Complete_Intro_04bb5930 + (ulong)uVar26 * 8 + 0x100);
    goto LAB_008e05b4;
  }
  local_140 = (undefined **)((ulong)local_140 & 0xffffffff00000000);
  if ((0 < *piVar1) &&
     (plVar56 = *(long **)(*(long *)(param_1 + 0x31870) + (ulong)(*piVar1 - 1) * 8),
     plVar56 != (long *)0x0)) {
    (**(code **)(*plVar56 + 0x18))(plVar56);
    ppuVar53 = (undefined **)plVar56[1];
    if (ppuVar33 != ppuVar53) {
      (**(code **)(*plVar56 + 0x18))(plVar56);
      lVar40 = 0;
      do {
        if (*(char *)(plVar56[1] + lVar40) == '\0') goto LAB_008e0844;
        lVar51 = plVar56[1] + lVar40;
        if (*(char *)(lVar51 + 1) == '\0') {
          lVar40 = lVar40 + 1;
          goto LAB_008e0844;
        }
        if (*(char *)(lVar51 + 2) == '\0') {
          lVar40 = lVar40 + 2;
          goto LAB_008e0844;
        }
        lVar40 = lVar40 + 3;
      } while (lVar40 != 0x80001);
      lVar40 = 0;
LAB_008e0844:
      iVar21 = (int)lVar40;
      if ((int)local_270._0_4_ <= (int)lVar40) {
        iVar21 = local_270._0_4_ + -1;
      }
      memcpy(ppuVar33,ppuVar53,(long)iVar21);
      local_270[(long)iVar21 + 4] = 0;
    }
    (**(code **)((long)local_280 + 0x18))(&local_280);
    ppuVar33 = local_278;
    lVar40 = 0;
    do {
      if (*(char *)((long)local_278 + lVar40) == '\0') goto LAB_008e08cc;
      if (*(char *)((long)local_278 + lVar40 + 1) == '\0') {
        lVar40 = lVar40 + 1;
        goto LAB_008e08cc;
      }
      if (*(char *)((long)local_278 + lVar40 + 2) == '\0') {
        lVar40 = lVar40 + 2;
        goto LAB_008e08cc;
      }
      lVar40 = lVar40 + 3;
    } while (lVar40 != 0x80001);
    lVar40 = 0;
LAB_008e08cc:
    iVar60 = (int)lVar40;
    iVar21 = iVar60;
    if (1 < iVar60) {
      iVar21 = 2;
    }
    *(undefined1 *)((long)local_278 + (long)(iVar60 - iVar21)) = 0;
    local_138 = (undefined **)&DAT_0407ebb1;
    if (uVar6 < 2) {
      local_138 = (undefined **)(PTR_DAT_04bb5940 + 3);
    }
    local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    (**(code **)((long)local_280 + 0x18))(&local_280);
    lVar40 = 0;
    do {
      if (*(char *)((long)local_278 + lVar40) == '\0') goto LAB_008e0960;
      if (*(char *)((long)local_278 + lVar40 + 1) == '\0') {
        lVar40 = lVar40 + 1;
        goto LAB_008e0960;
      }
      if (*(char *)((long)local_278 + lVar40 + 2) == '\0') {
        lVar40 = lVar40 + 2;
        goto LAB_008e0960;
      }
      lVar40 = lVar40 + 3;
    } while (lVar40 != 0x80001);
    lVar40 = 0;
LAB_008e0960:
    uVar26 = (uint)lVar40 & ((int)(uint)lVar40 >> 0x1f ^ 0xffffffffU);
    (**(code **)((long)local_140 + 0x18))(&local_140);
    lVar40 = 0;
    do {
      if (*(char *)((long)local_138 + lVar40) == '\0') goto LAB_008e0cac;
      if (*(char *)((long)local_138 + lVar40 + 1) == '\0') goto LAB_008e0ca0;
      if (*(char *)((long)local_138 + lVar40 + 2) == '\0') goto LAB_008e0ca8;
      lVar40 = lVar40 + 3;
    } while (lVar40 != 0x80001);
    goto LAB_008e0c98;
  }
  goto LAB_008e0cf8;
  while( true ) {
    pcVar38 = local_168;
    lVar40 = lVar51;
    while( true ) {
      lVar40 = lVar40 + -1;
      if (*(char *)((long)ppuVar53 + uVar31) != *pcVar38) break;
      if (*(char *)((long)ppuVar53 + uVar31) == '\0') goto LAB_008e0320;
      ppuVar53 = (undefined **)((long)ppuVar53 + 1);
      pcVar38 = pcVar38 + 1;
      if (lVar40 == 0) goto LAB_008e0320;
    }
    uVar31 = uVar31 + 1;
    if (uVar31 == (iVar21 - iVar60) + 1) break;
LAB_008e0294:
    ppuVar53 = local_2b0;
    pcVar38 = (char *)((long)local_2b0 + uVar31);
    (**(code **)(local_170 + 0x18))(&local_170);
    puVar55 = PTR_DAT_04bb2028;
    if (pcVar38 == local_168) {
LAB_008e0320:
      if ((int)uVar31 != -1) goto LAB_008e0390;
      break;
    }
  }
LAB_008e0334:
  pcVar38 = PTR_s_Complete_Intro_04bb5930;
  puVar39 = &DAT_0407ebb1;
  if (*(uint *)(plVar56 + 0xe) < 7) {
    puVar39 = *(undefined8 **)(PTR_DAT_04bb5938 + (ulong)*(uint *)(plVar56 + 0xe) * 8 + 0x28);
  }
  lVar40 = 0;
  do {
    if (*(char *)((long)puVar39 + lVar40) == '\0') goto LAB_008e03fc;
    if (*(char *)((long)puVar39 + lVar40 + 1) == '\0') {
      lVar40 = lVar40 + 1;
      goto LAB_008e03fc;
    }
    if (*(char *)((long)puVar39 + lVar40 + 2) == '\0') {
      lVar40 = lVar40 + 2;
      goto LAB_008e03fc;
    }
    lVar40 = lVar40 + 3;
  } while (lVar40 != 0x80001);
  lVar40 = 0;
LAB_008e03fc:
  (**(code **)(local_2b8 + 0x18))(&local_2b8);
  lVar51 = 0;
  do {
    iVar21 = (int)lVar40;
    if (*(char *)((long)local_2b0 + lVar51) == '\0') {
LAB_008e0458:
      iVar60 = (int)lVar51;
      goto joined_r0x008e0458;
    }
    if (*(char *)((long)local_2b0 + lVar51 + 1) == '\0') {
      lVar51 = lVar51 + 1;
      goto LAB_008e0458;
    }
    if (*(char *)((long)local_2b0 + lVar51 + 2) == '\0') {
      iVar60 = (int)lVar51 + 2;
      goto joined_r0x008e0458;
    }
    lVar51 = lVar51 + 3;
  } while (lVar51 != 0x80001);
  iVar60 = 0;
joined_r0x008e0458:
  if (-1 < iVar21) {
    iVar62 = iVar60;
    if (iVar21 <= iVar60) {
      iVar62 = iVar21;
    }
LAB_008e048c:
    *(char *)((long)local_2b0 + (long)(iVar60 - iVar62)) = '\0';
  }
  uVar26 = 0;
  do {
    ppuVar53 = (undefined **)&DAT_0407ebb1;
    if (uVar26 < 0xe) {
      ppuVar53 = *(undefined ***)(pcVar38 + (ulong)uVar26 * 8 + 0x100);
    }
    (**(code **)(local_2b8 + 0x18))(&local_2b8);
    if (ppuVar53 == local_2b0) {
LAB_008e0550:
      local_188 = uVar26;
      break;
    }
    if (*(char *)ppuVar53 == *(char *)local_2b0) {
      if (*(char *)ppuVar53 == '\0') goto LAB_008e0550;
      lVar40 = 0x7fffe;
      ppuVar32 = local_2b0;
      while( true ) {
        if (*(char *)((long)ppuVar53 + 1) != *(char *)((long)ppuVar32 + 1)) break;
        if (*(char *)((long)ppuVar53 + 1) == '\0') goto LAB_008e0550;
        if (*(char *)((long)ppuVar53 + 2) != *(char *)((long)ppuVar32 + 2)) break;
        if (*(char *)((long)ppuVar53 + 2) == '\0') goto LAB_008e0550;
        if ((lVar40 == 0) ||
           (cVar10 = *(char *)((long)ppuVar53 + 3), cVar10 != *(char *)((long)ppuVar32 + 3))) break;
        lVar40 = lVar40 + -3;
        ppuVar32 = (undefined **)((long)ppuVar32 + 3);
        ppuVar53 = (undefined **)((long)ppuVar53 + 3);
        if (cVar10 == '\0') goto LAB_008e0550;
      }
    }
    uVar25 = 0xe;
    if ((int)uVar26 < 0xe) {
      uVar25 = uVar26 + 1;
    }
    uVar26 = uVar25;
  } while (uVar25 != 0xe);
  if (local_188 == (uint)local_1a8[0]) {
    bVar34 = true;
    goto LAB_008e0574;
  }
  bVar34 = false;
LAB_008e0074:
  puVar50 = puVar50 + 1;
  if (puVar50 == puVar4) goto LAB_008e0574;
  goto LAB_008e0080;
LAB_008e0b68:
  lVar40 = lVar40 + 1;
  goto LAB_008e0b74;
LAB_008e0b70:
  lVar40 = lVar40 + 2;
LAB_008e0b74:
  uVar25 = (uint)lVar40;
  if ((int)(local_270._0_4_ - uVar26) <= (int)(uint)lVar40) {
    uVar25 = local_270._0_4_ + ~uVar26;
  }
  if (0 < (int)uVar25) {
    (**(code **)((long)local_140 + 0x18))(&local_140);
    memcpy((void *)((long)ppuVar33 + (ulong)uVar26),local_138,(ulong)uVar25);
    *(undefined1 *)((long)ppuVar33 + (long)(int)(uVar25 + uVar26)) = 0;
  }
LAB_008e0bc0:
  ppuVar33 = local_278;
  if (uVar6 < 2) {
    local_138 = *(undefined ***)(PTR_DAT_04bb5940 + (ulong)uVar6 * 8 + 8);
  }
  else {
    local_138 = (undefined **)&DAT_0407ebb1;
  }
  local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  (**(code **)((long)local_280 + 0x18))(&local_280);
  lVar40 = 0;
  do {
    if (*(char *)((long)local_278 + lVar40) == '\0') goto LAB_008e0c4c;
    if (*(char *)((long)local_278 + lVar40 + 1) == '\0') {
      lVar40 = lVar40 + 1;
      goto LAB_008e0c4c;
    }
    if (*(char *)((long)local_278 + lVar40 + 2) == '\0') {
      lVar40 = lVar40 + 2;
      goto LAB_008e0c4c;
    }
    lVar40 = lVar40 + 3;
  } while (lVar40 != 0x80001);
  lVar40 = 0;
LAB_008e0c4c:
  uVar26 = (uint)lVar40 & ((int)(uint)lVar40 >> 0x1f ^ 0xffffffffU);
  (**(code **)((long)local_140 + 0x18))(&local_140);
  lVar40 = 0;
  do {
    if (*(char *)((long)local_138 + lVar40) == '\0') goto LAB_008e0cac;
    if (*(char *)((long)local_138 + lVar40 + 1) == '\0') goto LAB_008e0ca0;
    if (*(char *)((long)local_138 + lVar40 + 2) == '\0') goto LAB_008e0ca8;
    lVar40 = lVar40 + 3;
  } while (lVar40 != 0x80001);
LAB_008e0c98:
  lVar40 = 0;
  goto LAB_008e0cac;
LAB_008e0ca0:
  lVar40 = lVar40 + 1;
  goto LAB_008e0cac;
LAB_008e0ca8:
  lVar40 = lVar40 + 2;
LAB_008e0cac:
  uVar25 = (uint)lVar40;
  if ((int)(local_270._0_4_ - uVar26) <= (int)(uint)lVar40) {
    uVar25 = local_270._0_4_ + ~uVar26;
  }
  if (0 < (int)uVar25) {
    (**(code **)((long)local_140 + 0x18))(&local_140);
    memcpy((void *)((long)ppuVar33 + (ulong)uVar26),local_138,(ulong)uVar25);
    *(undefined1 *)((long)ppuVar33 + (long)(int)(uVar25 + uVar26)) = 0;
  }
LAB_008e0cf8:
  puVar3 = PTR_PTR_04bb2238;
  local_285 = 0;
  local_2b8 = puVar55 + 0x10;
  ppuVar33 = (undefined **)(local_2a8 + 4);
  local_2a8._0_5_ = 0x20;
  local_170 = (undefined *)CONCAT44(local_170._4_4_,uVar8);
  local_2b0 = ppuVar33;
  if (uVar8 == 1) {
    local_1a8[0] = local_1a8[0] & 0xffffffff00000000;
    local_140 = (undefined **)CONCAT44(local_140._4_4_,1);
    puVar16 = (undefined4 *)PTR_DAT_04bb39d8;
    if ((0 < *(int *)(param_1 + 0x31f68)) &&
       (lVar40 = *(long *)(*(long *)(param_1 + 0x31f70) +
                          (ulong)(*(int *)(param_1 + 0x31f68) - 1) * 8), lVar40 != 0)) {
      FUN_008e4050(local_1a8,lVar40 + 0x38);
      puVar16 = (undefined4 *)PTR_DAT_04bb39d8;
    }
    do {
      puVar30 = (uint *)nn::os::GetTlsValue(*puVar16);
      local_140 = (undefined **)CONCAT44(local_140._4_4_,1);
      uVar8 = *puVar30 ^ *puVar30 << 0xb;
      uVar26 = puVar30[3];
      *puVar30 = puVar30[1];
      puVar30[1] = puVar30[2];
      uVar8 = uVar8 >> 8 ^ uVar26 >> 0x13 ^ uVar8 ^ uVar26;
      puVar30[2] = uVar26;
      puVar30[3] = uVar8;
      uVar8 = (int)((ulong)uVar8 * 3 >> 0x20) + 2;
      if (uVar8 < 5) {
        local_170 = (undefined *)CONCAT44(local_170._4_4_,uVar8);
      }
    } while ((uint)local_1a8[0] == (uint)local_170);
    if ((uint)local_170 < 5) {
      ppuVar53 = *(undefined ***)
                  (PTR_s_Complete_None_04bb5948 + ((ulong)local_170 & 0xffffffff) * 8 + 0x58);
    }
    else {
      ppuVar53 = (undefined **)&DAT_0407ebb1;
    }
    if (local_2b0 != ppuVar53) {
      lVar40 = 0;
      do {
        if (*(char *)((long)ppuVar53 + lVar40) == '\0') goto LAB_008e0f98;
        if (*(char *)((long)ppuVar53 + lVar40 + 1) == '\0') {
          lVar40 = lVar40 + 1;
          goto LAB_008e0f98;
        }
        if (*(char *)((long)ppuVar53 + lVar40 + 2) == '\0') {
          lVar40 = lVar40 + 2;
          goto LAB_008e0f98;
        }
        lVar40 = lVar40 + 3;
      } while (lVar40 != 0x80001);
      lVar40 = 0;
LAB_008e0f98:
      iVar21 = (int)lVar40;
      if ((int)local_2a8._0_4_ <= (int)lVar40) {
        iVar21 = local_2a8._0_4_ + -1;
      }
      goto LAB_008e0fa8;
    }
  }
  else if (uVar8 == 0) {
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    ppuVar53 = *(undefined ***)(puVar3 + 8);
    if (ppuVar33 != ppuVar53) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar40 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar40) == '\0') goto LAB_008e0f68;
        lVar51 = *(long *)(puVar3 + 8) + lVar40;
        if (*(char *)(lVar51 + 1) == '\0') {
          lVar40 = lVar40 + 1;
          goto LAB_008e0f68;
        }
        if (*(char *)(lVar51 + 2) == '\0') {
          lVar40 = lVar40 + 2;
          goto LAB_008e0f68;
        }
        lVar40 = lVar40 + 3;
      } while (lVar40 != 0x80001);
      lVar40 = 0;
LAB_008e0f68:
      iVar21 = (int)lVar40;
      if ((int)local_2a8._0_4_ <= (int)lVar40) {
        iVar21 = local_2a8._0_4_ + -1;
      }
      memcpy(ppuVar33,ppuVar53,(long)iVar21);
      *(undefined1 *)((long)ppuVar33 + (long)iVar21) = 0;
    }
  }
  else {
    if (uVar8 < 5) {
      ppuVar53 = *(undefined ***)(PTR_s_Complete_None_04bb5948 + (ulong)uVar8 * 8 + 0x58);
      if (ppuVar33 == ppuVar53) goto LAB_008e0fbc;
    }
    else {
      ppuVar53 = (undefined **)&DAT_0407ebb1;
    }
    lVar40 = 0;
    do {
      if (*(char *)((long)ppuVar53 + lVar40) == '\0') {
LAB_008e0f34:
        iVar21 = (int)lVar40;
joined_r0x008e0f38:
        if (0x1f < iVar21) {
          iVar21 = 0x1f;
        }
        goto LAB_008e0fa8;
      }
      if (*(char *)((long)ppuVar53 + lVar40 + 1) == '\0') {
        lVar40 = lVar40 + 1;
        goto LAB_008e0f34;
      }
      if (*(char *)((long)ppuVar53 + lVar40 + 2) == '\0') {
        iVar21 = (int)lVar40 + 2;
        goto joined_r0x008e0f38;
      }
      lVar40 = lVar40 + 3;
    } while (lVar40 != 0x80001);
    iVar21 = 0;
LAB_008e0fa8:
    ppuVar33 = local_2b0;
    memcpy(local_2b0,ppuVar53,(long)iVar21);
    *(undefined1 *)((long)ppuVar33 + (long)iVar21) = 0;
  }
LAB_008e0fbc:
  sVar12 = *(short *)PTR_DAT_04bb6298;
  if (sVar12 != -1) {
    uVar31 = (ulong)local_140 >> 0x20;
    local_140 = (undefined **)(uVar31 << 0x20);
    puVar30 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
    if (0xff < (uint)(int)sVar12) {
      puVar30 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar30 & 1) != 0) {
      if (uVar6 != 0) {
        local_140 = (undefined **)(uVar31 << 0x20);
        if ((0 < *piVar1) &&
           (lVar40 = *(long *)(*(long *)(param_1 + 0x31870) + (ulong)(*piVar1 - 1) * 8), lVar40 != 0
           )) {
          if (*(char *)(lVar40 + 0x98) != '\0') {
            uVar44 = *(undefined4 *)(lVar40 + 0x94);
            bVar34 = true;
            goto LAB_008e10a0;
          }
          if (*(char *)(lVar40 + 0xa0) != '\0') {
            uVar58 = *(undefined4 *)(lVar40 + 0x9c);
            uVar44 = 0;
            bVar34 = false;
            cVar9 = '\x01';
            goto LAB_008e10a0;
          }
        }
        bVar34 = true;
        uVar44 = 2;
        goto LAB_008e10a0;
      }
      if (uVar7 < 6) {
                    /* WARNING: Could not recover jumptable at 0x008e107c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar31 = (*(code *)(&UNK_008e1080 + (ulong)*(ushort *)(&DAT_0416735c + (ulong)uVar7 * 2) * 4
                           ))();
        return uVar31;
      }
    }
  }
  uVar44 = 0;
  bVar34 = false;
LAB_008e10a0:
  local_2e8 = 0x20;
  local_2c5 = 0;
  puVar3 = PTR_DAT_04bb2a08 + 0x10;
  local_2f8 = puVar3;
  local_2f0 = local_2e4;
  (**(code **)((long)local_280 + 0x18))(&local_280);
  ppuVar33 = local_278;
  if (local_2e4 != local_278) {
    (**(code **)((long)local_280 + 0x18))(&local_280);
    lVar40 = 0;
    do {
      if (*(char *)((long)local_278 + lVar40) == '\0') goto LAB_008e113c;
      if (*(char *)((long)local_278 + lVar40 + 1) == '\0') {
        lVar40 = lVar40 + 1;
        goto LAB_008e113c;
      }
      if (*(char *)((long)local_278 + lVar40 + 2) == '\0') {
        lVar40 = lVar40 + 2;
        goto LAB_008e113c;
      }
      lVar40 = lVar40 + 3;
    } while (lVar40 != 0x80001);
    lVar40 = 0;
LAB_008e113c:
    iVar21 = (int)lVar40;
    if (local_2e8 <= (int)lVar40) {
      iVar21 = local_2e8 + -1;
    }
    memcpy(local_2e4,ppuVar33,(long)iVar21);
    *(undefined1 *)((long)local_2e4 + (long)iVar21) = 0;
  }
  local_2fd = 0;
  local_320 = 0x20;
  local_330 = puVar3;
  local_328 = local_31c;
  local_2f8 = puVar55 + 0x10;
  (**(code **)(local_2b8 + 0x18))(&local_2b8);
  ppuVar33 = local_2b0;
  if (local_31c != local_2b0) {
    (**(code **)(local_2b8 + 0x18))(&local_2b8);
    lVar40 = 0;
    do {
      if (*(char *)((long)local_2b0 + lVar40) == '\0') goto LAB_008e11f0;
      if (*(char *)((long)local_2b0 + lVar40 + 1) == '\0') {
        lVar40 = lVar40 + 1;
        goto LAB_008e11f0;
      }
      if (*(char *)((long)local_2b0 + lVar40 + 2) == '\0') {
        lVar40 = lVar40 + 2;
        goto LAB_008e11f0;
      }
      lVar40 = lVar40 + 3;
    } while (lVar40 != 0x80001);
    lVar40 = 0;
LAB_008e11f0:
    iVar21 = (int)lVar40;
    if (local_320 <= (int)lVar40) {
      iVar21 = local_320 + -1;
    }
    memcpy(local_31c,ppuVar33,(long)iVar21);
    *(undefined1 *)((long)local_31c + (long)iVar21) = 0;
  }
  uVar8 = local_204;
  fVar59 = local_234;
  uVar7 = uStack_238;
  fVar64 = local_23c;
  bVar18 = local_240;
  if (local_240 == false) {
    local_338 = 0;
    uVar15 = 0;
    uVar14 = 0;
    local_398 = 0;
  }
  else {
    local_398 = SUB82(local_248,0);
    local_338 = (undefined4)((ulong)local_248 >> 0x20);
    uVar14 = local_248._2_1_;
    uVar15 = local_248._3_1_;
  }
  local_110._0_4_ = (float)(uint)(uint3)local_110;
  ppuVar33 = (undefined **)(local_130 + 4);
  _local_130 = (undefined **)CONCAT44(auStack_12c._0_4_,0x20);
  puVar3 = PTR_DAT_04bb2a08 + 0x10;
  local_330 = puVar55 + 0x10;
  local_140 = (undefined **)puVar3;
  local_138 = ppuVar33;
  (**(code **)(local_2f8 + 0x18))(&local_2f8);
  ppuVar53 = local_2f0;
  if (ppuVar33 != local_2f0) {
    (**(code **)(local_2f8 + 0x18))(&local_2f8);
    lVar40 = 0;
    do {
      if (*(char *)((long)local_2f0 + lVar40) == '\0') goto LAB_008e12fc;
      if (*(char *)((long)local_2f0 + lVar40 + 1) == '\0') {
        lVar40 = lVar40 + 1;
        goto LAB_008e12fc;
      }
      if (*(char *)((long)local_2f0 + lVar40 + 2) == '\0') {
        lVar40 = lVar40 + 2;
        goto LAB_008e12fc;
      }
      lVar40 = lVar40 + 3;
    } while (lVar40 != 0x80001);
    lVar40 = 0;
LAB_008e12fc:
    iVar21 = (int)lVar40;
    if ((int)local_130 <= (int)lVar40) {
      iVar21 = (int)local_130 + -1;
    }
    memcpy(ppuVar33,ppuVar53,(long)iVar21);
    *(undefined1 *)((long)ppuVar33 + (long)iVar21) = 0;
  }
  local_f8 = 0x20;
  local_d5 = 0;
  puVar55 = PTR_DAT_04bb2028 + 0x10;
  local_140 = (undefined **)puVar55;
  local_108 = puVar3;
  local_100 = (undefined **)&local_f4;
  (**(code **)(local_330 + 0x18))(&local_330);
  ppuVar33 = local_328;
  if ((undefined **)&local_f4 != local_328) {
    (**(code **)(local_330 + 0x18))(&local_330);
    lVar40 = 0;
    do {
      if (*(char *)((long)local_328 + lVar40) == '\0') goto LAB_008e13bc;
      if (*(char *)((long)local_328 + lVar40 + 1) == '\0') {
        lVar40 = lVar40 + 1;
        goto LAB_008e13bc;
      }
      if (*(char *)((long)local_328 + lVar40 + 2) == '\0') {
        lVar40 = lVar40 + 2;
        goto LAB_008e13bc;
      }
      lVar40 = lVar40 + 3;
    } while (lVar40 != 0x80001);
    lVar40 = 0;
LAB_008e13bc:
    iVar21 = (int)lVar40;
    if (local_f8 <= (int)lVar40) {
      iVar21 = local_f8 + -1;
    }
    memcpy(&local_f4,ppuVar33,(long)iVar21);
    *(undefined1 *)((long)&local_f4 + (long)iVar21) = 0;
  }
  local_d0 = uVar8;
  local_cc = 0;
  local_c4 = bVar18 != false;
  if ((bool)local_c4) {
    local_cc = CONCAT44(local_338,CONCAT13(uVar15,CONCAT12(uVar14,local_398)));
  }
  local_c0 = 0;
  if (bVar19) {
    local_c0 = uVar22;
  }
  if (NAN(fVar64)) {
    local_b8 = NAN;
  }
  else {
    local_b4 = uVar7;
    local_b0 = fVar59;
    local_b8 = fVar64;
  }
  local_ac = 0;
  if (bVar34) {
    local_ac = uVar44;
  }
  local_a4 = 0;
  local_a0 = cVar9 != '\0';
  if ((bool)local_a0) {
    local_a4 = uVar58;
  }
  if (NAN(fVar57)) {
    fVar57 = NAN;
  }
  piVar36 = piVar1 + (ulong)uVar6 * 0x1c0;
  if (1 < uVar6) {
    piVar36 = piVar1;
  }
  local_108 = puVar55;
  local_bc = bVar19;
  local_a8 = bVar34;
  local_9c = fVar57;
  if (*piVar36 < piVar36[1]) {
    plVar56 = *(long **)(piVar36 + 4);
    if (plVar56 != (long *)0x0) {
      *(long *)(piVar36 + 4) = *plVar56;
    }
    *(undefined1 *)((long)plVar56 + 0x33) = 0;
    *(undefined4 *)(plVar56 + 2) = 0x20;
    ppuVar33 = (undefined **)((long)plVar56 + 0x14);
    puVar55 = PTR_DAT_04bb2a08 + 0x10;
    *plVar56 = (long)puVar55;
    plVar56[1] = (long)ppuVar33;
    (**(code **)((long)local_140 + 0x18))(&local_140);
    ppuVar53 = local_138;
    if (ppuVar33 != local_138) {
      (**(code **)((long)local_140 + 0x18))(&local_140);
      lVar40 = 0;
      do {
        if (*(char *)((long)local_138 + lVar40) == '\0') goto LAB_008e156c;
        if (*(char *)((long)local_138 + lVar40 + 1) == '\0') {
          lVar40 = lVar40 + 1;
          goto LAB_008e156c;
        }
        if (*(char *)((long)local_138 + lVar40 + 2) == '\0') {
          lVar40 = lVar40 + 2;
          goto LAB_008e156c;
        }
        lVar40 = lVar40 + 3;
      } while (lVar40 != 0x80001);
      lVar40 = 0;
LAB_008e156c:
      iVar21 = (int)lVar40;
      if ((int)plVar56[2] <= (int)lVar40) {
        iVar21 = (int)plVar56[2] + -1;
      }
      memcpy(ppuVar33,ppuVar53,(long)iVar21);
      *(undefined1 *)((long)ppuVar33 + (long)iVar21) = 0;
    }
    puVar3 = PTR_DAT_04bb2028;
    ppuVar33 = (undefined **)((long)plVar56 + 0x4c);
    plVar56[7] = (long)puVar55;
    plVar56[8] = (long)ppuVar33;
    *(undefined4 *)(plVar56 + 9) = 0x20;
    *(undefined1 *)((long)plVar56 + 0x6b) = 0;
    *plVar56 = (long)(puVar3 + 0x10);
    (**(code **)(local_108 + 0x18))(&local_108);
    ppuVar53 = local_100;
    if (ppuVar33 != local_100) {
      (**(code **)(local_108 + 0x18))(&local_108);
      lVar40 = 0;
      do {
        if (*(char *)((long)local_100 + lVar40) == '\0') goto LAB_008e162c;
        if (*(char *)((long)local_100 + lVar40 + 1) == '\0') {
          lVar40 = lVar40 + 1;
          goto LAB_008e162c;
        }
        if (*(char *)((long)local_100 + lVar40 + 2) == '\0') {
          lVar40 = lVar40 + 2;
          goto LAB_008e162c;
        }
        lVar40 = lVar40 + 3;
      } while (lVar40 != 0x80001);
      lVar40 = 0;
LAB_008e162c:
      iVar21 = (int)lVar40;
      if ((int)plVar56[9] <= (int)lVar40) {
        iVar21 = (int)plVar56[9] + -1;
      }
      memcpy(ppuVar33,ppuVar53,(long)iVar21);
      *(undefined1 *)((long)ppuVar33 + (long)iVar21) = 0;
    }
    plVar56[7] = (long)(puVar3 + 0x10);
    *(undefined8 *)((long)plVar56 + 0x74) = 0;
    *(undefined1 *)((long)plVar56 + 0x7c) = 0;
    *(uint *)(plVar56 + 0xe) = local_d0;
    if (local_c4 != '\0') {
      *(undefined2 *)((long)plVar56 + 0x74) = (undefined2)local_cc;
      *(undefined1 *)((long)plVar56 + 0x76) = local_cc._2_1_;
      *(undefined1 *)((long)plVar56 + 0x77) = local_cc._3_1_;
      *(undefined4 *)(plVar56 + 0xf) = local_cc._4_4_;
      *(undefined1 *)((long)plVar56 + 0x7c) = 1;
    }
    *(undefined4 *)(plVar56 + 0x10) = 0;
    *(undefined1 *)((long)plVar56 + 0x84) = 0;
    if (local_bc != '\0') {
      *(uint *)(plVar56 + 0x10) = local_c0;
      *(undefined1 *)((long)plVar56 + 0x84) = 1;
    }
    if (NAN(local_b8)) {
      *(undefined4 *)(plVar56 + 0x11) = 0x7fc00000;
    }
    else {
      *(float *)(plVar56 + 0x11) = local_b8;
      *(uint *)((long)plVar56 + 0x8c) = local_b4;
      *(float *)(plVar56 + 0x12) = local_b0;
    }
    *(undefined4 *)((long)plVar56 + 0x94) = 0;
    *(undefined1 *)(plVar56 + 0x13) = 0;
    if (local_a8 != '\0') {
      *(undefined4 *)((long)plVar56 + 0x94) = local_ac;
      *(undefined1 *)(plVar56 + 0x13) = 1;
    }
    *(undefined4 *)((long)plVar56 + 0x9c) = 0;
    *(undefined1 *)(plVar56 + 0x14) = 0;
    if (local_a0 != '\0') {
      *(undefined4 *)((long)plVar56 + 0x9c) = local_a4;
      *(undefined1 *)(plVar56 + 0x14) = 1;
    }
    fVar59 = local_9c;
    if (NAN(local_9c)) {
      fVar59 = NAN;
    }
    *(float *)((long)plVar56 + 0xa4) = fVar59;
    if (*piVar36 < piVar36[1]) {
      *(long **)(*(long *)(piVar36 + 2) + (long)*piVar36 * 8) = plVar56;
      *piVar36 = *piVar36 + 1;
    }
  }
  if (bVar34) {
    if (*(char *)(param_1 + 0x37e10) == '\0') {
      *(undefined1 *)(param_1 + 0x37e10) = 1;
    }
    *(undefined4 *)(param_1 + 0x37e0c) = uVar44;
  }
  else if (*(char *)(param_1 + 0x37e10) != '\0') {
    *(undefined1 *)(param_1 + 0x37e10) = 0;
  }
  if (cVar9 == '\0') {
    if (*(char *)(param_1 + 0x37e18) != '\0') {
      *(undefined1 *)(param_1 + 0x37e18) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x37e18) == '\0') {
      *(undefined1 *)(param_1 + 0x37e18) = 1;
    }
    *(undefined4 *)(param_1 + 0x37e14) = uVar58;
  }
  *(float *)(param_1 + 0x37e1c) = fVar57;
  if (!NAN(fVar64)) {
    *PTR_DAT_04bb59e8 = (local_204 & 0xfffffffe) == 2;
    FUN_008c4100(param_1,&local_280,&local_2b8,&local_23c,0,0);
    if (0.0 <= fVar63) {
      *(int *)(param_1 + 0x30954) = (int)fVar63;
    }
    *(undefined1 **)(param_1 + 0x37f48) = &LAB_008e4514;
    *(undefined8 *)(param_1 + 0x37f50) = 0;
    *(undefined8 *)(param_1 + 0x37f38) = &PTR_LAB_049260d0;
    *(long *)(param_1 + 0x37f40) = param_1 + 0x31860;
  }
  return (ulong)!NAN(fVar64);
}

