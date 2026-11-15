
uint FUN_02205e20(int *param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  float fVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_1ec;
  int local_1e4;
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined *local_150;
  char *local_148;
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int local_bc;
  undefined *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  
  local_bc = -1;
  uVar7 = FUN_021b8f60(&DAT_053fe348,param_1,&local_bc);
  puVar6 = PTR_DAT_04bb32f0;
  puVar5 = PTR_DAT_04bb32e8;
  if ((uVar7 & 1) == 0) goto LAB_02206458;
  lVar12 = *(long *)PTR_DAT_04bb5c90;
  fVar23 = *(float *)(lVar12 + 0x40);
  fVar21 = *(float *)(lVar12 + 0x44);
  fVar22 = *(float *)(lVar12 + 0x48);
  uVar15 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_150 = PTR_DAT_04bb2020 + 0x10;
  local_148 = "Carnival";
  puVar13 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar13 == 0) {
    local_a8 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_a8 >> 0x20) < '\x05') {
      lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
      local_1e0 = (undefined *)(lVar12 + -0x15180);
      local_a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1e0);
    }
    uVar9 = (ulong)local_a8;
    puVar13 = &local_a8;
    local_a8._7_1_ = SUB81(uVar9,7);
    local_a8._0_7_ = (uint7)CONCAT24(5,(undefined4)local_a8);
  }
  uVar9 = *puVar13;
  uVar9 = FUN_00879dd0(uVar15,&local_150,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
  local_118 = 0x20000000c0a00000;
  uStack_110 = 0x41200000;
  local_108 = 0xe0000000c0a00000;
  uStack_100 = 0;
  local_e8 = 0x6000000040a00000;
  uStack_e0 = 0xc0a00000;
  local_d8 = 0x15555560c1700000;
  uStack_d0 = 0x41a00000;
  local_c8 = 0xcaaaaa80c0a00000;
  local_128 = 0;
  uStack_120 = 0xc1200000;
  local_f8 = 0;
  uStack_f0 = 0xc1a00000;
  fVar2 = fVar23 + -30.0;
  if ((uVar9 & 1) == 0) {
    fVar2 = fVar23;
  }
  local_1e0 = (undefined *)0x41200000;
  uStack_1d8 = 0x18e38e4000000000;
  local_170 = 0xc0a00000;
  local_180 = 0xc1a00000;
  uStack_178 = 0x18e38e4000000000;
  local_168 = 0x18e38e40c1200000;
  uStack_160 = 0x41200000;
  local_1b0 = 0xc0a00000;
  uStack_1a8 = 0x18e38e4040a00000;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = (char *)0x0;
  uStack_140 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1a0 = 0x40a00000;
  uStack_198 = 0x18e38e40c0a00000;
  local_190 = 0;
  uStack_188 = 0;
  local_158 = 0x18e38e40c1a00000;
  local_150 = (undefined *)0x0;
  if (local_bc < 0) goto LAB_02206458;
  iVar8 = FUN_021b9110(&DAT_053fe348);
  local_1e4 = -1;
  local_1ec = -1;
  if (2 < iVar8) {
    iVar8 = 3;
  }
  local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xffffffff);
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  uVar9 = FUN_021b8f60(&DAT_053fe348,&local_a8,&local_b8);
  if ((uVar9 & 1) != 0) {
    if ((uint)local_b8 < 3) {
      *(undefined4 *)((long)&local_1ec + ((ulong)local_b8 & 0xffffffff) * 4) = 0;
    }
  }
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,1);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xffffffff);
  uVar9 = FUN_021b8f60(&DAT_053fe348,&local_a8,&local_b8);
  if ((uVar9 & 1) != 0) {
    if ((uint)local_b8 < 3) {
      *(undefined4 *)((long)&local_1ec + ((ulong)local_b8 & 0xffffffff) * 4) = 1;
    }
  }
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,2);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xffffffff);
  uVar9 = FUN_021b8f60(&DAT_053fe348,&local_a8,&local_b8);
  if ((uVar9 & 1) != 0) {
    if ((uint)local_b8 < 3) {
      *(undefined4 *)((long)&local_1ec + ((ulong)local_b8 & 0xffffffff) * 4) = 2;
    }
  }
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,3);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xffffffff);
  uVar9 = FUN_021b8f60(&DAT_053fe348,&local_a8,&local_b8);
  if ((uVar9 & 1) != 0) {
    if ((uint)local_b8 < 3) {
      *(undefined4 *)((long)&local_1ec + ((ulong)local_b8 & 0xffffffff) * 4) = 3;
    }
  }
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,4);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xffffffff);
  uVar9 = FUN_021b8f60(&DAT_053fe348,&local_a8,&local_b8);
  if ((uVar9 & 1) != 0) {
    if ((uint)local_b8 < 3) {
      *(undefined4 *)((long)&local_1ec + ((ulong)local_b8 & 0xffffffff) * 4) = 4;
    }
  }
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,5);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xffffffff);
  uVar9 = FUN_021b8f60(&DAT_053fe348,&local_a8,&local_b8);
  if ((uVar9 & 1) != 0) {
    if ((uint)local_b8 < 3) {
      *(undefined4 *)((long)&local_1ec + ((ulong)local_b8 & 0xffffffff) * 4) = 5;
    }
  }
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,6);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xffffffff);
  uVar9 = FUN_021b8f60(&DAT_053fe348,&local_a8,&local_b8);
  if ((uVar9 & 1) != 0) {
    if ((uint)local_b8 < 3) {
      *(undefined4 *)((long)&local_1ec + ((ulong)local_b8 & 0xffffffff) * 4) = 6;
    }
  }
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,7);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xffffffff);
  uVar9 = FUN_021b8f60(&DAT_053fe348,&local_a8,&local_b8);
  if ((uVar9 & 1) != 0) {
    if ((uint)local_b8 < 3) {
      *(undefined4 *)((long)&local_1ec + ((ulong)local_b8 & 0xffffffff) * 4) = 7;
    }
  }
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,8);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xffffffff);
  uVar9 = FUN_021b8f60(&DAT_053fe348,&local_a8,&local_b8);
  if ((uVar9 & 1) != 0) {
    if ((uint)local_b8 < 3) {
      *(undefined4 *)((long)&local_1ec + ((ulong)local_b8 & 0xffffffff) * 4) = 8;
    }
  }
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,9);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xffffffff);
  uVar9 = FUN_021b8f60(&DAT_053fe348,&local_a8,&local_b8);
  if ((uVar9 & 1) != 0) {
    if ((uint)local_b8 < 3) {
      *(undefined4 *)((long)&local_1ec + ((ulong)local_b8 & 0xffffffff) * 4) = 9;
    }
  }
  iVar1 = *param_1;
  if ((int)local_1ec < 0) {
    uVar19 = 0;
joined_r0x022062b4:
    if (-1 < local_1ec) {
      if (local_1ec._4_4_ == iVar1) goto LAB_022062e4;
      uVar19 = uVar19 + 1;
    }
    if (-1 < local_1e4 && local_1e4 != iVar1) {
      uVar19 = uVar19 + 1;
    }
  }
  else {
    if ((int)local_1ec != iVar1) {
      uVar19 = 1;
      goto joined_r0x022062b4;
    }
    uVar19 = 0;
  }
