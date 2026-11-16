
ulong FUN_028d4d70(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  short *psVar10;
  char cVar11;
  undefined *local_68;
  char *local_60;
  uint local_44;
  undefined8 local_40;
  undefined8 *puStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar8 = *(undefined1 **)(param_2 + 8);
  switch(*puVar8) {
  case 0x62:
    if ((puVar8[1] == 'o') && (puVar8[2] == 'c')) {
      uVar7 = FUN_028d4428();
      puVar2 = PTR_DAT_04bb32e8;
      if (((uVar7 & 1) != 0) &&
         (uVar7 = FUN_00a8117c(*(long *)PTR_DAT_04bb32e8 + 0x4060), (uVar7 & 1) == 0)) {
        uVar4 = (uint)(*(byte *)(*(long *)puVar2 + 0x4064) - 5 < 7);
        goto LAB_028d5184;
      }
LAB_028d51f8:
      uVar4 = 0;
      goto LAB_028d5184;
    }
    break;
  case 0x67:
    if ((puVar8[1] == 's') && (puVar8[2] == 't')) {
      uVar7 = FUN_028d63bc(param_1);
      if ((uVar7 & 1) != 0) {
        local_40 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        local_68 = PTR_DAT_04bb2020 + 0x10;
        local_60 = "gst";
        uVar4 = FUN_028d4a98(&local_40,&local_68);
        goto LAB_028d5184;
      }
      goto LAB_028d51f8;
    }
    break;
  case 0x6f:
    if ((puVar8[1] == 'w') && (puVar8[2] == 's')) {
      uVar7 = FUN_028d5264(param_1);
      return uVar7;
    }
    break;
  case 0x70:
    if ((puVar8[1] == 'y') && (puVar8[2] == 'n')) {
      uVar7 = FUN_028d560c();
      return uVar7;
    }
    break;
  case 0x73:
    if ((puVar8[1] == 'p') && (puVar8[2] == 'n')) {
      psVar10 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*psVar10 == 0) {
        local_40 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)((ulong)local_40 >> 0x20) < '\x05') {
          lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
          local_68 = (undefined *)(lVar6 + -0x15180);
          param_1 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
          local_40 = (undefined *)param_1;
        }
        psVar10 = (short *)&local_40;
        uVar7 = (ulong)local_40 >> 0x30;
        local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
        local_40 = (undefined *)(CONCAT26((short)uVar7,(undefined6)local_40) & 0xff00ffffffffffff);
      }
      local_68 = *(undefined **)psVar10;
      iVar5 = FUN_028d4550(param_1,&local_68);
      if (iVar5 == 0) {
        lVar6 = *(long *)PTR_DAT_04bb27d0;
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) {
LAB_028d4f90:
          sVar3 = *(short *)PTR_DAT_04bb6298;
          if (sVar3 != -1) {
            puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
            if (0xff < (uint)(int)sVar3) {
              puVar2 = PTR_DAT_04bc39f8;
            }
            if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_028d500c;
          }
          local_68 = PTR_DAT_04bb2020 + 0x10;
          local_60 = "TodayGlobalEventId";
          iVar5 = FUN_0273ea30(&local_68);
          if (iVar5 == 0xffff) {
LAB_028d500c:
            local_68 = PTR_DAT_04bb2020 + 0x10;
            local_60 = "SpnVisitMainField";
            uVar4 = FUN_0273f0a0(&local_68);
            goto LAB_028d5184;
          }
        }
        else if (*(int *)(lVar6 + 0x80) != 1) {
          if (*(int *)(lVar6 + 0x80) != 1) goto LAB_028d4f90;
          goto LAB_028d500c;
        }
      }
      goto LAB_028d51f8;
    }
    break;
  case 0x74:
    if ((puVar8[1] == 'k') && (puVar8[2] == 'k')) {
      psVar10 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*psVar10 == 0) {
        local_40 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)((ulong)local_40 >> 0x20) < '\x05') {
          lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
          local_68 = (undefined *)(lVar6 + -0x15180);
          param_1 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
          local_40 = (undefined *)param_1;
        }
        psVar10 = (short *)&local_40;
        uVar7 = (ulong)local_40 >> 0x30;
        local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
        local_40 = (undefined *)(CONCAT26((short)uVar7,(undefined6)local_40) & 0xff00ffffffffffff);
      }
      local_68 = *(undefined **)psVar10;
      iVar5 = FUN_028d4550(param_1,&local_68);
      if (iVar5 != 0) {
        local_68 = PTR_DAT_04bb2020 + 0x10;
        local_60 = "TkkReturn";
        uVar4 = FUN_0273f0a0(&local_68);
        uVar4 = uVar4 ^ 1;
        goto LAB_028d5184;
      }
      goto LAB_028d51f8;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "gul";
  local_68 = puVar1;
  uVar7 = FUN_00710cb0(param_2,&local_68);
  if ((uVar7 & 1) == 0) {
    puStack_38 = (undefined8 *)&DAT_04076b39;
    local_40 = puVar1;
    uVar7 = FUN_00710cb0(param_2,&local_40);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_00710cb0(param_2,&DAT_055b5368);
      if ((uVar7 & 1) == 0) {
        local_44 = FUN_028d56b0(param_1);
        if (local_44 < 0xc) {
          puStack_38 = (undefined8 *)(&PTR_DAT_04a92640)[local_44];
        }
        else {
          puStack_38 = &DAT_0407ebb1;
        }
        local_40 = puVar2 + 0x10;
        FUN_00cf7f30(&local_68,&local_40);
        cVar11 = *local_60;
        if (cVar11 == '\0') {
          uVar4 = 1;
        }
        else {
          pcVar9 = *(char **)(param_2 + 8);
          do {
            local_60 = local_60 + 1;
            uVar4 = (uint)(*pcVar9 == cVar11);
            if (*pcVar9 != cVar11) break;
            cVar11 = *local_60;
            pcVar9 = pcVar9 + 1;
          } while (cVar11 != '\0');
        }
      }
      else {
        local_68 = puVar2 + 0x10;
        local_60 = "IsVisitNpcTidyToday";
        iVar5 = FUN_0273ea30(&local_68);
        uVar4 = (uint)(iVar5 == 1);
      }
      goto LAB_028d5184;
    }
  }
  local_44 = FUN_028d56b0(param_1);
  if (local_44 < 0xc) {
    puStack_38 = (undefined8 *)(&PTR_DAT_04a92640)[local_44];
  }
  else {
    puStack_38 = &DAT_0407ebb1;
  }
  local_40 = puVar2 + 0x10;
  FUN_00cf7f30(&local_68,&local_40);
  uVar4 = FUN_00710cb0(param_2,&local_68);
LAB_028d5184:
  return (ulong)(uVar4 & 1);
}

