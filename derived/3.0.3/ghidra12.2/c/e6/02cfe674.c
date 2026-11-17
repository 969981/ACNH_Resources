
void FUN_02cfe674(undefined8 param_1,undefined8 *param_2)

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
LAB_02cfe6d4:
    if (((DAT_0566fe48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566fe48), iVar1 != 0)) {
      DAT_0566fda8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0566fdb0 = "3DposeWait";
      DAT_0566fdc0 = &DAT_0407ebb1;
      DAT_0566fde0 = &DAT_0407ebb1;
      DAT_0566fe00 = &DAT_0407ebb1;
      DAT_0566fdd0 = "3DoffDecide";
      DAT_0566fdf0 = &DAT_040a0741;
      DAT_0566fe10 = "Share";
      DAT_0566fe20 = &DAT_0407ebb1;
      DAT_0566fe30 = "CategoryNum";
      DAT_0566fe40 = &DAT_0407ebb1;
      DAT_0566fdb8 = DAT_0566fda8;
      DAT_0566fdc8 = DAT_0566fda8;
      DAT_0566fdd8 = DAT_0566fda8;
      DAT_0566fde8 = DAT_0566fda8;
      DAT_0566fdf8 = DAT_0566fda8;
      DAT_0566fe08 = DAT_0566fda8;
      DAT_0566fe18 = DAT_0566fda8;
      DAT_0566fe28 = DAT_0566fda8;
      DAT_0566fe38 = DAT_0566fda8;
      __cxa_guard_release(&DAT_0566fe48);
    }
    if (((DAT_0566fe60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566fe60), iVar1 != 0)) {
      DAT_0566fe50 = 0x500000002;
      DAT_0566fe58 = &DAT_0566fda8;
      __cxa_guard_release(&DAT_0566fe60);
    }
    if (((DAT_0566fe88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566fe88), iVar1 != 0)) {
      DAT_0566fe68 = PTR_DAT_04bb2020 + 0x10;
      DAT_0566fe70 = "@T_L_00";
      DAT_0566fe80 = "@T_R_00";
      DAT_0566fe78 = DAT_0566fe68;
      __cxa_guard_release(&DAT_0566fe88);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04ab9f00;
    puStack_40 = &DAT_0566fe50;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')) &&
            ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) &&
           (((pcVar5[6] == 'L' && ((pcVar5[7] == 'i' && (pcVar5[8] == 's')))) && (pcVar5[9] == 't'))
           )) && ((((pcVar5[10] == '_' && (pcVar5[0xb] == '0')) && (pcVar5[0xc] == '0')) &&
                  (((pcVar5[0xd] == '/' && (pcVar5[0xe] == 'L')) &&
                   ((pcVar5[0xf] == '_' && ((pcVar5[0x10] == 'B' && (pcVar5[0x11] == 't'))))))))))
         && ((pcVar5[0x12] == 'n' && (pcVar5[0x13] == '_')))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_0566ff10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566ff10), iVar1 != 0))
          {
            DAT_0566fe90 = PTR_DAT_04bb2020 + 0x10;
            DAT_0566fe98 = "PocketIn";
            DAT_0566fea8 = &DAT_0407ebb1;
            DAT_0566fec8 = &DAT_0407ebb1;
            DAT_0566fee8 = &DAT_0407ebb1;
            DAT_0566feb8 = "PocketOut";
            DAT_0566fed8 = "Pattern";
            DAT_0566fef8 = "BtnListRandom";
            DAT_0566ff08 = &DAT_0407ebb1;
            DAT_0566fea0 = DAT_0566fe90;
            DAT_0566feb0 = DAT_0566fe90;
            DAT_0566fec0 = DAT_0566fe90;
            DAT_0566fed0 = DAT_0566fe90;
            DAT_0566fee0 = DAT_0566fe90;
            DAT_0566fef0 = DAT_0566fe90;
            DAT_0566ff00 = DAT_0566fe90;
            __cxa_guard_release(&DAT_0566ff10);
          }
          if (((DAT_0566ff28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566ff28), iVar1 != 0))
          {
            DAT_0566ff18 = 0x400000002;
            DAT_0566ff20 = &DAT_0566fe90;
            __cxa_guard_release(&DAT_0566ff28);
          }
          if (((DAT_0566ff50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566ff50), iVar1 != 0))
          {
            DAT_0566ff30 = PTR_DAT_04bb2020 + 0x10;
            DAT_0566ff38 = "P_Icon_00";
            DAT_0566ff48 = "P_Icon_01";
            DAT_0566ff40 = DAT_0566ff30;
            __cxa_guard_release(&DAT_0566ff50);
          }
          local_58 = *param_2;
          local_48 = (undefined *)0x0;
          puStack_40 = &DAT_0566ff18;
          local_38 = 2;
          local_50 = &DAT_04ab9f10;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_02cfe744;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02cfe6d4;
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
    if (pcVar5[3] != 'C') {
      return;
    }
    if (pcVar5[4] != 'l') {
      return;
    }
    if (pcVar5[5] != 'o') {
      return;
    }
    if (pcVar5[6] != 't') {
      return;
    }
    if (pcVar5[7] != 'h') {
      return;
    }
    if (pcVar5[8] != 'e') {
      return;
    }
    if (pcVar5[9] != 's') {
      return;
    }
    if (pcVar5[10] != '_') {
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
    if (((DAT_0566ff78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566ff78), iVar1 != 0)) {
      DAT_0566ff58 = PTR_DAT_04bb2020 + 0x10;
      DAT_0566ff60 = "Pattern";
      DAT_0566ff70 = &DAT_0407ebb1;
      DAT_0566ff68 = DAT_0566ff58;
      __cxa_guard_release(&DAT_0566ff78);
    }
    if (((DAT_0566ff90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566ff90), iVar1 != 0)) {
      DAT_0566ff80 = 0x100000002;
      DAT_0566ff88 = &DAT_0566ff58;
      __cxa_guard_release(&DAT_0566ff90);
    }
    if (((DAT_0566ffb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566ffb8), iVar1 != 0)) {
      DAT_0566ff98 = PTR_DAT_04bb2020 + 0x10;
      DAT_0566ffa0 = "P_Icon_01";
      DAT_0566ffb0 = "P_Icon_00";
      DAT_0566ffa8 = DAT_0566ff98;
      __cxa_guard_release(&DAT_0566ffb8);
    }
    local_58 = *param_2;
    local_48 = (undefined *)0x0;
    puStack_40 = &DAT_0566ff80;
    local_38 = 2;
    local_50 = &DAT_04ab9f20;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_02cfe744:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

