
void FUN_02fbe6c4(undefined8 param_1,undefined8 *param_2)

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
LAB_02fbe724:
    if (param_2[1] == 0) {
      return;
    }
    local_40 = (undefined8 *)0x0;
    local_50 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_38 = 0;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if ((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'M')) &&
           ((pcVar5[4] == 's' && (pcVar5[5] == 'g')))) &&
          ((pcVar5[6] == 'C' && ((pcVar5[7] == 'a' && (pcVar5[8] == 'r')))))) &&
         ((pcVar5[9] == 'd' && (pcVar5[10] == '_')))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4ff0);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) != 0)) {
          if (((DAT_056cf030 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cf030), iVar1 != 0))
          {
            DAT_056cf010 = PTR_DAT_04bb2020 + 0x10;
            DAT_056cf018 = &DAT_040fe5ab;
            DAT_056cf028 = &DAT_0407ebb1;
            DAT_056cf020 = DAT_056cf010;
            __cxa_guard_release(&DAT_056cf030);
          }
          if (((DAT_056cf048 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cf048), iVar1 != 0))
          {
            DAT_056cf038 = 0x100000002;
            DAT_056cf040 = &DAT_056cf010;
            __cxa_guard_release(&DAT_056cf048);
          }
          if (((DAT_056cf080 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cf080), iVar1 != 0))
          {
            DAT_056cf050 = PTR_DAT_04bb2020 + 0x10;
            DAT_056cf058 = "@T_Header_00";
            DAT_056cf078 = "@T_Footer_00";
            DAT_056cf068 = "@T_Main_00";
            DAT_056cf060 = DAT_056cf050;
            DAT_056cf070 = DAT_056cf050;
            __cxa_guard_release(&DAT_056cf080);
          }
          if (((DAT_056cf108 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cf108), iVar1 != 0))
          {
            DAT_056cf088 = PTR_DAT_04bb2020 + 0x10;
            DAT_056cf090 = "P_MsgCard_00";
            DAT_056cf0a0 = "P_Picture_00";
            DAT_056cf0b0 = "T_Header_00";
            DAT_056cf0c0 = "T_Main_00";
            DAT_056cf0d0 = "T_Footer_00";
            DAT_056cf0e0 = "W_Header_00";
            DAT_056cf0f0 = "W_Footer_00";
            DAT_056cf100 = "W_Main_00";
            DAT_056cf098 = DAT_056cf088;
            DAT_056cf0a8 = DAT_056cf088;
            DAT_056cf0b8 = DAT_056cf088;
            DAT_056cf0c8 = DAT_056cf088;
            DAT_056cf0d8 = DAT_056cf088;
            DAT_056cf0e8 = DAT_056cf088;
            DAT_056cf0f8 = DAT_056cf088;
            __cxa_guard_release(&DAT_056cf108);
          }
          local_58 = *param_2;
          local_38 = 2;
          local_48 = &DAT_04aecb28;
          local_40 = &DAT_056cf038;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_50 = &DAT_04aecb38;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x208;
          goto LAB_02fbe754;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02fbe724;
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
    if (pcVar5[3] != 'B') {
      return;
    }
    if (pcVar5[4] != 't') {
      return;
    }
    if (pcVar5[5] != 'n') {
      return;
    }
    if (pcVar5[6] != '_') {
      return;
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_056cf120 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cf120), iVar1 != 0)) {
      DAT_056cf110 = PTR_DAT_04bb2020 + 0x10;
      DAT_056cf118 = "@T_Text_00";
      __cxa_guard_release(&DAT_056cf120);
    }
    local_48 = &DAT_04aecb48;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = (undefined *)0x0;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x2c8;
  }
LAB_02fbe754:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

