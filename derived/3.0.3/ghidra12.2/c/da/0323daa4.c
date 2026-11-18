
void FUN_0323daa4(undefined8 param_1,undefined8 *param_2)

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
      if (pcVar5[3] != 'Q') {
        return;
      }
      if (pcVar5[4] != 'u') {
        return;
      }
      if (pcVar5[5] != 'e') {
        return;
      }
      if (pcVar5[6] != 's') {
        return;
      }
      if (pcVar5[7] != 't') {
        return;
      }
      if (pcVar5[8] != '_') {
        return;
      }
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc5550 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5550), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc5548 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc5550);
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5548);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_05724170 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05724170), iVar1 != 0)) {
        DAT_057240f0 = PTR_DAT_04bb2020 + 0x10;
        DAT_057240f8 = "State";
        DAT_05724108 = &DAT_0407ebb1;
        DAT_05724128 = &DAT_0407ebb1;
        DAT_05724148 = &DAT_0407ebb1;
        DAT_05724118 = "BonusType";
        DAT_05724138 = "Bonus";
        DAT_05724158 = "EventType";
        DAT_05724168 = &DAT_0407ebb1;
        DAT_05724100 = DAT_057240f0;
        DAT_05724110 = DAT_057240f0;
        DAT_05724120 = DAT_057240f0;
        DAT_05724130 = DAT_057240f0;
        DAT_05724140 = DAT_057240f0;
        DAT_05724150 = DAT_057240f0;
        DAT_05724160 = DAT_057240f0;
        __cxa_guard_release(&DAT_05724170);
      }
      if (((DAT_05724188 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05724188), iVar1 != 0)) {
        DAT_05724178 = 0x400000002;
        DAT_05724180 = &DAT_057240f0;
        __cxa_guard_release(&DAT_05724188);
      }
      if (((DAT_057241c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057241c0), iVar1 != 0)) {
        DAT_05724190 = PTR_DAT_04bb2020 + 0x10;
        DAT_05724198 = "@T_Clear_00";
        DAT_057241b8 = "@T_BonusNum_00";
        DAT_057241a8 = "@T_BonusNumUnit_00";
        DAT_057241a0 = DAT_05724190;
        DAT_057241b0 = DAT_05724190;
        __cxa_guard_release(&DAT_057241c0);
      }
      if (((DAT_057241d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057241d8), iVar1 != 0)) {
        DAT_057241c8 = PTR_DAT_04bb2020 + 0x10;
        DAT_057241d0 = "P_Icon_00";
        __cxa_guard_release(&DAT_057241d8);
      }
      local_58 = *param_2;
      local_38 = 1;
      local_48 = &DAT_04b13540;
      local_40 = &DAT_05724178;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04b13550;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x278;
      goto LAB_0323db5c;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_057240d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057240d0), iVar1 != 0)) {
    DAT_05724090 = PTR_DAT_04bb2020 + 0x10;
    DAT_05724098 = "WindowIn";
    DAT_057240a8 = &DAT_0407ebb1;
    DAT_057240c8 = &DAT_0407ebb1;
    DAT_057240b8 = "WindowOut";
    DAT_057240a0 = DAT_05724090;
    DAT_057240b0 = DAT_05724090;
    DAT_057240c0 = DAT_05724090;
    __cxa_guard_release(&DAT_057240d0);
  }
  if (((DAT_057240e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057240e8), iVar1 != 0)) {
    DAT_057240d8 = 0x200000002;
    DAT_057240e0 = &DAT_05724090;
    __cxa_guard_release(&DAT_057240e8);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_50 = (undefined *)0x0;
  local_48 = (undefined *)0x0;
  local_38 = 0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_40 = &DAT_057240d8;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_0323db5c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

