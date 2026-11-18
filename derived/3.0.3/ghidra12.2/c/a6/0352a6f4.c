
void FUN_0352a6f4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_0352a754:
    if (param_2[1] == 0) {
      return;
    }
    local_40 = (undefined8 *)0x0;
    local_48 = (undefined *)0x0;
    uStack_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
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
          if (((DAT_057684a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057684a8), iVar1 != 0))
          {
            DAT_05768488 = PTR_DAT_04bb2020 + 0x10;
            DAT_05768490 = "Empty";
            DAT_057684a0 = &DAT_0407ebb1;
            DAT_05768498 = DAT_05768488;
            __cxa_guard_release(&DAT_057684a8);
          }
          if (((DAT_057684c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057684c0), iVar1 != 0))
          {
            DAT_057684b0 = 0x100000002;
            DAT_057684b8 = &DAT_05768488;
            __cxa_guard_release(&DAT_057684c0);
          }
          local_48 = (undefined *)0x0;
          uStack_58 = *param_2;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_40 = &DAT_057684b0;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_0352a784;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_0352a754;
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
    if (((DAT_057684d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057684d8), iVar1 != 0)) {
      DAT_057684c8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057684d0 = "@T_Name_00";
      __cxa_guard_release(&DAT_057684d8);
    }
    local_48 = &DAT_04b367a8;
    local_40 = (undefined8 *)0x0;
    uStack_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_0352a784:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

