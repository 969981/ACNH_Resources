
/* WARNING: Removing unreachable block (ram,0x0083c8cc) */
/* WARNING: Removing unreachable block (ram,0x0083c6d0) */
/* WARNING: Removing unreachable block (ram,0x0083c6a8) */
/* WARNING: Removing unreachable block (ram,0x0083c46c) */
/* WARNING: Removing unreachable block (ram,0x0083c444) */
/* WARNING: Removing unreachable block (ram,0x0083c874) */
/* WARNING: Removing unreachable block (ram,0x0083c89c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x0083c534 */
/* WARNING: Removing unreachable block (ram,0x0083d740) */
/* WARNING: Removing unreachable block (ram,0x0083d6cc) */
/* WARNING: Removing unreachable block (ram,0x0083d6a4) */
/* WARNING: Removing unreachable block (ram,0x0083c4e0) */
/* WARNING: Removing unreachable block (ram,0x0083c508) */
/* WARNING: Removing unreachable block (ram,0x0083c8c4) */
/* WARNING: Removing unreachable block (ram,0x0083c744) */
/* WARNING: Removing unreachable block (ram,0x0083c76c) */
/* WARNING: Removing unreachable block (ram,0x0083d738) */
/* WARNING: Removing unreachable block (ram,0x0083d768) */
/* WARNING: Removing unreachable block (ram,0x0083c5cc) */
/* WARNING: Removing unreachable block (ram,0x0083c57c) */
/* WARNING: Removing unreachable block (ram,0x0083c5a4) */
/* WARNING: Removing unreachable block (ram,0x0083c794) */
/* WARNING: Removing unreachable block (ram,0x0083c8d0) */
/* WARNING: Removing unreachable block (ram,0x0083d7cc) */
/* WARNING: Removing unreachable block (ram,0x0083d7c4) */
/* WARNING: Removing unreachable block (ram,0x0083d7f4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0083c1b0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  long *plVar12;
  float *pfVar13;
  undefined4 *puVar14;
  int *piVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  undefined8 uVar22;
  uint *puVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  undefined8 local_168;
  undefined8 local_160;
  float local_158;
  undefined4 uStack_154;
  uint local_150;
  uint local_14c [5];
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [127];
  undefined1 local_a5;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_98;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  uint local_80;
  uint uStack_7c;
  undefined8 local_68;
  
  uVar9 = local_80;
  uVar7 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 5;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
    if (uVar7 < 0xd) {
      uVar7 = nn::os::GetSystemTick();
      uVar9 = 0;
      uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
      uVar8 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
      local_88 = CONCAT44(uVar8,uVar7);
      local_80 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
      do {
        local_14c[(int)uVar9] = uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar9 < 10);
      lVar19 = 0;
      local_150 = 10;
      uStack_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 4;
      do {
        if ((int)local_150 < 1) {
          *(undefined4 *)(param_1 + 0x2e0 + lVar19) = 0xffffffff;
          uVar4 = local_80;
          uVar7 = uStack_7c;
          goto LAB_0083c8d8;
        }
        uVar9 = (uint)local_88 ^ (uint)local_88 << 0xb;
        local_88 = CONCAT44(local_88._4_4_,local_88._4_4_);
        uVar7 = uVar9 >> 8 ^ uStack_7c >> 0x13 ^ uVar9 ^ uStack_7c;
        local_80 = uStack_7c;
        uVar21 = (ulong)uVar7 * (ulong)local_150 >> 0x20;
        uVar9 = local_150 - 1;
        if (9 < (uint)((ulong)uVar7 * (ulong)local_150 >> 0x20)) {
          uVar21 = 0;
        }
        if (9 < uVar9) {
          uVar9 = 0;
        }
        uVar8 = local_14c[uVar21];
        local_14c[uVar21] = local_14c[(int)uVar9];
        uVar9 = local_150 - 1;
        if (9 < uVar9) {
          uVar9 = 0;
        }
        local_14c[(int)uVar9] = uVar8;
        *(uint *)(param_1 + 0x2e0 + lVar19) = uVar8;
        local_150 = local_150 - 1;
        uVar4 = local_80;
        if (uVar8 == 0xffffffff) goto LAB_0083c8d8;
        lVar19 = lVar19 + 4;
        uStack_7c = uVar7;
      } while (lVar19 != 0x28);
      goto LAB_0083c910;
    }
    uVar7 = nn::os::GetSystemTick();
    uVar9 = 0;
    uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    uVar8 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
    uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
    do {
      local_14c[(int)uVar9] = uVar9;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
    uVar7 = uVar7 ^ uVar7 * 0x800;
    local_88 = (ulong)uVar8;
    uVar7 = uVar7 >> 8 ^ uVar4 >> 0x13 ^ uVar7 ^ uVar4;
    uVar24 = (ulong)uVar7 * 3;
    uVar21 = uVar24 >> 0x20;
    if (2 < (uint)(uVar24 >> 0x20)) {
      uVar21 = 0;
    }
    uVar9 = local_14c[uVar21];
    local_14c[uVar21] = local_14c[2];
    *(uint *)(param_1 + 0x2e0) = uVar9;
    if (uVar9 != 0xffffffff) {
      uVar8 = uVar8 ^ uVar8 * 0x800;
      uVar9 = uVar8 ^ uStack_7c;
      uVar7 = uVar8 >> 8 ^ uStack_7c >> 0x13 ^ uVar9;
      uVar21 = (ulong)(uVar9 >> 0x1f);
      if (2 < (uint)((ulong)uVar7 * 2 >> 0x20)) {
        uVar21 = 0;
      }
      uVar9 = local_14c[uVar21];
      local_14c[uVar21] = local_14c[1];
      *(uint *)(param_1 + 0x2e4) = uVar9;
      goto joined_r0x0083d6e8;
    }
  }
  else if (uVar7 < 0xd) {
    uVar8 = nn::os::GetSystemTick();
    uVar7 = 0;
    uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    uVar4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
    uVar3 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
    do {
      local_14c[(int)uVar7] = uVar7;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    uVar8 = uVar8 ^ uVar8 * 0x800;
    local_88 = (ulong)uVar3;
    uVar2 = uVar8 ^ uVar4;
    uVar7 = uVar8 >> 8 ^ uVar4 >> 0x13 ^ uVar2;
    uVar21 = (ulong)(uVar2 >> 0x1e);
    if (3 < (uint)((ulong)uVar7 * 4 >> 0x20)) {
      uVar21 = 0;
    }
    uVar8 = local_14c[uVar21];
    local_14c[uVar21] = local_14c[3];
    *(uint *)(param_1 + 0x2e0) = uVar8;
    if (uVar8 != 0xffffffff) {
      uVar3 = uVar3 ^ uVar3 * 0x800;
      local_88 = (ulong)local_80;
      uVar7 = uVar3 >> 8 ^ uStack_7c >> 0x13 ^ uVar3 ^ uStack_7c;
      local_80 = uStack_7c;
      uVar24 = (ulong)uVar7 * 3;
      uVar21 = uVar24 >> 0x20;
      if (3 < (uint)(uVar24 >> 0x20)) {
        uVar21 = 0;
      }
      uVar8 = local_14c[uVar21];
      local_14c[uVar21] = local_14c[2];
      *(uint *)(param_1 + 0x2e4) = uVar8;
      uVar4 = local_80;
      if (uVar8 != 0xffffffff) {
        uVar9 = uVar9 ^ uVar9 << 0xb;
        local_88 = (ulong)uStack_7c;
        uVar8 = uVar9 ^ uStack_7c;
        uVar7 = uVar9 >> 8 ^ uStack_7c >> 0x13 ^ uVar8;
        uVar21 = (ulong)(uVar8 >> 0x1f);
        if (3 < (uint)((ulong)uVar7 * 2 >> 0x20)) {
          uVar21 = 0;
        }
        uVar9 = local_14c[uVar21];
        local_14c[uVar21] = local_14c[1];
        *(uint *)(param_1 + 0x2e8) = uVar9;
        uVar4 = local_80;
        if (uVar9 != 0xffffffff) {
          local_88 = (ulong)uStack_7c;
          uVar9 = (uStack_7c ^ uStack_7c << 0xb) >> 8 ^ uStack_7c >> 0x13 ^ uStack_7c << 0xb;
          *(uint *)(param_1 + 0x2ec) = local_14c[0];
          local_80 = uStack_7c;
          goto joined_r0x0083d804;
        }
      }
    }
  }
  else {
    uVar7 = nn::os::GetSystemTick();
    uVar9 = 0;
    uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    uVar8 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
    uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
    do {
      local_14c[(int)uVar9] = uVar9;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
    uVar7 = uVar7 ^ uVar7 * 0x800;
    local_88 = (ulong)uVar8;
    uVar7 = uVar7 >> 8 ^ uVar4 >> 0x13 ^ uVar7 ^ uVar4;
    uVar24 = (ulong)uVar7 * 3;
    uVar21 = uVar24 >> 0x20;
    if (2 < (uint)(uVar24 >> 0x20)) {
      uVar21 = 0;
    }
    uVar9 = local_14c[uVar21];
    local_14c[uVar21] = local_14c[2];
    *(uint *)(param_1 + 0x2e0) = uVar9;
    if (uVar9 != 0xffffffff) {
      uVar8 = uVar8 ^ uVar8 * 0x800;
      uVar9 = uVar8 ^ uStack_7c;
      uVar7 = uVar8 >> 8 ^ uStack_7c >> 0x13 ^ uVar9;
      uVar21 = (ulong)(uVar9 >> 0x1f);
      if (2 < (uint)((ulong)uVar7 * 2 >> 0x20)) {
        uVar21 = 0;
      }
      uVar9 = local_14c[uVar21];
      local_14c[uVar21] = local_14c[1];
      *(uint *)(param_1 + 0x2e4) = uVar9;
joined_r0x0083d6e8:
      local_88 = (ulong)local_80;
      uVar4 = uStack_7c;
      if (uVar9 != 0xffffffff) {
        uVar9 = local_80 ^ local_80 << 0xb;
        local_88 = 0;
        uVar9 = uVar9 >> 8 ^ uVar7 >> 0x13 ^ uVar9 ^ uVar7;
        *(uint *)(param_1 + 0x2e8) = local_14c[0];
        local_80 = uVar7;
joined_r0x0083d804:
        uVar4 = local_80;
        uVar7 = uVar9;
        uStack_7c = uVar9;
        if (local_14c[0] != 0xffffffff) goto LAB_0083c910;
      }
    }
  }
LAB_0083c8d8:
  uStack_7c = uVar7;
  local_80 = uVar4;
  *(undefined8 *)(param_1 + 0x2e0) = 0x100000000;
  *(undefined8 *)(param_1 + 0x2f0) = 0x500000004;
  *(undefined8 *)(param_1 + 0x2e8) = 0x300000002;
  *(undefined8 *)(param_1 + 0x2f8) = 0x700000006;
  *(undefined8 *)(param_1 + 0x300) = 0x900000008;
LAB_0083c910:
  local_158 = 0.0;
  local_a5 = 0;
  uVar9 = *(uint *)(param_1 + 0x274);
  uVar21 = (ulong)uVar9;
  local_14c[1] = (uint)(1 < uVar9);
  local_14c[0] = (uint)(*(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 0x12 < 0xfffffff3);
  local_128 = 0x80;
  local_168 = 0x8800000000;
  local_160 = 0;
  uStack_154 = 0x3f800000;
  local_150 = 0;
  puStack_130 = local_124;
  local_124[0] = 0;
  local_98 = 0;
  local_9c = 0;
  local_14c[2] = 0;
  local_14c[3] = 0;
  local_138 = PTR_DAT_04bb2d88 + 0x10;
  local_a0 = 7;
  local_90 = local_14c[1];
  local_8c = local_14c[0];
  if (uVar9 != 0) {
    uVar24 = 0;
    puVar23 = (uint *)(param_1 + 0x2e0);
    do {
      iVar10 = (int)uVar21;
      puVar1 = puVar23;
      if (9 < uVar24) {
        puVar1 = (uint *)(param_1 + 0x2e0);
      }
      uVar9 = *puVar1;
      iVar20 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
      pfVar11 = (float *)PTR_DAT_04bb2150;
      if (9 < uVar9) {
LAB_0083cd04:
        if (iVar20 != -0x10e0fba8) {
          iVar10 = *(int *)(param_1 + 0x274);
          iVar20 = *(int *)(param_1 + 0x174);
          goto LAB_0083cd4c;
        }
        if (*(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 5 < 0xd) {
          lVar19 = FUN_00834d74(0x88);
          plVar12 = *(long **)(*(long *)(lVar19 + 0x30b8) + (long)(int)uVar9 * 8);
          goto LAB_0083cfac;
        }
        uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
        local_68 = FUN_00a8c31c(uVar22);
        if ((char)(local_68 >> 0x20) < '\x05') {
          lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          local_88 = lVar19 - 0x15180;
          local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
        }
        uVar17 = local_68 >> 0x10;
        uVar21 = local_68 >> 0x30;
        uVar18 = local_68 >> 0x18;
        local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
        local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
        cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
        lVar19 = FUN_00834d74(0x88);
        if (cVar6 == '\x02') {
          lVar19 = *(long *)(lVar19 + 0x3758);
        }
        else {
          lVar19 = *(long *)(lVar19 + 0x3528);
        }
        goto LAB_0083cfa8;
      }
      if (iVar20 == -0x10e0fba8) {
        if (*(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 5 < 0xd) {
          lVar19 = FUN_00834d74(0x88);
          lVar19 = *(long *)(lVar19 + 0x2d60);
        }
        else {
          uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
          local_68 = FUN_00a8c31c(uVar22);
          if ((char)(local_68 >> 0x20) < '\x05') {
            lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_88 = lVar19 - 0x15180;
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          uVar17 = local_68 >> 0x10;
          uVar21 = local_68 >> 0x30;
          uVar18 = local_68 >> 0x18;
          local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
          local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
          cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
          lVar19 = FUN_00834d74(0x88);
          if (cVar6 == '\x02') {
            lVar19 = *(long *)(lVar19 + 0x3640);
          }
          else {
            lVar19 = *(long *)(lVar19 + 0x3410);
          }
        }
        goto LAB_0083cce4;
      }
      iVar20 = *(int *)(param_1 + 0x174);
      if (iVar10 == 1) {
        if (iVar20 == 1) {
          uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
          local_68 = FUN_00a8c31c(uVar22);
          if ((char)(local_68 >> 0x20) < '\x05') {
            lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_88 = lVar19 - 0x15180;
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          uVar17 = local_68 >> 0x10;
          uVar21 = local_68 >> 0x30;
          uVar18 = local_68 >> 0x18;
          local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
          local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
          cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
          lVar19 = FUN_00834d74(0x88);
          plVar12 = (long *)(lVar19 + 0x280);
          if (cVar6 != '\x02') {
            plVar12 = (long *)(lVar19 + 0x210);
          }
        }
        else {
          if (iVar20 != 0) goto LAB_0083cb10;
          uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
          local_68 = FUN_00a8c31c(uVar22);
          if ((char)(local_68 >> 0x20) < '\x05') {
            lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_88 = lVar19 - 0x15180;
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          uVar17 = local_68 >> 0x10;
          uVar21 = local_68 >> 0x30;
          uVar18 = local_68 >> 0x18;
          local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
          local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
          cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
          lVar19 = FUN_00834d74(0x88);
          plVar12 = (long *)(lVar19 + 0x1a0);
          if (cVar6 != '\x02') {
            plVar12 = (long *)(lVar19 + 0x130);
          }
        }
LAB_0083cce8:
        pfVar11 = (float *)(**(code **)(*plVar12 + 0xf0))();
        iVar20 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
        goto LAB_0083cd04;
      }
LAB_0083cb10:
      if (0xc < *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 5) {
        if (iVar20 == 1) {
          uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
          local_68 = FUN_00a8c31c(uVar22);
          if ((char)(local_68 >> 0x20) < '\x05') {
            lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_88 = lVar19 - 0x15180;
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          uVar17 = local_68 >> 0x10;
          uVar21 = local_68 >> 0x30;
          uVar18 = local_68 >> 0x18;
          local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
          local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
          cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
          lVar19 = FUN_00834d74(0x88);
          if (cVar6 == '\x02') {
            lVar19 = *(long *)(lVar19 + 0x28f8);
          }
          else {
            lVar19 = *(long *)(lVar19 + 0x26c8);
          }
        }
        else {
          if (iVar20 != 0) goto LAB_0083cd4c;
          uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
          local_68 = FUN_00a8c31c(uVar22);
          if ((char)(local_68 >> 0x20) < '\x05') {
            lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_88 = lVar19 - 0x15180;
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          uVar17 = local_68 >> 0x10;
          uVar21 = local_68 >> 0x30;
          uVar18 = local_68 >> 0x18;
          local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
          local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
          cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
          lVar19 = FUN_00834d74(0x88);
          if (cVar6 == '\x02') {
            lVar19 = *(long *)(lVar19 + 0x2498);
          }
          else {
            lVar19 = *(long *)(lVar19 + 0x2268);
          }
        }
LAB_0083cce4:
        plVar12 = *(long **)(lVar19 + (ulong)uVar9 * 8);
        goto LAB_0083cce8;
      }
      if (iVar20 == 1) {
        uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
        local_68 = FUN_00a8c31c(uVar22);
        if ((char)(local_68 >> 0x20) < '\x05') {
          lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          local_88 = lVar19 - 0x15180;
          local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
        }
        uVar17 = local_68 >> 0x10;
        uVar21 = local_68 >> 0x30;
        uVar18 = local_68 >> 0x18;
        local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
        local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
        cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
        lVar19 = FUN_00834d74(0x88);
        if (cVar6 == '\x02') {
          lVar19 = *(long *)(lVar19 + 0x15f0);
        }
        else {
          lVar19 = *(long *)(lVar19 + 0x1340);
        }
        goto LAB_0083cce4;
      }
      if (iVar20 == 0) {
        uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
        local_68 = FUN_00a8c31c(uVar22);
        if ((char)(local_68 >> 0x20) < '\x05') {
          lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          local_88 = lVar19 - 0x15180;
          local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
        }
        uVar17 = local_68 >> 0x10;
        uVar21 = local_68 >> 0x30;
        uVar18 = local_68 >> 0x18;
        local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
        local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
        cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
        lVar19 = FUN_00834d74(0x88);
        if (cVar6 == '\x02') {
          lVar19 = *(long *)(lVar19 + 0x1090);
        }
        else {
          lVar19 = *(long *)(lVar19 + 0xde0);
        }
        goto LAB_0083cce4;
      }
LAB_0083cd4c:
      if (iVar10 == 1) {
        if (iVar20 == 1) {
          uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
          local_68 = FUN_00a8c31c(uVar22);
          if ((char)(local_68 >> 0x20) < '\x05') {
            lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_88 = lVar19 - 0x15180;
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          uVar17 = local_68 >> 0x10;
          uVar21 = local_68 >> 0x30;
          uVar18 = local_68 >> 0x18;
          local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
          local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
          cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
          lVar19 = FUN_00834d74(0x88);
          if (cVar6 == '\x02') {
            plVar12 = (long *)(lVar19 + 0x2b8);
          }
          else {
            plVar12 = (long *)(lVar19 + 0x248);
          }
        }
        else {
          if (iVar20 != 0) goto LAB_0083cde4;
          uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
          local_68 = FUN_00a8c31c(uVar22);
          if ((char)(local_68 >> 0x20) < '\x05') {
            lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_88 = lVar19 - 0x15180;
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          uVar17 = local_68 >> 0x10;
          uVar21 = local_68 >> 0x30;
          uVar18 = local_68 >> 0x18;
          local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
          local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
          cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
          lVar19 = FUN_00834d74(0x88);
          if (cVar6 == '\x02') {
            plVar12 = (long *)(lVar19 + 0x1d8);
          }
          else {
            plVar12 = (long *)(lVar19 + 0x168);
          }
        }
LAB_0083cfac:
        pfVar13 = (float *)(**(code **)(*plVar12 + 0xf0))();
      }
      else {
LAB_0083cde4:
        if (0xc < *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 5) {
          if (iVar20 == 1) {
            uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
            local_68 = FUN_00a8c31c(uVar22);
            if ((char)(local_68 >> 0x20) < '\x05') {
              lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
              local_88 = lVar19 - 0x15180;
              local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
            }
            uVar17 = local_68 >> 0x10;
            uVar21 = local_68 >> 0x30;
            uVar18 = local_68 >> 0x18;
            local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
            local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
            cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
            lVar19 = FUN_00834d74(0x88);
            if (cVar6 == '\x02') {
              lVar19 = *(long *)(lVar19 + 0x2a10);
            }
            else {
              lVar19 = *(long *)(lVar19 + 0x27e0);
            }
          }
          else {
            if (iVar20 != 0) goto LAB_0083d154;
            uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
            local_68 = FUN_00a8c31c(uVar22);
            if ((char)(local_68 >> 0x20) < '\x05') {
              lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
              local_88 = lVar19 - 0x15180;
              local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
            }
            uVar17 = local_68 >> 0x10;
            uVar21 = local_68 >> 0x30;
            uVar18 = local_68 >> 0x18;
            local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
            local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
            cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
            lVar19 = FUN_00834d74(0x88);
            if (cVar6 == '\x02') {
              lVar19 = *(long *)(lVar19 + 0x25b0);
            }
            else {
              lVar19 = *(long *)(lVar19 + 0x2380);
            }
          }
LAB_0083cfa8:
          plVar12 = *(long **)(lVar19 + (long)(int)uVar9 * 8);
          goto LAB_0083cfac;
        }
        if (iVar20 == 1) {
          uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
          local_68 = FUN_00a8c31c(uVar22);
          if ((char)(local_68 >> 0x20) < '\x05') {
            lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_88 = lVar19 - 0x15180;
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          uVar17 = local_68 >> 0x10;
          uVar21 = local_68 >> 0x30;
          uVar18 = local_68 >> 0x18;
          local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
          local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
          cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
          lVar19 = FUN_00834d74(0x88);
          if (cVar6 == '\x02') {
            lVar19 = *(long *)(lVar19 + 0x1748);
          }
          else {
            lVar19 = *(long *)(lVar19 + 0x1498);
          }
          goto LAB_0083cfa8;
        }
        if (iVar20 == 0) {
          uVar22 = *(undefined8 *)PTR_DAT_04bb30a0;
          local_68 = FUN_00a8c31c(uVar22);
          if ((char)(local_68 >> 0x20) < '\x05') {
            lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_88 = lVar19 - 0x15180;
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          uVar17 = local_68 >> 0x10;
          uVar21 = local_68 >> 0x30;
          uVar18 = local_68 >> 0x18;
          local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
          local_68 = CONCAT26((short)uVar21,(undefined6)local_68) & 0xff00ffffffffffff;
          cVar6 = FUN_00a8ae20(uVar22,uVar17,uVar18,4);
          lVar19 = FUN_00834d74(0x88);
          if (cVar6 == '\x02') {
            lVar19 = *(long *)(lVar19 + 0x11e8);
          }
          else {
            lVar19 = *(long *)(lVar19 + 0xf38);
          }
          goto LAB_0083cfa8;
        }
LAB_0083d154:
        pfVar13 = (float *)PTR_DAT_04bb2150;
      }
      if (*pfVar11 <= *pfVar13) {
        fVar26 = pfVar11[1];
        if ((pfVar13[1] < fVar26) || (pfVar13[2] < pfVar11[2])) goto LAB_0083cff4;
        uVar9 = nn::os::GetSystemTick();
        uVar7 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
        uVar9 = uVar7 ^ uVar7 * 0x800;
        uVar8 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
        uVar7 = uVar8 ^ uVar8 * 0x800;
        uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
        uVar4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
        uVar9 = uVar9 >> 8 ^ uVar4 >> 0x13 ^ uVar9 ^ uVar4;
        uVar7 = uVar7 >> 8 ^ uVar9 >> 0x13 ^ uVar7 ^ uVar9;
        uVar8 = uVar8 ^ uVar8 * 0x800;
        fVar25 = *(float *)(param_1 + 0x2a8) +
                 *pfVar11 + (*pfVar13 - *pfVar11) * ((float)(uVar9 >> 9 | 0x3f800000) + -1.0);
        fVar26 = *(float *)(param_1 + 0x2ac) +
                 pfVar11[1] + (pfVar13[1] - pfVar11[1]) * ((float)(uVar7 >> 9 | 0x3f800000) + -1.0);
        local_158 = *(float *)(param_1 + 0x2b0) +
                    pfVar11[2] +
                    (pfVar13[2] - pfVar11[2]) *
                    ((float)((uVar8 >> 8 ^ uVar7 >> 0x13 ^ uVar8 ^ uVar7) >> 9 | 0x3f800000) + -1.0)
        ;
      }
      else {
        fVar26 = pfVar11[1];
LAB_0083cff4:
        fVar25 = *pfVar11 + *(float *)(param_1 + 0x2a8);
        fVar26 = fVar26 + *(float *)(param_1 + 0x2ac);
        local_158 = *(float *)(param_1 + 0x2b0) + pfVar11[2];
      }
      local_160 = CONCAT44(fVar26,fVar25);
      local_14c[2] = *puVar1;
      if (0xc < *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 5) {
        lVar19 = FUN_00834d74(0x88);
        puVar14 = (undefined4 *)
                  (**(code **)(**(long **)(*(long *)(lVar19 + 0x1930) + uVar24 * 8) + 0xf0))();
        uStack_154 = *puVar14;
      }
      uVar9 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_168,
                           *(undefined4 *)(param_1 + 0x230),0);
      bVar5 = 9 < uVar24;
      uVar24 = uVar24 + 1;
      puVar1 = puVar23 + -10;
      if (bVar5) {
        puVar1 = (uint *)(param_1 + 0x2b8);
      }
      *puVar1 = uVar9;
      puVar23 = puVar23 + 1;
      uVar21 = (ulong)*(uint *)(param_1 + 0x274);
    } while (uVar24 < uVar21);
  }
  lVar19 = FUN_00834d74(0x88);
  piVar15 = (int *)(**(code **)(*(long *)(lVar19 + 0x100) + 0xf0))(lVar19 + 0x100);
  iVar10 = *piVar15;
  uVar9 = nn::os::GetSystemTick();
  uVar7 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
  uVar9 = uVar7 ^ uVar7 * 0x800;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  *(bool *)(param_1 + 0x278) =
       (int)((ulong)(uVar9 >> 8 ^ uVar7 >> 0x13 ^ uVar9 ^ uVar7) * 100 >> 0x20) <= iVar10;
  if ((local_90 == 0) && (lVar19 = *(long *)PTR_DAT_04bb27c0, lVar19 != 0)) {
    uVar9 = *(uint *)(param_1 + 0x2b8);
    if ((uVar9 == 0) ||
       (((plVar12 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                              ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0 ||
         ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar9)))) {
      plVar12 = (long *)0x0;
    }
    if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
      plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar16 + 0x60))();
    }
    if (plVar12 != (long *)0x0) {
      if (((*PTR_DAT_04bb5198 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb5198), iVar10 != 0)) {
        *(undefined **)PTR_DAT_04bb5190 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5198);
      }
      (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb5190);
      *(undefined4 *)(plVar12 + 0x4f) = *(undefined4 *)(param_1 + 0x2a8);
      *(undefined4 *)((long)plVar12 + 0x27c) = *(undefined4 *)(param_1 + 0x2ac);
      *(undefined4 *)(plVar12 + 0x50) = *(undefined4 *)(param_1 + 0x2b0);
      *(undefined4 *)((long)plVar12 + 0x284) = *(undefined4 *)(param_1 + 0x2b4);
    }
  }
  return;
}

