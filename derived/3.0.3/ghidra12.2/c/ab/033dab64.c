
void FUN_033dab64(undefined8 param_1,undefined8 *param_2)

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
  if (pcVar5 != "") {
    if (*pcVar5 == '/') {
      if (pcVar5[1] != 'L') {
        return;
      }
      if (pcVar5[2] != '_') {
        return;
      }
      if (pcVar5[3] != 'T') {
        return;
      }
      if (pcVar5[4] != 'i') {
        return;
      }
      if (pcVar5[5] != 'm') {
        return;
      }
      if (pcVar5[6] != 'e') {
        return;
      }
      if (pcVar5[7] != 'r') {
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
      if (((DAT_05748198 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05748198), iVar1 != 0)) {
        DAT_05748158 = PTR_DAT_04bb2020 + 0x10;
        DAT_05748160 = "State";
        DAT_05748170 = &DAT_0407ebb1;
        DAT_05748190 = &DAT_0407ebb1;
        DAT_05748180 = "PinchLoop";
        DAT_05748168 = DAT_05748158;
        DAT_05748178 = DAT_05748158;
        DAT_05748188 = DAT_05748158;
        __cxa_guard_release(&DAT_05748198);
      }
      if (((DAT_057481b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057481b0), iVar1 != 0)) {
        DAT_057481a0 = 0x200000002;
        DAT_057481a8 = &DAT_05748158;
        __cxa_guard_release(&DAT_057481b0);
      }
      if (((DAT_057481e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057481e8), iVar1 != 0)) {
        DAT_057481b8 = PTR_DAT_04bb2020 + 0x10;
        DAT_057481c0 = "@T_Num_00";
        DAT_057481e0 = "@T_Num_01";
        DAT_057481d0 = "@T_Colon_00";
        DAT_057481c8 = DAT_057481b8;
        DAT_057481d8 = DAT_057481b8;
        __cxa_guard_release(&DAT_057481e8);
      }
      local_50 = (undefined *)0x0;
      local_48 = &DAT_04b265f8;
      puStack_40 = &DAT_057481a0;
      lVar4 = puVar7[2];
      local_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = lVar4 + 0x208;
      goto LAB_033dac4c;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05748108 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05748108), iVar1 != 0)) {
    DAT_057480c8 = PTR_DAT_04bb2020 + 0x10;
    DAT_057480d0 = "TextOut";
    DAT_057480e0 = &DAT_0407ebb1;
    DAT_05748100 = &DAT_0407ebb1;
    DAT_057480f0 = "Timer";
    DAT_057480d8 = DAT_057480c8;
    DAT_057480e8 = DAT_057480c8;
    DAT_057480f8 = DAT_057480c8;
    __cxa_guard_release(&DAT_05748108);
  }
  if (((DAT_05748120 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05748120), iVar1 != 0)) {
    DAT_05748110 = 0x200000002;
    DAT_05748118 = &DAT_057480c8;
    __cxa_guard_release(&DAT_05748120);
  }
  if (((DAT_05748138 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05748138), iVar1 != 0)) {
    DAT_05748128 = PTR_DAT_04bb2020 + 0x10;
    DAT_05748130 = "@T_Text_00";
    __cxa_guard_release(&DAT_05748138);
  }
  if (((DAT_05748150 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05748150), iVar1 != 0)) {
    DAT_05748140 = PTR_DAT_04bb2020 + 0x10;
    DAT_05748148 = "N_Pos_00";
    __cxa_guard_release(&DAT_05748150);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_58 = *param_2;
  local_48 = &DAT_04b265d8;
  puStack_40 = &DAT_05748110;
  local_50 = &DAT_04b265e8;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_033dac4c:
  local_38 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

