
void FUN_02f61a84(undefined8 param_1,undefined8 *param_2)

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
      if (pcVar5[3] != 'B') {
        return;
      }
      if (pcVar5[4] != 't') {
        return;
      }
      if (pcVar5[5] != 'n') {
        return;
      }
      if (pcVar5[6] != '_') {
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
      if (((DAT_056c6dd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c6dd8), iVar1 != 0)) {
        DAT_056c6db8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056c6dc0 = &DAT_040fe5ab;
        DAT_056c6dd0 = &DAT_0407ebb1;
        DAT_056c6dc8 = DAT_056c6db8;
        __cxa_guard_release(&DAT_056c6dd8);
      }
      if (((DAT_056c6df0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c6df0), iVar1 != 0)) {
        DAT_056c6de0 = 0x100000002;
        DAT_056c6de8 = &DAT_056c6db8;
        __cxa_guard_release(&DAT_056c6df0);
      }
      if (((DAT_056c6e18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c6e18), iVar1 != 0)) {
        DAT_056c6df8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056c6e00 = "@T_Text_00";
        DAT_056c6e10 = "@T_Text_01";
        DAT_056c6e08 = DAT_056c6df8;
        __cxa_guard_release(&DAT_056c6e18);
      }
      if (((DAT_056c6e30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c6e30), iVar1 != 0)) {
        DAT_056c6e20 = PTR_DAT_04bb2020 + 0x10;
        DAT_056c6e28 = "N_Text_00";
        __cxa_guard_release(&DAT_056c6e30);
      }
      local_48 = &DAT_04ae54d0;
      puStack_40 = &DAT_056c6de0;
      local_50 = &DAT_04ae54e0;
      lVar4 = puVar7[2];
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02f61b54;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056c6cd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c6cd0), iVar1 != 0)) {
    DAT_056c6c50 = PTR_DAT_04bb2020 + 0x10;
    DAT_056c6c58 = "ModeAOut";
    DAT_056c6c68 = &DAT_0407ebb1;
    DAT_056c6c88 = &DAT_0407ebb1;
    DAT_056c6ca8 = &DAT_0407ebb1;
    DAT_056c6c78 = "ModeAIn";
    DAT_056c6c98 = "ModeB";
    DAT_056c6cb8 = "ModeLast";
    DAT_056c6cc8 = &DAT_0407ebb1;
    DAT_056c6c60 = DAT_056c6c50;
    DAT_056c6c70 = DAT_056c6c50;
    DAT_056c6c80 = DAT_056c6c50;
    DAT_056c6c90 = DAT_056c6c50;
    DAT_056c6ca0 = DAT_056c6c50;
    DAT_056c6cb0 = DAT_056c6c50;
    DAT_056c6cc0 = DAT_056c6c50;
    __cxa_guard_release(&DAT_056c6cd0);
  }
  if (((DAT_056c6ce8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c6ce8), iVar1 != 0)) {
    DAT_056c6cd8 = 0x400000002;
    DAT_056c6ce0 = &DAT_056c6c50;
    __cxa_guard_release(&DAT_056c6ce8);
  }
  if (((DAT_056c6db0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c6db0), iVar1 != 0)) {
    DAT_056c6cf0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056c6cf8 = "@T_Text_00";
    DAT_056c6d18 = "@T_Text_03";
    DAT_056c6d08 = "@T_Text_01";
    DAT_056c6d28 = "@T_FixedPokiUnit_00";
    DAT_056c6d38 = "@T_FixedTitle_00";
    DAT_056c6d58 = "@T_RateTitle_01";
    DAT_056c6d48 = "@T_FixedBellUnit_00";
    DAT_056c6d68 = "@T_RateNum_00";
    DAT_056c6d78 = "@T_RateNum_01";
    DAT_056c6d88 = "@T_RateUnit_00";
    DAT_056c6d98 = "@T_RateUnit_01";
    DAT_056c6da8 = "@T_RateEqual_00";
    DAT_056c6d00 = DAT_056c6cf0;
    DAT_056c6d10 = DAT_056c6cf0;
    DAT_056c6d20 = DAT_056c6cf0;
    DAT_056c6d30 = DAT_056c6cf0;
    DAT_056c6d40 = DAT_056c6cf0;
    DAT_056c6d50 = DAT_056c6cf0;
    DAT_056c6d60 = DAT_056c6cf0;
    DAT_056c6d70 = DAT_056c6cf0;
    DAT_056c6d80 = DAT_056c6cf0;
    DAT_056c6d90 = DAT_056c6cf0;
    DAT_056c6da0 = DAT_056c6cf0;
    __cxa_guard_release(&DAT_056c6db0);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04ae54c0;
  puStack_40 = &DAT_056c6cd8;
  local_50 = (undefined *)0x0;
  uStack_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02f61b54:
  local_38 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

