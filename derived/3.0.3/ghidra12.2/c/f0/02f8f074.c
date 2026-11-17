
void FUN_02f8f074(undefined8 param_1,undefined8 *param_2)

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
  if (pcVar5 != "") {
    if (*pcVar5 == '/') {
      if (pcVar5[1] != 'L') {
        return;
      }
      if (pcVar5[2] != '_') {
        return;
      }
      if ((((((pcVar5[3] != 'B') || (pcVar5[4] != 't')) || (pcVar5[5] != 'n')) ||
           ((pcVar5[6] != 'L' || (pcVar5[7] != 'i')))) ||
          (((pcVar5[8] != 's' || ((pcVar5[9] != 't' || (pcVar5[10] != '_')))) ||
           (pcVar5[0xb] != '0')))) ||
         ((((pcVar5[0xc] != '0' || (pcVar5[0xd] != '/')) || (pcVar5[0xe] != 'L')) ||
          (((pcVar5[0xf] != '_' || (pcVar5[0x10] != 'B')) ||
           ((pcVar5[0x11] != 't' || ((pcVar5[0x12] != 'n' || (pcVar5[0x13] != '_')))))))))) {
        if (pcVar5[3] != 'B') {
          return;
        }
        if (pcVar5[4] != 't') {
          return;
        }
        if (pcVar5[5] != 'n') {
          return;
        }
        if (pcVar5[6] != 'L') {
          return;
        }
        if (pcVar5[7] != 'i') {
          return;
        }
        if (pcVar5[8] != 's') {
          return;
        }
        if (pcVar5[9] != 't') {
          return;
        }
        if (pcVar5[10] != '_') {
          return;
        }
        if (pcVar5[0xb] != '0') {
          return;
        }
        if (pcVar5[0xc] != '1') {
          return;
        }
        if (pcVar5[0xd] != '/') {
          return;
        }
        if (pcVar5[0xe] != 'L') {
          return;
        }
        if (pcVar5[0xf] != '_') {
          return;
        }
        if (pcVar5[0x10] != 'B') {
          return;
        }
        if (pcVar5[0x11] != 't') {
          return;
        }
        if (pcVar5[0x12] != 'n') {
          return;
        }
        if (pcVar5[0x13] != '_') {
          return;
        }
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
      if (((DAT_056ca680 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056ca680), iVar1 != 0)) {
        DAT_056ca640 = PTR_DAT_04bb2020 + 0x10;
        DAT_056ca648 = "Center";
        DAT_056ca658 = &DAT_0407ebb1;
        DAT_056ca678 = &DAT_0407ebb1;
        DAT_056ca668 = "NounType";
        DAT_056ca650 = DAT_056ca640;
        DAT_056ca660 = DAT_056ca640;
        DAT_056ca670 = DAT_056ca640;
        __cxa_guard_release(&DAT_056ca680);
      }
      if (((DAT_056ca698 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056ca698), iVar1 != 0)) {
        DAT_056ca688 = 0x200000002;
        DAT_056ca690 = &DAT_056ca640;
        __cxa_guard_release(&DAT_056ca698);
      }
      if (((DAT_056ca6c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056ca6c0), iVar1 != 0)) {
        DAT_056ca6a0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056ca6a8 = "@T_Keyword_00";
        DAT_056ca6b8 = "@T_Noun_00";
        DAT_056ca6b0 = DAT_056ca6a0;
        __cxa_guard_release(&DAT_056ca6c0);
      }
      if (((DAT_056ca6d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056ca6d8), iVar1 != 0)) {
        DAT_056ca6c8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056ca6d0 = "T_Keyword_00";
        __cxa_guard_release(&DAT_056ca6d8);
      }
      local_58 = *param_2;
      local_48 = &DAT_04ae7a98;
      local_40 = &DAT_056ca688;
      local_50 = &DAT_04ae7aa8;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02f8f104;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (param_2[1] == 0) {
    return;
  }
  local_40 = (undefined8 *)0x0;
  local_50 = (undefined *)0x0;
  local_48 = (undefined *)0x0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02f8f104:
  local_38 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

