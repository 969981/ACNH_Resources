
void FUN_02c85cf0(undefined8 param_1,undefined8 *param_2)

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
LAB_02c85d50:
    if (((DAT_05661998 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05661998), iVar1 != 0)) {
      DAT_05661958 = PTR_DAT_04bb2020 + 0x10;
      DAT_05661960 = "CategoryNum";
      DAT_05661970 = &DAT_0407ebb1;
      DAT_05661990 = &DAT_0407ebb1;
      DAT_05661980 = "Share";
      DAT_05661968 = DAT_05661958;
      DAT_05661978 = DAT_05661958;
      DAT_05661988 = DAT_05661958;
      __cxa_guard_release(&DAT_05661998);
    }
    if (((DAT_056619b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056619b0), iVar1 != 0)) {
      DAT_056619a0 = 0x200000002;
      DAT_056619a8 = &DAT_05661958;
      __cxa_guard_release(&DAT_056619b0);
    }
    if (((DAT_056619e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056619e8), iVar1 != 0)) {
      DAT_056619b8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056619c0 = "@T_Price_00";
      DAT_056619e0 = "@T_R_00";
      DAT_056619d0 = "@T_L_00";
      DAT_056619c8 = DAT_056619b8;
      DAT_056619d8 = DAT_056619b8;
      __cxa_guard_release(&DAT_056619e8);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04ab36c8;
    puStack_40 = &DAT_056619a0;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
    goto LAB_02c85dc0;
  }
  if (*pcVar5 == '/') {
    if ((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'L')) ||
         ((pcVar5[4] != 'o' || (pcVar5[5] != 'v')))) || (pcVar5[6] != 'e')) || (pcVar5[7] != '_'))
    goto LAB_02c85e98;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc5288 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5288), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc5280 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc5288);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5280), (uVar3 & 1) == 0)) goto LAB_02c85e98;
    if (((DAT_05661a00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05661a00), iVar1 != 0)) {
      DAT_056619f0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056619f8 = "@T_Bell_00";
      __cxa_guard_release(&DAT_05661a00);
    }
    local_48 = &DAT_04ab36d8;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_02c85d50;
LAB_02c85e98:
    pcVar5 = (char *)param_2[5];
    if ((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')))) &&
        (((((pcVar5[4] == 't' && (pcVar5[5] == 'n')) && (pcVar5[6] == 'L')) &&
          ((pcVar5[7] == 'i' && (pcVar5[8] == 's')))) &&
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
        if (((DAT_05661a28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05661a28), iVar1 != 0)) {
          DAT_05661a08 = PTR_DAT_04bb2020 + 0x10;
          DAT_05661a10 = "Color";
          DAT_05661a20 = &DAT_0407ebb1;
          DAT_05661a18 = DAT_05661a08;
          __cxa_guard_release(&DAT_05661a28);
        }
        if (((DAT_05661a40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05661a40), iVar1 != 0)) {
          DAT_05661a30 = 0x100000002;
          DAT_05661a38 = &DAT_05661a08;
          __cxa_guard_release(&DAT_05661a40);
        }
        if (((DAT_05661a68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05661a68), iVar1 != 0)) {
          DAT_05661a48 = PTR_DAT_04bb2020 + 0x10;
          DAT_05661a50 = "@T_Name_00";
          DAT_05661a60 = "@T_Price_00";
          DAT_05661a58 = DAT_05661a48;
          __cxa_guard_release(&DAT_05661a68);
        }
        if (((DAT_05661a80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05661a80), iVar1 != 0)) {
          DAT_05661a70 = PTR_DAT_04bb2020 + 0x10;
          DAT_05661a78 = "P_Icon_00";
          __cxa_guard_release(&DAT_05661a80);
        }
        local_58 = *param_2;
        local_38 = 1;
        local_48 = &DAT_04ab36e8;
        puStack_40 = &DAT_05661a30;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_50 = &DAT_04ab36f8;
        lVar4 = puVar7[2];
        lVar2 = lVar4 + 0x2c8;
        goto LAB_02c85dc0;
      }
    }
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
    if (pcVar5[4] != 'o') {
      return;
    }
    if (pcVar5[5] != 'l') {
      return;
    }
    if (pcVar5[6] != 'o') {
      return;
    }
    if (pcVar5[7] != 'r') {
      return;
    }
    if (pcVar5[8] != 'I') {
      return;
    }
    if (pcVar5[9] != 'n') {
      return;
    }
    if (pcVar5[10] != 'f') {
      return;
    }
    if (pcVar5[0xb] != 'o') {
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
    if (((DAT_05661a98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05661a98), iVar1 != 0)) {
      DAT_05661a88 = PTR_DAT_04bb2020 + 0x10;
      DAT_05661a90 = "@T_Guide_00";
      __cxa_guard_release(&DAT_05661a98);
    }
    local_48 = &DAT_04ab3708;
  }
  puStack_40 = (undefined8 *)0x0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_38 = 0;
  local_50 = (undefined *)0x0;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
LAB_02c85dc0:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

