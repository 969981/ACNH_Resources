
void FUN_02f77ce4(undefined8 param_1,undefined8 *param_2)

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
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_02f77d44:
    if (((DAT_056c8a98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c8a98), iVar1 != 0)) {
      DAT_056c8a88 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c8a90 = "N_SubWin_00";
      __cxa_guard_release(&DAT_056c8a98);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_38 = 0;
    local_48 = (undefined *)0x0;
    local_40 = (undefined8 *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04ae6e18;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'L')) &&
            ((pcVar5[4] == 'i' && (pcVar5[5] == 's')))) &&
           (((pcVar5[6] == 't' && ((pcVar5[7] == 'B' && (pcVar5[8] == 't')))) && (pcVar5[9] == 'n'))
           )) && ((((pcVar5[10] == '_' && (pcVar5[0xb] == '0')) && (pcVar5[0xc] == '0')) &&
                  (((pcVar5[0xd] == '/' && (pcVar5[0xe] == 'L')) &&
                   ((pcVar5[0xf] == '_' && ((pcVar5[0x10] == 'B' && (pcVar5[0x11] == 't'))))))))))
         && ((pcVar5[0x12] == 'n' && (pcVar5[0x13] == '_')))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_056c8b40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c8b40), iVar1 != 0))
          {
            DAT_056c8aa0 = PTR_DAT_04bb2020 + 0x10;
            DAT_056c8aa8 = "FruitType";
            DAT_056c8ab8 = &DAT_0407ebb1;
            DAT_056c8ad8 = &DAT_0407ebb1;
            DAT_056c8af8 = &DAT_0407ebb1;
            DAT_056c8ac8 = "BirthdayType";
            DAT_056c8ae8 = "IconType";
            DAT_056c8b08 = "IDType";
            DAT_056c8b18 = &DAT_0407ebb1;
            DAT_056c8b28 = "WordType";
            DAT_056c8b38 = &DAT_0407ebb1;
            DAT_056c8ab0 = DAT_056c8aa0;
            DAT_056c8ac0 = DAT_056c8aa0;
            DAT_056c8ad0 = DAT_056c8aa0;
            DAT_056c8ae0 = DAT_056c8aa0;
            DAT_056c8af0 = DAT_056c8aa0;
            DAT_056c8b00 = DAT_056c8aa0;
            DAT_056c8b10 = DAT_056c8aa0;
            DAT_056c8b20 = DAT_056c8aa0;
            DAT_056c8b30 = DAT_056c8aa0;
            __cxa_guard_release(&DAT_056c8b40);
          }
          if (((DAT_056c8b58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c8b58), iVar1 != 0))
          {
            DAT_056c8b48 = 0x500000002;
            DAT_056c8b50 = &DAT_056c8aa0;
            __cxa_guard_release(&DAT_056c8b58);
          }
          if (((DAT_056c8c90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c8c90), iVar1 != 0))
          {
            DAT_056c8b60 = PTR_DAT_04bb2020 + 0x10;
            DAT_056c8b68 = "@T_Text_00";
            DAT_056c8b98 = "@T_Fruit_00";
            DAT_056c8b78 = "@T_Word_00";
            DAT_056c8b88 = "@T_VillageName_00";
            DAT_056c8ba8 = "@T_Name_00";
            DAT_056c8bb8 = "@T_Title_00";
            DAT_056c8bd8 = "@T_Date_00";
            DAT_056c8be8 = "@T_Passport_00";
            DAT_056c8c08 = "@T_IDTitle_00";
            DAT_056c8bc8 = "@T_Birthday_00";
            DAT_056c8c18 = "@T_IDTitle_01";
            DAT_056c8bf8 = "@T_Head_00";
            DAT_056c8c38 = "@T_IDColon_00";
            DAT_056c8c28 = "@T_IDTitle_02";
            DAT_056c8c48 = "@T_IDColon_01";
            DAT_056c8c58 = "@T_IDColon_02";
            DAT_056c8c68 = "@T_IDNum_00";
            DAT_056c8c78 = "@T_IDNum_01";
            DAT_056c8c88 = "@T_IDNum_02";
            DAT_056c8b70 = DAT_056c8b60;
            DAT_056c8b80 = DAT_056c8b60;
            DAT_056c8b90 = DAT_056c8b60;
            DAT_056c8ba0 = DAT_056c8b60;
            DAT_056c8bb0 = DAT_056c8b60;
            DAT_056c8bc0 = DAT_056c8b60;
            DAT_056c8bd0 = DAT_056c8b60;
            DAT_056c8be0 = DAT_056c8b60;
            DAT_056c8bf0 = DAT_056c8b60;
            DAT_056c8c00 = DAT_056c8b60;
            DAT_056c8c10 = DAT_056c8b60;
            DAT_056c8c20 = DAT_056c8b60;
            DAT_056c8c30 = DAT_056c8b60;
            DAT_056c8c40 = DAT_056c8b60;
            DAT_056c8c50 = DAT_056c8b60;
            DAT_056c8c60 = DAT_056c8b60;
            DAT_056c8c70 = DAT_056c8b60;
            DAT_056c8c80 = DAT_056c8b60;
            __cxa_guard_release(&DAT_056c8c90);
          }
          if (((DAT_056c8ca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c8ca8), iVar1 != 0))
          {
            DAT_056c8c98 = PTR_DAT_04bb2020 + 0x10;
            DAT_056c8ca0 = "P_PhotoDummy_00";
            __cxa_guard_release(&DAT_056c8ca8);
          }
          local_58 = *param_2;
          local_38 = 1;
          local_48 = &DAT_04ae6e28;
          local_40 = &DAT_056c8b48;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_50 = &DAT_04ae6e38;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_02f77d8c;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02f77d44;
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
    if (pcVar5[3] != 'L') {
      return;
    }
    if (pcVar5[4] != 'i') {
      return;
    }
    if (pcVar5[5] != 's') {
      return;
    }
    if (pcVar5[6] != 't') {
      return;
    }
    if (pcVar5[7] != 'B') {
      return;
    }
    if (pcVar5[8] != 't') {
      return;
    }
    if (pcVar5[9] != 'n') {
      return;
    }
    if (pcVar5[10] != '_') {
      return;
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc5348 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5348), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc5340 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc5348);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5340);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_056c8cd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c8cd0), iVar1 != 0)) {
      DAT_056c8cb0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c8cb8 = "LROnOff";
      DAT_056c8cc8 = &DAT_0407ebb1;
      DAT_056c8cc0 = DAT_056c8cb0;
      __cxa_guard_release(&DAT_056c8cd0);
    }
    if (((DAT_056c8ce8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c8ce8), iVar1 != 0)) {
      DAT_056c8cd8 = 0x100000002;
      DAT_056c8ce0 = &DAT_056c8cb0;
      __cxa_guard_release(&DAT_056c8ce8);
    }
    local_38 = 0;
    local_50 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_40 = &DAT_056c8cd8;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x4f8;
  }
LAB_02f77d8c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

