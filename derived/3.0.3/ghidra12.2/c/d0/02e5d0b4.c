
void FUN_02e5d0b4(undefined8 param_1,undefined8 *param_2)

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
LAB_02e5d114:
    if (((DAT_0569abf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569abf8), iVar1 != 0)) {
      DAT_0569abe8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0569abf0 = "@T_Price_00";
      __cxa_guard_release(&DAT_0569abf8);
    }
    if (((DAT_0569ac10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569ac10), iVar1 != 0)) {
      DAT_0569ac00 = PTR_DAT_04bb2020 + 0x10;
      DAT_0569ac08 = "N_3D_00";
      __cxa_guard_release(&DAT_0569ac10);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04ad7270;
    puStack_40 = (undefined8 *)0x0;
    local_38 = 0;
    local_50 = &DAT_04ad7280;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
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
          if (((DAT_0569ac38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569ac38), iVar1 != 0))
          {
            DAT_0569ac18 = PTR_DAT_04bb2020 + 0x10;
            DAT_0569ac20 = &DAT_040734ad;
            DAT_0569ac30 = &DAT_0407ebb1;
            DAT_0569ac28 = DAT_0569ac18;
            __cxa_guard_release(&DAT_0569ac38);
          }
          if (((DAT_0569ac50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569ac50), iVar1 != 0))
          {
            DAT_0569ac40 = 0x100000002;
            DAT_0569ac48 = &DAT_0569ac18;
            __cxa_guard_release(&DAT_0569ac50);
          }
          if (((DAT_0569ac78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569ac78), iVar1 != 0))
          {
            DAT_0569ac58 = PTR_DAT_04bb2020 + 0x10;
            DAT_0569ac60 = "@T_Name_00";
            DAT_0569ac70 = "@T_Price_00";
            DAT_0569ac68 = DAT_0569ac58;
            __cxa_guard_release(&DAT_0569ac78);
          }
          if (((DAT_0569ac90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569ac90), iVar1 != 0))
          {
            DAT_0569ac80 = PTR_DAT_04bb2020 + 0x10;
            DAT_0569ac88 = "P_Icon_00";
            __cxa_guard_release(&DAT_0569ac90);
          }
          local_58 = *param_2;
          local_38 = 1;
          local_48 = &DAT_04ad7290;
          puStack_40 = &DAT_0569ac40;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_50 = &DAT_04ad72a0;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_02e5d174;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02e5d114;
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
    if (pcVar5[4] != 'a') {
      return;
    }
    if (pcVar5[5] != 't') {
      return;
    }
    if (pcVar5[6] != 'e') {
      return;
    }
    if (pcVar5[7] != 'g') {
      return;
    }
    if (pcVar5[8] != 'o') {
      return;
    }
    if (pcVar5[9] != 'r') {
      return;
    }
    if (pcVar5[10] != 'y') {
      return;
    }
    if (pcVar5[0xb] != 'A') {
      return;
    }
    if (pcVar5[0xc] != '_') {
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
    if (((DAT_0569acd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569acd8), iVar1 != 0)) {
      DAT_0569ac98 = PTR_DAT_04bb2020 + 0x10;
      DAT_0569aca0 = "Share";
      DAT_0569acb0 = &DAT_0407ebb1;
      DAT_0569acd0 = &DAT_0407ebb1;
      DAT_0569acc0 = "CategoryNum";
      DAT_0569aca8 = DAT_0569ac98;
      DAT_0569acb8 = DAT_0569ac98;
      DAT_0569acc8 = DAT_0569ac98;
      __cxa_guard_release(&DAT_0569acd8);
    }
    if (((DAT_0569acf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569acf0), iVar1 != 0)) {
      DAT_0569ace0 = 0x200000002;
      DAT_0569ace8 = &DAT_0569ac98;
      __cxa_guard_release(&DAT_0569acf0);
    }
    if (((DAT_0569ad18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569ad18), iVar1 != 0)) {
      DAT_0569acf8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0569ad00 = "@T_L_00";
      DAT_0569ad10 = "@T_R_00";
      DAT_0569ad08 = DAT_0569acf8;
      __cxa_guard_release(&DAT_0569ad18);
    }
    local_38 = 0;
    local_50 = (undefined *)0x0;
    local_48 = &DAT_04ad72b0;
    puStack_40 = &DAT_0569ace0;
    lVar4 = puVar7[2];
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x208;
  }
LAB_02e5d174:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

