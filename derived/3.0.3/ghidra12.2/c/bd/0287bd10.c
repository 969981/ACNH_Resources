
void FUN_0287bd10(short *param_1,long param_2)

{
  undefined2 *puVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  short sVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  undefined *puVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  void *pvVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  undefined8 *puVar25;
  int iVar26;
  uint *puVar27;
  int iVar28;
  uint *puVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong uVar33;
  ulong *puVar34;
  undefined *puVar35;
  long *plVar36;
  undefined8 local_2d50;
  undefined8 local_2d48;
  undefined8 *local_2d40;
  long local_2d38;
  uint local_2d30;
  byte local_2d2c;
  undefined8 local_2d28;
  undefined8 **local_2d20;
  uint local_2d18;
  uint uStack_2d14;
  uint local_25cc;
  uint local_25c8;
  uint local_25c4;
  int local_25c0;
  undefined8 local_25b8;
  undefined8 *local_25b0;
  uint local_25a8;
  byte local_25a4;
  uint local_1e5c;
  uint local_1e58;
  uint local_1e54;
  int local_1e50;
  int local_1e48;
  int local_1e44;
  uint local_1e40;
  int local_1e3c;
  undefined8 local_1e38;
  undefined1 *local_1e30 [234];
  uint local_16dc;
  uint local_16d8;
  uint local_16d4;
  int local_16d0;
  undefined *local_16c8;
  undefined8 local_16c0;
  uint *local_16b8;
  uint local_f6c;
  uint local_f68;
  uint local_f64;
  int local_f60;
  undefined8 local_f58;
  char *local_f50 [234];
  uint local_7fc;
  uint local_7f8;
  uint local_7f4;
  int local_7f0;
  undefined1 local_7e4 [4];
  undefined8 local_7e0;
  ulong local_7d8;
  undefined8 local_7d0;
  undefined8 **local_7c8;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar34 = (ulong *)(param_2 + 0x10);
  local_7d8 = *puVar34;
  FUN_00a81090(&local_7d8);
  local_7e0 = *(undefined8 *)(param_2 + 0x18);
  FUN_00a81090(&local_7e0);
  puVar35 = PTR_DAT_04bb2020;
  local_f50[0] = "GrowUpAfterPatch2_0";
  local_f58 = PTR_DAT_04bb2020 + 0x10;
  uVar17 = FUN_0273f0a0(&local_f58);
  plVar36 = (long *)PTR_DAT_04bb43c0;
  if ((uVar17 & 1) != 0) {
    lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_7e0);
    lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_7d8);
    if (lVar18 <= lVar19) {
      lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_7d8);
      if (lVar19 == lVar18) goto LAB_0287f200;
    }
  }
  local_f50[0] = "SloRecommendbush";
  local_f58 = puVar35 + 0x10;
  FUN_0274e338(&local_f58,0);
  local_7e4[0] = 0;
  FUN_01b02920(local_7e4,puVar34,0);
  local_f58 = PTR_DAT_04bbfe60 + 0x10;
  memset(local_f50,0,0x754);
  uVar15 = nn::os::GetSystemTick();
  local_7fc = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
  local_7f8 = (local_7fc ^ local_7fc >> 0x1e) * 0x6c078965 + 2;
  local_7f4 = (local_7f8 ^ local_7f8 >> 0x1e) * 0x6c078965 + 3;
  local_7f0 = (local_7f4 ^ local_7f4 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)(local_f58 + 0x18))(&local_f58);
  memset(pvVar20,0,0x754);
  pvVar20 = (void *)(**(code **)(local_f58 + 0x18))(&local_f58);
  memset(pvVar20,0,0x754);
  uVar15 = 0;
  puVar35 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar18 = *plVar36;
    puVar1 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar15 << 0x20) >> 0x1d));
    uVar16 = FUN_0277d6c4(puVar1);
    lVar19 = *plVar36;
    if (lVar19 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar16 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
        local_16b8 = (uint *)0x0;
        local_16c0 = (char *)CONCAT44(*(undefined4 *)(param_1 + (long)(int)uVar15 * 4 + 2),
                                      CONCAT22(param_1[(long)(int)uVar15 * 4 + 1],*puVar1));
        local_16c8 = puVar35;
        uVar16 = FUN_0277d6c4(&local_16c0);
        if (*plVar36 == 0) {
LAB_0287c0a4:
          local_1e38 = (undefined **)CONCAT44(local_1e38._4_4_,0x4f);
          uVar16 = 0xbc;
        }
        else {
          lVar18 = *(long *)(lVar19 + 0x57e58);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar16) ||
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar16 * 8) == 0)) goto LAB_0287c0a4;
          lVar18 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(puVar1);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar16) ||
             (puVar27 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar16 * 8),
             puVar27 == (uint *)0x0)) goto LAB_0287c0a4;
          uVar16 = 0;
          local_1e38 = (undefined **)CONCAT44(local_1e38._4_4_,0x4f);
          uVar5 = *puVar27;
          local_16b8 = puVar27;
          if ((uVar5 != 0) && (puVar27 != (uint *)(ulong)uVar5)) {
            puVar29 = (uint *)((long)puVar27 - (long)(ulong)uVar5);
            uVar16 = 0;
            if (*puVar29 != 0) {
              uVar16 = puVar29[1];
              if ((uVar16 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
                lVar18 = 0xc;
                if (*(char *)((long)puVar29 + 10) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar29 + lVar18 + (ulong)(ushort)puVar29[2] * 8;
                if (lVar18 != 0) {
                  uVar5 = 0;
                  if ((ulong)uVar16 != 0) {
                    uVar5 = (uint)((ulong)((long)puVar27 - lVar18) / (ulong)uVar16);
                  }
                  if (*puVar29 <= uVar5) {
                    uVar5 = 0xffffffff;
                  }
                  if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar16 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
                     uVar16 < 0xbd)) goto LAB_0287c0b0;
                }
              }
              uVar16 = 0;
            }
          }
        }
