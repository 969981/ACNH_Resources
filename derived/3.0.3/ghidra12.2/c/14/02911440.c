
void FUN_02911440(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  char *pcVar7;
  char *__src;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  short *psVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined *local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
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
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  char *local_b8;
  
  nn::os::GetSystemTick();
  local_1d8 = (undefined *)((ulong)local_1d8._4_4_ << 0x20);
  nn::os::GetSystemTick();
  local_1d0 = CONCAT17(local_1d0._7_1_,0x1010000);
  local_1c8 = 0;
  uStack_1c4 = 0;
  local_1c0 = 0;
  uStack_1bc = 0;
  local_1b8 = 0;
  uStack_1b4 = 0;
  local_1b0 = 0;
  uStack_1ac = 0;
  local_1a8 = (undefined *)0x0;
  local_1a0 = (char *)0x0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_1d8 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  psVar15 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  if (*psVar15 == 0) {
    local_c8 = (ulong)local_1d8;
    if ((char)((ulong)local_1d8 >> 0x20) < '\x05') {
      lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
      local_c0 = (undefined *)(lVar10 + -0x15180);
      local_c8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
    }
    psVar15 = (short *)&local_c8;
    uVar13 = local_c8 >> 0x30;
    local_c8._0_6_ = CONCAT24(5,(undefined4)local_c8);
    local_c8 = CONCAT26((short)uVar13,(undefined6)local_c8) & 0xff00ffffffffffff;
  }
  local_1d0 = *(undefined8 *)psVar15;
  FUN_00ad4600(*(undefined8 *)PTR_DAT_04bb64a0,&local_1d8,1);
  uVar14 = DAT_04c487c8;
  puVar4 = PTR_DAT_04bb2720;
  if (DAT_055c116c == '\0') {
    DAT_055c91a4 = DAT_055c1174;
    DAT_055c91ac = DAT_055c117c;
    local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,DAT_055c1184);
    DAT_055c91a0 = DAT_055c1180;
    if (((*PTR_DAT_04bb3998 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar8 != 0)) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
    }
    uVar14 = (uint)local_1d8;
    if (*(uint *)PTR_DAT_04bb3990 <= (uint)local_1d8) {
      uVar14 = 0;
    }
    DAT_055c91b0 = *(undefined4 *)(*(long *)(PTR_DAT_04bb3990 + 8) + (long)(int)uVar14 * 4);
    goto LAB_0291169c;
  }
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    lVar16 = 0;
    if (DAT_04c487c8 != 0xffffffff) goto LAB_02911588;
LAB_029119b4:
    if (lVar16 != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar8 = FUN_006bd550(*puVar11,0);
      if (((iVar8 == 0x758f7eaf) && (*(long *)puVar4 != 0)) &&
         ((lVar10 = *(long *)(*(long *)puVar4 + 0x330), lVar10 != 0 &&
          ((*(int *)(lVar10 + 0x260) != 0 && (lVar10 = *(long *)(lVar10 + 600), lVar10 != 0)))))) {
LAB_02911a10:
        if (lVar10 + -0x40 != 0) {
          uVar19 = FUN_02932f48(lVar10 + -0x40,0);
          DAT_055c91a4 = CONCAT44(param_2,uVar19);
          fVar20 = (float)NEON_ucvtf(*(undefined4 *)(lVar10 + -0x20));
          DAT_055c91a0 = (undefined4)(long)(fVar20 * 11930465.0);
          DAT_055c91b0 = *(undefined4 *)(lVar10 + -0x14);
          local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,DAT_055c91b0);
          DAT_055c91ac = param_3;
        }
      }
    }
  }
  else {
    lVar16 = *(long *)(lVar10 + 0x330);
    if (DAT_04c487c8 == 0xffffffff) goto LAB_029119b4;
LAB_02911588:
    if (lVar16 != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar8 = FUN_006bd550(*puVar11,0);
      if ((((iVar8 != 0x758f7eaf) || (*(long *)puVar4 == 0)) ||
          (lVar10 = *(long *)(*(long *)puVar4 + 0x330), lVar10 == 0)) ||
         (*(uint *)(lVar10 + 0x260) <= uVar14)) goto LAB_0291169c;
      uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
      lVar10 = lVar10 + 0x250;
      uVar17 = uVar14 + 1;
      uVar1 = uVar17 & 3;
      if (2 < uVar14) {
        uVar17 = uVar17 & 0xfffffffc;
        do {
          uVar17 = uVar17 - 4;
          lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(lVar10 + 8) + 8) + 8) + 8);
        } while (uVar17 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar10 = *(long *)(lVar10 + 8);
      }
      if (lVar10 == 0) goto LAB_0291169c;
      goto LAB_02911a10;
    }
  }
