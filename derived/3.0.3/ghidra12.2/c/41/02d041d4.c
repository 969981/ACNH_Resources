
void FUN_02d041d4(undefined8 param_1,undefined8 *param_2)

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
  if (pcVar5 == "") {
LAB_02d04234:
    if (((DAT_056718d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056718d8), iVar1 != 0)) {
      DAT_05671818 = PTR_DAT_04bb2020 + 0x10;
      DAT_05671820 = "JobType";
      DAT_05671830 = &DAT_0407ebb1;
      DAT_05671850 = &DAT_0407ebb1;
      DAT_05671870 = &DAT_0407ebb1;
      DAT_05671840 = "3DposeWait";
      DAT_05671860 = "3DoffDecide";
      DAT_05671880 = &DAT_040a0741;
      DAT_056718a0 = "Share";
      DAT_05671890 = &DAT_0407ebb1;
      DAT_056718b0 = &DAT_0407ebb1;
      DAT_056718c0 = "CategoryNum";
      DAT_056718d0 = &DAT_0407ebb1;
      DAT_05671828 = DAT_05671818;
      DAT_05671838 = DAT_05671818;
      DAT_05671848 = DAT_05671818;
      DAT_05671858 = DAT_05671818;
      DAT_05671868 = DAT_05671818;
      DAT_05671878 = DAT_05671818;
      DAT_05671888 = DAT_05671818;
      DAT_05671898 = DAT_05671818;
      DAT_056718a8 = DAT_05671818;
      DAT_056718b8 = DAT_05671818;
      DAT_056718c8 = DAT_05671818;
      __cxa_guard_release(&DAT_056718d8);
    }
    if (((DAT_056718f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056718f0), iVar1 != 0)) {
      DAT_056718e0 = 0x600000002;
      DAT_056718e8 = &DAT_05671818;
      __cxa_guard_release(&DAT_056718f0);
    }
    if (((DAT_05671928 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05671928), iVar1 != 0)) {
      DAT_056718f8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05671900 = "@T_L_00";
      DAT_05671920 = "@T_Position_00";
      DAT_05671910 = "@T_R_00";
      DAT_05671908 = DAT_056718f8;
      DAT_05671918 = DAT_056718f8;
      __cxa_guard_release(&DAT_05671928);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04abade8;
    puStack_40 = &DAT_056718e0;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if ((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'C')) &&
           ((pcVar5[4] == 'l' && (pcVar5[5] == 'o')))) &&
          ((pcVar5[6] == 't' && ((pcVar5[7] == 'h' && (pcVar5[8] == 'e')))))) &&
         ((pcVar5[9] == 's' && (pcVar5[10] == '_')))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4ff0);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) != 0)) {
          if (((DAT_05671950 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05671950), iVar1 != 0))
          {
            DAT_05671930 = PTR_DAT_04bb2020 + 0x10;
            DAT_05671938 = "Pattern";
            DAT_05671948 = &DAT_0407ebb1;
            DAT_05671940 = DAT_05671930;
            __cxa_guard_release(&DAT_05671950);
          }
          if (((DAT_05671968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05671968), iVar1 != 0))
          {
            DAT_05671958 = 0x100000002;
            DAT_05671960 = &DAT_05671930;
            __cxa_guard_release(&DAT_05671968);
          }
          if (((DAT_05671990 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05671990), iVar1 != 0))
          {
            DAT_05671970 = PTR_DAT_04bb2020 + 0x10;
            DAT_05671978 = "P_Icon_01";
            DAT_05671988 = "P_Icon_00";
            DAT_05671980 = DAT_05671970;
            __cxa_guard_release(&DAT_05671990);
          }
          local_58 = *param_2;
          local_48 = (undefined *)0x0;
          puStack_40 = &DAT_05671958;
          local_38 = 2;
          local_50 = &DAT_04abadf8;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x208;
          goto LAB_02d042a4;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02d04234;
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
    if (((DAT_056719f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056719f8), iVar1 != 0)) {
      DAT_05671998 = PTR_DAT_04bb2020 + 0x10;
      DAT_056719a0 = "Pattern";
      DAT_056719b0 = &DAT_0407ebb1;
      DAT_056719d0 = &DAT_0407ebb1;
      DAT_056719f0 = &DAT_0407ebb1;
      DAT_056719c0 = "BtnListRandom";
      DAT_056719e0 = "State";
      DAT_056719a8 = DAT_05671998;
      DAT_056719b8 = DAT_05671998;
      DAT_056719c8 = DAT_05671998;
      DAT_056719d8 = DAT_05671998;
      DAT_056719e8 = DAT_05671998;
      __cxa_guard_release(&DAT_056719f8);
    }
    if (((DAT_05671a10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05671a10), iVar1 != 0)) {
      DAT_05671a00 = 0x300000002;
      DAT_05671a08 = &DAT_05671998;
      __cxa_guard_release(&DAT_05671a10);
    }
    if (((DAT_05671a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05671a38), iVar1 != 0)) {
      DAT_05671a18 = PTR_DAT_04bb2020 + 0x10;
      DAT_05671a20 = "P_Icon_00";
      DAT_05671a30 = "P_Icon_01";
      DAT_05671a28 = DAT_05671a18;
      __cxa_guard_release(&DAT_05671a38);
    }
    local_58 = *param_2;
    local_48 = (undefined *)0x0;
    puStack_40 = &DAT_05671a00;
    local_38 = 2;
    local_50 = &DAT_04abae08;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x2c8;
  }
LAB_02d042a4:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

