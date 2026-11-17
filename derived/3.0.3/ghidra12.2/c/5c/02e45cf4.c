
void FUN_02e45cf4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_02e45d54:
    if (((DAT_05697ab8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697ab8), iVar1 != 0)) {
      DAT_056979f8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05697a00 = "Empty";
      DAT_05697a10 = &DAT_0407ebb1;
      DAT_05697a30 = &DAT_0407ebb1;
      DAT_05697a50 = &DAT_0407ebb1;
      DAT_05697a20 = "Share";
      DAT_05697a40 = "State";
      DAT_05697a60 = "BtnListIn";
      DAT_05697a80 = "BtnListOut";
      DAT_05697a70 = &DAT_0407ebb1;
      DAT_05697a90 = &DAT_0407ebb1;
      DAT_05697aa0 = "FirstTimeOut";
      DAT_05697ab0 = &DAT_0407ebb1;
      DAT_05697a08 = DAT_056979f8;
      DAT_05697a18 = DAT_056979f8;
      DAT_05697a28 = DAT_056979f8;
      DAT_05697a38 = DAT_056979f8;
      DAT_05697a48 = DAT_056979f8;
      DAT_05697a58 = DAT_056979f8;
      DAT_05697a68 = DAT_056979f8;
      DAT_05697a78 = DAT_056979f8;
      DAT_05697a88 = DAT_056979f8;
      DAT_05697a98 = DAT_056979f8;
      DAT_05697aa8 = DAT_056979f8;
      __cxa_guard_release(&DAT_05697ab8);
    }
    if (((DAT_05697ad0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697ad0), iVar1 != 0)) {
      DAT_05697ac0 = 0x600000002;
      DAT_05697ac8 = &DAT_056979f8;
      __cxa_guard_release(&DAT_05697ad0);
    }
    if (((DAT_05697b28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697b28), iVar1 != 0)) {
      DAT_05697ad8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05697ae0 = "@T_L_00";
      DAT_05697af0 = "@T_R_00";
      DAT_05697b00 = "@T_Empty_00";
      DAT_05697b10 = "@T_Text_00";
      DAT_05697b20 = "@T_Icon_00";
      DAT_05697ae8 = DAT_05697ad8;
      DAT_05697af8 = DAT_05697ad8;
      DAT_05697b08 = DAT_05697ad8;
      DAT_05697b18 = DAT_05697ad8;
      __cxa_guard_release(&DAT_05697b28);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_48 = &DAT_04ad5250;
    local_40 = &DAT_05697ac0;
    uStack_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
    goto LAB_02e45dc4;
  }
  if (*pcVar5 == '/') {
    if ((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')) &&
         ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) &&
        ((pcVar5[6] == 'L' && ((pcVar5[7] == 'i' && (pcVar5[8] == 's')))))) &&
       ((pcVar5[9] == 't' &&
        ((((((pcVar5[10] == '_' && (pcVar5[0xb] == '0')) && (pcVar5[0xc] == '0')) &&
           (((pcVar5[0xd] == '/' && (pcVar5[0xe] == 'L')) &&
            ((pcVar5[0xf] == '_' && ((pcVar5[0x10] == 'B' && (pcVar5[0x11] == 't')))))))) &&
          (pcVar5[0x12] == 'n')) && (pcVar5[0x13] == '_')))))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
        if (((DAT_05697b90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697b90), iVar1 != 0)) {
          DAT_05697b30 = PTR_DAT_04bb2020 + 0x10;
          DAT_05697b38 = "State";
          DAT_05697b48 = &DAT_0407ebb1;
          DAT_05697b68 = &DAT_0407ebb1;
          DAT_05697b88 = &DAT_0407ebb1;
          DAT_05697b58 = "Connect";
          DAT_05697b78 = &DAT_040fe5ab;
          DAT_05697b40 = DAT_05697b30;
          DAT_05697b50 = DAT_05697b30;
          DAT_05697b60 = DAT_05697b30;
          DAT_05697b70 = DAT_05697b30;
          DAT_05697b80 = DAT_05697b30;
          __cxa_guard_release(&DAT_05697b90);
        }
        if (((DAT_05697ba8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697ba8), iVar1 != 0)) {
          DAT_05697b98 = 0x300000002;
          DAT_05697ba0 = &DAT_05697b30;
          __cxa_guard_release(&DAT_05697ba8);
        }
        if (((DAT_05697c00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697c00), iVar1 != 0)) {
          DAT_05697bb0 = PTR_DAT_04bb2020 + 0x10;
          DAT_05697bb8 = "@T_Village_00";
          DAT_05697bc8 = "@T_Name_00";
          DAT_05697bd8 = "@T_Connect_00";
          DAT_05697be8 = "@T_Admit_00";
          DAT_05697bf8 = "@T_Request_00";
          DAT_05697bc0 = DAT_05697bb0;
          DAT_05697bd0 = DAT_05697bb0;
          DAT_05697be0 = DAT_05697bb0;
          DAT_05697bf0 = DAT_05697bb0;
          __cxa_guard_release(&DAT_05697c00);
        }
        local_48 = &DAT_04ad5260;
        local_40 = &DAT_05697b98;
        uStack_58 = *param_2;
        lVar4 = puVar7[2];
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        lVar2 = lVar4 + 0x2c8;
        goto LAB_02e45dc4;
      }
    }
  }
  else if (*pcVar5 == '\0') goto LAB_02e45d54;
  pcVar5 = (char *)param_2[5];
  if ((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'C')))) &&
      (((pcVar5[4] == 'a' && (pcVar5[5] == 't')) && (pcVar5[6] == 'e')))) &&
     (((pcVar5[7] == 'g' && (pcVar5[8] == 'o')) &&
      ((pcVar5[9] == 'r' && ((pcVar5[10] == 'y' && (pcVar5[0xb] == '_')))))))) {
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc5228 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5228), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc5220 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc5228);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5220), (uVar3 & 1) == 0)) goto LAB_02e4604c;
    if (((DAT_05697c18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697c18), iVar1 != 0)) {
      DAT_05697c08 = PTR_DAT_04bb2020 + 0x10;
      DAT_05697c10 = "@T_Category_00";
      __cxa_guard_release(&DAT_05697c18);
    }
    local_48 = &DAT_04ad5270;
    uStack_58 = *param_2;
    local_40 = (undefined8 *)0x0;
  }
  else {
LAB_02e4604c:
    pcVar5 = (char *)param_2[5];
    if ((((*pcVar5 == '/') &&
         (((((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'C')) &&
           ((pcVar5[4] == 'o' && (pcVar5[5] == 'm')))) && (pcVar5[6] == 'S')))) &&
        (((pcVar5[7] == 'w' && (pcVar5[8] == 'i')) && (pcVar5[9] == 't')))) &&
       (((pcVar5[10] == 'c' && (pcVar5[0xb] == 'h')) && (pcVar5[0xc] == '_')))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if ((puVar7 == (undefined8 *)0x0) ||
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0))
      goto LAB_02e46168;
      if (((DAT_05697c60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697c60), iVar1 != 0)) {
        DAT_05697c20 = PTR_DAT_04bb2020 + 0x10;
        DAT_05697c28 = "Check";
        DAT_05697c38 = &DAT_0407ebb1;
        DAT_05697c58 = &DAT_0407ebb1;
        DAT_05697c48 = "Decide";
        DAT_05697c30 = DAT_05697c20;
        DAT_05697c40 = DAT_05697c20;
        DAT_05697c50 = DAT_05697c20;
        __cxa_guard_release(&DAT_05697c60);
      }
      puVar8 = &DAT_05697c68;
      if (((DAT_05697c78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697c78), iVar1 != 0)) {
        DAT_05697c68 = 0x200000002;
        DAT_05697c70 = &DAT_05697c20;
        __cxa_guard_release(&DAT_05697c78);
      }
      if (((DAT_05697cb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697cb0), iVar1 != 0)) {
        DAT_05697c80 = PTR_DAT_04bb2020 + 0x10;
        DAT_05697c88 = "@T_ON_00";
        DAT_05697ca8 = "@T_OFF_00";
        DAT_05697c98 = "@T_Icon_00";
        DAT_05697c90 = DAT_05697c80;
        DAT_05697ca0 = DAT_05697c80;
        __cxa_guard_release(&DAT_05697cb0);
      }
      local_48 = &DAT_04ad5280;
    }
    else {
LAB_02e46168:
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
      if (pcVar5[3] != 'R') {
        return;
      }
      if (pcVar5[4] != 'e') {
        return;
      }
      if (pcVar5[5] != 'l') {
        return;
      }
      if (pcVar5[6] != 'o') {
        return;
      }
      if (pcVar5[7] != 'a') {
        return;
      }
      if (pcVar5[8] != 'd') {
        return;
      }
      if (pcVar5[9] != '_') {
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
      if (((DAT_05697d18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697d18), iVar1 != 0)) {
        DAT_05697cb8 = PTR_DAT_04bb2020 + 0x10;
        DAT_05697cc0 = "Decide";
        DAT_05697cd0 = &DAT_0407ebb1;
        DAT_05697cf0 = &DAT_0407ebb1;
        DAT_05697d10 = &DAT_0407ebb1;
        DAT_05697ce0 = "State";
        DAT_05697d00 = "Share";
        DAT_05697cc8 = DAT_05697cb8;
        DAT_05697cd8 = DAT_05697cb8;
        DAT_05697ce8 = DAT_05697cb8;
        DAT_05697cf8 = DAT_05697cb8;
        DAT_05697d08 = DAT_05697cb8;
        __cxa_guard_release(&DAT_05697d18);
      }
      puVar8 = &DAT_05697d20;
      if (((DAT_05697d30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697d30), iVar1 != 0)) {
        DAT_05697d20 = 0x300000002;
        DAT_05697d28 = &DAT_05697cb8;
        __cxa_guard_release(&DAT_05697d30);
      }
      if (((DAT_05697d48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05697d48), iVar1 != 0)) {
        DAT_05697d38 = PTR_DAT_04bb2020 + 0x10;
        DAT_05697d40 = "@T_Icon_00";
        __cxa_guard_release(&DAT_05697d48);
      }
      local_48 = &DAT_04ad5290;
    }
    uStack_58 = *param_2;
    local_40 = puVar8;
  }
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
LAB_02e45dc4:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