LAB_0291169c:
  uVar6 = DAT_04c487d4;
  uVar13 = (ulong)(short)DAT_04c487d4;
  if (uVar13 == 0xffffffffffffffff) {
    uVar14 = 0;
  }
  else {
    local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,2);
    puVar2 = &DAT_055c11c8 + (uVar13 & 0xffffffff) * 2;
    if (0xff < DAT_04c487d4) {
      puVar2 = &DAT_055c11c8;
    }
    uVar14 = *puVar2 >> 2 & 1;
  }
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x78) != 0) {
    uVar19 = 0x3f800000;
    if (uVar14 == 0) {
      uVar19 = 0;
    }
    *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x78) + 0x3c) = uVar19;
  }
  puVar3 = PTR_DAT_04bb6270;
  if (uVar6 == 0xffff) {
LAB_0291178c:
    if (*(long *)PTR_DAT_04bb6270 != 0) {
      if ((*(byte *)(*(long *)PTR_DAT_04bb6270 + 0x780) & 1) != 0) {
        *(undefined1 *)(param_4 + 0xf0) = 1;
      }
      goto LAB_029117a4;
    }
  }
  else {
    local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,0xf);
    puVar2 = &DAT_055c11c8 + (uVar13 & 0xffffffff) * 2;
    if (0xff < uVar6) {
      puVar2 = &DAT_055c11c8;
    }
    if (((*puVar2 >> 0xf & 1) == 0) ||
       (local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,0x19), (*puVar2 >> 0x19 & 1) != 0))
    goto LAB_0291178c;