LAB_022062e4:
  uVar15 = *(undefined8 *)puVar6;
  uVar16 = *(ulong *)(*(long *)puVar5 + 0x4060);
  uVar17 = uVar16 >> 0x10;
  uVar18 = uVar16 >> 0x18;
  uVar9 = uVar16 & 0xffffffff;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  cVar3 = (char)(uVar16 >> 0x20);
  uVar11 = uVar18 & 0xffffffff;
  uVar10 = uVar17 & 0xffffffff;
  pcStack_a0 = "Carnival";
  local_90 = uVar16;
  if (cVar3 < '\x05') {
    lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
    local_b8 = (undefined *)(lVar12 - 0x15180);
    uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
    uVar10 = uVar9 >> 0x10;
    uVar11 = uVar9 >> 0x18;
    local_90 = uVar9;
  }
  uVar4 = local_90 >> 0x30;
  local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
  local_90 = CONCAT26((short)uVar4,(undefined6)local_90) & 0xff00ffffffffffff;
  uVar9 = FUN_00879dd0(uVar15,&local_a8,uVar9,uVar10,uVar11,0);
  if ((uVar9 & 1) == 0) {
    local_b8 = PTR_DAT_04bb2020 + 0x10;
    pcStack_b0 = "Carnival";
    local_98 = uVar16;
    if (cVar3 < '\x05') {
      lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
      local_90 = lVar12 - 0x15180;
      local_98 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
      uVar16 = local_98 & 0xffffffff;
      uVar17 = local_98 >> 0x10;
      uVar18 = local_98 >> 0x18;
    }
    uVar9 = local_98 >> 0x30;
    local_98._0_6_ = CONCAT24(5,(undefined4)local_98);
    local_98 = CONCAT26((short)uVar9,(undefined6)local_98) & 0xff00ffffffffffff;
    uVar9 = FUN_0087a8f0(uVar15,&local_b8,uVar16 & 0xffffffff,uVar17 & 0xffffffff,
                         uVar18 & 0xffffffff,0);
    if ((uVar9 & 1) != 0) goto LAB_02206404;
    ppuVar14 = &local_150;
  }
  else {
LAB_02206404:
    ppuVar14 = &local_1e0;
  }
  ppuVar14 = ppuVar14 + (ulong)(iVar8 - 1) * 6 + (ulong)uVar19 * 2;
  if (param_2 != (float *)0x0) {
    fVar20 = *(float *)((long)ppuVar14 + 4);
    fVar23 = *(float *)(ppuVar14 + 1);
    *param_2 = fVar2 + *(float *)ppuVar14;
    param_2[1] = fVar21 + fVar20;
    param_2[2] = fVar22 + 20.0 + fVar23;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)((long)ppuVar14 + 0xc);
  }
LAB_02206458:
  return uVar7 & 1;
}

