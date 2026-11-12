
/* WARNING: Removing unreachable block (ram,0x00a8a600) */
/* WARNING: Removing unreachable block (ram,0x00a8a584) */
/* WARNING: Removing unreachable block (ram,0x00a8a5c4) */
/* WARNING: Removing unreachable block (ram,0x00a8a640) */
/* WARNING: Removing unreachable block (ram,0x00a8a680) */

void FUN_00a8a4cc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  ushort uVar11;
  short sVar12;
  undefined *puVar13;
  byte bVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  short *psVar21;
  ulong *puVar22;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  char *pcStack_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined *local_120;
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar13 = PTR_DAT_04bb32e8;
  puVar1 = (undefined8 *)(param_1 + 0x653e4);
  lVar19 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x70);
  if (lVar19 == 0) {
    *puVar1 = 0;
    return;
  }
  cVar7 = *(char *)(lVar19 + 0xd0);
  cVar8 = *(char *)(lVar19 + 0xd8);
  cVar9 = *(char *)(lVar19 + 0xd9);
  cVar10 = *(char *)(lVar19 + 0xda);
  uVar11 = *(ushort *)PTR_DAT_04bb6298;
  uVar20 = (ulong)(short)uVar11;
  if (uVar20 == 0xffffffffffffffff) {
    local_158 = 0;
    local_160 = 0;
    uVar25 = 0;
    uVar24 = 0;
  }
  else {
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (uVar20 & 0xffffffff) * 8);
    if (0xff < uVar11) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (uVar20 & 0xffffffff) * 8);
    if (0xff < uVar11) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (uVar20 & 0xffffffff) * 8);
    if (0xff < uVar11) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar25 = *puVar5 >> 0x18 & 1;
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (uVar20 & 0xffffffff) * 8);
    if (0xff < uVar11) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    local_158 = CONCAT44(*puVar6 >> 0x11,*puVar5 >> 0x19) & 0x100000001;
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (uVar20 & 0xffffffff) * 8);
    if (0xff < uVar11) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    local_160 = CONCAT44(*puVar4 >> 0x17,*puVar6 >> 0x1a) & 0x100000001;
    local_150 = (undefined *)CONCAT44(local_150._4_4_,0x20);
    puVar3 = PTR_DAT_04bc39f8 + (uVar20 & 0xffffffff) * 8;
    if (0xff < uVar11) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    uVar24 = *(uint *)(puVar3 + 4) & 1;
  }
  psVar21 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar21 == 0) {
    local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_70 >> 0x20) < '\x05') {
      lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_150 = (undefined *)(lVar19 + -0x15180);
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_150);
    }
    psVar21 = (short *)&local_70;
    uVar20 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
    local_70 = CONCAT26((short)uVar20,(undefined6)local_70) & 0xff00ffffffffffff;
  }
  uVar11 = psVar21[1];
  *(undefined4 *)(param_1 + 0x653e8) = 0;
  puVar3 = PTR_DAT_04bb32f0;
  bVar14 = 0;
  if ((ulong)uVar11 * -0x10000 == -0x1f0c0000) {
    uVar23 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_150 = PTR_DAT_04bb2020 + 0x10;
    pcStack_148 = "Countdown";
    puVar22 = (ulong *)(*(long *)puVar13 + 0x4068);
    if (*(short *)puVar22 == 0) {
      local_78 = *(ulong *)(*(long *)puVar13 + 0x4060);
      if ((char)(local_78 >> 0x20) < '\x05') {
        lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
        local_70 = lVar19 - 0x15180;
        local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
      }
      puVar22 = &local_78;
      uVar20 = local_78 >> 0x30;
      local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
      local_78 = CONCAT26((short)uVar20,(undefined6)local_78) & 0xff00ffffffffffff;
    }
    uVar20 = *puVar22;
    bVar14 = FUN_00879dd0(uVar23,&local_150,uVar20,uVar20 >> 0x10,uVar20 >> 0x18,0);
  }
  iVar15 = FUN_00883634(*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_04bb2d88;
  puVar13 = PTR_DAT_04bb27c0;
  bVar14 = bVar14 | -1 < iVar15;
  if ((cVar9 != '\0' || cVar7 != '\0') || cVar10 != '\0') {
    uVar25 = 1;
  }
  if ((cVar8 == '\0') && (uVar25 == 0)) {
    if (uVar24 != 0) {
      return;
    }
    local_140 = 0;
    local_150 = (undefined *)0x1900000000;
    pcStack_148 = (char *)0x0;
    local_13c = 0x3f800000;
    local_110 = 0x80;
    local_8d = 0;
    local_10c[0] = 0;
    puVar2 = PTR_DAT_04bb2d88 + 0x10;
    local_88 = 7;
    local_80 = 0;
    local_84 = 0;
    local_134 = 0;
    local_12c = 0;
    local_120 = puVar2;
    puStack_118 = local_10c;
    FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_150,0,0);
    if ((local_160 & 1) == 0) {
      local_150 = (undefined *)0x1b00000000;
      pcStack_148 = (char *)0x0;
      local_140 = 0;
      local_13c = 0x3f800000;
      local_110 = 0x80;
      local_8d = 0;
      local_10c[0] = 0;
      local_88 = 7;
      local_80 = 0;
      local_84 = 0;
      local_134 = 0;
      local_12c = 0;
      local_120 = puVar2;
      puStack_118 = local_10c;
      uVar16 = FUN_007402e0(*(undefined8 *)puVar13,&local_150,0,0);
      *(undefined4 *)puVar1 = uVar16;
    }
    if (((int)local_158 != 0 || local_158._4_4_ != 0) ||
        (local_160._4_4_ != 0 || ((bVar14 ^ 0xff) & 1) != 0)) {
      return;
    }
    uVar23 = *(undefined8 *)puVar13;
    local_120 = puVar3 + 0x10;
    goto LAB_00a8ab18;
  }
  if ((*(long *)PTR_DAT_04bb5ce0 == 0) || (sVar12 = *(short *)PTR_DAT_04bb6298, sVar12 == -1)) {
LAB_00a8a9d8:
    puVar13 = PTR_DAT_04bb2720;
    lVar19 = *(long *)PTR_DAT_04bb2720;
    iVar15 = 0;
    if (lVar19 != 0) {
      if (*(long *)(lVar19 + 0x330) == 0) {
        iVar15 = 0;
      }
      else {
        puVar18 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
        iVar17 = FUN_006bd550(*puVar18,0);
        iVar15 = 0;
        if (iVar17 == 0x758f7eaf) {
          iVar15 = 0;
          if (*(long *)puVar13 != 0) {
            lVar19 = *(long *)(*(long *)puVar13 + 0x330);
            iVar15 = 0;
            if (lVar19 != 0) {
              iVar15 = *(int *)(lVar19 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) != iVar15) {
      *(undefined4 *)puVar1 = 0;
      return;
    }
  }
  else {
    local_150 = (undefined *)CONCAT44(local_150._4_4_,6);
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
    if (0xff < (uint)(int)sVar12) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar6 >> 6 & 1) == 0) {
      local_150 = (undefined *)CONCAT44(local_150._4_4_,7);
      puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
      if (0xff < (uint)(int)sVar12) {
        puVar6 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar6 >> 7 & 1) == 0) goto LAB_00a8a9d8;
    }
    uVar20 = FUN_0180dd50();
    if ((uVar20 & 1) != 0) goto LAB_00a8a9d8;
  }
  puVar13 = PTR_DAT_04bb27c0;
  if (uVar24 != 0) {
    return;
  }
  local_140 = 0;
  local_150 = (undefined *)0x1900000000;
  pcStack_148 = (char *)0x0;
  puStack_118 = local_10c;
  local_13c = 0x3f800000;
  local_110 = 0x80;
  local_8d = 0;
  local_10c[0] = 0;
  puVar3 = PTR_DAT_04bb2d88 + 0x10;
  local_88 = 7;
  local_80 = 0;
  local_84 = 0;
  local_134 = 0;
  local_12c = 0;
  local_120 = puVar3;
  FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_150,0,0);
  if (local_158._4_4_ != 0 || ((int)local_158 != 0 || ((bVar14 ^ 0xff) & 1) != 0)) {
    return;
  }
  uVar23 = *(undefined8 *)puVar13;
  local_120 = puVar3;
LAB_00a8ab18:
  local_80 = 0;
  local_84 = 0;
  local_88 = 7;
  local_8d = 0;
  local_10c[0] = 0;
  local_110 = 0x80;
  puStack_118 = local_10c;
  local_134 = 0;
  local_13c = 0x3f800000;
  local_140 = 0;
  pcStack_148 = (char *)0x0;
  local_150 = (undefined *)0x1a00000000;
  local_12c = 0;
  uVar16 = FUN_007402e0(uVar23,&local_150,0,0);
  *(undefined4 *)(param_1 + 0x653e8) = uVar16;
  return;
}

