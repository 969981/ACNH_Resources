
void FUN_02e0a2d4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
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
      if (pcVar5[0xc] != '0') {
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
      if (((DAT_05691610 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05691610), iVar1 != 0)) {
        DAT_056915e0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056915e8 = "@T_Vilage_00";
        DAT_05691608 = "@T_DreamID_00";
        DAT_056915f8 = "@T_Name_00";
        DAT_056915f0 = DAT_056915e0;
        DAT_05691600 = DAT_056915e0;
        __cxa_guard_release(&DAT_05691610);
      }
      local_38 = &DAT_04acf7c0;
      puStack_30 = (undefined8 *)0x0;
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02e0a3a0;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05691568 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05691568), iVar1 != 0)) {
    DAT_056914e8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056914f0 = "Empty";
    DAT_05691500 = &DAT_0407ebb1;
    DAT_05691520 = &DAT_0407ebb1;
    DAT_05691540 = &DAT_0407ebb1;
    DAT_05691510 = "Share";
    DAT_05691530 = "NumType";
    DAT_05691550 = "StopLandom";
    DAT_05691560 = &DAT_0407ebb1;
    DAT_056914f8 = DAT_056914e8;
    DAT_05691508 = DAT_056914e8;
    DAT_05691518 = DAT_056914e8;
    DAT_05691528 = DAT_056914e8;
    DAT_05691538 = DAT_056914e8;
    DAT_05691548 = DAT_056914e8;
    DAT_05691558 = DAT_056914e8;
    __cxa_guard_release(&DAT_05691568);
  }
  if (((DAT_05691580 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05691580), iVar1 != 0)) {
    DAT_05691570 = 0x400000002;
    DAT_05691578 = &DAT_056914e8;
    __cxa_guard_release(&DAT_05691580);
  }
  if (((DAT_056915d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056915d8), iVar1 != 0)) {
    DAT_05691588 = PTR_DAT_04bb2020 + 0x10;
    DAT_05691590 = "@T_Empty_00";
    DAT_056915a0 = "@T_Num_00";
    DAT_056915b0 = "@T_NeedNum_00";
    DAT_056915c0 = "@T_R_00";
    DAT_056915d0 = "@T_L_00";
    DAT_05691598 = DAT_05691588;
    DAT_056915a8 = DAT_05691588;
    DAT_056915b8 = DAT_05691588;
    DAT_056915c8 = DAT_05691588;
    __cxa_guard_release(&DAT_056915d8);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = &DAT_04acf7b0;
  puStack_30 = &DAT_05691570;
  uStack_48 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02e0a3a0:
  local_28 = 0;
  local_40 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

