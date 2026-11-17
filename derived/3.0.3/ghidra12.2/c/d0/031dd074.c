
void FUN_031dd074(undefined8 param_1,undefined8 *param_2)

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
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_031dd0d4:
    if (((DAT_0571a870 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571a870), iVar1 != 0)) {
      DAT_0571a860 = PTR_DAT_04bb2020 + 0x10;
      DAT_0571a868 = "L_RingStick_00";
      __cxa_guard_release(&DAT_0571a870);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_38 = 0;
    puStack_40 = (undefined8 *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_50 = &DAT_04b0c378;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if ((((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'R')) &&
             ((pcVar5[4] == 'i' && (pcVar5[5] == 'n')))) && (pcVar5[6] == 'g')) &&
           (((pcVar5[7] == 'S' && (pcVar5[8] == 't')) &&
            ((pcVar5[9] == 'i' &&
             (((pcVar5[10] == 'c' && (pcVar5[0xb] == 'k')) && (pcVar5[0xc] == '_')))))))) &&
          ((pcVar5[0xd] == '0' && (pcVar5[0xe] == '0')))) &&
         ((pcVar5[0xf] == '/' &&
          (((pcVar5[0x10] == 'L' && (pcVar5[0x11] == '_')) &&
           ((pcVar5[0x12] == 'B' &&
            (((pcVar5[0x13] == 't' && (pcVar5[0x14] == 'n')) && (pcVar5[0x15] == '_')))))))))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_0571a898 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571a898), iVar1 != 0))
          {
            DAT_0571a878 = PTR_DAT_04bb2020 + 0x10;
            DAT_0571a880 = "Pattern";
            DAT_0571a890 = &DAT_0407ebb1;
            DAT_0571a888 = DAT_0571a878;
            __cxa_guard_release(&DAT_0571a898);
          }
          if (((DAT_0571a8b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571a8b0), iVar1 != 0))
          {
            DAT_0571a8a0 = 0x100000002;
            DAT_0571a8a8 = &DAT_0571a878;
            __cxa_guard_release(&DAT_0571a8b0);
          }
          if (((DAT_0571a8c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571a8c8), iVar1 != 0))
          {
            DAT_0571a8b8 = PTR_DAT_04bb2020 + 0x10;
            DAT_0571a8c0 = "P_Icon_00";
            __cxa_guard_release(&DAT_0571a8c8);
          }
          local_58 = *param_2;
          puStack_40 = &DAT_0571a8a0;
          local_38 = 1;
          puStack_50 = &DAT_04b0c388;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_031dd11c;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_031dd0d4;
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
    if (pcVar5[3] != 'R') {
      return;
    }
    if (pcVar5[4] != 'i') {
      return;
    }
    if (pcVar5[5] != 'n') {
      return;
    }
    if (pcVar5[6] != 'g') {
      return;
    }
    if (pcVar5[7] != 'S') {
      return;
    }
    if (pcVar5[8] != 't') {
      return;
    }
    if (pcVar5[9] != 'i') {
      return;
    }
    if (pcVar5[10] != 'c') {
      return;
    }
    if (pcVar5[0xb] != 'k') {
      return;
    }
    if (pcVar5[0xc] != '_') {
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
    if (((DAT_0571a8e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571a8e0), iVar1 != 0)) {
      DAT_0571a8d0 = PTR_DAT_04bb2020 + 0x10;
      DAT_0571a8d8 = "N_RingSize_00";
      __cxa_guard_release(&DAT_0571a8e0);
    }
    local_58 = *param_2;
    local_38 = 0;
    puStack_40 = (undefined8 *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_50 = &DAT_04b0c398;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_031dd11c:
  local_48 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

