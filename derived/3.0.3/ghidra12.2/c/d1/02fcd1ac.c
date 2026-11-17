
void FUN_02fcd1ac(undefined8 param_1,undefined8 *param_2)

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
LAB_02fcd20c:
    if (((DAT_056d0e40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d0e40), iVar1 != 0)) {
      DAT_056d0d20 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d0d28 = "CardIn";
      DAT_056d0d38 = &DAT_0407ebb1;
      DAT_056d0d58 = &DAT_0407ebb1;
      DAT_056d0d78 = &DAT_0407ebb1;
      DAT_056d0d48 = "CardOut";
      DAT_056d0d68 = &DAT_0406e584;
      DAT_056d0d88 = "BtnPresent";
      DAT_056d0da8 = "PresentOn";
      DAT_056d0dc8 = "PresentOff";
      DAT_056d0de8 = "Wrapping";
      DAT_056d0e08 = "PresentNameOff";
      DAT_056d0d98 = &DAT_0407ebb1;
      DAT_056d0db8 = &DAT_0407ebb1;
      DAT_056d0dd8 = &DAT_0407ebb1;
      DAT_056d0df8 = &DAT_0407ebb1;
      DAT_056d0e18 = &DAT_0407ebb1;
      DAT_056d0e28 = &DAT_040fe5ab;
      DAT_056d0e38 = &DAT_0407ebb1;
      DAT_056d0d30 = DAT_056d0d20;
      DAT_056d0d40 = DAT_056d0d20;
      DAT_056d0d50 = DAT_056d0d20;
      DAT_056d0d60 = DAT_056d0d20;
      DAT_056d0d70 = DAT_056d0d20;
      DAT_056d0d80 = DAT_056d0d20;
      DAT_056d0d90 = DAT_056d0d20;
      DAT_056d0da0 = DAT_056d0d20;
      DAT_056d0db0 = DAT_056d0d20;
      DAT_056d0dc0 = DAT_056d0d20;
      DAT_056d0dd0 = DAT_056d0d20;
      DAT_056d0de0 = DAT_056d0d20;
      DAT_056d0df0 = DAT_056d0d20;
      DAT_056d0e00 = DAT_056d0d20;
      DAT_056d0e10 = DAT_056d0d20;
      DAT_056d0e20 = DAT_056d0d20;
      DAT_056d0e30 = DAT_056d0d20;
      __cxa_guard_release(&DAT_056d0e40);
    }
    if (((DAT_056d0e58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d0e58), iVar1 != 0)) {
      DAT_056d0e48 = 0x900000002;
      DAT_056d0e50 = &DAT_056d0d20;
      __cxa_guard_release(&DAT_056d0e58);
    }
    if (((DAT_056d0e80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d0e80), iVar1 != 0)) {
      DAT_056d0e60 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d0e68 = "@T_Header_00";
      DAT_056d0e78 = "@T_Item_00";
      DAT_056d0e70 = DAT_056d0e60;
      __cxa_guard_release(&DAT_056d0e80);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04aede30;
    local_40 = &DAT_056d0e48;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
    goto LAB_02fcd27c;
  }
  if (*pcVar5 == '/') {
    if (((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'M')) ||
          ((pcVar5[4] != 's' || (pcVar5[5] != 'g')))) ||
         ((pcVar5[6] != 'C' || ((pcVar5[7] != 'a' || (pcVar5[8] != 'r')))))) || (pcVar5[9] != 'd'))
       || (pcVar5[10] != '_')) goto LAB_02fcd3b4;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0)) goto LAB_02fcd3b4;
    if (((DAT_056d0ea8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d0ea8), iVar1 != 0)) {
      DAT_056d0e88 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d0e90 = &DAT_040fe5ab;
      DAT_056d0ea0 = &DAT_0407ebb1;
      DAT_056d0e98 = DAT_056d0e88;
      __cxa_guard_release(&DAT_056d0ea8);
    }
    if (((DAT_056d0ec0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d0ec0), iVar1 != 0)) {
      DAT_056d0eb0 = 0x100000002;
      DAT_056d0eb8 = &DAT_056d0e88;
      __cxa_guard_release(&DAT_056d0ec0);
    }
    if (((DAT_056d0ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d0ef8), iVar1 != 0)) {
      DAT_056d0ec8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d0ed0 = "@T_Header_00";
      DAT_056d0ef0 = "@T_Footer_00";
      DAT_056d0ee0 = "@T_Main_00";
      DAT_056d0ed8 = DAT_056d0ec8;
      DAT_056d0ee8 = DAT_056d0ec8;
      __cxa_guard_release(&DAT_056d0ef8);
    }
    if (((DAT_056d0f80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d0f80), iVar1 != 0)) {
      DAT_056d0f00 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d0f08 = "P_MsgCard_00";
      DAT_056d0f18 = "P_Picture_00";
      DAT_056d0f28 = "T_Header_00";
      DAT_056d0f38 = "T_Main_00";
      DAT_056d0f48 = "T_Footer_00";
      DAT_056d0f58 = "W_Header_00";
      DAT_056d0f68 = "W_Footer_00";
      DAT_056d0f78 = "W_Main_00";
      DAT_056d0f10 = DAT_056d0f00;
      DAT_056d0f20 = DAT_056d0f00;
      DAT_056d0f30 = DAT_056d0f00;
      DAT_056d0f40 = DAT_056d0f00;
      DAT_056d0f50 = DAT_056d0f00;
      DAT_056d0f60 = DAT_056d0f00;
      DAT_056d0f70 = DAT_056d0f00;
      __cxa_guard_release(&DAT_056d0f80);
    }
    local_58 = *param_2;
    local_38 = 2;
    local_48 = &DAT_04aede40;
    local_40 = &DAT_056d0eb0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04aede50;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_02fcd20c;
