
void FUN_03202fa4(undefined8 param_1,undefined8 *param_2)

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
LAB_03203004:
    if (((DAT_0571eda0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571eda0), iVar1 != 0)) {
      DAT_0571ed90 = PTR_DAT_04bb2020 + 0x10;
      DAT_0571ed98 = "N_3D_00";
      __cxa_guard_release(&DAT_0571eda0);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_38 = 0;
    local_48 = (undefined *)0x0;
    puStack_40 = (undefined8 *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04b0f3d8;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')) &&
            ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) &&
           (((pcVar5[6] == 'L' && ((pcVar5[7] == 'i' && (pcVar5[8] == 's')))) && (pcVar5[9] == 't'))
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
          if (((DAT_0571edc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571edc8), iVar1 != 0))
          {
            DAT_0571eda8 = PTR_DAT_04bb2020 + 0x10;
            DAT_0571edb0 = "@T_Price_00";
            DAT_0571edc0 = "@T_Name_00";
            DAT_0571edb8 = DAT_0571eda8;
            __cxa_guard_release(&DAT_0571edc8);
          }
          if (((DAT_0571ede0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571ede0), iVar1 != 0))
          {
            DAT_0571edd0 = PTR_DAT_04bb2020 + 0x10;
            DAT_0571edd8 = "P_Icon_00";
            __cxa_guard_release(&DAT_0571ede0);
          }
          local_58 = *param_2;
          local_38 = 1;
          local_48 = &DAT_04b0f3e8;
          puStack_40 = (undefined8 *)0x0;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_50 = &DAT_04b0f3f8;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_0320304c;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_03203004;
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
    if (pcVar5[3] != 'P') {
      return;
    }
    if (pcVar5[4] != 'r') {
      return;
    }
    if (pcVar5[5] != 'i') {
      return;
    }
    if (pcVar5[6] != 'c') {
      return;
    }
    if (pcVar5[7] != 'e') {
      return;
    }
    if (pcVar5[8] != '_') {
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
    if (((DAT_0571ee08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571ee08), iVar1 != 0)) {
      DAT_0571ede8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0571edf0 = "Attack";
      DAT_0571ee00 = &DAT_0407ebb1;
      DAT_0571edf8 = DAT_0571ede8;
      __cxa_guard_release(&DAT_0571ee08);
    }
    if (((DAT_0571ee20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571ee20), iVar1 != 0)) {
      DAT_0571ee10 = 0x100000002;
      DAT_0571ee18 = &DAT_0571ede8;
      __cxa_guard_release(&DAT_0571ee20);
    }
    if (((DAT_0571ee38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571ee38), iVar1 != 0)) {
      DAT_0571ee28 = PTR_DAT_04bb2020 + 0x10;
      DAT_0571ee30 = "@T_Price_00";
      __cxa_guard_release(&DAT_0571ee38);
    }
    local_38 = 0;
    local_50 = (undefined *)0x0;
    local_48 = &DAT_04b0f408;
    puStack_40 = &DAT_0571ee10;
    lVar4 = puVar7[2];
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x208;
  }
LAB_0320304c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

