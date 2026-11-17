
void FUN_031d02ec(undefined8 param_1,undefined8 *param_2)

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
LAB_031d034c:
    if (((DAT_05718d80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05718d80), iVar1 != 0)) {
      DAT_05718d60 = PTR_DAT_04bb2020 + 0x10;
      DAT_05718d68 = &DAT_040dee79;
      DAT_05718d78 = &DAT_0407ebb1;
      DAT_05718d70 = DAT_05718d60;
      __cxa_guard_release(&DAT_05718d80);
    }
    if (((DAT_05718d98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05718d98), iVar1 != 0)) {
      DAT_05718d88 = 0x100000002;
      DAT_05718d90 = &DAT_05718d60;
      __cxa_guard_release(&DAT_05718d98);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_50 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    local_38 = 0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_40 = &DAT_05718d88;
    lVar4 = *(long *)(param_2[1] + 0x10);
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
          if (((DAT_05718de0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05718de0), iVar1 != 0))
          {
            DAT_05718da0 = PTR_DAT_04bb2020 + 0x10;
            DAT_05718da8 = "State";
            DAT_05718db8 = &DAT_0407ebb1;
            DAT_05718dd8 = &DAT_0407ebb1;
            DAT_05718dc8 = "IconOff";
            DAT_05718db0 = DAT_05718da0;
            DAT_05718dc0 = DAT_05718da0;
            DAT_05718dd0 = DAT_05718da0;
            __cxa_guard_release(&DAT_05718de0);
          }
          if (((DAT_05718df8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05718df8), iVar1 != 0))
          {
            DAT_05718de8 = 0x200000002;
            DAT_05718df0 = &DAT_05718da0;
            __cxa_guard_release(&DAT_05718df8);
          }
          if (((DAT_05718e10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05718e10), iVar1 != 0))
          {
            DAT_05718e00 = PTR_DAT_04bb2020 + 0x10;
            DAT_05718e08 = "P_Icon_00";
            __cxa_guard_release(&DAT_05718e10);
          }
          local_58 = *param_2;
          local_48 = (undefined *)0x0;
          local_40 = &DAT_05718de8;
          local_38 = 1;
          local_50 = &DAT_04b0b4c0;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_031d03a4;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_031d034c;
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
    if ((((pcVar5[3] != 'A') || (pcVar5[4] != 'r')) || (pcVar5[5] != 'r')) ||
       (((pcVar5[6] != 'o' || (pcVar5[7] != 'w')) || ((pcVar5[8] != 'R' || (pcVar5[9] != '_')))))) {
      if (pcVar5[3] != 'A') {
        return;
      }
      if (pcVar5[4] != 'r') {
        return;
      }
      if (pcVar5[5] != 'r') {
        return;
      }
      if (pcVar5[6] != 'o') {
        return;
      }
      if (pcVar5[7] != 'w') {
        return;
      }
      if (pcVar5[8] != 'L') {
        return;
      }
      if (pcVar5[9] != '_') {
        return;
      }
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
    if (((DAT_05718e38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05718e38), iVar1 != 0)) {
      DAT_05718e18 = PTR_DAT_04bb2020 + 0x10;
      DAT_05718e20 = "@T_R_00";
      DAT_05718e30 = "@T_L_00";
      DAT_05718e28 = DAT_05718e18;
      __cxa_guard_release(&DAT_05718e38);
    }
    local_48 = &DAT_04b0b4d0;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = (undefined *)0x0;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_031d03a4:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

