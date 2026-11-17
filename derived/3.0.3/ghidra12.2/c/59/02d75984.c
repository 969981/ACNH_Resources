
void FUN_02d75984(undefined8 param_1,undefined8 *param_2)

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
LAB_02d759e4:
    if (((DAT_05684378 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05684378), iVar1 != 0)) {
      DAT_05684368 = PTR_DAT_04bb2020 + 0x10;
      DAT_05684370 = "L_ItemName_00";
      __cxa_guard_release(&DAT_05684378);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = (undefined *)0x0;
    local_40 = (undefined8 *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04ac1d10;
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
          if (((DAT_056843a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056843a0), iVar1 != 0))
          {
            DAT_05684380 = PTR_DAT_04bb2020 + 0x10;
            DAT_05684388 = "Empty";
            DAT_05684398 = &DAT_0407ebb1;
            DAT_05684390 = DAT_05684380;
            __cxa_guard_release(&DAT_056843a0);
          }
          if (((DAT_056843b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056843b8), iVar1 != 0))
          {
            DAT_056843a8 = 0x100000002;
            DAT_056843b0 = &DAT_05684380;
            __cxa_guard_release(&DAT_056843b8);
          }
          local_50 = (undefined *)0x0;
          local_48 = (undefined *)0x0;
          local_58 = *param_2;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_40 = &DAT_056843a8;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_02d75a2c;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02d759e4;
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
    if (((DAT_056843d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056843d0), iVar1 != 0)) {
      DAT_056843c0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056843c8 = "@T_Name_00";
      __cxa_guard_release(&DAT_056843d0);
    }
    local_48 = &DAT_04ac1d20;
    local_40 = (undefined8 *)0x0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = (undefined *)0x0;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_02d75a2c:
  local_38 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

