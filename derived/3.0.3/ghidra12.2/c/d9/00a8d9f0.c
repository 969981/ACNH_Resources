
ulong FUN_00a8d9f0(long param_1,short *param_2,undefined8 *param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined *puVar3;
  undefined1 auVar4 [8];
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  ushort uVar11;
  short *psVar12;
  undefined1 *puVar13;
  ulong uVar14;
  uint uVar15;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined *local_60;
  undefined1 *local_58;
  
  puVar3 = PTR_DAT_04bb6298;
  if (*param_2 == 0) {
    uVar14 = FUN_028da340(param_2,param_3,0);
    return uVar14;
  }
  uVar11 = *(ushort *)PTR_DAT_04bb6298;
  if (uVar11 != 0xffff) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x17);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar11 * 8);
    if (0xff < uVar11) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x17 & 1) != 0) {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      local_58 = &DAT_040f91c1;
      if (0 < *(int *)(param_1 + 0x653a0)) {
        uVar8 = 0;
        uVar15 = 0;
        do {
          local_68 = CONCAT44(local_68._4_4_,uVar8);
          if (uVar8 < *(uint *)(param_1 + 0x100)) {
            lVar9 = *(long *)(*(long *)(param_1 + 0x108) + (long)(int)uVar8 * 8);
          }
          else {
            lVar9 = 0;
          }
          plVar10 = (long *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
          (**(code **)(local_60 + 0x18))(&local_60);
          (**(code **)(local_60 + 0x18))(&local_60);
          puVar5 = local_58;
          (**(code **)(*plVar10 + 0x18))(plVar10);
          puVar13 = (undefined1 *)plVar10[1];
          if (puVar5 == puVar13) goto LAB_00a8ddc0;
          uVar14 = 0;
          bVar6 = true;
          do {
            if (local_58[uVar14] != puVar13[uVar14]) break;
            if (local_58[uVar14] == '\0') {
              if (bVar6) goto LAB_00a8ddc0;
              break;
            }
            if (local_58[uVar14 + 1] != puVar13[uVar14 + 1]) break;
            if (local_58[uVar14 + 1] == '\0') goto LAB_00a8ddc0;
            if (local_58[uVar14 + 2] != puVar13[uVar14 + 2]) break;
            if (local_58[uVar14 + 2] == '\0') goto LAB_00a8ddc0;
            bVar6 = uVar14 < 0x7fffe;
            uVar14 = uVar14 + 3;
          } while (uVar14 != 0x80001);
          uVar15 = uVar15 + 1;
          uVar8 = uVar15 & 0xff;
        } while ((int)uVar8 < *(int *)(param_1 + 0x653a0));
      }
      uVar8 = 0;
      goto LAB_00a8ddc0;
    }
  }
  local_68 = *param_3;
  if ((char)(local_68 >> 0x20) < '\x05') {
    lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_60 = (undefined *)(lVar9 + -0x15180);
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    uVar11 = *(ushort *)puVar3;
  }
  uVar14 = local_68 >> 0x30;
  local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
  local_68 = CONCAT26((short)uVar14,(undefined6)local_68) & 0xff00ffffffffffff;
  if (uVar11 == 0xffff) {
LAB_00a8dc10:
    psVar12 = (short *)(DAT_04da7238 + 0x651c8);
    if (*psVar12 == 0) {
      psVar12 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    }
  }
  else {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x19);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar11 & 0xffffffffU) * 8);
    if (0xff < uVar11) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) {
      local_60 = (undefined *)CONCAT44(local_60._4_4_,0x1f);
      piVar2 = (int *)(PTR_DAT_04bc39f8 + ((long)(short)uVar11 & 0xffffffffU) * 8);
      if (0xff < uVar11) {
        piVar2 = (int *)PTR_DAT_04bc39f8;
      }
      if (-1 < *piVar2) {
        local_60 = (undefined *)CONCAT44(local_60._4_4_,0x20);
        puVar3 = PTR_DAT_04bc39f8 + ((long)(short)uVar11 & 0xffffffffU) * 8;
        if (0xff < uVar11) {
          puVar3 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_00a8dc10;
      }
    }
    psVar12 = (short *)(DAT_04da7238 + 0x651e0);
  }
  local_70 = *(undefined1 (*) [8])psVar12;
  if ((char)((ulong)local_70 >> 0x20) < '\x05') {
    lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_70);
    local_60 = (undefined *)(lVar9 + -0x15180);
    local_70 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
  }
  auVar4 = local_70;
  local_70._4_2_ = 5;
  local_70[7] = auVar4[7];
  local_70[6] = 0;
  iVar7 = FUN_00a82474(&local_68,local_70);
  if (iVar7 == 1) {
    uVar8 = *(uint *)(param_2 + 8);
  }
  else if (iVar7 == 0) {
    uVar8 = *(uint *)(param_2 + 6);
  }
  else if (iVar7 == -1) {
    uVar8 = *(uint *)(param_2 + 4);
  }
  else {
    uVar8 = FUN_028da340(param_2,param_3,0);
  }
LAB_00a8ddc0:
  return (ulong)uVar8;
}

