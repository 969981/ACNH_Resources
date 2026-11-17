
void FUN_02cf4524(undefined8 param_1,undefined8 *param_2)

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
      if (((DAT_0566d950 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566d950), iVar1 != 0)) {
        DAT_0566d8d0 = PTR_DAT_04bb2020 + 0x10;
        DAT_0566d8d8 = "PocketIn";
        DAT_0566d8e8 = &DAT_0407ebb1;
        DAT_0566d908 = &DAT_0407ebb1;
        DAT_0566d928 = &DAT_0407ebb1;
        DAT_0566d8f8 = "PocketOut";
        DAT_0566d918 = "Pattern";
        DAT_0566d938 = "BtnListRandom";
        DAT_0566d948 = &DAT_0407ebb1;
        DAT_0566d8e0 = DAT_0566d8d0;
        DAT_0566d8f0 = DAT_0566d8d0;
        DAT_0566d900 = DAT_0566d8d0;
        DAT_0566d910 = DAT_0566d8d0;
        DAT_0566d920 = DAT_0566d8d0;
        DAT_0566d930 = DAT_0566d8d0;
        DAT_0566d940 = DAT_0566d8d0;
        __cxa_guard_release(&DAT_0566d950);
      }
      if (((DAT_0566d968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566d968), iVar1 != 0)) {
        DAT_0566d958 = 0x400000002;
        DAT_0566d960 = &DAT_0566d8d0;
        __cxa_guard_release(&DAT_0566d968);
      }
      if (((DAT_0566d990 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566d990), iVar1 != 0)) {
        DAT_0566d970 = PTR_DAT_04bb2020 + 0x10;
        DAT_0566d978 = "P_Icon_00";
        DAT_0566d988 = "P_Icon_01";
        DAT_0566d980 = DAT_0566d970;
        __cxa_guard_release(&DAT_0566d990);
      }
      local_58 = *param_2;
      local_48 = (undefined *)0x0;
      puStack_40 = &DAT_0566d958;
      local_38 = 2;
      local_50 = &DAT_04ab8f88;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02cf45f4;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_0566d888 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566d888), iVar1 != 0)) {
    DAT_0566d808 = PTR_DAT_04bb2020 + 0x10;
    DAT_0566d810 = "Share";
    DAT_0566d820 = &DAT_0407ebb1;
    DAT_0566d840 = &DAT_0407ebb1;
    DAT_0566d860 = &DAT_0407ebb1;
    DAT_0566d830 = "ChangeCorde";
    DAT_0566d850 = "ChangeRing";
    DAT_0566d870 = "CategoryNum";
    DAT_0566d880 = &DAT_0407ebb1;
    DAT_0566d818 = DAT_0566d808;
    DAT_0566d828 = DAT_0566d808;
    DAT_0566d838 = DAT_0566d808;
    DAT_0566d848 = DAT_0566d808;
    DAT_0566d858 = DAT_0566d808;
    DAT_0566d868 = DAT_0566d808;
    DAT_0566d878 = DAT_0566d808;
    __cxa_guard_release(&DAT_0566d888);
  }
  if (((DAT_0566d8a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566d8a0), iVar1 != 0)) {
    DAT_0566d890 = 0x400000002;
    DAT_0566d898 = &DAT_0566d808;
    __cxa_guard_release(&DAT_0566d8a0);
  }
  if (((DAT_0566d8c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566d8c8), iVar1 != 0)) {
    DAT_0566d8a8 = PTR_DAT_04bb2020 + 0x10;
    DAT_0566d8b0 = "@T_L_00";
    DAT_0566d8c0 = "@T_R_00";
    DAT_0566d8b8 = DAT_0566d8a8;
    __cxa_guard_release(&DAT_0566d8c8);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = 0;
  local_48 = &DAT_04ab8f78;
  puStack_40 = &DAT_0566d890;
  local_50 = (undefined *)0x0;
  local_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02cf45f4:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

