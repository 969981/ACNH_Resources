
void FUN_02e18054(undefined8 param_1,undefined8 *param_2)

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
LAB_02e180b4:
    if (((DAT_05692638 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05692638), iVar1 != 0)) {
      DAT_05692628 = PTR_DAT_04bb2020 + 0x10;
      DAT_05692630 = "L_ItemName_00";
      __cxa_guard_release(&DAT_05692638);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = (undefined *)0x0;
    local_40 = (undefined8 *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04ad04f0;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if ((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'S')) &&
           ((pcVar5[4] == 'e' && (pcVar5[5] == 'l')))) &&
          ((pcVar5[6] == 'e' && ((pcVar5[7] == 'c' && (pcVar5[8] == 't')))))) &&
         ((pcVar5[9] == 'B' &&
          (((pcVar5[10] == 't' && (pcVar5[0xb] == 'n')) && (pcVar5[0xc] == '_')))))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_05692660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05692660), iVar1 != 0))
          {
            DAT_05692640 = PTR_DAT_04bb2020 + 0x10;
            DAT_05692648 = "Empty";
            DAT_05692658 = &DAT_0407ebb1;
            DAT_05692650 = DAT_05692640;
            __cxa_guard_release(&DAT_05692660);
          }
          if (((DAT_05692678 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05692678), iVar1 != 0))
          {
            DAT_05692668 = 0x100000002;
            DAT_05692670 = &DAT_05692640;
            __cxa_guard_release(&DAT_05692678);
          }
          local_50 = (undefined *)0x0;
          local_48 = (undefined *)0x0;
          local_58 = *param_2;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_40 = &DAT_05692668;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_02e180fc;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02e180b4;
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
    if (pcVar5[7] != 'N') {
      return;
    }
    if (pcVar5[8] != 'a') {
      return;
    }
    if (pcVar5[9] != 'm') {
      return;
    }
    if (pcVar5[10] != 'e') {
      return;
    }
    if (pcVar5[0xb] != '_') {
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
    if (((DAT_05692690 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05692690), iVar1 != 0)) {
      DAT_05692680 = PTR_DAT_04bb2020 + 0x10;
      DAT_05692688 = "@T_Name_00";
      __cxa_guard_release(&DAT_05692690);
    }
    local_48 = &DAT_04ad0500;
    local_40 = (undefined8 *)0x0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = (undefined *)0x0;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_02e180fc:
  local_38 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

