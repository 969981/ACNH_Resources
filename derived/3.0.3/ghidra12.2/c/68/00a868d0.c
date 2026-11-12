
int FUN_00a868d0(long param_1,uint param_2)

{
  uint *puVar1;
  short sVar2;
  undefined1 *puVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined *local_70;
  undefined1 *local_68;
  undefined8 local_48;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x17);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x17 & 1) != 0) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      local_68 = &DAT_040f91c1;
      if (0 < *(int *)(param_1 + 0x653a0)) {
        uVar14 = 0;
        uVar15 = 0;
        do {
          local_48 = CONCAT44(local_48._4_4_,uVar14);
          if (uVar14 < *(uint *)(param_1 + 0x100)) {
            lVar7 = *(long *)(*(long *)(param_1 + 0x108) + (long)(int)uVar14 * 8);
          }
          else {
            lVar7 = 0;
          }
          plVar8 = (long *)(**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
          (**(code **)(local_70 + 0x18))(&local_70);
          (**(code **)(local_70 + 0x18))(&local_70);
          puVar3 = local_68;
          (**(code **)(*plVar8 + 0x18))(plVar8);
          puVar11 = (undefined1 *)plVar8[1];
          if (puVar3 == puVar11) goto LAB_00a86990;
          uVar12 = 0;
          bVar4 = true;
          do {
            if (local_68[uVar12] != puVar11[uVar12]) break;
            if (local_68[uVar12] == '\0') {
              if (bVar4) goto LAB_00a86990;
              break;
            }
            if (local_68[uVar12 + 1] != puVar11[uVar12 + 1]) break;
            if (local_68[uVar12 + 1] == '\0') goto LAB_00a86990;
            if (local_68[uVar12 + 2] != puVar11[uVar12 + 2]) break;
            if (local_68[uVar12 + 2] == '\0') goto LAB_00a86990;
            bVar4 = uVar12 < 0x7fffe;
            uVar12 = uVar12 + 3;
          } while (uVar12 != 0x80001);
          uVar15 = uVar15 + 1;
          uVar14 = uVar15 & 0xff;
        } while ((int)uVar14 < *(int *)(param_1 + 0x653a0));
      }
      uVar14 = 0;
      goto LAB_00a86990;
    }
  }
  uVar14 = *(uint *)(param_1 + 0x651fc);
LAB_00a86990:
  param_2 = param_2 & 0xff;
  local_48 = CONCAT44(local_48._4_4_,uVar14);
  uVar15 = param_2 - 0x18;
  if (param_2 < 0x18) {
    uVar15 = param_2;
  }
  if ((int)uVar14 < 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    if (((int)uVar14 < *(int *)(param_1 + 0x653a0)) && (uVar15 < 0x18)) {
      local_70._0_4_ = uVar14;
      piVar6 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                  (long)(int)uVar14 * 8) + 0xd8) +
                                              (ulong)uVar15 * 8) + 0xf0))();
      iVar13 = *piVar6;
      local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar13);
    }
  }
  local_48 = *(ulong *)(param_1 + 0x651e0);
  if ((char)(local_48 >> 0x20) < '\x05') {
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    local_70 = (undefined *)(lVar7 + -0x15180);
    local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
  }
  uVar9 = local_48 >> 0x10;
  uVar12 = local_48 >> 0x30;
  uVar10 = local_48 >> 0x18;
  local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
  local_48 = CONCAT26((short)uVar12,(undefined6)local_48) & 0xff00ffffffffffff;
  cVar5 = FUN_00a8ae20(param_1,uVar9,uVar10,4);
  if ('\0' < cVar5) {
    if (iVar13 == 4) {
      iVar13 = 6;
    }
    else if (iVar13 == 5) {
      iVar13 = 7;
    }
  }
  return iVar13;
}

