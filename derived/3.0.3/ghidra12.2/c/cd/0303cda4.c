
void FUN_0303cda4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 *local_30;
  undefined4 local_28;
  
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 != "") {
    if (*pcVar5 == '/') {
      if (pcVar5[1] != 'L') {
        return;
      }
      if (pcVar5[2] != '_') {
        return;
      }
      if ((((((pcVar5[3] != 'P') || (pcVar5[4] != 'a')) || (pcVar5[5] != 'g')) ||
           ((pcVar5[6] != 'e' || (pcVar5[7] != '0')))) ||
          ((pcVar5[8] != '0' || ((pcVar5[9] != 'B' || (pcVar5[10] != 't')))))) ||
         ((pcVar5[0xb] != 'n' || (pcVar5[0xc] != '_')))) {
        if (pcVar5[3] != 'P') {
          return;
        }
        if (pcVar5[4] != 'a') {
          return;
        }
        if (pcVar5[5] != 'g') {
          return;
        }
        if (pcVar5[6] != 'e') {
          return;
        }
        if (pcVar5[7] != '0') {
          return;
        }
        if (pcVar5[8] != '1') {
          return;
        }
        if (pcVar5[9] != 'B') {
          return;
        }
        if (pcVar5[10] != 't') {
          return;
        }
        if (pcVar5[0xb] != 'n') {
          return;
        }
        if (pcVar5[0xc] != '_') {
          return;
        }
      }
      puVar6 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e38);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_056db9e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056db9e0), iVar1 != 0)) {
        DAT_056db9c0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056db9c8 = &DAT_040fe5ab;
        DAT_056db9d8 = &DAT_0407ebb1;
        DAT_056db9d0 = DAT_056db9c0;
        __cxa_guard_release(&DAT_056db9e0);
      }
      if (((DAT_056db9f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056db9f8), iVar1 != 0)) {
        DAT_056db9e8 = 0x100000002;
        DAT_056db9f0 = &DAT_056db9c0;
        __cxa_guard_release(&DAT_056db9f8);
      }
      local_48 = *param_2;
      local_40 = (undefined *)0x0;
      local_38 = (undefined *)0x0;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_30 = &DAT_056db9e8;
      lVar4 = puVar6[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_0303ce88;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056db940 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056db940), iVar1 != 0)) {
    DAT_056db920 = PTR_DAT_04bb2020 + 0x10;
    DAT_056db928 = &DAT_040fe5ab;
    DAT_056db938 = &DAT_0407ebb1;
    DAT_056db930 = DAT_056db920;
    __cxa_guard_release(&DAT_056db940);
  }
  if (((DAT_056db958 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056db958), iVar1 != 0)) {
    DAT_056db948 = 0x100000002;
    DAT_056db950 = &DAT_056db920;
    __cxa_guard_release(&DAT_056db958);
  }
  if (((DAT_056db990 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056db990), iVar1 != 0)) {
    DAT_056db960 = PTR_DAT_04bb2020 + 0x10;
    DAT_056db968 = "@T_PageNum_00";
    DAT_056db988 = "@T_PageSlash_00";
    DAT_056db978 = "@T_PageNum_01";
    DAT_056db970 = DAT_056db960;
    DAT_056db980 = DAT_056db960;
    __cxa_guard_release(&DAT_056db990);
  }
  if (((DAT_056db9b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056db9b8), iVar1 != 0)) {
    DAT_056db998 = PTR_DAT_04bb2020 + 0x10;
    DAT_056db9a0 = "N_Page_00";
    DAT_056db9b0 = "N_Page_01";
    DAT_056db9a8 = DAT_056db998;
    __cxa_guard_release(&DAT_056db9b8);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = *param_2;
  local_38 = &DAT_04af57b0;
  local_30 = &DAT_056db948;
  local_40 = &DAT_04af57c0;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_0303ce88:
  local_28 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

