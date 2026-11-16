
void FUN_0289a730(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  void *__s;
  uint *puVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 local_800;
  char *apcStack_7f8 [234];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_70;
  
  puVar8 = PTR_DAT_04bb32f0;
  puVar7 = PTR_DAT_04bb2020;
  uVar18 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_70 = *(ulong *)(param_2 + 0x10);
  local_800 = PTR_DAT_04bb2020 + 0x10;
  apcStack_7f8[0] = "XmasEve";
  if ((char)(local_70 >> 0x20) < '\x05') {
    lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_90 = (undefined **)(lVar11 + -0x15180);
    local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
  }
  uVar9 = local_70;
  uVar12 = local_70 >> 0x30;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70 = CONCAT26((short)uVar12,(uint6)local_70) & 0xff00ffffffffffff;
  uVar12 = FUN_00879dd0(uVar18,&local_800,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
  if ((uVar12 & 1) != 0) {
    local_800 = (undefined *)0xc3f;
    FUN_0277d4ac(&local_800);
    *(undefined2 *)(param_1 + 0x12b4) = (undefined2)local_800;
    *(undefined2 *)(param_1 + 0x12b6) = local_800._2_2_;
    *(undefined4 *)(param_1 + 0x12b8) = local_800._4_4_;
    FUN_0277d6c4(param_1 + 0x12b4);
  }
  FUN_02893ea0(param_1,param_2);
  FUN_02890cc0(param_1,param_2);
  FUN_02891b20(param_1,param_2);
  FUN_02892000(param_1,param_2);
  FUN_028938e0(param_1,param_2);
  local_70 = *(ulong *)(param_2 + 0x10);
  local_800 = puVar7 + 0x10;
  uVar18 = *(undefined8 *)puVar8;
  apcStack_7f8[0] = "Carnival";
  if ((char)(local_70 >> 0x20) < '\x05') {
    lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_90 = (undefined **)(lVar11 + -0x15180);
    local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
  }
  uVar12 = local_70;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70._7_1_ = SUB81(uVar12,7);
  local_70._0_7_ = (uint7)(uint6)local_70;
  uVar12 = FUN_00879dd0(uVar18,&local_800,uVar12,uVar12 >> 0x10,uVar12 >> 0x18,0);
  if ((uVar12 & 1) != 0) {
    local_800 = PTR_DAT_04bbfe60 + 0x10;
    memset(apcStack_7f8,0,0x754);
    uVar10 = nn::os::GetSystemTick();
    local_a4 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
    local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)FUN_01a451fc(&local_800);
    memset(__s,0,0x754);
    local_70._0_4_ = 0x4e2;
    local_90 = &PTR_FUN_049ff858;
    local_88 = &local_70;
    FUN_008a1ba0(&local_800,&local_90);
    local_70 = CONCAT44(local_70._4_4_,0x445);
    local_90 = &PTR_FUN_049ff858;
    local_88 = &local_70;
    FUN_008a1ba0(&local_800,&local_90);
    lVar11 = param_1 + 0x12b4;
    FUN_0277d6c4(lVar11);
    puVar7 = PTR_DAT_04bb43c0;
    lVar19 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(lVar11);
    if (*(long *)puVar7 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        lVar19 = (**(code **)(local_800 + 0x20))(&local_800);
        uVar10 = FUN_0277d6c4(lVar11);
        if (((uVar10 >> 3 & 0x1fff) < 0x753) &&
           ((*(uint *)(lVar19 + (ulong)((uVar10 & 0xffff) >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1)
            != 0)) {
          return;
        }
      }
    }
    puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar10 = *puVar13 ^ *puVar13 << 0xb;
    uVar2 = puVar13[3];
    *puVar13 = puVar13[1];
    puVar13[1] = puVar13[2];
    uVar1 = uVar10 ^ uVar2;
    uVar10 = uVar10 >> 8 ^ uVar2 >> 0x13 ^ uVar1;
    puVar13[2] = uVar2;
    puVar13[3] = uVar10;
    uVar10 = (uVar10 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
    uVar1 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
    local_90 = (undefined **)CONCAT44(uVar1,uVar10);
    uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    uVar5 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
    local_88 = (undefined8 *)CONCAT44(uVar5,uVar2);
    lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
    lVar19 = 0;
    iVar15 = 0;
    do {
      puVar13 = (uint *)(lVar14 + lVar19);
      lVar19 = lVar19 + 4;
      uVar16 = *puVar13 - (*puVar13 >> 1 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
      uVar16 = uVar16 + (uVar16 >> 8);
      iVar15 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + iVar15;
    } while (lVar19 != 0x754);
    if (iVar15 == 0) {
      uVar4 = PTR_DAT_04bb37e0[2];
      uVar17 = PTR_DAT_04bb37e0[3];
      puVar20 = (undefined8 *)PTR_DAT_04bb37e0;
    }
    else {
      lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
      lVar19 = 0;
      uVar16 = 0;
      do {
        puVar13 = (uint *)(lVar14 + lVar19);
        lVar19 = lVar19 + 4;
        uVar6 = *puVar13 - (*puVar13 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        uVar16 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + uVar16;
      } while (lVar19 != 0x754);
      uVar10 = uVar10 ^ uVar10 * 0x800;
      local_90 = (undefined **)CONCAT44(uVar2,uVar1);
      uVar10 = uVar10 >> 8 ^ uVar5 >> 0x13 ^ uVar10 ^ uVar5;
      local_88 = (undefined8 *)CONCAT44(uVar10,uVar5);
      FUN_00889f80(&local_70,&local_800,(int)((ulong)uVar10 * (ulong)uVar16 >> 0x20) + 1);
      FUN_01a4c66c(&local_90,&local_70);
      puVar20 = &local_70;
      uVar17 = local_70._3_1_;
      uVar4 = local_70._2_1_;
    }
    uVar3 = *(undefined4 *)((long)puVar20 + 4);
    *(undefined2 *)(param_1 + 0x12b4) = *(undefined2 *)puVar20;
    *(undefined4 *)(param_1 + 0x12b8) = uVar3;
    *(undefined1 *)(param_1 + 0x12b6) = uVar4;
    *(undefined1 *)(param_1 + 0x12b7) = uVar17;
    FUN_0277d6c4(lVar11);
  }
  return;
}

