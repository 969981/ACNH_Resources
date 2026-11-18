
void FUN_0352f0f4(undefined8 param_1,undefined8 *param_2)

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
      if (pcVar5[3] != 'S') {
        return;
      }
      if (pcVar5[4] != 'e') {
        return;
      }
      if (pcVar5[5] != 'a') {
        return;
      }
      if (pcVar5[6] != 's') {
        return;
      }
      if (pcVar5[7] != 'o') {
        return;
      }
      if (pcVar5[8] != 'n') {
        return;
      }
      if (pcVar5[9] != 'B') {
        return;
      }
      if (pcVar5[10] != 't') {
        return;
      }
      if (pcVar5[0xb] != 'n') {
        return;
      }
      if (pcVar5[0xc] != '_') {
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
      if (((DAT_05769098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05769098), iVar1 != 0)) {
        DAT_05769058 = PTR_DAT_04bb2020 + 0x10;
        DAT_05769060 = "SeasonType";
        DAT_05769070 = &DAT_0407ebb1;
        DAT_05769090 = &DAT_0407ebb1;
        DAT_05769080 = "RecommendType";
        DAT_05769068 = DAT_05769058;
        DAT_05769078 = DAT_05769058;
        DAT_05769088 = DAT_05769058;
        __cxa_guard_release(&DAT_05769098);
      }
      if (((DAT_057690b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057690b0), iVar1 != 0)) {
        DAT_057690a0 = 0x200000002;
        DAT_057690a8 = &DAT_05769058;
        __cxa_guard_release(&DAT_057690b0);
      }
      if (((DAT_057690d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057690d8), iVar1 != 0)) {
        DAT_057690b8 = PTR_DAT_04bb2020 + 0x10;
        DAT_057690c0 = "@T_Season_00";
        DAT_057690d0 = "@T_Recommend_00";
        DAT_057690c8 = DAT_057690b8;
        __cxa_guard_release(&DAT_057690d8);
      }
      if (((DAT_05769100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05769100), iVar1 != 0)) {
        DAT_057690e0 = PTR_DAT_04bb2020 + 0x10;
        DAT_057690e8 = "N_CmnSubWin_00";
        DAT_057690f8 = "P_Photo_00";
        DAT_057690f0 = DAT_057690e0;
        __cxa_guard_release(&DAT_05769100);
      }
      local_58 = *param_2;
      local_38 = 1;
      local_48 = &DAT_04b36d58;
      puStack_40 = &DAT_057690a0;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04b36d68;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_0352f19c;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05769050 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05769050), iVar1 != 0)) {
    DAT_05769040 = PTR_DAT_04bb2020 + 0x10;
    DAT_05769048 = "@T_Title_00";
    __cxa_guard_release(&DAT_05769050);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04b36d48;
  puStack_40 = (undefined8 *)0x0;
  local_38 = 0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_50 = (undefined *)0x0;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_0352f19c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

