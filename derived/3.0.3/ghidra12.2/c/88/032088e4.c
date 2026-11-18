
void FUN_032088e4(undefined8 param_1,undefined8 *param_2)

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
  if (pcVar5 == "") {
LAB_03208944:
    if (((DAT_0571fa30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571fa30), iVar1 != 0)) {
      DAT_0571fa10 = PTR_DAT_04bb2020 + 0x10;
      DAT_0571fa18 = "CategoryNum";
      DAT_0571fa28 = &DAT_0407ebb1;
      DAT_0571fa20 = DAT_0571fa10;
      __cxa_guard_release(&DAT_0571fa30);
    }
    if (((DAT_0571fa48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571fa48), iVar1 != 0)) {
      DAT_0571fa38 = 0x100000002;
      DAT_0571fa40 = &DAT_0571fa10;
      __cxa_guard_release(&DAT_0571fa48);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_50 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    local_38 = 0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_40 = &DAT_0571fa38;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')) &&
            ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) && (pcVar5[6] == 'L')) &&
          (((pcVar5[7] == 'i' && (pcVar5[8] == 's')) &&
           ((pcVar5[9] == 't' &&
            (((pcVar5[10] == '_' && (pcVar5[0xb] == '0')) && (pcVar5[0xc] == '0')))))))) &&
         (((pcVar5[0xd] == '/' && (pcVar5[0xe] == 'L')) &&
          ((pcVar5[0xf] == '_' &&
           (((pcVar5[0x10] == 'B' && (pcVar5[0x11] == 't')) &&
            ((pcVar5[0x12] == 'n' && (pcVar5[0x13] == '_')))))))))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_0571fa90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571fa90), iVar1 != 0))
          {
            DAT_0571fa50 = PTR_DAT_04bb2020 + 0x10;
            DAT_0571fa58 = "BtnListRandom";
            DAT_0571fa68 = &DAT_0407ebb1;
            DAT_0571fa88 = &DAT_0407ebb1;
            DAT_0571fa78 = "State";
            DAT_0571fa60 = DAT_0571fa50;
            DAT_0571fa70 = DAT_0571fa50;
            DAT_0571fa80 = DAT_0571fa50;
            __cxa_guard_release(&DAT_0571fa90);
          }
          if (((DAT_0571faa8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571faa8), iVar1 != 0))
          {
            DAT_0571fa98 = 0x200000002;
            DAT_0571faa0 = &DAT_0571fa50;
            __cxa_guard_release(&DAT_0571faa8);
          }
          if (((DAT_0571fac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571fac0), iVar1 != 0))
          {
            DAT_0571fab0 = PTR_DAT_04bb2020 + 0x10;
            DAT_0571fab8 = "@T_Price_00";
            __cxa_guard_release(&DAT_0571fac0);
          }
          if (((DAT_0571fad8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571fad8), iVar1 != 0))
          {
            DAT_0571fac8 = PTR_DAT_04bb2020 + 0x10;
            DAT_0571fad0 = "P_Icon_00";
            __cxa_guard_release(&DAT_0571fad8);
          }
          local_58 = *param_2;
          local_38 = 1;
          local_48 = &DAT_04b0fa98;
          local_40 = &DAT_0571fa98;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_50 = &DAT_04b0faa8;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_0320899c;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_03208944;
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
    if ((((pcVar5[3] != 'C') || (pcVar5[4] != 'a')) || (pcVar5[5] != 't')) ||
       ((pcVar5[6] != 'R' || (pcVar5[7] != '_')))) {
      if (pcVar5[3] != 'C') {
        return;
      }
      if (pcVar5[4] != 'a') {
        return;
      }
      if (pcVar5[5] != 't') {
        return;
      }
      if (pcVar5[6] != 'L') {
        return;
      }
      if (pcVar5[7] != '_') {
        return;
      }
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
    if (((DAT_0571fb00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571fb00), iVar1 != 0)) {
      DAT_0571fae0 = PTR_DAT_04bb2020 + 0x10;
      DAT_0571fae8 = "Category";
      DAT_0571faf8 = &DAT_0407ebb1;
      DAT_0571faf0 = DAT_0571fae0;
      __cxa_guard_release(&DAT_0571fb00);
    }
    if (((DAT_0571fb18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571fb18), iVar1 != 0)) {
      DAT_0571fb08 = 0x100000002;
      DAT_0571fb10 = &DAT_0571fae0;
      __cxa_guard_release(&DAT_0571fb18);
    }
    if (((DAT_0571fb40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571fb40), iVar1 != 0)) {
      DAT_0571fb20 = PTR_DAT_04bb2020 + 0x10;
      DAT_0571fb28 = "@T_R_00";
      DAT_0571fb38 = "@T_L_00";
      DAT_0571fb30 = DAT_0571fb20;
      __cxa_guard_release(&DAT_0571fb40);
    }
    local_38 = 0;
    local_50 = (undefined *)0x0;
    local_48 = &DAT_04b0fab8;
    local_40 = &DAT_0571fb08;
    lVar4 = puVar7[2];
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x208;
  }
LAB_0320899c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