LAB_029117a4:
    if ((*(long *)puVar3 != 0) && ((*(byte *)(*(long *)puVar3 + 0x780) >> 3 & 1) != 0)) {
      *(undefined1 *)((long)param_4 + 0x781) = 1;
    }
  }
  if (*(long *)PTR_DAT_04bb47d0 != 0) {
    FUN_035af140();
  }
  *(undefined4 *)(*(long *)PTR_DAT_04bb4c80 + 0x10) = 0;
  FUN_00a8a4cc(*(undefined8 *)PTR_DAT_04bb30a0);
  puVar5 = PTR_DAT_04bb2d88;
  puVar3 = PTR_DAT_04bb27c0;
  local_1c8 = 0;
  local_1d8 = (undefined *)0x1100000000;
  local_1d0 = 0;
  local_1a0 = (char *)((long)&local_198 + 4);
  uStack_1c4 = 0x3f800000;
  local_1c0 = 0;
  local_118._0_4_ = (uint)(uint3)local_118;
  local_198 = CONCAT35(local_198._5_3_,0x80);
  local_1a8 = PTR_DAT_04bb2d88 + 0x10;
  local_108 = 0;
  local_110._4_4_ = (uint)((ulong)local_110 >> 0x20) & 0xffff0000;
  local_110._0_4_ = 7;
  uStack_1bc = 0;
  local_1b8 = 0;
  uStack_1b4 = 0;
  local_1b0 = 0;
  FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_1d8,0,0);
  if (*DAT_055c19d0 != '\0') {
    lVar10 = *(long *)puVar3;
    if (lVar10 != 0) {
      local_1a8 = puVar5 + 0x10;
      local_118._0_4_ = (uint)(uint3)local_118;
      local_1d8 = (undefined *)0x3700000000;
      local_1d0 = 0;
      uStack_1c4 = 0x3f800000;
      local_1c0 = 0;
      local_1a0 = (char *)((long)&local_198 + 4);
      local_198 = CONCAT35(local_198._5_3_,0x80);
      local_108 = 0;
      local_110._4_4_ = local_110._4_4_ & 0xffff0000;
      uStack_1bc = 0;
      local_1b8 = 0;
      uStack_1b4 = 0;
      local_1b0 = 0;
      local_1c8 = 0;
      local_110._0_4_ = 7;
      (**(code **)(DAT_055c19c8 + 0x18))(&DAT_055c19c8);
      pcVar7 = DAT_055c19d0;
      (**(code **)(DAT_055c1a20 + 0x18))(&DAT_055c1a20);
      FUN_0071b954(&local_c0,"%s/%s",pcVar7,DAT_055c1a28);
      pcVar7 = local_1a0;
      (**(code **)(local_c0 + 0x18))(&local_c0);
      __src = local_b8;
      if (pcVar7 != local_b8) {
        (**(code **)(local_c0 + 0x18))(&local_c0);
        lVar16 = 0;
        do {
          if (local_b8[lVar16] == '\0') {
LAB_02911ab4:
            iVar8 = (int)lVar16;
            goto LAB_02911ab8;
          }
          if (local_b8[lVar16 + 1] == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_02911ab4;
          }
          if (local_b8[lVar16 + 2] == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_02911ab4;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        iVar8 = 0;
LAB_02911ab8:
        if ((int)local_198 <= iVar8) {
          iVar8 = (int)local_198 + -1;
        }
        memcpy(pcVar7,__src,(long)iVar8);
        pcVar7[iVar8] = '\0';
      }
      if (DAT_055c1a78 == '\0') {
        uStack_1bc = 1;
      }
      else {
        if ((long)(short)DAT_04c487d4 == 0xffffffffffffffff) {
LAB_02911b4c:
          local_c0 = PTR_DAT_04bb2020 + 0x10;
          local_b8 = "ReserveFaderKeep";
          iVar8 = FUN_02743000(&local_c0);
          if (iVar8 == 0) {
            uStack_1bc = 2;
            goto LAB_02911b84;
          }
        }
        else {
          local_c0 = (undefined *)CONCAT44(local_c0._4_4_,10);
          puVar2 = &DAT_055c11c8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 2;
          if (0xff < DAT_04c487d4) {
            puVar2 = &DAT_055c11c8;
          }
          if ((*puVar2 >> 10 & 1) == 0) goto LAB_02911b4c;
        }
        uStack_1bc = 6;
      }
LAB_02911b84:
      local_1b8 = (uint)DAT_055c1a7c << 5;
      FUN_007402e0(lVar10,&local_1d8,(ulong)local_1d8 & 0xffffffff,1);
    }
    *DAT_055c19d0 = '\0';
    *DAT_055c1a28 = 0;
    DAT_055c1a78 = '\0';
    DAT_055c1a7c = 0;
  }
  FUN_020b0e58(*(undefined8 *)PTR_DAT_04bb3968);
  FUN_021b04b0(&DAT_053fe348);
  lVar10 = *(long *)puVar4;
  iVar8 = 0;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x330) == 0) {
      iVar8 = 0;
    }
    else {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar9 = FUN_006bd550(*puVar11,0);
      iVar8 = 0;
      if (iVar9 == 0x758f7eaf) {
        iVar8 = 0;
        if (*(long *)puVar4 != 0) {
          lVar10 = *(long *)(*(long *)puVar4 + 0x330);
          iVar8 = 0;
          if (lVar10 != 0) {
            iVar8 = *(int *)(lVar10 + 0x244);
          }
        }
      }
    }
  }
  if ((((*(int *)(PTR_DAT_04bbe4b0 + 0xc0) == iVar8) &&
       (lVar10 = *(long *)PTR_DAT_04bb27d0, lVar10 != 0)) &&
      ((*(long *)(lVar10 + 0x10) == 0 ||
       (local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000),
       (*(uint *)(PTR_DAT_04bc1240 + 8) & 1) == 0)))) &&
     ((*(uint *)(lVar10 + 0x80) < 2 && (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)))) {
    FUN_021c75a4(&DAT_053fe348);
    FUN_021c7e60(&DAT_053fe348);
    FUN_021c8460(&DAT_053fe348);
  }
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 == 0) goto LAB_02911dd0;
  puVar11 = *(undefined8 **)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
    lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
    if (lVar10 == 0) goto LAB_02911dd0;
    lVar10 = lVar10 + 0x70;
  }
  else if (((puVar11 == (undefined8 *)0x0) || ((long *)puVar11[0x26] == (long *)0x0)) ||
          (lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar10 == 0)) goto LAB_02911dd0;
  lVar16 = *(long *)(lVar10 + 0xd0);
  if (lVar16 == 0) {
    FUN_027eaa00(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0),0);
    goto LAB_02911dd0;
  }
  if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
    uVar13 = 0;
    plVar12 = *(long **)(lVar16 + 0x20);
