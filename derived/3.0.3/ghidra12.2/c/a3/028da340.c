
ulong FUN_028da340(long param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  char *pcVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar4 = PTR_DAT_04bb32f0;
  puVar3 = PTR_DAT_04bb2020;
  if ((param_3 & 1) != 0) {
    uVar16 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_60 = *param_2;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "Carnival";
    if ((char)(local_60 >> 0x20) < '\x05') {
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = lVar7 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar8 = local_60;
    local_60._7_1_ = SUB81(uVar8,7);
    local_60._0_7_ = (uint7)CONCAT24(5,(undefined4)local_60);
    uVar8 = FUN_00879dd0(uVar16,&local_70,uVar8,uVar8 >> 0x10,uVar8 >> 0x18,0);
    if ((uVar8 & 1) != 0) {
      lVar7 = *(long *)PTR_DAT_04bb30a0;
      local_70 = puVar3 + 0x10;
      local_68 = "EventDay04";
      if (0 < *(int *)(lVar7 + 0x653a0)) {
        uVar8 = 0;
        uVar12 = 0;
        do {
          uVar15 = (uint)uVar8;
          local_58 = CONCAT44(local_58._4_4_,uVar15);
          if (uVar15 < *(uint *)(lVar7 + 0x100)) {
            lVar10 = *(long *)(*(long *)(lVar7 + 0x108) + (long)(int)uVar15 * 8);
          }
          else {
            lVar10 = 0;
          }
          plVar11 = (long *)(**(code **)(*(long *)(lVar10 + 0x30) + 0xf0))();
          (**(code **)(local_70 + 0x18))(&local_70);
          (**(code **)(local_70 + 0x18))(&local_70);
          pcVar9 = local_68;
          (**(code **)(*plVar11 + 0x18))(plVar11);
          pcVar13 = (char *)plVar11[1];
          if (pcVar9 == pcVar13) goto LAB_028da63c;
          uVar14 = 0;
          bVar5 = true;
          do {
            if (local_68[uVar14] != pcVar13[uVar14]) break;
            if (local_68[uVar14] == '\0') {
              if (bVar5) goto LAB_028da63c;
              break;
            }
            if (local_68[uVar14 + 1] != pcVar13[uVar14 + 1]) break;
            if (local_68[uVar14 + 1] == '\0') goto LAB_028da63c;
            if (local_68[uVar14 + 2] != pcVar13[uVar14 + 2]) break;
            if (local_68[uVar14 + 2] == '\0') goto LAB_028da63c;
            bVar5 = uVar14 < 0x7fffe;
            uVar14 = uVar14 + 3;
          } while (uVar14 != 0x80001);
          uVar12 = uVar12 + 1;
          uVar8 = (ulong)(uVar12 & 0xff);
        } while ((int)(uVar12 & 0xff) < *(int *)(lVar7 + 0x653a0));
      }
      goto LAB_028da638;
    }
    uVar8 = FUN_0087b600(*(undefined8 *)puVar4,param_2);
    if ((uVar8 & 1) != 0) {
      lVar7 = *(long *)PTR_DAT_04bb30a0;
      local_70 = puVar3 + 0x10;
      local_68 = "EventDay00";
      if (0 < *(int *)(lVar7 + 0x653a0)) {
        uVar8 = 0;
        uVar12 = 0;
        do {
          uVar15 = (uint)uVar8;
          local_58 = CONCAT44(local_58._4_4_,uVar15);
          if (uVar15 < *(uint *)(lVar7 + 0x100)) {
            lVar10 = *(long *)(*(long *)(lVar7 + 0x108) + (long)(int)uVar15 * 8);
          }
          else {
            lVar10 = 0;
          }
          plVar11 = (long *)(**(code **)(*(long *)(lVar10 + 0x30) + 0xf0))();
          (**(code **)(local_70 + 0x18))(&local_70);
          (**(code **)(local_70 + 0x18))(&local_70);
          pcVar9 = local_68;
          (**(code **)(*plVar11 + 0x18))(plVar11);
          pcVar13 = (char *)plVar11[1];
          if (pcVar9 == pcVar13) goto LAB_028da63c;
          uVar14 = 0;
          bVar5 = true;
          do {
            if (local_68[uVar14] != pcVar13[uVar14]) break;
            if (local_68[uVar14] == '\0') {
              if (bVar5) goto LAB_028da63c;
              break;
            }
            if (local_68[uVar14 + 1] != pcVar13[uVar14 + 1]) break;
            if (local_68[uVar14 + 1] == '\0') goto LAB_028da63c;
            if (local_68[uVar14 + 2] != pcVar13[uVar14 + 2]) break;
            if (local_68[uVar14 + 2] == '\0') goto LAB_028da63c;
            bVar5 = uVar14 < 0x7fffe;
            uVar14 = uVar14 + 3;
          } while (uVar14 != 0x80001);
          uVar12 = uVar12 + 1;
          uVar8 = (ulong)(uVar12 & 0xff);
        } while ((int)(uVar12 & 0xff) < *(int *)(lVar7 + 0x653a0));
      }
      goto LAB_028da638;
    }
  }
  local_58 = *param_2;
  if ((char)(local_58 >> 0x20) < '\x05') {
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
    local_70 = (undefined *)(lVar7 + -0x15180);
    local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
  }
  uVar8 = local_58;
  puVar3 = PTR_DAT_04bb30a0;
  uVar12 = (uint)(local_58 >> 0x10);
  iVar6 = (int)local_58 * 0x200;
  local_58._7_1_ = SUB81(uVar8,7);
  local_58._0_7_ = (uint7)CONCAT24(5,(int)local_58);
  uVar12 = *(int *)(param_1 + 0x18) +
           ((-(uVar12 >> 7 & 1) & 0xffffe000 | (uVar12 & 0xff) << 5) + iVar6 +
           (int)(char)(uVar8 >> 0x18)) * 0x10000;
  uVar15 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  uVar12 = uVar15 ^ uVar15 * 0x800;
  uVar1 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
  uVar15 = uVar1 ^ uVar1 * 0x800;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  uVar12 = uVar12 >> 8 ^ uVar1 >> 0x13 ^ uVar12 ^ uVar1;
  uVar1 = uVar15 >> 8 ^ uVar12 >> 0x13 ^ uVar15 ^ uVar12;
  iVar6 = FUN_00a8acc0(*(undefined8 *)PTR_DAT_04bb30a0);
  uVar2 = uVar2 ^ uVar2 * 0x800;
  uVar8 = 0;
  uVar12 = 0;
  lVar7 = *(long *)puVar3;
  uVar15 = *(uint *)(lVar7 + 0x65204);
  if (1 < uVar15) {
    uVar15 = 0;
  }
  lVar10 = lVar7 + 0x45eb8;
  if (uVar15 != 1) {
    lVar10 = lVar7 + 0x27120;
  }
  do {
    local_70._0_4_ = iVar6;
    (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x100) + (long)iVar6 * 8) + 0xd0
                                      ) + uVar8 * 8) + 0xf0))();
    local_70._0_4_ = iVar6;
    pcVar9 = (char *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x100) +
                                                                 (long)iVar6 * 8) + 0xd0) +
                                             uVar8 * 8) + 0xf0))();
    uVar12 = uVar12 + (int)*pcVar9;
    if ((uint)((ulong)(uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1) * 100 >> 0x20) < uVar12)
    goto LAB_028da63c;
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x34);
LAB_028da638:
  uVar8 = 0;
LAB_028da63c:
  return uVar8 & 0xffffffff;
}