LAB_02fcd3b4:
    pcVar5 = (char *)param_2[5];
    if (((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')))) &&
       (((pcVar5[4] == 't' && (pcVar5[5] == 'n')) && (pcVar5[6] == '_')))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar7 == (undefined8 *)0x0) ||
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) == 0))
      goto LAB_02fcd484;
      if (((DAT_056d0f98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d0f98), iVar1 != 0)) {
        DAT_056d0f88 = PTR_DAT_04bb2020 + 0x10;
        DAT_056d0f90 = "@T_Text_00";
        __cxa_guard_release(&DAT_056d0f98);
      }
      local_58 = *param_2;
      local_48 = &DAT_04aede60;
      local_40 = (undefined8 *)0x0;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
LAB_02fcd478:
      local_38 = 0;
      local_50 = (undefined *)0x0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02fcd27c;
    }
LAB_02fcd484:
    pcVar5 = (char *)param_2[5];
    if ((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')))) &&
        (((pcVar5[4] == 't' && (pcVar5[5] == 'n')) && (pcVar5[6] == 'P')))) &&
       (((pcVar5[7] == 'r' && (pcVar5[8] == 'e')) &&
        ((pcVar5[9] == 's' &&
         ((((pcVar5[10] == 'e' && (pcVar5[0xb] == 'n')) && (pcVar5[0xc] == 't')) &&
          (pcVar5[0xd] == '_')))))))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
        if (((DAT_056d0fe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d0fe0), iVar1 != 0)) {
          DAT_056d0fa0 = PTR_DAT_04bb2020 + 0x10;
          DAT_056d0fa8 = "PresentOn";
          DAT_056d0fb8 = &DAT_0407ebb1;
          DAT_056d0fd8 = &DAT_0407ebb1;
          DAT_056d0fc8 = "PresentOff";
          DAT_056d0fb0 = DAT_056d0fa0;
          DAT_056d0fc0 = DAT_056d0fa0;
          DAT_056d0fd0 = DAT_056d0fa0;
          __cxa_guard_release(&DAT_056d0fe0);
        }
        if (((DAT_056d0ff8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d0ff8), iVar1 != 0)) {
          DAT_056d0fe8 = 0x200000002;
          DAT_056d0ff0 = &DAT_056d0fa0;
          __cxa_guard_release(&DAT_056d0ff8);
        }
        local_58 = *param_2;
        local_48 = (undefined *)0x0;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_40 = &DAT_056d0fe8;
        goto LAB_02fcd478;
      }
    }
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
    if (pcVar5[3] != 'W') {
      return;
    }
    if (pcVar5[4] != 'r') {
      return;
    }
    if (pcVar5[5] != 'a') {
      return;
    }
    if (pcVar5[6] != 'p') {
      return;
    }
    if (pcVar5[7] != 'p') {
      return;
    }
    if (pcVar5[8] != 'i') {
      return;
    }
    if (pcVar5[9] != 'n') {
      return;
    }
    if (pcVar5[10] != 'g') {
      return;
    }
    if (pcVar5[0xb] != '_') {
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
    if (((DAT_056d1020 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d1020), iVar1 != 0)) {
      DAT_056d1000 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d1008 = &DAT_040fe5ab;
      DAT_056d1018 = &DAT_0407ebb1;
      DAT_056d1010 = DAT_056d1000;
      __cxa_guard_release(&DAT_056d1020);
    }
    if (((DAT_056d1038 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d1038), iVar1 != 0)) {
      DAT_056d1028 = 0x100000002;
      DAT_056d1030 = &DAT_056d1000;
      __cxa_guard_release(&DAT_056d1038);
    }
    local_58 = *param_2;
    local_50 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    local_38 = 0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_40 = &DAT_056d1028;
  }
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
LAB_02fcd27c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

