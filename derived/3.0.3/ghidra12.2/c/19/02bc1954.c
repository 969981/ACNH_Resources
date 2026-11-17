
void FUN_02bc1954(undefined8 param_1,undefined8 *param_2)

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
LAB_02bc19b4:
    if (((DAT_05644d30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05644d30), iVar1 != 0)) {
      DAT_05644cf0 = PTR_DAT_04bb2020 + 0x10;
      DAT_05644cf8 = "Change";
      DAT_05644d08 = &DAT_0407ebb1;
      DAT_05644d28 = &DAT_0407ebb1;
      DAT_05644d18 = &DAT_040fe5ab;
      DAT_05644d00 = DAT_05644cf0;
      DAT_05644d10 = DAT_05644cf0;
      DAT_05644d20 = DAT_05644cf0;
      __cxa_guard_release(&DAT_05644d30);
    }
    if (((DAT_05644d48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05644d48), iVar1 != 0)) {
      DAT_05644d38 = 0x200000002;
      DAT_05644d40 = &DAT_05644cf0;
      __cxa_guard_release(&DAT_05644d48);
    }
    if (((DAT_05644d70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05644d70), iVar1 != 0)) {
      DAT_05644d50 = PTR_DAT_04bb2020 + 0x10;
      DAT_05644d58 = "@T_Header_00";
      DAT_05644d68 = "@T_Text_00";
      DAT_05644d60 = DAT_05644d50;
      __cxa_guard_release(&DAT_05644d70);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_48 = &DAT_04aa8478;
    local_40 = &DAT_05644d38;
    uStack_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
    goto LAB_02bc1a24;
  }
  if (*pcVar5 == '/') {
    if (((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'B')) ||
          ((pcVar5[4] != 't' || (pcVar5[5] != 'n')))) || (pcVar5[6] != 'L')) ||
        (((pcVar5[7] != 'i' || (pcVar5[8] != 's')) ||
         ((pcVar5[9] != 't' ||
          (((pcVar5[10] != '_' || (pcVar5[0xb] != '0')) || (pcVar5[0xc] != '0')))))))) ||
       (((pcVar5[0xd] != '/' || (pcVar5[0xe] != 'L')) ||
        ((pcVar5[0xf] != '_' ||
         (((pcVar5[0x10] != 'B' || (pcVar5[0x11] != 't')) ||
          ((pcVar5[0x12] != 'n' || (pcVar5[0x13] != '_')))))))))) goto LAB_02bc1ba0;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) == 0)) goto LAB_02bc1ba0;
    if (((DAT_05644d98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05644d98), iVar1 != 0)) {
      DAT_05644d78 = PTR_DAT_04bb2020 + 0x10;
      DAT_05644d80 = "BtnListRandom";
      DAT_05644d90 = &DAT_0407ebb1;
      DAT_05644d88 = DAT_05644d78;
      __cxa_guard_release(&DAT_05644d98);
    }
    if (((DAT_05644db0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05644db0), iVar1 != 0)) {
      DAT_05644da0 = 0x100000002;
      DAT_05644da8 = &DAT_05644d78;
      __cxa_guard_release(&DAT_05644db0);
    }
    if (((DAT_05644dc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05644dc8), iVar1 != 0)) {
      DAT_05644db8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05644dc0 = "@T_Name_00";
      __cxa_guard_release(&DAT_05644dc8);
    }
    local_48 = &DAT_04aa8488;
    uStack_58 = *param_2;
    local_40 = &DAT_05644da0;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_02bc19b4;
LAB_02bc1ba0:
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
    if ((((pcVar5[3] != 'B') || (pcVar5[4] != 't')) || (pcVar5[5] != 'n')) ||
       ((pcVar5[6] != 'L' || (pcVar5[7] != '_')))) {
      if (pcVar5[3] != 'B') {
        return;
      }
      if (pcVar5[4] != 't') {
        return;
      }
      if (pcVar5[5] != 'n') {
        return;
      }
      if (pcVar5[6] != 'R') {
        return;
      }
      if (pcVar5[7] != '_') {
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
    if (((DAT_05644de0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05644de0), iVar1 != 0)) {
      DAT_05644dd0 = PTR_DAT_04bb2020 + 0x10;
      DAT_05644dd8 = "@T_Text_00";
      __cxa_guard_release(&DAT_05644de0);
    }
    local_48 = &DAT_04aa8498;
    uStack_58 = *param_2;
    local_40 = (undefined8 *)0x0;
  }
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x2c8;
LAB_02bc1a24:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

