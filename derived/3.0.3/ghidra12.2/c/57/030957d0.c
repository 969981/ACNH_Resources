
void FUN_030957d0(undefined8 param_1,undefined8 *param_2)

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
LAB_03095830:
    if (((DAT_056e5d18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5d18), iVar1 != 0)) {
      DAT_056e5cb8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e5cc0 = "ToSearch";
      DAT_056e5cd0 = &DAT_0407ebb1;
      DAT_056e5cf0 = &DAT_0407ebb1;
      DAT_056e5d10 = &DAT_0407ebb1;
      DAT_056e5ce0 = "ToResults";
      DAT_056e5d00 = "CategoryOnOff";
      DAT_056e5cc8 = DAT_056e5cb8;
      DAT_056e5cd8 = DAT_056e5cb8;
      DAT_056e5ce8 = DAT_056e5cb8;
      DAT_056e5cf8 = DAT_056e5cb8;
      DAT_056e5d08 = DAT_056e5cb8;
      __cxa_guard_release(&DAT_056e5d18);
    }
    if (((DAT_056e5d30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5d30), iVar1 != 0)) {
      DAT_056e5d20 = 0x300000002;
      DAT_056e5d28 = &DAT_056e5cb8;
      __cxa_guard_release(&DAT_056e5d30);
    }
    if (((DAT_056e5d68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5d68), iVar1 != 0)) {
      DAT_056e5d38 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e5d40 = "@T_Price_00";
      DAT_056e5d60 = "@T_Header_00";
      DAT_056e5d50 = "@T_Minus_00";
      DAT_056e5d48 = DAT_056e5d38;
      DAT_056e5d58 = DAT_056e5d38;
      __cxa_guard_release(&DAT_056e5d68);
    }
    if (((DAT_056e5d80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5d80), iVar1 != 0)) {
      DAT_056e5d70 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e5d78 = "N_3D_00";
      __cxa_guard_release(&DAT_056e5d80);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04afa330;
    local_40 = &DAT_056e5d20;
    local_38 = 0;
    local_50 = &DAT_04afa340;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_030958b8;
  }
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
        if (((DAT_056e5dc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5dc8), iVar1 != 0)) {
          DAT_056e5d88 = PTR_DAT_04bb2020 + 0x10;
          DAT_056e5d90 = "Color";
          DAT_056e5da0 = &DAT_0407ebb1;
          DAT_056e5dc0 = &DAT_0407ebb1;
          DAT_056e5db0 = &DAT_040734ad;
          DAT_056e5d98 = DAT_056e5d88;
          DAT_056e5da8 = DAT_056e5d88;
          DAT_056e5db8 = DAT_056e5d88;
          __cxa_guard_release(&DAT_056e5dc8);
        }
        if (((DAT_056e5de0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5de0), iVar1 != 0)) {
          DAT_056e5dd0 = 0x200000002;
          DAT_056e5dd8 = &DAT_056e5d88;
          __cxa_guard_release(&DAT_056e5de0);
        }
        if (((DAT_056e5e08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5e08), iVar1 != 0)) {
          DAT_056e5de8 = PTR_DAT_04bb2020 + 0x10;
          DAT_056e5df0 = "@T_Name_00";
          DAT_056e5e00 = "@T_Price_00";
          DAT_056e5df8 = DAT_056e5de8;
          __cxa_guard_release(&DAT_056e5e08);
        }
        if (((DAT_056e5e20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5e20), iVar1 != 0)) {
          DAT_056e5e10 = PTR_DAT_04bb2020 + 0x10;
          DAT_056e5e18 = "P_Icon_00";
          __cxa_guard_release(&DAT_056e5e20);
        }
        local_58 = *param_2;
        local_38 = 1;
        local_48 = &DAT_04afa350;
        local_40 = &DAT_056e5dd0;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_50 = &DAT_04afa360;
        lVar4 = puVar7[2];
        lVar2 = lVar4 + 0x2c8;
        goto LAB_030958b8;
      }
    }
  }
  else if (*pcVar5 == '\0') goto LAB_03095830;
  pcVar5 = (char *)param_2[5];
  if ((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'C')))) &&
      ((((pcVar5[4] == 'o' && (pcVar5[5] == 'l')) && (pcVar5[6] == 'o')) &&
       ((pcVar5[7] == 'r' && (pcVar5[8] == 'I')))))) &&
     ((pcVar5[9] == 'n' && (((pcVar5[10] == 'f' && (pcVar5[0xb] == 'o')) && (pcVar5[0xc] == '_')))))
     ) {
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0)) goto LAB_03095b68;
    if (((DAT_056e5e38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5e38), iVar1 != 0)) {
      DAT_056e5e28 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e5e30 = "@T_Guide_00";
      __cxa_guard_release(&DAT_056e5e38);
    }
    local_48 = &DAT_04afa370;
    local_58 = *param_2;
    local_40 = (undefined8 *)0x0;
  }
  else {
LAB_03095b68:
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
    if (((DAT_056e5e80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5e80), iVar1 != 0)) {
      DAT_056e5e40 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e5e48 = "Share";
      DAT_056e5e58 = &DAT_0407ebb1;
      DAT_056e5e78 = &DAT_0407ebb1;
      DAT_056e5e68 = "CategoryNum";
      DAT_056e5e50 = DAT_056e5e40;
      DAT_056e5e60 = DAT_056e5e40;
      DAT_056e5e70 = DAT_056e5e40;
      __cxa_guard_release(&DAT_056e5e80);
    }
    if (((DAT_056e5e98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5e98), iVar1 != 0)) {
      DAT_056e5e88 = 0x200000002;
      DAT_056e5e90 = &DAT_056e5e40;
      __cxa_guard_release(&DAT_056e5e98);
    }
    if (((DAT_056e5ec0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e5ec0), iVar1 != 0)) {
      DAT_056e5ea0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e5ea8 = "@T_L_00";
      DAT_056e5eb8 = "@T_R_00";
      DAT_056e5eb0 = DAT_056e5ea0;
      __cxa_guard_release(&DAT_056e5ec0);
    }
    local_48 = &DAT_04afa380;
    local_58 = *param_2;
    local_40 = &DAT_056e5e88;
  }
  local_38 = 0;
  local_50 = (undefined *)0x0;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
LAB_030958b8:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

