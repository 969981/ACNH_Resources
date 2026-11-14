
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc9550(void *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort uVar7;
  ulong uVar8;
  long *plVar9;
  undefined2 uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  short *psVar14;
  undefined4 *puVar15;
  byte bVar16;
  undefined1 *puVar17;
  undefined2 *puVar18;
  ushort *puVar19;
  uint uVar20;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_04bb32e8;
  *param_2 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  psVar14 = (short *)(*(long *)puVar4 + 0x4068);
  if (*psVar14 == 0) {
    local_68 = *(undefined8 *)(*(long *)puVar4 + 0x4060);
    if ((char)(local_68 >> 0x20) < '\x05') {
      lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_78 = (undefined *)(lVar12 + -0x15180);
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
    }
    psVar14 = (short *)&local_68;
    uVar8 = local_68 >> 0x30;
    local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
    local_68 = CONCAT26((short)uVar8,(undefined6)local_68) & 0xff00ffffffffffff;
  }
  param_2[1] = *(undefined8 *)psVar14;
  uVar13 = *(undefined8 *)(DAT_05354240 + 0x188);
  if (*(char *)(DAT_05354240 + 0x1a1) == '\0') {
    uVar13 = 0xffffffffffffffff;
  }
  param_2[2] = uVar13;
  uVar20 = *(uint *)(DAT_04da7238 + 0x65204);
  if (1 < uVar20) {
    uVar20 = 0;
  }
  *(uint *)(param_2 + 3) = uVar20;
  *(undefined2 *)((long)param_2 + 0x1c) = *(undefined2 *)(DAT_052c21a0 + 0x78);
  lVar12 = DAT_04ceac30;
  uVar13 = *(undefined8 *)(DAT_04ceac30 + 0x2c);
  param_2[4] = *(undefined8 *)(DAT_04ceac30 + 0x24);
  param_2[5] = uVar13;
  bVar16 = *(byte *)(lVar12 + 0x34);
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  *(byte *)(param_2 + 6) = bVar16;
  *(undefined2 *)((long)param_2 + 0x31) = *(undefined2 *)(lVar12 + 0x35);
  plVar9 = DAT_0537d558;
  lVar12 = *DAT_0537d558;
  bVar16 = *(byte *)(lVar12 + 0x473);
  if ((long)(char)bVar16 == 0xffffffffffffffff) {
LAB_01dc96bc:
    puVar15 = &DAT_05407614;
  }
  else {
    pbVar3 = (byte *)(lVar12 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x80;
    if (7 < bVar16) {
      pbVar3 = (byte *)(lVar12 + 0x48);
    }
    if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar12 + 0x472) == bVar16)) goto LAB_01dc96bc;
    puVar15 = &DAT_05407620;
  }
  *(undefined4 *)((long)param_2 + 0x34) = *puVar15;
  *(undefined4 *)(param_2 + 7) = puVar15[1];
  *(undefined4 *)((long)param_2 + 0x3c) = puVar15[2];
  lVar12 = *plVar9;
  bVar16 = *(byte *)(lVar12 + 0x473);
  if ((long)(char)bVar16 == 0xffffffffffffffff) {
LAB_01dc9714:
    puVar15 = &DAT_05407630;
  }
  else {
    pbVar3 = (byte *)(lVar12 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x80;
    if (7 < bVar16) {
      pbVar3 = (byte *)(lVar12 + 0x48);
    }
    if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar12 + 0x472) == bVar16)) goto LAB_01dc9714;
    puVar15 = &DAT_05407634;
  }
  puVar17 = &DAT_053feb60;
  *(undefined4 *)(param_2 + 8) = *puVar15;
  puVar4 = PTR_DAT_04bb2020;
  lVar12 = 0;
  *(undefined4 *)((long)param_2 + 0x44) = _DAT_05453f70;
  *(undefined4 *)(param_2 + 9) = DAT_05453f74;
  *(undefined4 *)((long)param_2 + 0x7c) = (undefined4)DAT_05453fec;
  *(undefined4 *)(param_2 + 0x10) = DAT_05453fec._4_4_;
  *(undefined4 *)((long)param_1 + 0x42) = 0;
  *(undefined4 *)((long)param_2 + 0x74) = 0;
  *(undefined2 *)(param_2 + 0xf) = 0;
  puVar19 = (ushort *)((long)param_1 + 0x46);
  puVar19[0] = 0;
  puVar19[1] = 0;
  puVar19[2] = 0;
  puVar19[3] = 0;
  puVar18 = (undefined2 *)((long)param_1 + 0x48);
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4e) = 0;
  do {
    if (puVar17[0x2e1] == '\0') {
      *(undefined4 *)((long)param_2 + lVar12 * 4 + 0x4c) = 0x244db4da;
    }
    else {
      *(undefined4 *)((long)param_2 + lVar12 * 4 + 0x4c) = *(undefined4 *)(puVar17 + 0x2e4);
      pcStack_70 = "CountdownFieldNpc";
      local_78 = puVar4 + 0x10;
      iVar11 = FUN_021965b0(puVar17,&local_78);
      uVar20 = (uint)lVar12;
      if (iVar11 != 0) {
        *(ushort *)((long)param_1 + 0x42) =
             *(ushort *)((long)param_1 + 0x42) | (ushort)(1 << (ulong)(uVar20 & 0x1f));
      }
      pcStack_70 = "GotoEventPlazaForCountdown";
      local_78 = puVar4 + 0x10;
      iVar11 = FUN_021965b0(puVar17,&local_78);
      if (iVar11 != 0) {
        *(ushort *)((long)param_1 + 0x44) =
             *(ushort *)((long)param_1 + 0x44) | (ushort)(1 << (ulong)(uVar20 & 0x1f));
      }
      pcStack_70 = "FireworksFieldNpc";
      local_78 = puVar4 + 0x10;
      iVar11 = FUN_021965b0(puVar17,&local_78);
      if (iVar11 != 0) {
        uVar7 = (ushort)(1 << (ulong)(uVar20 & 0x1f));
        *(ushort *)((long)param_2 + 0x74) = *(ushort *)((long)param_2 + 0x74) | uVar7;
        pcStack_70 = "FireworksFieldLater";
        local_78 = puVar4 + 0x10;
        iVar11 = FUN_021965b0(puVar17,&local_78);
        if (iVar11 != 0) {
          *(ushort *)((long)param_2 + 0x76) = *(ushort *)((long)param_2 + 0x76) | uVar7;
        }
        pcStack_70 = "FireworksAroundWater";
        local_78 = puVar4 + 0x10;
        iVar11 = FUN_021965b0(puVar17,&local_78);
        if (iVar11 != 0) {
          *(ushort *)(param_2 + 0xf) = *(ushort *)(param_2 + 0xf) | uVar7;
        }
      }
      puVar1 = puVar4 + 0x10;
      pcStack_70 = "SeasonEventPlace";
      local_78 = puVar1;
      iVar11 = FUN_021965b0(puVar17,&local_78);
      if (1 < iVar11) {
        *puVar19 = *puVar19 | (ushort)(uVar20 + 1 << (ulong)(iVar11 * 4 - 8U & 0x1f));
      }
      pcStack_70 = "HarvestPlazaHandTool";
      local_78 = puVar1;
      uVar10 = FUN_021965b0(puVar17,&local_78);
      *puVar18 = uVar10;
      pcStack_70 = "CarnivalWanderEventPlaza";
      local_78 = puVar1;
      uVar10 = FUN_021965b0(puVar17,&local_78);
      puVar18[10] = uVar10;
    }
    lVar12 = lVar12 + 1;
    puVar17 = puVar17 + 0xba0;
    puVar18 = puVar18 + 1;
  } while (lVar12 != 10);
  uVar5 = 0x244db4da;
  uVar2 = uVar5;
  if (DAT_05454358 != '\0') {
    uVar2 = (undefined4)DAT_05454550;
  }
  *(undefined4 *)((long)param_2 + 0x84) = uVar2;
  uVar2 = uVar5;
  if (DAT_05454630 != '\0') {
    uVar2 = DAT_05454828;
  }
  *(undefined4 *)(param_2 + 0x11) = uVar2;
  uVar2 = uVar5;
  if (DAT_05454908 != '\0') {
    uVar2 = DAT_05454b00;
  }
  *(undefined4 *)((long)param_2 + 0x8c) = uVar2;
  uVar2 = uVar5;
  if (DAT_05454be0 != '\0') {
    uVar2 = DAT_05454dd8;
  }
  *(undefined4 *)(param_2 + 0x12) = uVar2;
  uVar2 = uVar5;
  if (DAT_05454eb8 != '\0') {
    uVar2 = DAT_054550b0;
  }
  *(undefined4 *)((long)param_2 + 0x94) = uVar2;
  uVar2 = uVar5;
  if (DAT_05455190 != '\0') {
    uVar2 = DAT_05455388;
  }
  *(undefined4 *)(param_2 + 0x13) = uVar2;
  uVar2 = uVar5;
  if (DAT_05455468 != '\0') {
    uVar2 = DAT_05455660;
  }
  *(undefined4 *)((long)param_2 + 0x9c) = uVar2;
  uVar2 = uVar5;
  if (DAT_05455740 != '\0') {
    uVar2 = DAT_05455938;
  }
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  uVar2 = uVar5;
  if (DAT_05455a18 != '\0') {
    uVar2 = DAT_05455c10;
  }
  *(undefined4 *)((long)param_2 + 0xa4) = uVar2;
  uVar2 = uVar5;
  if (DAT_05455cf0 != '\0') {
    uVar2 = DAT_05455ee8;
  }
  *(undefined4 *)(param_2 + 0x15) = uVar2;
  uVar2 = uVar5;
  if (DAT_05455fc8 != '\0') {
    uVar2 = DAT_054561c0;
  }
  *(undefined4 *)((long)param_2 + 0xac) = uVar2;
  uVar2 = uVar5;
  if (DAT_054562a0 != '\0') {
    uVar2 = DAT_05456498;
  }
  *(undefined4 *)(param_2 + 0x16) = uVar2;
  uVar2 = uVar5;
  if (DAT_05456578 != '\0') {
    uVar2 = DAT_05456770;
  }
  *(undefined4 *)((long)param_2 + 0xb4) = uVar2;
  uVar2 = uVar5;
  if (DAT_05456850 != '\0') {
    uVar2 = DAT_05456a48;
  }
  *(undefined4 *)(param_2 + 0x17) = uVar2;
  uVar2 = uVar5;
  if (DAT_05456b28 != '\0') {
    uVar2 = DAT_05456d20;
  }
  *(undefined4 *)((long)param_2 + 0xbc) = uVar2;
  uVar2 = uVar5;
  if (DAT_05456e00 != '\0') {
    uVar2 = DAT_05456ff8;
  }
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  if (DAT_054570d8 != '\0') {
    uVar5 = DAT_054572d0;
  }
  *(undefined4 *)((long)param_2 + 0xc4) = uVar5;
  lVar12 = DAT_053cfba8;
  if (DAT_053cfba8 != 0) {
    FUN_0205e110(DAT_053cfba8);
    if ((6 < *(uint *)(lVar12 + 0x90)) ||
       ((1 << (ulong)(*(uint *)(lVar12 + 0x90) & 0x1f) & 0x71U) == 0)) {
      *(ushort *)(param_2 + 0x19) =
           *(ushort *)(lVar12 + 0x94) >> 8 | *(ushort *)(lVar12 + 0x94) << 8;
      *(undefined1 *)((long)param_2 + 0xca) = *(undefined1 *)(lVar12 + 0x97);
      *(undefined4 *)((long)param_2 + 0xcc) = *(undefined4 *)(lVar12 + 0x98);
      *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(lVar12 + 0x9c);
      *(undefined1 *)((long)param_2 + 0xd2) = *(undefined1 *)(lVar12 + 0x9e);
      *(undefined1 *)((long)param_2 + 0xd3) = *(undefined1 *)(lVar12 + 0x9f);
      *(undefined4 *)((long)param_2 + 0xd4) = *(undefined4 *)(lVar12 + 0xa0);
      uVar20 = (uint)*(byte *)(lVar12 + 0xc2) | (*(byte *)(lVar12 + 0xc3) & 0xf) << 8;
      if ((*(byte *)(lVar12 + 0xc3) & 8) != 0) {
        uVar20 = uVar20 | 0xfffff000;
      }
      *(float *)(param_2 + 0x1b) = (float)(int)uVar20;
      uVar6 = (uint)(*(byte *)(lVar12 + 0xc3) >> 4) | (uint)*(byte *)(lVar12 + 0xc4) << 4;
      uVar20 = uVar6 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar12 + 0xc4)) {
        uVar20 = uVar6;
      }
      *(float *)((long)param_2 + 0xdc) = (float)(int)uVar20;
      *(uint *)(param_2 + 0x1c) = (uint)*(byte *)(lVar12 + 0xc5) << 0x18;
    }
    if ((6 < *(uint *)(lVar12 + 200)) ||
       ((1 << (ulong)(*(uint *)(lVar12 + 200) & 0x1f) & 0x71U) == 0)) {
      *(ushort *)((long)param_2 + 0xe4) =
           *(ushort *)(lVar12 + 0xcc) >> 8 | *(ushort *)(lVar12 + 0xcc) << 8;
      *(undefined1 *)((long)param_2 + 0xe6) = *(undefined1 *)(lVar12 + 0xcf);
      *(undefined4 *)(param_2 + 0x1d) = *(undefined4 *)(lVar12 + 0xd0);
      *(undefined2 *)((long)param_2 + 0xec) = *(undefined2 *)(lVar12 + 0xd4);
      *(undefined1 *)((long)param_2 + 0xee) = *(undefined1 *)(lVar12 + 0xd6);
      *(undefined1 *)((long)param_2 + 0xef) = *(undefined1 *)(lVar12 + 0xd7);
      *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar12 + 0xd8);
      uVar20 = (uint)*(byte *)(lVar12 + 0xfa) | (*(byte *)(lVar12 + 0xfb) & 0xf) << 8;
      if ((*(byte *)(lVar12 + 0xfb) & 8) != 0) {
        uVar20 = uVar20 | 0xfffff000;
      }
      *(float *)((long)param_2 + 0xf4) = (float)(int)uVar20;
      uVar6 = (uint)(*(byte *)(lVar12 + 0xfb) >> 4) | (uint)*(byte *)(lVar12 + 0xfc) << 4;
      uVar20 = uVar6 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar12 + 0xfc)) {
        uVar20 = uVar6;
      }
      *(float *)(param_2 + 0x1f) = (float)(int)uVar20;
      *(uint *)((long)param_2 + 0xfc) = (uint)*(byte *)(lVar12 + 0xfd) << 0x18;
    }
    if ((6 < *(uint *)(lVar12 + 0x100)) ||
       ((1 << (ulong)(*(uint *)(lVar12 + 0x100) & 0x1f) & 0x71U) == 0)) {
      *(ushort *)(param_2 + 0x20) =
           *(ushort *)(lVar12 + 0x104) >> 8 | *(ushort *)(lVar12 + 0x104) << 8;
      *(undefined1 *)((long)param_2 + 0x102) = *(undefined1 *)(lVar12 + 0x107);
      *(undefined4 *)((long)param_2 + 0x104) = *(undefined4 *)(lVar12 + 0x108);
      *(undefined2 *)(param_2 + 0x21) = *(undefined2 *)(lVar12 + 0x10c);
      *(undefined1 *)((long)param_2 + 0x10a) = *(undefined1 *)(lVar12 + 0x10e);
      *(undefined1 *)((long)param_2 + 0x10b) = *(undefined1 *)(lVar12 + 0x10f);
      *(undefined4 *)((long)param_2 + 0x10c) = *(undefined4 *)(lVar12 + 0x110);
      uVar20 = (uint)*(byte *)(lVar12 + 0x132) | (*(byte *)(lVar12 + 0x133) & 0xf) << 8;
      if ((*(byte *)(lVar12 + 0x133) & 8) != 0) {
        uVar20 = uVar20 | 0xfffff000;
      }
      *(float *)(param_2 + 0x22) = (float)(int)uVar20;
      uVar6 = (uint)(*(byte *)(lVar12 + 0x133) >> 4) | (uint)*(byte *)(lVar12 + 0x134) << 4;
      uVar20 = uVar6 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar12 + 0x134)) {
        uVar20 = uVar6;
      }
      *(float *)((long)param_2 + 0x114) = (float)(int)uVar20;
      *(uint *)(param_2 + 0x23) = (uint)*(byte *)(lVar12 + 0x135) << 0x18;
    }
    if ((6 < *(uint *)(lVar12 + 0x138)) ||
       ((1 << (ulong)(*(uint *)(lVar12 + 0x138) & 0x1f) & 0x71U) == 0)) {
      *(ushort *)((long)param_2 + 0x11c) =
           *(ushort *)(lVar12 + 0x13c) >> 8 | *(ushort *)(lVar12 + 0x13c) << 8;
      *(undefined1 *)((long)param_2 + 0x11e) = *(undefined1 *)(lVar12 + 0x13f);
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(lVar12 + 0x140);
      *(undefined2 *)((long)param_2 + 0x124) = *(undefined2 *)(lVar12 + 0x144);
      *(undefined1 *)((long)param_2 + 0x126) = *(undefined1 *)(lVar12 + 0x146);
      *(undefined1 *)((long)param_2 + 0x127) = *(undefined1 *)(lVar12 + 0x147);
      *(undefined4 *)(param_2 + 0x25) = *(undefined4 *)(lVar12 + 0x148);
      uVar20 = (uint)*(byte *)(lVar12 + 0x16a) | (*(byte *)(lVar12 + 0x16b) & 0xf) << 8;
      if ((*(byte *)(lVar12 + 0x16b) & 8) != 0) {
        uVar20 = uVar20 | 0xfffff000;
      }
      *(float *)((long)param_2 + 300) = (float)(int)uVar20;
      uVar6 = (uint)(*(byte *)(lVar12 + 0x16b) >> 4) | (uint)*(byte *)(lVar12 + 0x16c) << 4;
      uVar20 = uVar6 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar12 + 0x16c)) {
        uVar20 = uVar6;
      }
      *(float *)(param_2 + 0x26) = (float)(int)uVar20;
      *(uint *)((long)param_2 + 0x134) = (uint)*(byte *)(lVar12 + 0x16d) << 0x18;
    }
    if ((6 < *(uint *)(lVar12 + 0x170)) ||
       ((1 << (ulong)(*(uint *)(lVar12 + 0x170) & 0x1f) & 0x71U) == 0)) {
      *(ushort *)(param_2 + 0x27) =
           *(ushort *)(lVar12 + 0x174) >> 8 | *(ushort *)(lVar12 + 0x174) << 8;
      *(undefined1 *)((long)param_2 + 0x13a) = *(undefined1 *)(lVar12 + 0x177);
      *(undefined4 *)((long)param_2 + 0x13c) = *(undefined4 *)(lVar12 + 0x178);
      *(undefined2 *)(param_2 + 0x28) = *(undefined2 *)(lVar12 + 0x17c);
      *(undefined1 *)((long)param_2 + 0x142) = *(undefined1 *)(lVar12 + 0x17e);
      *(undefined1 *)((long)param_2 + 0x143) = *(undefined1 *)(lVar12 + 0x17f);
      *(undefined4 *)((long)param_2 + 0x144) = *(undefined4 *)(lVar12 + 0x180);
      uVar20 = (uint)*(byte *)(lVar12 + 0x1a2) | (*(byte *)(lVar12 + 0x1a3) & 0xf) << 8;
      if ((*(byte *)(lVar12 + 0x1a3) & 8) != 0) {
        uVar20 = uVar20 | 0xfffff000;
      }
      *(float *)(param_2 + 0x29) = (float)(int)uVar20;
      uVar6 = (uint)(*(byte *)(lVar12 + 0x1a3) >> 4) | (uint)*(byte *)(lVar12 + 0x1a4) << 4;
      uVar20 = uVar6 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar12 + 0x1a4)) {
        uVar20 = uVar6;
      }
      *(float *)((long)param_2 + 0x14c) = (float)(int)uVar20;
      *(uint *)(param_2 + 0x2a) = (uint)*(byte *)(lVar12 + 0x1a5) << 0x18;
    }
    if ((6 < *(uint *)(lVar12 + 0x1a8)) ||
       ((1 << (ulong)(*(uint *)(lVar12 + 0x1a8) & 0x1f) & 0x71U) == 0)) {
      *(ushort *)((long)param_2 + 0x154) =
           *(ushort *)(lVar12 + 0x1ac) >> 8 | *(ushort *)(lVar12 + 0x1ac) << 8;
      *(undefined1 *)((long)param_2 + 0x156) = *(undefined1 *)(lVar12 + 0x1af);
      *(undefined4 *)(param_2 + 0x2b) = *(undefined4 *)(lVar12 + 0x1b0);
      *(undefined2 *)((long)param_2 + 0x15c) = *(undefined2 *)(lVar12 + 0x1b4);
      *(undefined1 *)((long)param_2 + 0x15e) = *(undefined1 *)(lVar12 + 0x1b6);
      *(undefined1 *)((long)param_2 + 0x15f) = *(undefined1 *)(lVar12 + 0x1b7);
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(lVar12 + 0x1b8);
      uVar20 = (uint)*(byte *)(lVar12 + 0x1da) | (*(byte *)(lVar12 + 0x1db) & 0xf) << 8;
      if ((*(byte *)(lVar12 + 0x1db) & 8) != 0) {
        uVar20 = uVar20 | 0xfffff000;
      }
      *(float *)((long)param_2 + 0x164) = (float)(int)uVar20;
      uVar6 = (uint)(*(byte *)(lVar12 + 0x1db) >> 4) | (uint)*(byte *)(lVar12 + 0x1dc) << 4;
      uVar20 = uVar6 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar12 + 0x1dc)) {
        uVar20 = uVar6;
      }
      *(float *)(param_2 + 0x2d) = (float)(int)uVar20;
      *(uint *)((long)param_2 + 0x16c) = (uint)*(byte *)(lVar12 + 0x1dd) << 0x18;
    }
    if ((6 < *(uint *)(lVar12 + 0x1e0)) ||
       ((1 << (ulong)(*(uint *)(lVar12 + 0x1e0) & 0x1f) & 0x71U) == 0)) {
      *(ushort *)(param_2 + 0x2e) =
           *(ushort *)(lVar12 + 0x1e4) >> 8 | *(ushort *)(lVar12 + 0x1e4) << 8;
      *(undefined1 *)((long)param_2 + 0x172) = *(undefined1 *)(lVar12 + 0x1e7);
      *(undefined4 *)((long)param_2 + 0x174) = *(undefined4 *)(lVar12 + 0x1e8);
      *(undefined2 *)(param_2 + 0x2f) = *(undefined2 *)(lVar12 + 0x1ec);
      *(undefined1 *)((long)param_2 + 0x17a) = *(undefined1 *)(lVar12 + 0x1ee);
      *(undefined1 *)((long)param_2 + 0x17b) = *(undefined1 *)(lVar12 + 0x1ef);
      *(undefined4 *)((long)param_2 + 0x17c) = *(undefined4 *)(lVar12 + 0x1f0);
      uVar20 = (uint)*(byte *)(lVar12 + 0x212) | (*(byte *)(lVar12 + 0x213) & 0xf) << 8;
      if ((*(byte *)(lVar12 + 0x213) & 8) != 0) {
        uVar20 = uVar20 | 0xfffff000;
      }
      *(float *)(param_2 + 0x30) = (float)(int)uVar20;
      uVar6 = (uint)(*(byte *)(lVar12 + 0x213) >> 4) | (uint)*(byte *)(lVar12 + 0x214) << 4;
      uVar20 = uVar6 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar12 + 0x214)) {
        uVar20 = uVar6;
      }
      *(float *)((long)param_2 + 0x184) = (float)(int)uVar20;
      *(uint *)(param_2 + 0x31) = (uint)*(byte *)(lVar12 + 0x215) << 0x18;
    }
    if ((6 < *(uint *)(lVar12 + 0x218)) ||
       ((1 << (ulong)(*(uint *)(lVar12 + 0x218) & 0x1f) & 0x71U) == 0)) {
      *(ushort *)((long)param_2 + 0x18c) =
           *(ushort *)(lVar12 + 0x21c) >> 8 | *(ushort *)(lVar12 + 0x21c) << 8;
      *(undefined1 *)((long)param_2 + 0x18e) = *(undefined1 *)(lVar12 + 0x21f);
      *(undefined4 *)(param_2 + 0x32) = *(undefined4 *)(lVar12 + 0x220);
      *(undefined2 *)((long)param_2 + 0x194) = *(undefined2 *)(lVar12 + 0x224);
      *(undefined1 *)((long)param_2 + 0x196) = *(undefined1 *)(lVar12 + 0x226);
      *(undefined1 *)((long)param_2 + 0x197) = *(undefined1 *)(lVar12 + 0x227);
      *(undefined4 *)(param_2 + 0x33) = *(undefined4 *)(lVar12 + 0x228);
      uVar20 = (uint)*(byte *)(lVar12 + 0x24a) | (*(byte *)(lVar12 + 0x24b) & 0xf) << 8;
      if ((*(byte *)(lVar12 + 0x24b) & 8) != 0) {
        uVar20 = uVar20 | 0xfffff000;
      }
      *(float *)((long)param_2 + 0x19c) = (float)(int)uVar20;
      uVar6 = (uint)(*(byte *)(lVar12 + 0x24b) >> 4) | (uint)*(byte *)(lVar12 + 0x24c) << 4;
      uVar20 = uVar6 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar12 + 0x24c)) {
        uVar20 = uVar6;
      }
      *(float *)(param_2 + 0x34) = (float)(int)uVar20;
      *(uint *)((long)param_2 + 0x1a4) = (uint)*(byte *)(lVar12 + 0x24d) << 0x18;
    }
    if ((6 < *(uint *)(lVar12 + 0x250)) ||
       ((1 << (ulong)(*(uint *)(lVar12 + 0x250) & 0x1f) & 0x71U) == 0)) {
      *(ushort *)(param_2 + 0x35) =
           *(ushort *)(lVar12 + 0x254) >> 8 | *(ushort *)(lVar12 + 0x254) << 8;
      *(undefined1 *)((long)param_2 + 0x1aa) = *(undefined1 *)(lVar12 + 599);
      *(undefined4 *)((long)param_2 + 0x1ac) = *(undefined4 *)(lVar12 + 600);
      *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(lVar12 + 0x25c);
      *(undefined1 *)((long)param_2 + 0x1b2) = *(undefined1 *)(lVar12 + 0x25e);
      *(undefined1 *)((long)param_2 + 0x1b3) = *(undefined1 *)(lVar12 + 0x25f);
      *(undefined4 *)((long)param_2 + 0x1b4) = *(undefined4 *)(lVar12 + 0x260);
      uVar20 = (uint)*(byte *)(lVar12 + 0x282) | (*(byte *)(lVar12 + 0x283) & 0xf) << 8;
      if ((*(byte *)(lVar12 + 0x283) & 8) != 0) {
        uVar20 = uVar20 | 0xfffff000;
      }
      *(float *)(param_2 + 0x37) = (float)(int)uVar20;
      uVar6 = (uint)(*(byte *)(lVar12 + 0x283) >> 4) | (uint)*(byte *)(lVar12 + 0x284) << 4;
      uVar20 = uVar6 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar12 + 0x284)) {
        uVar20 = uVar6;
      }
      *(float *)((long)param_2 + 0x1bc) = (float)(int)uVar20;
      *(uint *)(param_2 + 0x38) = (uint)*(byte *)(lVar12 + 0x285) << 0x18;
    }
    if ((6 < *(uint *)(lVar12 + 0x288)) ||
       ((1 << (ulong)(*(uint *)(lVar12 + 0x288) & 0x1f) & 0x71U) == 0)) {
      *(ushort *)((long)param_2 + 0x1c4) =
           *(ushort *)(lVar12 + 0x28c) >> 8 | *(ushort *)(lVar12 + 0x28c) << 8;
      *(undefined1 *)((long)param_2 + 0x1c6) = *(undefined1 *)(lVar12 + 0x28f);
      *(undefined4 *)(param_2 + 0x39) = *(undefined4 *)(lVar12 + 0x290);
      *(undefined2 *)((long)param_2 + 0x1cc) = *(undefined2 *)(lVar12 + 0x294);
      *(undefined1 *)((long)param_2 + 0x1ce) = *(undefined1 *)(lVar12 + 0x296);
      *(undefined1 *)((long)param_2 + 0x1cf) = *(undefined1 *)(lVar12 + 0x297);
      *(undefined4 *)(param_2 + 0x3a) = *(undefined4 *)(lVar12 + 0x298);
      uVar20 = (uint)*(byte *)(lVar12 + 0x2ba) | (*(byte *)(lVar12 + 699) & 0xf) << 8;
      if ((*(byte *)(lVar12 + 699) & 8) != 0) {
        uVar20 = uVar20 | 0xfffff000;
      }
      *(float *)((long)param_2 + 0x1d4) = (float)(int)uVar20;
      uVar6 = (uint)(*(byte *)(lVar12 + 699) >> 4) | (uint)*(byte *)(lVar12 + 700) << 4;
      uVar20 = uVar6 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar12 + 700)) {
        uVar20 = uVar6;
      }
      *(float *)(param_2 + 0x3b) = (float)(int)uVar20;
      *(uint *)((long)param_2 + 0x1dc) = (uint)*(byte *)(lVar12 + 0x2bd) << 0x18;
    }
  }
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3f5c743d) &&
     ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x2f1ac06c || (*(int *)(DAT_05351250 + 0xb0) == 0)))) {
    if (DAT_04c487d4 == -1) goto LAB_01dca29c;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) == 0) goto LAB_01dca29c;
  }
  lVar12 = *(long *)PTR_DAT_04bb5da0;
  memcpy(param_2 + 0x3d,(void *)(lVar12 + 8),0x754);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(lVar12 + 0x770);
  *(undefined4 *)((long)param_2 + 0x1e4) = *(undefined4 *)(lVar12 + 0x774);
LAB_01dca29c:
  uVar13 = *(undefined8 *)(*(long *)PTR_DAT_04bb4910 + 0x24);
  *(undefined8 *)((long)param_2 + 0x93c) = *(undefined8 *)(*(long *)PTR_DAT_04bb4910 + 0x1c);
  *(undefined8 *)((long)param_2 + 0x944) = uVar13;
  FUN_020eb86c((long)param_2 + 0x94c);
  puVar15 = (undefined4 *)(*(long *)PTR_DAT_04bb4408 + 0x4030);
  if (((DAT_0537d558[2] != 0) && ((*(uint *)(DAT_0537d558 + 0x10) & 0xfffffffe) == 2)) &&
     (*(int *)(DAT_0537d558[2] + 0x3e4) != 1)) {
    puVar15 = (undefined4 *)(*(long *)PTR_DAT_04bb4408 + 0x4034);
  }
  *(undefined4 *)(param_2 + 0x12d) = *puVar15;
  memcpy((void *)((long)param_2 + 0x96c),param_1,0xd8);
  return;
}

