
void FUN_02f6dc44(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_02f6dca0:
    if (((DAT_056c7ca0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c7ca0), iVar1 != 0)) {
      DAT_056c7c00 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c7c08 = "LoanOff";
      DAT_056c7c18 = &DAT_0407ebb1;
      DAT_056c7c38 = &DAT_0407ebb1;
      DAT_056c7c58 = &DAT_0407ebb1;
      DAT_056c7c28 = "Place";
      DAT_056c7c48 = "ModeA";
      DAT_056c7c68 = "ModeB";
      DAT_056c7c78 = &DAT_0407ebb1;
      DAT_056c7c88 = "ModeLast";
      DAT_056c7c98 = &DAT_0407ebb1;
      DAT_056c7c10 = DAT_056c7c00;
      DAT_056c7c20 = DAT_056c7c00;
      DAT_056c7c30 = DAT_056c7c00;
      DAT_056c7c40 = DAT_056c7c00;
      DAT_056c7c50 = DAT_056c7c00;
      DAT_056c7c60 = DAT_056c7c00;
      DAT_056c7c70 = DAT_056c7c00;
      DAT_056c7c80 = DAT_056c7c00;
      DAT_056c7c90 = DAT_056c7c00;
      __cxa_guard_release(&DAT_056c7ca0);
    }
    if (((DAT_056c7cb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c7cb8), iVar1 != 0)) {
      DAT_056c7ca8 = 0x500000002;
      DAT_056c7cb0 = &DAT_056c7c00;
      __cxa_guard_release(&DAT_056c7cb8);
    }
    if (((DAT_056c7d40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c7d40), iVar1 != 0)) {
      DAT_056c7cc0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c7cc8 = "@T_Text_00";
      DAT_056c7cd8 = "@T_Text_01";
      DAT_056c7ce8 = "@T_Text_02";
      DAT_056c7cf8 = "@T_Text_03";
      DAT_056c7d08 = "@T_HaveUnit_00";
      DAT_056c7d18 = "@T_FixedUnit_00";
      DAT_056c7d28 = "@T_HaveTitle_00";
      DAT_056c7d38 = "@T_FixedTitle_00";
      DAT_056c7cd0 = DAT_056c7cc0;
      DAT_056c7ce0 = DAT_056c7cc0;
      DAT_056c7cf0 = DAT_056c7cc0;
      DAT_056c7d00 = DAT_056c7cc0;
      DAT_056c7d10 = DAT_056c7cc0;
      DAT_056c7d20 = DAT_056c7cc0;
      DAT_056c7d30 = DAT_056c7cc0;
      __cxa_guard_release(&DAT_056c7d40);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = &DAT_04ae62a8;
    puStack_30 = &DAT_056c7ca8;
    uStack_48 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
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
          if (((DAT_056c7d58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c7d58), iVar1 != 0))
          {
            DAT_056c7d48 = PTR_DAT_04bb2020 + 0x10;
            DAT_056c7d50 = "@T_Text_00";
            __cxa_guard_release(&DAT_056c7d58);
          }
          local_38 = &DAT_04ae62b8;
          puStack_30 = (undefined8 *)0x0;
          uStack_48 = *param_2;
          local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_02f6dd10;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02f6dca0;
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
    if (pcVar5[3] != 'E') {
      return;
    }
    if (pcVar5[4] != 'r') {
      return;
    }
    if (pcVar5[5] != 'r') {
      return;
    }
    if (pcVar5[6] != 'W') {
      return;
    }
    if (pcVar5[7] != 'i') {
      return;
    }
    if (pcVar5[8] != 'n') {
      return;
    }
    if (pcVar5[9] != '_') {
      return;
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_056c7d70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c7d70), iVar1 != 0)) {
      DAT_056c7d60 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c7d68 = "@T_Msg_00";
      __cxa_guard_release(&DAT_056c7d70);
    }
    local_38 = &DAT_04ae62c8;
    puStack_30 = (undefined8 *)0x0;
    uStack_48 = *param_2;
    local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_02f6dd10:
  local_28 = 0;
  local_40 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