LAB_0287c0b0:
        local_25b8 = (undefined **)CONCAT44(local_25b8._4_4_,uVar16);
        if (uVar16 == (uint)local_1e38) {
          FUN_0277dedc(puVar1);
          lVar18 = (**(code **)(local_f58 + 0x18))(&local_f58);
          uVar16 = FUN_0277d6c4(puVar1);
          if ((uVar16 >> 3 & 0x1fff) < 0x753) {
            lVar19 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
            *(uint *)(lVar18 + lVar19) = *(uint *)(lVar18 + lVar19) | 1 << (ulong)(uVar16 & 0x1f);
          }
        }
      }
    }
    puVar13 = PTR_DAT_04bb37e0;
    uVar15 = uVar15 + 1;
  } while (uVar15 != 0x20);
  sVar9 = *(short *)PTR_DAT_04bb37e0;
  *param_1 = sVar9;
  param_1[4] = sVar9;
  param_1[8] = sVar9;
  param_1[0xc] = sVar9;
  param_1[0x10] = sVar9;
  param_1[0x14] = sVar9;
  param_1[0x18] = sVar9;
  param_1[0x1c] = sVar9;
  param_1[0x20] = sVar9;
  param_1[0x24] = sVar9;
  uVar7 = puVar13[2];
  param_1[0x28] = sVar9;
  param_1[0x2c] = sVar9;
  param_1[0x30] = sVar9;
  param_1[0x34] = sVar9;
  param_1[0x38] = sVar9;
  param_1[0x3c] = sVar9;
  param_1[0x40] = sVar9;
  param_1[0x44] = sVar9;
  param_1[0x48] = sVar9;
  param_1[0x4c] = sVar9;
  param_1[0x50] = sVar9;
  param_1[0x54] = sVar9;
  param_1[0x58] = sVar9;
  param_1[0x5c] = sVar9;
  param_1[0x60] = sVar9;
  sVar9 = *(short *)puVar13;
  *(undefined1 *)(param_1 + 1) = uVar7;
  uVar8 = puVar13[3];
  *(undefined1 *)(param_1 + 5) = uVar7;
  *(undefined1 *)(param_1 + 9) = uVar7;
  *(undefined1 *)(param_1 + 0xd) = uVar7;
  *(undefined1 *)(param_1 + 0x11) = uVar7;
  *(undefined1 *)(param_1 + 0x15) = uVar7;
  *(undefined1 *)(param_1 + 0x19) = uVar7;
  *(undefined1 *)(param_1 + 0x1d) = uVar7;
  *(undefined1 *)(param_1 + 0x21) = uVar7;
  *(undefined1 *)(param_1 + 0x25) = uVar7;
  *(undefined1 *)(param_1 + 0x29) = uVar7;
  *(undefined1 *)(param_1 + 0x2d) = uVar7;
  *(undefined1 *)(param_1 + 0x31) = uVar7;
  *(undefined1 *)(param_1 + 0x35) = uVar7;
  *(undefined1 *)(param_1 + 0x39) = uVar7;
  *(undefined1 *)(param_1 + 0x3d) = uVar7;
  *(undefined1 *)(param_1 + 0x41) = uVar7;
  *(undefined1 *)(param_1 + 0x45) = uVar7;
  *(undefined1 *)(param_1 + 0x49) = uVar7;
  *(undefined1 *)(param_1 + 0x4d) = uVar7;
  *(undefined1 *)(param_1 + 0x51) = uVar7;
  *(undefined1 *)(param_1 + 0x55) = uVar7;
  *(undefined1 *)(param_1 + 0x59) = uVar7;
  *(undefined1 *)((long)param_1 + 3) = uVar8;
  uVar6 = *(undefined4 *)(puVar13 + 4);
  *(undefined1 *)((long)param_1 + 0xb) = uVar8;
  *(undefined1 *)((long)param_1 + 0x13) = uVar8;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar8;
  *(undefined1 *)((long)param_1 + 0x23) = uVar8;
  *(undefined1 *)((long)param_1 + 0x2b) = uVar8;
  *(undefined1 *)((long)param_1 + 0x33) = uVar8;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar8;
  *(undefined1 *)((long)param_1 + 0x43) = uVar8;
  *(undefined1 *)((long)param_1 + 0x4b) = uVar8;
  *(undefined1 *)((long)param_1 + 0x53) = uVar8;
  *(undefined1 *)((long)param_1 + 0x5b) = uVar8;
  *(undefined1 *)((long)param_1 + 99) = uVar8;
  *(undefined1 *)((long)param_1 + 0x6b) = uVar8;
  *(undefined4 *)(param_1 + 2) = uVar6;
  *(undefined4 *)(param_1 + 6) = uVar6;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)(param_1 + 0xe) = uVar6;
  *(undefined4 *)(param_1 + 0x12) = uVar6;
  *(undefined4 *)(param_1 + 0x16) = uVar6;
  *(undefined4 *)(param_1 + 0x1a) = uVar6;
  *(undefined4 *)(param_1 + 0x1e) = uVar6;
  *(undefined4 *)(param_1 + 0x22) = uVar6;
  *(undefined4 *)(param_1 + 0x26) = uVar6;
  *(undefined4 *)(param_1 + 0x2a) = uVar6;
  *(undefined4 *)(param_1 + 0x2e) = uVar6;
  *(undefined4 *)(param_1 + 0x32) = uVar6;
  *(undefined4 *)(param_1 + 0x36) = uVar6;
  *(undefined1 *)((long)param_1 + 0x73) = uVar8;
  *(undefined4 *)(param_1 + 0x3a) = uVar6;
  *(undefined1 *)((long)param_1 + 0x7b) = uVar8;
  *(undefined4 *)(param_1 + 0x3e) = uVar6;
  *(undefined1 *)((long)param_1 + 0x83) = uVar8;
  *(undefined4 *)(param_1 + 0x42) = uVar6;
  *(undefined1 *)((long)param_1 + 0x8b) = uVar8;
  *(undefined4 *)(param_1 + 0x46) = uVar6;
  *(undefined1 *)((long)param_1 + 0x93) = uVar8;
  *(undefined4 *)(param_1 + 0x4a) = uVar6;
  *(undefined1 *)((long)param_1 + 0x9b) = uVar8;
  *(undefined4 *)(param_1 + 0x4e) = uVar6;
  *(undefined1 *)((long)param_1 + 0xa3) = uVar8;
  *(undefined4 *)(param_1 + 0x52) = uVar6;
  *(undefined1 *)((long)param_1 + 0xab) = uVar8;
  *(undefined4 *)(param_1 + 0x56) = uVar6;
  *(undefined1 *)((long)param_1 + 0xb3) = uVar8;
  *(undefined4 *)(param_1 + 0x5a) = uVar6;
  *(undefined1 *)(param_1 + 0x5d) = uVar7;
  *(undefined1 *)((long)param_1 + 0xbb) = uVar8;
  *(undefined4 *)(param_1 + 0x5e) = uVar6;
  *(undefined1 *)(param_1 + 0x61) = uVar7;
  uVar7 = puVar13[2];
  *(undefined1 *)((long)param_1 + 0xc3) = uVar8;
  uVar8 = puVar13[3];
  *(undefined4 *)(param_1 + 0x62) = uVar6;
  uVar6 = *(undefined4 *)(puVar13 + 4);
  param_1[100] = sVar9;
  *(undefined1 *)(param_1 + 0x65) = uVar7;
  *(undefined1 *)((long)param_1 + 0xcb) = uVar8;
  *(undefined4 *)(param_1 + 0x66) = uVar6;
  param_1[0x68] = sVar9;
  *(undefined1 *)(param_1 + 0x69) = uVar7;
  *(undefined1 *)((long)param_1 + 0xd3) = uVar8;
  *(undefined4 *)(param_1 + 0x6a) = uVar6;
  param_1[0x6c] = sVar9;
  *(undefined1 *)(param_1 + 0x6d) = uVar7;
  *(undefined1 *)((long)param_1 + 0xdb) = uVar8;
  *(undefined4 *)(param_1 + 0x6e) = uVar6;
  param_1[0x70] = sVar9;
  *(undefined1 *)(param_1 + 0x71) = uVar7;
  *(undefined1 *)((long)param_1 + 0xe3) = uVar8;
  *(undefined4 *)(param_1 + 0x72) = uVar6;
  param_1[0x74] = sVar9;
  *(undefined1 *)(param_1 + 0x75) = uVar7;
  *(undefined1 *)((long)param_1 + 0xeb) = uVar8;
  *(undefined4 *)(param_1 + 0x76) = uVar6;
  param_1[0x78] = sVar9;
  *(undefined1 *)(param_1 + 0x79) = uVar7;
  *(undefined1 *)((long)param_1 + 0xf3) = uVar8;
  *(undefined4 *)(param_1 + 0x7a) = uVar6;
  param_1[0x7c] = sVar9;
  *(undefined1 *)(param_1 + 0x7d) = uVar7;
  *(undefined1 *)((long)param_1 + 0xfb) = uVar8;
  *(undefined4 *)(param_1 + 0x7e) = uVar6;
  puVar35 = PTR_DAT_04bbfe60 + 0x10;
  local_16c8 = puVar35;
  memset(&local_16c0,0,0x754);
  uVar15 = nn::os::GetSystemTick();
  local_f6c = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
  local_f68 = (local_f6c ^ local_f6c >> 0x1e) * 0x6c078965 + 2;
  local_f64 = (local_f68 ^ local_f68 >> 0x1e) * 0x6c078965 + 3;
  local_f60 = (local_f64 ^ local_f64 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)(local_16c8 + 0x18))(&local_16c8);
  memset(pvVar20,0,0x754);
  local_1e38 = &PTR_FUN_049ff6a0;
  local_1e30[0] = local_7e4;
  FUN_008a1ba0(&local_16c8,&local_1e38);
  local_1e38 = (undefined **)puVar35;
  memset(local_1e30,0,0x754);
  uVar15 = nn::os::GetSystemTick();
  local_16dc = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
  local_16d8 = (local_16dc ^ local_16dc >> 0x1e) * 0x6c078965 + 2;
  local_16d4 = (local_16d8 ^ local_16d8 >> 0x1e) * 0x6c078965 + 3;
  local_16d0 = (local_16d4 ^ local_16d4 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_1e38 + 0x18))(&local_1e38);
  memset(pvVar20,0,0x754);
  local_2d28._0_4_ = 0x66;
  local_25b0 = &local_2d28;
  local_25b8 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_1e38,&local_25b8);
  pvVar20 = (void *)(**(code **)(local_16c8 + 0x18))(&local_16c8);
  lVar19 = (**(code **)((long)local_1e38 + 0x20))(&local_1e38);
  for (lVar18 = 0;
      *(uint *)((long)&local_25b8 + lVar18) =
           *(uint *)(lVar19 + lVar18) & *(uint *)((long)pvVar20 + lVar18), lVar18 != 0x750;
      lVar18 = lVar18 + 8) {
    *(uint *)((long)&local_25b8 + lVar18 + 4) =
         *(uint *)(lVar19 + lVar18 + 4) & *(uint *)((long)pvVar20 + lVar18 + 4);
  }
  memcpy(pvVar20,&local_25b8,0x754);
  local_2d28 = (undefined **)CONCAT44(local_2d28._4_4_,0x4d);
  local_25b8 = &PTR_FUN_049ff448;
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  local_25b0 = &local_2d28;
  FUN_008a1ba0(&local_16c8,&local_25b8);
  local_7d0 = (undefined **)*puVar34;
  local_2d40 = (undefined8 *)0x33ce;
  FUN_0277d4ac(&local_2d40);
  local_2d50 = *(undefined8 **)PTR_DAT_04bb37e0;
  FUN_01239cf0(&local_2d50,&local_2d40,0,1);
  uVar17 = 0;
  if ((short)local_2d50 != -2) {
    FUN_0124c030(&local_25b8,&local_2d50);
    uVar17 = FUN_0124e92c(&local_25b8,&local_7d0);
    uVar17 = uVar17 & 0xffffffff;
  }
  local_2d28 = local_7d0;
  uVar32 = *(undefined8 *)PTR_DAT_04bb30a0;
  if ((char)((ulong)local_7d0 >> 0x20) < '\x05') {
    lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2d28);
    local_25b8 = (undefined **)(lVar18 + -0x15180);
    local_2d28 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_25b8);
  }
  puVar25 = local_2d28;
  uVar22 = (ulong)local_2d28 >> 0x10;
  uVar23 = (ulong)local_2d28 >> 0x18;
  local_2d28._7_1_ = SUB81(puVar25,7);
  local_2d28._0_7_ = (uint7)CONCAT24(5,(undefined4)local_2d28);
  cVar14 = FUN_00a8ae20(uVar32,uVar22,uVar23,1);
  iVar28 = (int)cVar14;
  bVar11 = true;
  local_1e40 = 6;
  local_1e3c = iVar28;
  if ((uVar17 & 1) == 0) {
    puVar27 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar15 = 0x80;
    if (iVar28 != 1) {
      uVar15 = 0x82;
    }
    uVar4 = puVar27[3];
    uVar16 = (uint)(iVar28 != 3) << 3;
    uVar5 = (uint)(iVar28 != 5) << 5;
    uVar24 = uVar15 | (uint)(iVar28 != 2) << 2 | uVar16 | (uint)(iVar28 != 4) << 4 | uVar5 |
             (uint)(iVar28 != 6) << 6;
    uVar15 = uVar24 - ((uVar15 | uVar16 | uVar5) >> 1);
    uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
    uVar16 = *puVar27 ^ *puVar27 << 0xb;
    *puVar27 = puVar27[1];
    puVar27[1] = puVar27[2];
    uVar16 = uVar16 >> 8 ^ uVar4 >> 0x13 ^ uVar16 ^ uVar4;
    puVar27[2] = uVar4;
    puVar27[3] = uVar16;
    iVar26 = (int)((ulong)uVar16 * (ulong)(uVar15 + (uVar15 >> 4) & 0xf0f0f0f) >> 0x20);
    iVar28 = iVar26 + 2;
    uVar15 = uVar24;
    do {
      iVar28 = iVar28 + -1;
      if (iVar28 < 2) {
        uVar15 = uVar15 - 1 & (uVar15 ^ 0xffffffff);
        uVar15 = uVar15 - (uVar15 >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
        uVar15 = uVar15 + (uVar15 >> 8);
        if ((uVar15 + (uVar15 >> 0x10) & 0x3f) == 7) {
          local_1e40 = 0;
          bVar11 = true;
          goto LAB_0287c824;
        }
        break;
      }
      uVar15 = uVar15 - 1 & uVar15;
    } while (uVar15 != 0);
    iVar26 = iVar26 + 2;
    local_1e40 = 0xffffffff;
    do {
      iVar26 = iVar26 + -1;
      if (iVar26 < 2) {
        uVar15 = uVar24 - 1 & (uVar24 ^ 0xffffffff);
        uVar15 = uVar15 - (uVar15 >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
        uVar15 = uVar15 + (uVar15 >> 8);
        local_1e40 = uVar15 + (uVar15 >> 0x10) & 0x3f;
        break;
      }
      uVar24 = uVar24 - 1 & uVar24;
    } while (uVar24 != 0);
    bVar11 = false;
  }
LAB_0287c824:
  local_25b0 = (undefined8 *)(**(code **)(local_16c8 + 0x20))(&local_16c8);
  uVar17 = 0;
  local_25a4 = 1;
  local_25a8 = 0;
  do {
    uVar15 = (uint)uVar17;
    if ((*(uint *)((long)local_25b0 + (uVar17 >> 5) * 4) >> (ulong)(uVar15 & 0x1f) & 1) != 0) {
      local_25a8 = uVar15;
      break;
    }
    uVar17 = (ulong)(uVar15 + 1);
  } while (uVar15 + 1 != 15000);
  local_25b8 = (undefined **)(PTR_DAT_04bb5860 + 0x10);
  lVar18 = (**(code **)(local_16c8 + 0x20))(&local_16c8);
  uVar15 = 15000;
  do {
    if ((*(uint *)(lVar18 + (ulong)(uVar15 - 1 >> 5) * 4) >> (ulong)(uVar15 - 1 & 0x1f) & 1) != 0)
    break;
    uVar15 = uVar15 - 1;
  } while (uVar15 != 0);
  if (uVar15 != local_25a8) {
    iVar28 = 0;
LAB_0287c8f4:
    (*(code *)*local_25b8)(&local_70,&local_25b8);
    local_78 = *(ulong *)PTR_DAT_04bb37e0;
    FUN_01239cf0(&local_78,&local_70,0,1);
    if ((short)local_78 != -2) {
      FUN_0124c030(&local_2d28,&local_78);
      local_1e44 = FUN_0123db50(&local_2d20,CONCAT44(uStack_2d14,local_2d18));
      if (local_1e3c != 0) {
        local_1e48 = 0xb;
        if (local_1e3c - 2U < 5) {
          local_1e48 = *(int *)(&DAT_0417bc38 + (long)(int)(local_1e3c - 2U) * 4);
        }
        if (local_1e44 == local_1e48) {
          if (*param_1 == -2) {
            lVar18 = 0;
LAB_0287cc08:
            *(undefined4 *)(param_1 + lVar18 * 4) = (undefined4)local_70;
            *(undefined4 *)(param_1 + lVar18 * 4 + 2) = local_70._4_4_;
          }
          else {
            if (param_1[4] == -2) {
              lVar18 = 1;
              goto LAB_0287cc08;
            }
            if (param_1[8] == -2) {
              lVar18 = 2;
              goto LAB_0287cc08;
            }
            if (param_1[0xc] == -2) {
              lVar18 = 3;
              goto LAB_0287cc08;
            }
            if (param_1[0x10] == -2) {
              lVar18 = 4;
              goto LAB_0287cc08;
            }
            if (param_1[0x14] == -2) {
              lVar18 = 5;
              goto LAB_0287cc08;
            }
            if (param_1[0x18] == -2) {
              lVar18 = 6;
              goto LAB_0287cc08;
            }
            if (param_1[0x1c] == -2) {
              lVar18 = 7;
              goto LAB_0287cc08;
            }
            if (param_1[0x20] == -2) {
              lVar18 = 8;
              goto LAB_0287cc08;
            }
            if (param_1[0x24] == -2) {
              lVar18 = 9;
              goto LAB_0287cc08;
            }
            if (param_1[0x28] == -2) {
              lVar18 = 10;
              goto LAB_0287cc08;
            }
            if (param_1[0x2c] == -2) {
              lVar18 = 0xb;
              goto LAB_0287cc08;
            }
            if (param_1[0x30] == -2) {
              lVar18 = 0xc;
              goto LAB_0287cc08;
            }
            if (param_1[0x34] == -2) {
              lVar18 = 0xd;
              goto LAB_0287cc08;
            }
            if (param_1[0x38] == -2) {
              lVar18 = 0xe;
              goto LAB_0287cc08;
            }
            if (param_1[0x3c] == -2) {
              lVar18 = 0xf;
              goto LAB_0287cc08;
            }
            if (param_1[0x40] == -2) {
              lVar18 = 0x10;
              goto LAB_0287cc08;
            }
            if (param_1[0x44] == -2) {
              lVar18 = 0x11;
              goto LAB_0287cc08;
            }
            if (param_1[0x48] == -2) {
              lVar18 = 0x12;
              goto LAB_0287cc08;
            }
            if (param_1[0x4c] == -2) {
              lVar18 = 0x13;
              goto LAB_0287cc08;
            }
            if (param_1[0x50] == -2) {
              lVar18 = 0x14;
              goto LAB_0287cc08;
            }
            if (param_1[0x54] == -2) {
              lVar18 = 0x15;
              goto LAB_0287cc08;
            }
            if (param_1[0x58] == -2) {
              lVar18 = 0x16;
              goto LAB_0287cc08;
            }
            if (param_1[0x5c] == -2) {
              lVar18 = 0x17;
              goto LAB_0287cc08;
            }
            if (param_1[0x60] == -2) {
              lVar18 = 0x18;
              goto LAB_0287cc08;
            }
            if (param_1[100] == -2) {
              lVar18 = 0x19;
              goto LAB_0287cc08;
            }
            if (param_1[0x68] == -2) {
              lVar18 = 0x1a;
              goto LAB_0287cc08;
            }
            if (param_1[0x6c] == -2) {
              lVar18 = 0x1b;
              goto LAB_0287cc08;
            }
            if (param_1[0x70] == -2) {
              lVar18 = 0x1c;
              goto LAB_0287cc08;
            }
            if (param_1[0x74] == -2) {
              lVar18 = 0x1d;
              goto LAB_0287cc08;
            }
            if (param_1[0x78] == -2) {
              lVar18 = 0x1e;
              goto LAB_0287cc08;
            }
            if (param_1[0x7c] == -2) {
              lVar18 = 0x1f;
              goto LAB_0287cc08;
            }
          }
          iVar28 = iVar28 + 1;
        }
      }
      if (local_1e40 != 0) {
        local_1e48 = 0xb;
        if (local_1e40 - 2 < 5) {
          local_1e48 = *(int *)(&DAT_0417bc38 + (long)(int)(local_1e40 - 2) * 4);
        }
        if (local_1e44 == local_1e48) {
          if (*param_1 == -2) {
            lVar18 = 0;
LAB_0287cecc:
            *(undefined4 *)(param_1 + lVar18 * 4) = (undefined4)local_70;
            *(undefined4 *)(param_1 + lVar18 * 4 + 2) = local_70._4_4_;
          }
          else {
            if (param_1[4] == -2) {
              lVar18 = 1;
              goto LAB_0287cecc;
            }
            if (param_1[8] == -2) {
              lVar18 = 2;
              goto LAB_0287cecc;
            }
            if (param_1[0xc] == -2) {
              lVar18 = 3;
              goto LAB_0287cecc;
            }
            if (param_1[0x10] == -2) {
              lVar18 = 4;
              goto LAB_0287cecc;
            }
            if (param_1[0x14] == -2) {
              lVar18 = 5;
              goto LAB_0287cecc;
            }
            if (param_1[0x18] == -2) {
              lVar18 = 6;
              goto LAB_0287cecc;
            }
            if (param_1[0x1c] == -2) {
              lVar18 = 7;
              goto LAB_0287cecc;
            }
            if (param_1[0x20] == -2) {
              lVar18 = 8;
              goto LAB_0287cecc;
            }
            if (param_1[0x24] == -2) {
              lVar18 = 9;
              goto LAB_0287cecc;
            }
            if (param_1[0x28] == -2) {
              lVar18 = 10;
              goto LAB_0287cecc;
            }
            if (param_1[0x2c] == -2) {
              lVar18 = 0xb;
              goto LAB_0287cecc;
            }
            if (param_1[0x30] == -2) {
              lVar18 = 0xc;
              goto LAB_0287cecc;
            }
            if (param_1[0x34] == -2) {
              lVar18 = 0xd;
              goto LAB_0287cecc;
            }
            if (param_1[0x38] == -2) {
              lVar18 = 0xe;
              goto LAB_0287cecc;
            }
            if (param_1[0x3c] == -2) {
              lVar18 = 0xf;
              goto LAB_0287cecc;
            }
            if (param_1[0x40] == -2) {
              lVar18 = 0x10;
              goto LAB_0287cecc;
            }
            if (param_1[0x44] == -2) {
              lVar18 = 0x11;
              goto LAB_0287cecc;
            }
            if (param_1[0x48] == -2) {
              lVar18 = 0x12;
              goto LAB_0287cecc;
            }
            if (param_1[0x4c] == -2) {
              lVar18 = 0x13;
              goto LAB_0287cecc;
            }
            if (param_1[0x50] == -2) {
              lVar18 = 0x14;
              goto LAB_0287cecc;
            }
            if (param_1[0x54] == -2) {
              lVar18 = 0x15;
              goto LAB_0287cecc;
            }
            if (param_1[0x58] == -2) {
              lVar18 = 0x16;
              goto LAB_0287cecc;
            }
            if (param_1[0x5c] == -2) {
              lVar18 = 0x17;
              goto LAB_0287cecc;
            }
            if (param_1[0x60] == -2) {
              lVar18 = 0x18;
              goto LAB_0287cecc;
            }
            if (param_1[100] == -2) {
              lVar18 = 0x19;
              goto LAB_0287cecc;
            }
            if (param_1[0x68] == -2) {
              lVar18 = 0x1a;
              goto LAB_0287cecc;
            }
            if (param_1[0x6c] == -2) {
              lVar18 = 0x1b;
              goto LAB_0287cecc;
            }
            if (param_1[0x70] == -2) {
              lVar18 = 0x1c;
              goto LAB_0287cecc;
            }
            if (param_1[0x74] == -2) {
              lVar18 = 0x1d;
              goto LAB_0287cecc;
            }
            if (param_1[0x78] == -2) {
              lVar18 = 0x1e;
              goto LAB_0287cecc;
            }
            if (param_1[0x7c] == -2) {
              lVar18 = 0x1f;
              goto LAB_0287cecc;
            }
          }
          iVar28 = iVar28 + 1;
        }
      }
      bVar10 = false;
      if (local_1e44 == 0xc) {
        bVar10 = bVar11;
      }
      if (bVar10) {
        if (*param_1 == -2) {
          lVar18 = 0;
LAB_0287d164:
          *(undefined4 *)(param_1 + lVar18 * 4) = (undefined4)local_70;
          *(undefined4 *)(param_1 + lVar18 * 4 + 2) = local_70._4_4_;
        }
        else {
          if (param_1[4] == -2) {
            lVar18 = 1;
            goto LAB_0287d164;
          }
          if (param_1[8] == -2) {
            lVar18 = 2;
            goto LAB_0287d164;
          }
          if (param_1[0xc] == -2) {
            lVar18 = 3;
            goto LAB_0287d164;
          }
          if (param_1[0x10] == -2) {
            lVar18 = 4;
            goto LAB_0287d164;
          }
          if (param_1[0x14] == -2) {
            lVar18 = 5;
            goto LAB_0287d164;
          }
          if (param_1[0x18] == -2) {
            lVar18 = 6;
            goto LAB_0287d164;
          }
          if (param_1[0x1c] == -2) {
            lVar18 = 7;
            goto LAB_0287d164;
          }
          if (param_1[0x20] == -2) {
            lVar18 = 8;
            goto LAB_0287d164;
          }
          if (param_1[0x24] == -2) {
            lVar18 = 9;
            goto LAB_0287d164;
          }
          if (param_1[0x28] == -2) {
            lVar18 = 10;
            goto LAB_0287d164;
          }
          if (param_1[0x2c] == -2) {
            lVar18 = 0xb;
            goto LAB_0287d164;
          }
          if (param_1[0x30] == -2) {
            lVar18 = 0xc;
            goto LAB_0287d164;
          }
          if (param_1[0x34] == -2) {
            lVar18 = 0xd;
            goto LAB_0287d164;
          }
          if (param_1[0x38] == -2) {
            lVar18 = 0xe;
            goto LAB_0287d164;
          }
          if (param_1[0x3c] == -2) {
            lVar18 = 0xf;
            goto LAB_0287d164;
          }
          if (param_1[0x40] == -2) {
            lVar18 = 0x10;
            goto LAB_0287d164;
          }
          if (param_1[0x44] == -2) {
            lVar18 = 0x11;
            goto LAB_0287d164;
          }
          if (param_1[0x48] == -2) {
            lVar18 = 0x12;
            goto LAB_0287d164;
          }
          if (param_1[0x4c] == -2) {
            lVar18 = 0x13;
            goto LAB_0287d164;
          }
          if (param_1[0x50] == -2) {
            lVar18 = 0x14;
            goto LAB_0287d164;
          }
          if (param_1[0x54] == -2) {
            lVar18 = 0x15;
            goto LAB_0287d164;
          }
          if (param_1[0x58] == -2) {
            lVar18 = 0x16;
            goto LAB_0287d164;
          }
          if (param_1[0x5c] == -2) {
            lVar18 = 0x17;
            goto LAB_0287d164;
          }
          if (param_1[0x60] == -2) {
            lVar18 = 0x18;
            goto LAB_0287d164;
          }
          if (param_1[100] == -2) {
            lVar18 = 0x19;
            goto LAB_0287d164;
          }
          if (param_1[0x68] == -2) {
            lVar18 = 0x1a;
            goto LAB_0287d164;
          }
          if (param_1[0x6c] == -2) {
            lVar18 = 0x1b;
            goto LAB_0287d164;
          }
          if (param_1[0x70] == -2) {
            lVar18 = 0x1c;
            goto LAB_0287d164;
          }
          if (param_1[0x74] == -2) {
            lVar18 = 0x1d;
            goto LAB_0287d164;
          }
          if (param_1[0x78] == -2) {
            lVar18 = 0x1e;
            goto LAB_0287d164;
          }
          if (param_1[0x7c] == -2) {
            lVar18 = 0x1f;
            goto LAB_0287d164;
          }
        }
        iVar28 = iVar28 + 1;
      }
    }
    do {
      local_25a8 = local_25a8 + 1;
      uVar16 = (uint)local_25a4;
      if (0x752 < local_25a8 >> 3) {
        local_25a8 = 0x3a95;
        goto LAB_0287d1b4;
      }
    } while (uVar16 != (*(uint *)((long)local_25b0 + (ulong)(local_25a8 >> 5) * 4) >>
                        (ulong)(local_25a8 & 0x1f) & 1));
    goto LAB_0287c8e8;
  }
LAB_0287d29c:
  local_2d28 = (undefined **)0xeca;
  FUN_0277d4ac(&local_2d28);
  if (*param_1 == -2) {
    lVar18 = 0;
LAB_0287d51c:
    *(undefined4 *)(param_1 + lVar18 * 4) = (undefined4)local_2d28;
    *(undefined4 *)(param_1 + lVar18 * 4 + 2) = local_2d28._4_4_;
  }
  else {
    if (param_1[4] == -2) {
      lVar18 = 1;
      goto LAB_0287d51c;
    }
    if (param_1[8] == -2) {
      lVar18 = 2;
      goto LAB_0287d51c;
    }
    if (param_1[0xc] == -2) {
      lVar18 = 3;
      goto LAB_0287d51c;
    }
    if (param_1[0x10] == -2) {
      lVar18 = 4;
      goto LAB_0287d51c;
    }
    if (param_1[0x14] == -2) {
      lVar18 = 5;
      goto LAB_0287d51c;
    }
    if (param_1[0x18] == -2) {
      lVar18 = 6;
      goto LAB_0287d51c;
    }
    if (param_1[0x1c] == -2) {
      lVar18 = 7;
      goto LAB_0287d51c;
    }
    if (param_1[0x20] == -2) {
      lVar18 = 8;
      goto LAB_0287d51c;
    }
    if (param_1[0x24] == -2) {
      lVar18 = 9;
      goto LAB_0287d51c;
    }
    if (param_1[0x28] == -2) {
      lVar18 = 10;
      goto LAB_0287d51c;
    }
    if (param_1[0x2c] == -2) {
      lVar18 = 0xb;
      goto LAB_0287d51c;
    }
    if (param_1[0x30] == -2) {
      lVar18 = 0xc;
      goto LAB_0287d51c;
    }
    if (param_1[0x34] == -2) {
      lVar18 = 0xd;
      goto LAB_0287d51c;
    }
    if (param_1[0x38] == -2) {
      lVar18 = 0xe;
      goto LAB_0287d51c;
    }
    if (param_1[0x3c] == -2) {
      lVar18 = 0xf;
      goto LAB_0287d51c;
    }
    if (param_1[0x40] == -2) {
      lVar18 = 0x10;
      goto LAB_0287d51c;
    }
    if (param_1[0x44] == -2) {
      lVar18 = 0x11;
      goto LAB_0287d51c;
    }
    if (param_1[0x48] == -2) {
      lVar18 = 0x12;
      goto LAB_0287d51c;
    }
    if (param_1[0x4c] == -2) {
      lVar18 = 0x13;
      goto LAB_0287d51c;
    }
    if (param_1[0x50] == -2) {
      lVar18 = 0x14;
      goto LAB_0287d51c;
    }
    if (param_1[0x54] == -2) {
      lVar18 = 0x15;
      goto LAB_0287d51c;
    }
    if (param_1[0x58] == -2) {
      lVar18 = 0x16;
      goto LAB_0287d51c;
    }
    if (param_1[0x5c] == -2) {
      lVar18 = 0x17;
      goto LAB_0287d51c;
    }
    if (param_1[0x60] == -2) {
      lVar18 = 0x18;
      goto LAB_0287d51c;
    }
    if (param_1[100] == -2) {
      lVar18 = 0x19;
      goto LAB_0287d51c;
    }
    if (param_1[0x68] == -2) {
      lVar18 = 0x1a;
      goto LAB_0287d51c;
    }
    if (param_1[0x6c] == -2) {
      lVar18 = 0x1b;
      goto LAB_0287d51c;
    }
    if (param_1[0x70] == -2) {
      lVar18 = 0x1c;
      goto LAB_0287d51c;
    }
    if (param_1[0x74] == -2) {
      lVar18 = 0x1d;
      goto LAB_0287d51c;
    }
    if (param_1[0x78] == -2) {
      lVar18 = 0x1e;
      goto LAB_0287d51c;
    }
    if (param_1[0x7c] == -2) {
      lVar18 = 0x1f;
      goto LAB_0287d51c;
    }
  }
  local_2d28 = (undefined **)0xb04;
  FUN_0277d4ac(&local_2d28);
  if (*param_1 == -2) {
    lVar18 = 0;
LAB_0287d7a8:
    *(undefined4 *)(param_1 + lVar18 * 4) = (undefined4)local_2d28;
    *(undefined4 *)(param_1 + lVar18 * 4 + 2) = local_2d28._4_4_;
  }
  else {
    if (param_1[4] == -2) {
      lVar18 = 1;
      goto LAB_0287d7a8;
    }
    if (param_1[8] == -2) {
      lVar18 = 2;
      goto LAB_0287d7a8;
    }
    if (param_1[0xc] == -2) {
      lVar18 = 3;
      goto LAB_0287d7a8;
    }
    if (param_1[0x10] == -2) {
      lVar18 = 4;
      goto LAB_0287d7a8;
    }
    if (param_1[0x14] == -2) {
      lVar18 = 5;
      goto LAB_0287d7a8;
    }
    if (param_1[0x18] == -2) {
      lVar18 = 6;
      goto LAB_0287d7a8;
    }
    if (param_1[0x1c] == -2) {
      lVar18 = 7;
      goto LAB_0287d7a8;
    }
    if (param_1[0x20] == -2) {
      lVar18 = 8;
      goto LAB_0287d7a8;
    }
    if (param_1[0x24] == -2) {
      lVar18 = 9;
      goto LAB_0287d7a8;
    }
    if (param_1[0x28] == -2) {
      lVar18 = 10;
      goto LAB_0287d7a8;
    }
    if (param_1[0x2c] == -2) {
      lVar18 = 0xb;
      goto LAB_0287d7a8;
    }
    if (param_1[0x30] == -2) {
      lVar18 = 0xc;
      goto LAB_0287d7a8;
    }
    if (param_1[0x34] == -2) {
      lVar18 = 0xd;
      goto LAB_0287d7a8;
    }
    if (param_1[0x38] == -2) {
      lVar18 = 0xe;
      goto LAB_0287d7a8;
    }
    if (param_1[0x3c] == -2) {
      lVar18 = 0xf;
      goto LAB_0287d7a8;
    }
    if (param_1[0x40] == -2) {
      lVar18 = 0x10;
      goto LAB_0287d7a8;
    }
    if (param_1[0x44] == -2) {
      lVar18 = 0x11;
      goto LAB_0287d7a8;
    }
    if (param_1[0x48] == -2) {
      lVar18 = 0x12;
      goto LAB_0287d7a8;
    }
    if (param_1[0x4c] == -2) {
      lVar18 = 0x13;
      goto LAB_0287d7a8;
    }
    if (param_1[0x50] == -2) {
      lVar18 = 0x14;
      goto LAB_0287d7a8;
    }
    if (param_1[0x54] == -2) {
      lVar18 = 0x15;
      goto LAB_0287d7a8;
    }
    if (param_1[0x58] == -2) {
      lVar18 = 0x16;
      goto LAB_0287d7a8;
    }
    if (param_1[0x5c] == -2) {
      lVar18 = 0x17;
      goto LAB_0287d7a8;
    }
    if (param_1[0x60] == -2) {
      lVar18 = 0x18;
      goto LAB_0287d7a8;
    }
    if (param_1[100] == -2) {
      lVar18 = 0x19;
      goto LAB_0287d7a8;
    }
    if (param_1[0x68] == -2) {
      lVar18 = 0x1a;
      goto LAB_0287d7a8;
    }
    if (param_1[0x6c] == -2) {
      lVar18 = 0x1b;
      goto LAB_0287d7a8;
    }
    if (param_1[0x70] == -2) {
      lVar18 = 0x1c;
      goto LAB_0287d7a8;
    }
    if (param_1[0x74] == -2) {
      lVar18 = 0x1d;
      goto LAB_0287d7a8;
    }
    if (param_1[0x78] == -2) {
      lVar18 = 0x1e;
      goto LAB_0287d7a8;
    }
    if (param_1[0x7c] == -2) {
      lVar18 = 0x1f;
      goto LAB_0287d7a8;
    }
  }
  local_2d28 = (undefined **)0xbd0;
  FUN_0277d4ac(&local_2d28);
  if (*param_1 == -2) {
    lVar18 = 0;
  }
  else if (param_1[4] == -2) {
    lVar18 = 1;
  }
  else if (param_1[8] == -2) {
    lVar18 = 2;
  }
  else if (param_1[0xc] == -2) {
    lVar18 = 3;
  }
  else if (param_1[0x10] == -2) {
    lVar18 = 4;
  }
  else if (param_1[0x14] == -2) {
    lVar18 = 5;
  }
  else if (param_1[0x18] == -2) {
    lVar18 = 6;
  }
  else if (param_1[0x1c] == -2) {
    lVar18 = 7;
  }
  else if (param_1[0x20] == -2) {
    lVar18 = 8;
  }
  else if (param_1[0x24] == -2) {
    lVar18 = 9;
  }
  else if (param_1[0x28] == -2) {
    lVar18 = 10;
  }
  else if (param_1[0x2c] == -2) {
    lVar18 = 0xb;
  }
  else if (param_1[0x30] == -2) {
    lVar18 = 0xc;
  }
  else if (param_1[0x34] == -2) {
    lVar18 = 0xd;
  }
  else if (param_1[0x38] == -2) {
    lVar18 = 0xe;
  }
  else if (param_1[0x3c] == -2) {
    lVar18 = 0xf;
  }
  else if (param_1[0x40] == -2) {
    lVar18 = 0x10;
  }
  else if (param_1[0x44] == -2) {
    lVar18 = 0x11;
  }
  else if (param_1[0x48] == -2) {
    lVar18 = 0x12;
  }
  else if (param_1[0x4c] == -2) {
    lVar18 = 0x13;
  }
  else if (param_1[0x50] == -2) {
    lVar18 = 0x14;
  }
  else if (param_1[0x54] == -2) {
    lVar18 = 0x15;
  }
  else if (param_1[0x58] == -2) {
    lVar18 = 0x16;
  }
  else if (param_1[0x5c] == -2) {
    lVar18 = 0x17;
  }
  else if (param_1[0x60] == -2) {
    lVar18 = 0x18;
  }
  else if (param_1[100] == -2) {
    lVar18 = 0x19;
  }
  else if (param_1[0x68] == -2) {
    lVar18 = 0x1a;
  }
  else if (param_1[0x6c] == -2) {
    lVar18 = 0x1b;
  }
  else if (param_1[0x70] == -2) {
    lVar18 = 0x1c;
  }
  else if (param_1[0x74] == -2) {
    lVar18 = 0x1d;
  }
  else if (param_1[0x78] == -2) {
    lVar18 = 0x1e;
  }
  else {
    if (param_1[0x7c] != -2) goto LAB_0287da40;
    lVar18 = 0x1f;
  }
  *(undefined4 *)(param_1 + lVar18 * 4) = (undefined4)local_2d28;
  *(undefined4 *)(param_1 + lVar18 * 4 + 2) = local_2d28._4_4_;
  goto LAB_0287da40;
  while( true ) {
    uVar5 = local_25a8 + 1;
    if ((uint)(uVar16 != 0) ==
        (*(uint *)((long)local_25b0 + (ulong)(uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1))
    goto LAB_0287c8e0;
    if ((uint)(uVar16 != 0) ==
        (*(uint *)((long)local_25b0 + (ulong)(local_25a8 >> 5) * 4) >> (ulong)(local_25a8 & 0x1f) &
        1)) goto LAB_0287c8e4;
    local_25a8 = local_25a8 - 3;
    if (local_25a8 == 0xfffffffd) break;
LAB_0287d1b4:
    uVar5 = local_25a8 + 2;
    if ((((uint)(uVar16 != 0) ^
         *(uint *)((long)local_25b0 + (ulong)(uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f)) & 1) == 0)
    {
LAB_0287c8e0:
      local_25a8 = uVar5;
LAB_0287c8e4:
      local_25a8 = local_25a8 + 1;
      goto LAB_0287c8e8;
    }
  }
  local_25a8 = 0;
LAB_0287c8e8:
  if (uVar15 == local_25a8) goto LAB_0287d298;
  goto LAB_0287c8f4;
  while( true ) {
    uVar5 = local_2d18 + 1;
    if ((uint)(uVar16 != 0) ==
        (*(uint *)((long)local_2d20 + (ulong)(uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1))
    goto LAB_0287e054;
    if ((uint)(uVar16 != 0) ==
        (*(uint *)((long)local_2d20 + (ulong)(local_2d18 >> 5) * 4) >> (ulong)(local_2d18 & 0x1f) &
        1)) goto LAB_0287e058;
    local_2d18 = local_2d18 - 3;
    if (local_2d18 == 0xfffffffd) break;
LAB_0287e354:
    uVar5 = local_2d18 + 2;
    if ((((uint)(uVar16 != 0) ^
         *(uint *)((long)local_2d20 + (ulong)(uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f)) & 1) == 0)
    {
LAB_0287e054:
      local_2d18 = uVar5;
LAB_0287e058:
      local_2d18 = local_2d18 + 1;
      goto LAB_0287e05c;
    }
  }
  local_2d18 = 0;
LAB_0287e05c:
  if (uVar15 == local_2d18) goto LAB_0287dcd8;
  goto LAB_0287e068;
  while( true ) {
    uVar5 = local_2d30 + 1;
    if ((uint)(uVar16 != 0) ==
        (*(uint *)(local_2d38 + (ulong)(uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1))
    goto LAB_0287e3e0;
    if ((uint)(uVar16 != 0) ==
        (*(uint *)(local_2d38 + (ulong)(local_2d30 >> 5) * 4) >> (ulong)(local_2d30 & 0x1f) & 1))
    goto LAB_0287e3e4;
    local_2d30 = local_2d30 - 3;
    if (local_2d30 == 0xfffffffd) break;
LAB_0287e494:
    uVar5 = local_2d30 + 2;
    if ((((uint)(uVar16 != 0) ^
         *(uint *)(local_2d38 + (ulong)(uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f)) & 1) == 0) {
LAB_0287e3e0:
      local_2d30 = uVar5;
LAB_0287e3e4:
      local_2d30 = local_2d30 + 1;
      goto LAB_0287e3e8;
    }
  }
  local_2d30 = 0;
LAB_0287e3e8:
  if (uVar15 == local_2d30) goto LAB_0287df88;
  goto LAB_0287e3f4;
LAB_0287d298:
  if (iVar28 == 0) goto LAB_0287d29c;
LAB_0287da40:
  local_2d40 = (undefined8 *)((ulong)local_2d40 & 0xffffffff00000000);
  local_2d50 = (undefined8 *)((ulong)local_2d50 & 0xffffffff00000000);
  lVar18 = *(long *)PTR_DAT_04bb46b0;
  if (lVar18 == 0) {
    lVar18 = 0;
  }
  else {
    puVar25 = *(undefined8 **)(lVar18 + 0x10);
    if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
      lVar19 = (**(code **)(*(long *)*puVar25 + 0x38))();
      lVar18 = 0;
      if (lVar19 != 0) {
        lVar18 = lVar19 + 0x70;
      }
    }
    else if (puVar25 == (undefined8 *)0x0) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      if ((long *)puVar25[0x26] != (long *)0x0) {
        lVar18 = (**(code **)(*(long *)puVar25[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar18 + 0x1c24e8) == (long *)0x0) ||
     (puVar25 = (undefined8 *)**(long **)(lVar18 + 0x1c24e8), puVar25 == (undefined8 *)0x0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = (**(code **)*puVar25)();
    uVar17 = uVar17 & 0xffffffff;
  }
  FUN_0275ba48(*(long *)(lVar18 + 0x1c24d0) + *(long *)(lVar18 + 0x1c24c8),&local_2d40,&local_2d50,
               (long)*(char *)(param_2 + 0x12));
  local_25b8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_25b0,0,0x754);
  uVar15 = nn::os::GetSystemTick();
  local_1e5c = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
  local_1e58 = (local_1e5c ^ local_1e5c >> 0x1e) * 0x6c078965 + 2;
  local_1e54 = (local_1e58 ^ local_1e58 >> 0x1e) * 0x6c078965 + 3;
  local_1e50 = (local_1e54 ^ local_1e54 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_25b8 + 0x18))(&local_25b8);
  memset(pvVar20,0,0x754);
  local_2d28 = &PTR_FUN_049ff4e8;
  local_2d20 = &local_2d40;
  FUN_008a1ba0(&local_25b8,&local_2d28);
  local_2d28 = &PTR_FUN_049ff4e8;
  local_2d20 = (undefined8 **)&local_2d50;
  FUN_008a1ba0(&local_25b8,&local_2d28);
  lVar21 = (**(code **)((long)local_25b8 + 0x20))(&local_25b8);
  lVar19 = 0;
  iVar28 = 0;
  do {
    puVar27 = (uint *)(lVar21 + lVar19);
    lVar19 = lVar19 + 4;
    uVar15 = *puVar27 - (*puVar27 >> 1 & 0x55555555);
    uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
    uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
    uVar15 = uVar15 + (uVar15 >> 8);
    iVar28 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar28;
  } while (lVar19 != 0x754);
  if (iVar28 == 0) {
    local_7d0._0_4_ = 0x9a;
    local_2d28 = &PTR_FUN_049ff4e8;
    local_2d20 = (undefined8 **)&local_7d0;
    FUN_008a1ba0(&local_25b8,&local_2d28);
    local_7d0 = (undefined **)CONCAT44(local_7d0._4_4_,0x94);
    local_2d28 = &PTR_FUN_049ff4e8;
    local_2d20 = (undefined8 **)&local_7d0;
    FUN_008a1ba0(&local_25b8,&local_2d28);
  }
  local_2d20 = (undefined8 **)(**(code **)((long)local_25b8 + 0x20))(&local_25b8);
  uVar22 = 0;
  uStack_2d14 = CONCAT31(uStack_2d14._1_3_,1);
  local_2d18 = 0;
  do {
    uVar15 = (uint)uVar22;
    if ((*(uint *)((long)local_2d20 + (uVar22 >> 5) * 4) >> (ulong)(uVar15 & 0x1f) & 1) != 0) {
      local_2d18 = uVar15;
      break;
    }
    uVar22 = (ulong)(uVar15 + 1);
  } while (uVar15 + 1 != 15000);
  local_2d28 = (undefined **)(PTR_DAT_04bb5860 + 0x10);
  lVar19 = (**(code **)((long)local_25b8 + 0x20))(&local_25b8);
  uVar15 = 15000;
  do {
    if ((*(uint *)(lVar19 + (ulong)(uVar15 - 1 >> 5) * 4) >> (ulong)(uVar15 - 1 & 0x1f) & 1) != 0)
    break;
    uVar15 = uVar15 - 1;
  } while (uVar15 != 0);
  if (uVar15 != local_2d18) {
LAB_0287e068:
    (*(code *)*local_2d28)(&local_7d0,&local_2d28);
    if (*param_1 == -2) {
      lVar19 = 0;
LAB_0287e304:
      *(undefined4 *)(param_1 + lVar19 * 4) = (undefined4)local_7d0;
      *(undefined4 *)(param_1 + lVar19 * 4 + 2) = local_7d0._4_4_;
    }
    else {
      if (param_1[4] == -2) {
        lVar19 = 1;
        goto LAB_0287e304;
      }
      if (param_1[8] == -2) {
        lVar19 = 2;
        goto LAB_0287e304;
      }
      if (param_1[0xc] == -2) {
        lVar19 = 3;
        goto LAB_0287e304;
      }
      if (param_1[0x10] == -2) {
        lVar19 = 4;
        goto LAB_0287e304;
      }
      if (param_1[0x14] == -2) {
        lVar19 = 5;
        goto LAB_0287e304;
      }
      if (param_1[0x18] == -2) {
        lVar19 = 6;
        goto LAB_0287e304;
      }
      if (param_1[0x1c] == -2) {
        lVar19 = 7;
        goto LAB_0287e304;
      }
      if (param_1[0x20] == -2) {
        lVar19 = 8;
        goto LAB_0287e304;
      }
      if (param_1[0x24] == -2) {
        lVar19 = 9;
        goto LAB_0287e304;
      }
      if (param_1[0x28] == -2) {
        lVar19 = 10;
        goto LAB_0287e304;
      }
      if (param_1[0x2c] == -2) {
        lVar19 = 0xb;
        goto LAB_0287e304;
      }
      if (param_1[0x30] == -2) {
        lVar19 = 0xc;
        goto LAB_0287e304;
      }
      if (param_1[0x34] == -2) {
        lVar19 = 0xd;
        goto LAB_0287e304;
      }
      if (param_1[0x38] == -2) {
        lVar19 = 0xe;
        goto LAB_0287e304;
      }
      if (param_1[0x3c] == -2) {
        lVar19 = 0xf;
        goto LAB_0287e304;
      }
      if (param_1[0x40] == -2) {
        lVar19 = 0x10;
        goto LAB_0287e304;
      }
      if (param_1[0x44] == -2) {
        lVar19 = 0x11;
        goto LAB_0287e304;
      }
      if (param_1[0x48] == -2) {
        lVar19 = 0x12;
        goto LAB_0287e304;
      }
      if (param_1[0x4c] == -2) {
        lVar19 = 0x13;
        goto LAB_0287e304;
      }
      if (param_1[0x50] == -2) {
        lVar19 = 0x14;
        goto LAB_0287e304;
      }
      if (param_1[0x54] == -2) {
        lVar19 = 0x15;
        goto LAB_0287e304;
      }
      if (param_1[0x58] == -2) {
        lVar19 = 0x16;
        goto LAB_0287e304;
      }
      if (param_1[0x5c] == -2) {
        lVar19 = 0x17;
        goto LAB_0287e304;
      }
      if (param_1[0x60] == -2) {
        lVar19 = 0x18;
        goto LAB_0287e304;
      }
      if (param_1[100] == -2) {
        lVar19 = 0x19;
        goto LAB_0287e304;
      }
      if (param_1[0x68] == -2) {
        lVar19 = 0x1a;
        goto LAB_0287e304;
      }
      if (param_1[0x6c] == -2) {
        lVar19 = 0x1b;
        goto LAB_0287e304;
      }
      if (param_1[0x70] == -2) {
        lVar19 = 0x1c;
        goto LAB_0287e304;
      }
      if (param_1[0x74] == -2) {
        lVar19 = 0x1d;
        goto LAB_0287e304;
      }
      if (param_1[0x78] == -2) {
        lVar19 = 0x1e;
        goto LAB_0287e304;
      }
      if (param_1[0x7c] == -2) {
        lVar19 = 0x1f;
        goto LAB_0287e304;
      }
    }
    do {
      local_2d18 = local_2d18 + 1;
      uVar16 = uStack_2d14 & 0xff;
      if (0x752 < local_2d18 >> 3) {
        local_2d18 = 0x3a95;
        goto LAB_0287e354;
      }
    } while (uVar16 != (*(uint *)((long)local_2d20 + (ulong)(local_2d18 >> 5) * 4) >>
                        (ulong)(local_2d18 & 0x1f) & 1));
    goto LAB_0287e05c;
  }
LAB_0287dcd8:
  if ((((uVar17 & 1) != 0) && (*(long *)(lVar18 + 0x1c24e8) != 0)) &&
     (puVar25 = *(undefined8 **)(*(long *)(lVar18 + 0x1c24e8) + 8), puVar25 != (undefined8 *)0x0)) {
    (**(code **)*puVar25)();
  }
  puVar35 = PTR_DAT_04bbfe60 + 0x10;
  local_25b8 = (undefined **)puVar35;
  memset(&local_25b0,0,0x754);
  uVar15 = nn::os::GetSystemTick();
  local_1e5c = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
  local_1e58 = (local_1e5c ^ local_1e5c >> 0x1e) * 0x6c078965 + 2;
  local_1e54 = (local_1e58 ^ local_1e58 >> 0x1e) * 0x6c078965 + 3;
  local_1e50 = (local_1e54 ^ local_1e54 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_25b8 + 0x18))(&local_25b8);
  memset(pvVar20,0,0x754);
  local_7d0 = (undefined **)CONCAT44(local_7d0._4_4_,0x4f);
  local_2d28 = &PTR_FUN_049ff448;
  local_2d20 = (undefined8 **)&local_7d0;
  FUN_008a1ba0(&local_25b8,&local_2d28);
  local_2d28 = (undefined **)puVar35;
  memset(&local_2d20,0,0x754);
  uVar15 = nn::os::GetSystemTick();
  local_25cc = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
  local_25c8 = (local_25cc ^ local_25cc >> 0x1e) * 0x6c078965 + 2;
  local_25c4 = (local_25c8 ^ local_25c8 >> 0x1e) * 0x6c078965 + 3;
  local_25c0 = (local_25c4 ^ local_25c4 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_2d28 + 0x18))(&local_2d28);
  memset(pvVar20,0,0x754);
  local_2d40 = (undefined8 *)CONCAT44(local_2d40._4_4_,0x66);
  local_7c8 = &local_2d40;
  local_7d0 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_2d28,&local_7d0);
  pvVar20 = (void *)(**(code **)((long)local_25b8 + 0x18))(&local_25b8);
  lVar19 = (**(code **)((long)local_2d28 + 0x20))(&local_2d28);
  plVar36 = (long *)PTR_DAT_04bb43c0;
  puVar35 = PTR_DAT_04bb2020;
  for (lVar18 = 0;
      *(uint *)((long)&local_7d0 + lVar18) =
           *(uint *)(lVar19 + lVar18) & *(uint *)((long)pvVar20 + lVar18), lVar18 != 0x750;
      lVar18 = lVar18 + 8) {
    *(uint *)((long)&local_7d0 + lVar18 + 4) =
         *(uint *)(lVar19 + lVar18 + 4) & *(uint *)((long)pvVar20 + lVar18 + 4);
  }
  memcpy(pvVar20,&local_7d0,0x754);
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  local_2d38 = (**(code **)(local_f58 + 0x20))(&local_f58);
  uVar17 = 0;
  local_2d2c = 1;
  local_2d30 = 0;
  do {
    uVar15 = (uint)uVar17;
    if ((*(uint *)(local_2d38 + (uVar17 >> 5) * 4) >> (ulong)(uVar15 & 0x1f) & 1) != 0) {
      local_2d30 = uVar15;
      break;
    }
    uVar17 = (ulong)(uVar15 + 1);
  } while (uVar15 + 1 != 15000);
  local_2d40 = (undefined8 *)(PTR_DAT_04bb5860 + 0x10);
  lVar18 = (**(code **)(local_f58 + 0x20))(&local_f58);
  uVar15 = 15000;
  do {
    if ((*(uint *)(lVar18 + (ulong)(uVar15 - 1 >> 5) * 4) >> (ulong)(uVar15 - 1 & 0x1f) & 1) != 0)
    break;
    uVar15 = uVar15 - 1;
  } while (uVar15 != 0);
  if (uVar15 != local_2d30) {
LAB_0287e3f4:
    (*(code *)*local_2d40)(&local_7d0,&local_2d40);
    lVar18 = (**(code **)((long)local_25b8 + 0x18))(&local_25b8);
    uVar16 = FUN_0277d6c4(&local_7d0);
    if ((uVar16 >> 3 & 0x1fff) < 0x753) {
      lVar19 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
      *(uint *)(lVar18 + lVar19) =
           *(uint *)(lVar18 + lVar19) & (1 << (ulong)(uVar16 & 0x1f) ^ 0xffffffffU);
    }
    do {
      local_2d30 = local_2d30 + 1;
      uVar16 = (uint)local_2d2c;
      if (0x752 < local_2d30 >> 3) {
        local_2d30 = 0x3a95;
        goto LAB_0287e494;
      }
    } while (uVar16 != (*(uint *)(local_2d38 + (ulong)(local_2d30 >> 5) * 4) >>
                        (ulong)(local_2d30 & 0x1f) & 1));
    goto LAB_0287e3e8;
  }
LAB_0287df88:
  uVar30 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  uVar31 = uVar30 >> 0x10;
  uVar33 = uVar30 >> 0x18;
  uVar17 = uVar30 & 0xffffffff;
  uVar32 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_7d0 = (undefined **)(puVar35 + 0x10);
  cVar14 = (char)(uVar30 >> 0x20);
  uVar23 = uVar33 & 0xffffffff;
  uVar22 = uVar31 & 0xffffffff;
  local_7c8 = (undefined8 **)0x40d4383;
  local_70 = uVar30;
  if (cVar14 < '\x05') {
    lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_2d50 = (undefined8 *)(lVar18 + -0x15180);
    uVar17 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_2d50);
    uVar22 = uVar17 >> 0x10;
    uVar23 = uVar17 >> 0x18;
    local_70 = uVar17;
  }
  uVar12 = local_70 >> 0x30;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70 = CONCAT26((short)uVar12,(undefined6)local_70) & 0xff00ffffffffffff;
  uVar17 = FUN_0087a8f0(uVar32,&local_7d0,uVar17,uVar22,uVar23,0);
  if ((uVar17 & 1) == 0) {
    local_2d50 = (undefined8 *)(puVar35 + 0x10);
    uVar32 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_2d48 = "Halloween";
    local_78 = uVar30;
    if (cVar14 < '\x05') {
      lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
      local_70 = lVar18 - 0x15180;
      local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
      uVar30 = local_78 & 0xffffffff;
      uVar31 = local_78 >> 0x10;
      uVar33 = local_78 >> 0x18;
    }
    uVar17 = local_78 >> 0x30;
    local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
    local_78 = CONCAT26((short)uVar17,(undefined6)local_78) & 0xff00ffffffffffff;
    uVar17 = FUN_0087b260(uVar32,&local_2d50,uVar30 & 0xffffffff,uVar31 & 0xffffffff,
                          uVar33 & 0xffffffff,0);
    if ((uVar17 & 1) != 0) goto LAB_0287e594;
  }
  else {
LAB_0287e594:
    local_7d0 = (undefined **)0x33ab;
    FUN_0277d4ac(&local_7d0);
    if (*param_1 == -2) {
      lVar18 = 0;
LAB_0287e844:
      *(undefined4 *)(param_1 + lVar18 * 4) = (undefined4)local_7d0;
      *(undefined4 *)(param_1 + lVar18 * 4 + 2) = local_7d0._4_4_;
    }
    else {
      if (param_1[4] == -2) {
        lVar18 = 1;
        goto LAB_0287e844;
      }
      if (param_1[8] == -2) {
        lVar18 = 2;
        goto LAB_0287e844;
      }
      if (param_1[0xc] == -2) {
        lVar18 = 3;
        goto LAB_0287e844;
      }
      if (param_1[0x10] == -2) {
        lVar18 = 4;
        goto LAB_0287e844;
      }
      if (param_1[0x14] == -2) {
        lVar18 = 5;
        goto LAB_0287e844;
      }
      if (param_1[0x18] == -2) {
        lVar18 = 6;
        goto LAB_0287e844;
      }
      if (param_1[0x1c] == -2) {
        lVar18 = 7;
        goto LAB_0287e844;
      }
      if (param_1[0x20] == -2) {
        lVar18 = 8;
        goto LAB_0287e844;
      }
      if (param_1[0x24] == -2) {
        lVar18 = 9;
        goto LAB_0287e844;
      }
      if (param_1[0x28] == -2) {
        lVar18 = 10;
        goto LAB_0287e844;
      }
      if (param_1[0x2c] == -2) {
        lVar18 = 0xb;
        goto LAB_0287e844;
      }
      if (param_1[0x30] == -2) {
        lVar18 = 0xc;
        goto LAB_0287e844;
      }
      puVar35 = PTR_DAT_04bb2020;
      if (param_1[0x34] == -2) {
        lVar18 = 0xd;
        goto LAB_0287e844;
      }
      if (param_1[0x38] == -2) {
        lVar18 = 0xe;
        goto LAB_0287e844;
      }
      if (param_1[0x3c] == -2) {
        lVar18 = 0xf;
        goto LAB_0287e844;
      }
      if (param_1[0x40] == -2) {
        lVar18 = 0x10;
        goto LAB_0287e844;
      }
      if (param_1[0x44] == -2) {
        lVar18 = 0x11;
        goto LAB_0287e844;
      }
      if (param_1[0x48] == -2) {
        lVar18 = 0x12;
        goto LAB_0287e844;
      }
      if (param_1[0x4c] == -2) {
        lVar18 = 0x13;
        goto LAB_0287e844;
      }
      if (param_1[0x50] == -2) {
        lVar18 = 0x14;
        goto LAB_0287e844;
      }
      if (param_1[0x54] == -2) {
        lVar18 = 0x15;
        goto LAB_0287e844;
      }
      if (param_1[0x58] == -2) {
        lVar18 = 0x16;
        goto LAB_0287e844;
      }
      if (param_1[0x5c] == -2) {
        lVar18 = 0x17;
        goto LAB_0287e844;
      }
      if (param_1[0x60] == -2) {
        lVar18 = 0x18;
        goto LAB_0287e844;
      }
      if (param_1[100] == -2) {
        lVar18 = 0x19;
        goto LAB_0287e844;
      }
      if (param_1[0x68] == -2) {
        lVar18 = 0x1a;
        goto LAB_0287e844;
      }
      if (param_1[0x6c] == -2) {
        lVar18 = 0x1b;
        goto LAB_0287e844;
      }
      if (param_1[0x70] == -2) {
        lVar18 = 0x1c;
        goto LAB_0287e844;
      }
      if (param_1[0x74] == -2) {
        lVar18 = 0x1d;
        goto LAB_0287e844;
      }
      if (param_1[0x78] == -2) {
        lVar18 = 0x1e;
        goto LAB_0287e844;
      }
      if (param_1[0x7c] == -2) {
        lVar18 = 0x1f;
        goto LAB_0287e844;
      }
    }
    lVar18 = (**(code **)((long)local_25b8 + 0x18))(&local_25b8);
    uVar15 = FUN_0277d6c4(&local_7d0);
    if ((uVar15 >> 3 & 0x1fff) < 0x753) {
      lVar19 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
      *(uint *)(lVar18 + lVar19) =
           *(uint *)(lVar18 + lVar19) & (1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU);
    }
  }
  lVar19 = (**(code **)((long)local_25b8 + 0x20))(&local_25b8);
  lVar18 = 0;
  uVar15 = 0;
  do {
    puVar27 = (uint *)(lVar19 + lVar18);
    lVar18 = lVar18 + 4;
    uVar16 = *puVar27 - (*puVar27 >> 1 & 0x55555555);
    uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
    uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
    uVar16 = uVar16 + (uVar16 >> 8);
    uVar15 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + uVar15;
  } while (lVar18 != 0x754);
  if (1 < uVar15) {
    FUN_02690004(&local_7d0);
    puVar27 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar5 = puVar27[3];
    uVar15 = *puVar27 ^ *puVar27 << 0xb;
    *puVar27 = puVar27[1];
    puVar27[1] = puVar27[2];
    uVar16 = uVar15 ^ uVar5;
    uVar15 = uVar15 >> 8 ^ uVar5 >> 0x13 ^ uVar16;
    puVar27[2] = uVar5;
    puVar27[3] = uVar15;
    uVar15 = (uVar15 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
    uVar16 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
    local_2d50 = (undefined8 *)CONCAT44(uVar16,uVar15);
    uVar15 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 3;
    local_2d48 = (char *)CONCAT44((uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 4,uVar15);
    FUN_01a4cc70(&local_2d50,&local_7d0,&local_25b8,2,0,0,PTR_FUN_04bb67e0,0);
    uVar15 = 0;
    lVar18 = *plVar36;
    do {
      psVar3 = (short *)((long)&local_7d0 + ((long)((ulong)uVar15 << 0x20) >> 0x1d));
      uVar16 = FUN_0277d6c4(psVar3);
      lVar19 = *plVar36;
      if (lVar19 != 0) {
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar18 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          if (*param_1 == -2) {
            lVar18 = 0;
          }
          else if (param_1[4] == -2) {
            lVar18 = 1;
          }
          else if (param_1[8] == -2) {
            lVar18 = 2;
          }
          else if (param_1[0xc] == -2) {
            lVar18 = 3;
          }
          else if (param_1[0x10] == -2) {
            lVar18 = 4;
          }
          else if (param_1[0x14] == -2) {
            lVar18 = 5;
          }
          else if (param_1[0x18] == -2) {
            lVar18 = 6;
          }
          else if (param_1[0x1c] == -2) {
            lVar18 = 7;
          }
          else if (param_1[0x20] == -2) {
            lVar18 = 8;
          }
          else if (param_1[0x24] == -2) {
            lVar18 = 9;
          }
          else if (param_1[0x28] == -2) {
            lVar18 = 10;
          }
          else if (param_1[0x2c] == -2) {
            lVar18 = 0xb;
          }
          else if (param_1[0x30] == -2) {
            lVar18 = 0xc;
          }
          else if (param_1[0x34] == -2) {
            lVar18 = 0xd;
          }
          else if (param_1[0x38] == -2) {
            lVar18 = 0xe;
          }
          else if (param_1[0x3c] == -2) {
            lVar18 = 0xf;
          }
          else if (param_1[0x40] == -2) {
            lVar18 = 0x10;
          }
          else if (param_1[0x44] == -2) {
            lVar18 = 0x11;
          }
          else if (param_1[0x48] == -2) {
            lVar18 = 0x12;
          }
          else if (param_1[0x4c] == -2) {
            lVar18 = 0x13;
          }
          else if (param_1[0x50] == -2) {
            lVar18 = 0x14;
          }
          else if (param_1[0x54] == -2) {
            lVar18 = 0x15;
          }
          else if (param_1[0x58] == -2) {
            lVar18 = 0x16;
          }
          else if (param_1[0x5c] == -2) {
            lVar18 = 0x17;
          }
          else if (param_1[0x60] == -2) {
            lVar18 = 0x18;
          }
          else if (param_1[100] == -2) {
            lVar18 = 0x19;
          }
          else if (param_1[0x68] == -2) {
            lVar18 = 0x1a;
          }
          else if (param_1[0x6c] == -2) {
            lVar18 = 0x1b;
          }
          else if (param_1[0x70] == -2) {
            lVar18 = 0x1c;
          }
          else if (param_1[0x74] == -2) {
            lVar18 = 0x1d;
          }
          else if (param_1[0x78] == -2) {
            lVar18 = 0x1e;
          }
          else {
            if (param_1[0x7c] != -2) goto LAB_0287ea20;
            lVar18 = 0x1f;
          }
          psVar2 = param_1 + lVar18 * 4;
          *psVar2 = *psVar3;
          uVar6 = *(undefined4 *)((long)&local_7d0 + (long)(int)uVar15 * 8 + 4);
          psVar2[1] = *(short *)((long)&local_7d0 + (long)(int)uVar15 * 8 + 2);
          *(undefined4 *)(psVar2 + 2) = uVar6;
        }
      }
LAB_0287ea20:
      uVar15 = uVar15 + 1;
      lVar18 = lVar19;
    } while (uVar15 != 0x20);
    puVar35 = PTR_DAT_04bb2020;
    goto LAB_0287f200;
  }
  local_7d0 = (undefined **)0xa59;
  FUN_0277d4ac(&local_7d0);
  if (*param_1 == -2) {
    lVar18 = 0;
LAB_0287ef58:
    *(undefined4 *)(param_1 + lVar18 * 4) = (undefined4)local_7d0;
    *(undefined4 *)(param_1 + lVar18 * 4 + 2) = local_7d0._4_4_;
  }
  else {
    if (param_1[4] == -2) {
      lVar18 = 1;
      goto LAB_0287ef58;
    }
    if (param_1[8] == -2) {
      lVar18 = 2;
      goto LAB_0287ef58;
    }
    if (param_1[0xc] == -2) {
      lVar18 = 3;
      goto LAB_0287ef58;
    }
    if (param_1[0x10] == -2) {
      lVar18 = 4;
      goto LAB_0287ef58;
    }
    if (param_1[0x14] == -2) {
      lVar18 = 5;
      goto LAB_0287ef58;
    }
    if (param_1[0x18] == -2) {
      lVar18 = 6;
      goto LAB_0287ef58;
    }
    if (param_1[0x1c] == -2) {
      lVar18 = 7;
      goto LAB_0287ef58;
    }
    if (param_1[0x20] == -2) {
      lVar18 = 8;
      goto LAB_0287ef58;
    }
    if (param_1[0x24] == -2) {
      lVar18 = 9;
      goto LAB_0287ef58;
    }
    if (param_1[0x28] == -2) {
      lVar18 = 10;
      goto LAB_0287ef58;
    }
    if (param_1[0x2c] == -2) {
      lVar18 = 0xb;
      goto LAB_0287ef58;
    }
    if (param_1[0x30] == -2) {
      lVar18 = 0xc;
      goto LAB_0287ef58;
    }
    puVar35 = PTR_DAT_04bb2020;
    if (param_1[0x34] == -2) {
      lVar18 = 0xd;
      goto LAB_0287ef58;
    }
    if (param_1[0x38] == -2) {
      lVar18 = 0xe;
      goto LAB_0287ef58;
    }
    if (param_1[0x3c] == -2) {
      lVar18 = 0xf;
      goto LAB_0287ef58;
    }
    if (param_1[0x40] == -2) {
      lVar18 = 0x10;
      goto LAB_0287ef58;
    }
    if (param_1[0x44] == -2) {
      lVar18 = 0x11;
      goto LAB_0287ef58;
    }
    if (param_1[0x48] == -2) {
      lVar18 = 0x12;
      goto LAB_0287ef58;
    }
    if (param_1[0x4c] == -2) {
      lVar18 = 0x13;
      goto LAB_0287ef58;
    }
    if (param_1[0x50] == -2) {
      lVar18 = 0x14;
      goto LAB_0287ef58;
    }
    if (param_1[0x54] == -2) {
      lVar18 = 0x15;
      goto LAB_0287ef58;
    }
    if (param_1[0x58] == -2) {
      lVar18 = 0x16;
      goto LAB_0287ef58;
    }
    if (param_1[0x5c] == -2) {
      lVar18 = 0x17;
      goto LAB_0287ef58;
    }
    if (param_1[0x60] == -2) {
      lVar18 = 0x18;
      goto LAB_0287ef58;
    }
    if (param_1[100] == -2) {
      lVar18 = 0x19;
      goto LAB_0287ef58;
    }
    if (param_1[0x68] == -2) {
      lVar18 = 0x1a;
      goto LAB_0287ef58;
    }
    if (param_1[0x6c] == -2) {
      lVar18 = 0x1b;
      goto LAB_0287ef58;
    }
    if (param_1[0x70] == -2) {
      lVar18 = 0x1c;
      goto LAB_0287ef58;
    }
    if (param_1[0x74] == -2) {
      lVar18 = 0x1d;
      goto LAB_0287ef58;
    }
    if (param_1[0x78] == -2) {
      lVar18 = 0x1e;
      goto LAB_0287ef58;
    }
    if (param_1[0x7c] == -2) {
      lVar18 = 0x1f;
      goto LAB_0287ef58;
    }
  }
  local_7d0 = (undefined **)0xbd6;
  FUN_0277d4ac(&local_7d0);
  if (*param_1 == -2) {
    lVar18 = 0;
  }
  else if (param_1[4] == -2) {
    lVar18 = 1;
  }
  else if (param_1[8] == -2) {
    lVar18 = 2;
  }
  else if (param_1[0xc] == -2) {
    lVar18 = 3;
  }
  else if (param_1[0x10] == -2) {
    lVar18 = 4;
  }
  else if (param_1[0x14] == -2) {
    lVar18 = 5;
  }
  else if (param_1[0x18] == -2) {
    lVar18 = 6;
  }
  else if (param_1[0x1c] == -2) {
    lVar18 = 7;
  }
  else if (param_1[0x20] == -2) {
    lVar18 = 8;
  }
  else if (param_1[0x24] == -2) {
    lVar18 = 9;
  }
  else if (param_1[0x28] == -2) {
    lVar18 = 10;
  }
  else if (param_1[0x2c] == -2) {
    lVar18 = 0xb;
  }
  else if (param_1[0x30] == -2) {
    lVar18 = 0xc;
  }
  else {
    puVar35 = PTR_DAT_04bb2020;
    if (param_1[0x34] == -2) {
      lVar18 = 0xd;
    }
    else if (param_1[0x38] == -2) {
      lVar18 = 0xe;
    }
    else if (param_1[0x3c] == -2) {
      lVar18 = 0xf;
    }
    else if (param_1[0x40] == -2) {
      lVar18 = 0x10;
    }
    else if (param_1[0x44] == -2) {
      lVar18 = 0x11;
    }
    else if (param_1[0x48] == -2) {
      lVar18 = 0x12;
    }
    else if (param_1[0x4c] == -2) {
      lVar18 = 0x13;
    }
    else if (param_1[0x50] == -2) {
      lVar18 = 0x14;
    }
    else if (param_1[0x54] == -2) {
      lVar18 = 0x15;
    }
    else if (param_1[0x58] == -2) {
      lVar18 = 0x16;
    }
    else if (param_1[0x5c] == -2) {
      lVar18 = 0x17;
    }
    else if (param_1[0x60] == -2) {
      lVar18 = 0x18;
    }
    else if (param_1[100] == -2) {
      lVar18 = 0x19;
    }
    else if (param_1[0x68] == -2) {
      lVar18 = 0x1a;
    }
    else if (param_1[0x6c] == -2) {
      lVar18 = 0x1b;
    }
    else if (param_1[0x70] == -2) {
      lVar18 = 0x1c;
    }
    else if (param_1[0x74] == -2) {
      lVar18 = 0x1d;
    }
    else if (param_1[0x78] == -2) {
      lVar18 = 0x1e;
    }
    else {
      if (param_1[0x7c] != -2) goto LAB_0287f200;
      lVar18 = 0x1f;
    }
  }
  *(undefined4 *)(param_1 + lVar18 * 4) = (undefined4)local_7d0;
  *(undefined4 *)(param_1 + lVar18 * 4 + 2) = local_7d0._4_4_;
LAB_0287f200:
  uVar30 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  uVar31 = uVar30 >> 0x10;
  uVar33 = uVar30 >> 0x18;
  uVar17 = uVar30 & 0xffffffff;
  uVar32 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_f58 = puVar35 + 0x10;
  uVar23 = uVar33 & 0xffffffff;
  uVar22 = uVar31 & 0xffffffff;
  cVar14 = (char)(uVar30 >> 0x20);
  local_f50[0] = "Halloween";
  local_1e38 = (undefined **)uVar30;
  if (cVar14 < '\x05') {
    lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1e38);
    local_16c8 = (undefined *)(lVar18 + -0x15180);
    uVar17 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_16c8);
    uVar22 = uVar17 >> 0x10;
    uVar23 = uVar17 >> 0x18;
    local_1e38 = (undefined **)uVar17;
  }
  uVar12 = (ulong)local_1e38;
  local_1e38._7_1_ = SUB81(uVar12,7);
  local_1e38._0_7_ = (uint7)CONCAT24(5,(uint)local_1e38);
  uVar17 = FUN_0087a8f0(uVar32,&local_f58,uVar17,uVar22,uVar23,0);
  if ((uVar17 & 1) == 0) {
    uVar32 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_16c8 = PTR_DAT_04bb2020 + 0x10;
    local_16c0 = "Halloween";
    local_25b8 = (undefined **)uVar30;
    if (cVar14 < '\x05') {
      lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_25b8);
      local_1e38 = (undefined **)(lVar18 + -0x15180);
      local_25b8 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1e38);
      uVar30 = (ulong)local_25b8 & 0xffffffff;
      uVar31 = (ulong)local_25b8 >> 0x10;
      uVar33 = (ulong)local_25b8 >> 0x18;
    }
    uVar17 = (ulong)local_25b8;
    local_25b8._7_1_ = SUB81(uVar17,7);
    local_25b8._0_7_ = (uint7)CONCAT24(5,(undefined4)local_25b8);
    uVar17 = FUN_0087b260(uVar32,&local_16c8,uVar30 & 0xffffffff,uVar31 & 0xffffffff,
                          uVar33 & 0xffffffff,0);
    if ((uVar17 & 1) == 0) {
      return;
    }
  }
  local_f58 = (undefined *)0x33ab;
  FUN_0277d4ac(&local_f58);
  uVar15 = 0;
  iVar28 = 0x20;
  lVar18 = *plVar36;
  do {
    lVar19 = (long)param_1 + ((long)((ulong)uVar15 << 0x20) >> 0x1d);
    uVar16 = FUN_0277d6c4(lVar19);
    lVar21 = *plVar36;
    if (lVar21 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar16 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
        uVar17 = FUN_0277d7b4(lVar19,&local_f58);
        if ((uVar17 & 1) != 0) {
          return;
        }
        lVar21 = *plVar36;
      }
    }
    uVar15 = uVar15 + 1;
    iVar28 = iVar28 + -1;
    lVar18 = lVar21;
  } while (iVar28 != 0);
  if (*param_1 == -2) {
    lVar18 = 0;
  }
  else if (param_1[4] == -2) {
    lVar18 = 1;
  }
  else if (param_1[8] == -2) {
    lVar18 = 2;
  }
  else if (param_1[0xc] == -2) {
    lVar18 = 3;
  }
  else if (param_1[0x10] == -2) {
    lVar18 = 4;
  }
  else if (param_1[0x14] == -2) {
    lVar18 = 5;
  }
  else if (param_1[0x18] == -2) {
    lVar18 = 6;
  }
  else if (param_1[0x1c] == -2) {
    lVar18 = 7;
  }
  else if (param_1[0x20] == -2) {
    lVar18 = 8;
  }
  else if (param_1[0x24] == -2) {
    lVar18 = 9;
  }
  else if (param_1[0x28] == -2) {
    lVar18 = 10;
  }
  else if (param_1[0x2c] == -2) {
    lVar18 = 0xb;
  }
  else if (param_1[0x30] == -2) {
    lVar18 = 0xc;
  }
  else if (param_1[0x34] == -2) {
    lVar18 = 0xd;
  }
  else if (param_1[0x38] == -2) {
    lVar18 = 0xe;
  }
  else if (param_1[0x3c] == -2) {
    lVar18 = 0xf;
  }
  else if (param_1[0x40] == -2) {
    lVar18 = 0x10;
  }
  else if (param_1[0x44] == -2) {
    lVar18 = 0x11;
  }
  else if (param_1[0x48] == -2) {
    lVar18 = 0x12;
  }
  else if (param_1[0x4c] == -2) {
    lVar18 = 0x13;
  }
  else if (param_1[0x50] == -2) {
    lVar18 = 0x14;
  }
  else if (param_1[0x54] == -2) {
    lVar18 = 0x15;
  }
  else if (param_1[0x58] == -2) {
    lVar18 = 0x16;
  }
  else if (param_1[0x5c] == -2) {
    lVar18 = 0x17;
  }
  else if (param_1[0x60] == -2) {
    lVar18 = 0x18;
  }
  else if (param_1[100] == -2) {
    lVar18 = 0x19;
  }
  else if (param_1[0x68] == -2) {
    lVar18 = 0x1a;
  }
  else if (param_1[0x6c] == -2) {
    lVar18 = 0x1b;
  }
  else if (param_1[0x70] == -2) {
    lVar18 = 0x1c;
  }
  else if (param_1[0x74] == -2) {
    lVar18 = 0x1d;
  }
  else if (param_1[0x78] == -2) {
    lVar18 = 0x1e;
  }
  else {
    if (param_1[0x7c] != -2) {
      return;
    }
    lVar18 = 0x1f;
  }
  *(undefined4 *)(param_1 + lVar18 * 4) = (undefined4)local_f58;
  *(undefined4 *)(param_1 + lVar18 * 4 + 2) = local_f58._4_4_;
  return;
}