joined_r0x02911f8c:
    if (plVar12 != (long *)0x0) {
      local_1d8 = *(undefined **)(lVar10 + 0xb0);
      local_1d0 = *(undefined8 *)(lVar10 + 0xb8);
      local_1c8 = 0x1e3388;
      uStack_1c4 = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_1d8);
    }
  }
  else {
    uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
    uVar13 = uVar13 & 0xffffffff;
    if (*(long *)(lVar10 + 0xd0) != 0) {
      plVar12 = *(long **)(*(long *)(lVar10 + 0xd0) + 0x20);
      goto joined_r0x02911f8c;
    }
  }
  FUN_027eaa00(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0),0);
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar10 + 0xd0) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0xd0) + 0x18), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
LAB_02911dd0:
  (**(code **)(*param_4 + 0x70))(param_4);
  puVar3 = PTR_DAT_04bb2268;
  lVar10 = *(long *)PTR_DAT_04bb2268;
  if (lVar10 != 0) {
    local_1d8 = PTR_DAT_04bb4ae8 + 0x10;
    local_1d0 = 0;
    local_1a8 = (undefined *)0x0;
    local_1c8 = 0;
    uStack_1c4 = 0;
    local_1c0 = 0;
    uStack_1bc = 0;
    local_1b8 = 0;
    uStack_1b4 = 0;
    local_1b0 = 0;
    uStack_1ac = 0;
    FUN_007d1530(&local_1d8,*(undefined4 *)(PTR_DAT_04bc3a80 + 0x38));
    *(ulong *)(lVar10 + 0xd4) = CONCAT44(uStack_1bc,local_1c0);
    *(ulong *)(lVar10 + 0xdc) = CONCAT44(uStack_1b4,local_1b8);
    *(ulong *)(lVar10 + 0xe4) = CONCAT44(uStack_1ac,local_1b0);
    *(undefined **)(lVar10 + 0xec) = local_1a8;
    *(undefined8 *)(lVar10 + 0xc4) = local_1d0;
    *(ulong *)(lVar10 + 0xcc) = CONCAT44(uStack_1c4,local_1c8);
    lVar16 = *(long *)puVar3;
    lVar18 = *(long *)PTR_DAT_04bb3350;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(lVar18 + 0x68));
    if ((*(long *)(lVar18 + 0x60) != lVar10) &&
       (uVar13 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar13 & 1) == 0)) {
      *(undefined1 *)(lVar16 + 0xb1) = 1;
    }
  }
  lVar10 = *(long *)PTR_DAT_04bc1530;
  if ((lVar10 != 0) && ((*(ushort *)(lVar10 + 0x6e8) & 1) == 0)) {
    lVar16 = *(long *)puVar4;
    if (lVar16 == 0) {
      puVar11 = &DAT_055c04a0;
    }
    else {
      puVar11 = &DAT_055c04a0;
      if (*(long *)(lVar16 + 0x330) != 0) {
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
        iVar8 = FUN_006bd550(*puVar11,0);
        puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar11 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar11 + 7) == 0x41c7d05) {
      FUN_036ec830(lVar10);
    }
  }
  if (*(long *)PTR_DAT_04bb4e28 != 0) {
    FUN_0371ad20();
  }
  if (*(long *)PTR_DAT_04bc3a50 != 0) {
    FUN_036a0108();
  }
  if (*(long *)PTR_DAT_04bb2800 != 0) {
    FUN_0206f900();
  }
  DAT_055c116c = 1;
  return;
}

