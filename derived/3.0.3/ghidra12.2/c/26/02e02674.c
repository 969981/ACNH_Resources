
void FUN_02e02674(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_02e026d4:
    if (((DAT_056910b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056910b8), iVar1 != 0)) {
      DAT_05690fb8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05690fc0 = "ClearBtn00";
      DAT_05690fd0 = &DAT_0407ebb1;
      DAT_05690ff0 = &DAT_0407ebb1;
      DAT_05691010 = &DAT_0407ebb1;
      DAT_05690fe0 = "ClearBtn01";
      DAT_05691000 = "ClearBtn02";
      DAT_05691020 = "ClearBtn03";
      DAT_05691040 = "UpdateBtn00";
      DAT_05691060 = "UpdateBtn01";
      DAT_05691080 = "UpdateBtn02";
      DAT_05691030 = &DAT_0407ebb1;
      DAT_05691050 = &DAT_0407ebb1;
      DAT_05691070 = &DAT_0407ebb1;
      DAT_05691090 = &DAT_0407ebb1;
      DAT_056910a0 = "UpdateBtn03";
      DAT_056910b0 = &DAT_0407ebb1;
      DAT_05690fc8 = DAT_05690fb8;
      DAT_05690fd8 = DAT_05690fb8;
      DAT_05690fe8 = DAT_05690fb8;
      DAT_05690ff8 = DAT_05690fb8;
      DAT_05691008 = DAT_05690fb8;
      DAT_05691018 = DAT_05690fb8;
      DAT_05691028 = DAT_05690fb8;
      DAT_05691038 = DAT_05690fb8;
      DAT_05691048 = DAT_05690fb8;
      DAT_05691058 = DAT_05690fb8;
      DAT_05691068 = DAT_05690fb8;
      DAT_05691078 = DAT_05690fb8;
      DAT_05691088 = DAT_05690fb8;
      DAT_05691098 = DAT_05690fb8;
      DAT_056910a8 = DAT_05690fb8;
      __cxa_guard_release(&DAT_056910b8);
    }
    if (((DAT_056910d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056910d0), iVar1 != 0)) {
      DAT_056910c0 = 0x800000002;
      DAT_056910c8 = &DAT_05690fb8;
      __cxa_guard_release(&DAT_056910d0);
    }
    if (((DAT_056910e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056910e8), iVar1 != 0)) {
      DAT_056910d8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056910e0 = "@T_Title_00";
      __cxa_guard_release(&DAT_056910e8);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04aced08;
    puStack_40 = &DAT_056910c0;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')) &&
          ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) && (pcVar5[6] == '_')) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_05691110 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05691110), iVar1 != 0))
          {
            DAT_056910f0 = PTR_DAT_04bb2020 + 0x10;
            DAT_056910f8 = "Bonus";
            DAT_05691108 = &DAT_0407ebb1;
            DAT_05691100 = DAT_056910f0;
            __cxa_guard_release(&DAT_05691110);
          }
          if (((DAT_05691128 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05691128), iVar1 != 0))
          {
            DAT_05691118 = 0x100000002;
            DAT_05691120 = &DAT_056910f0;
            __cxa_guard_release(&DAT_05691128);
          }
          if (((DAT_05691170 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05691170), iVar1 != 0))
          {
            DAT_05691130 = PTR_DAT_04bb2020 + 0x10;
            DAT_05691138 = "@T_TicketNum_00";
            DAT_05691168 = "@T_FtrNum_00";
            DAT_05691148 = "@T_BonusNum_00";
            DAT_05691158 = "@T_BonusNumUnit_00";
            DAT_05691140 = DAT_05691130;
            DAT_05691150 = DAT_05691130;
            DAT_05691160 = DAT_05691130;
            __cxa_guard_release(&DAT_05691170);
          }
          if (((DAT_05691198 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05691198), iVar1 != 0))
          {
            DAT_05691178 = PTR_DAT_04bb2020 + 0x10;
            DAT_05691180 = "N_SubWin_00";
            DAT_05691190 = "P_Icon_00";
            DAT_05691188 = DAT_05691178;
            __cxa_guard_release(&DAT_05691198);
          }
          local_58 = *param_2;
          local_38 = 1;
          local_48 = &DAT_04aced18;
          puStack_40 = &DAT_05691118;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_50 = &DAT_04aced28;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_02e02744;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02e026d4;
    pcVar5 = (char *)param_2[5];
    if (*pcVar5 != '/') {
      return;
    }
    if (pcVar5[1] != 'L') {
      return;
    }
    if (pcVar5[2] != '_') {
      return;
    }
    if (pcVar5[3] != 'I') {
      return;
    }
    if (pcVar5[4] != 't') {
      return;
    }
    if (pcVar5[5] != 'e') {
      return;
    }
    if (pcVar5[6] != 'm') {
      return;
    }
    if (pcVar5[7] != 'B') {
      return;
    }
    if (pcVar5[8] != 'a') {
      return;
    }
    if (pcVar5[9] != 'l') {
      return;
    }
    if (pcVar5[10] != 'l') {
      return;
    }
    if (pcVar5[0xb] != 'o') {
      return;
    }
    if (pcVar5[0xc] != 'o') {
      return;
    }
    if (pcVar5[0xd] != 'n') {
      return;
    }
    if (pcVar5[0xe] != '_') {
      return;
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4fe0);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fd8);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_05691200 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05691200), iVar1 != 0)) {
      DAT_056911a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056911a8 = "Guide";
      DAT_056911b8 = &DAT_0407ebb1;
      DAT_056911d8 = &DAT_0407ebb1;
      DAT_056911f8 = &DAT_0407ebb1;
      DAT_056911c8 = "NumRotate";
      DAT_056911e8 = &DAT_04082ff4;
      DAT_056911b0 = DAT_056911a0;
      DAT_056911c0 = DAT_056911a0;
      DAT_056911d0 = DAT_056911a0;
      DAT_056911e0 = DAT_056911a0;
      DAT_056911f0 = DAT_056911a0;
      __cxa_guard_release(&DAT_05691200);
    }
    if (((DAT_05691218 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05691218), iVar1 != 0)) {
      DAT_05691208 = 0x300000002;
      DAT_05691210 = &DAT_056911a0;
      __cxa_guard_release(&DAT_05691218);
    }
    if (((DAT_05691240 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05691240), iVar1 != 0)) {
      DAT_05691220 = PTR_DAT_04bb2020 + 0x10;
      DAT_05691228 = "@T_Guide_00";
      DAT_05691238 = "@T_Icon_00";
      DAT_05691230 = DAT_05691220;
      __cxa_guard_release(&DAT_05691240);
    }
    if (((DAT_05691258 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05691258), iVar1 != 0)) {
      DAT_05691248 = PTR_DAT_04bb2020 + 0x10;
      DAT_05691250 = "P_TextSize_00";
      __cxa_guard_release(&DAT_05691258);
    }
    local_58 = *param_2;
    local_38 = 1;
    local_48 = &DAT_04aced38;
    puStack_40 = &DAT_05691208;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04aced48;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_02e02744:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

