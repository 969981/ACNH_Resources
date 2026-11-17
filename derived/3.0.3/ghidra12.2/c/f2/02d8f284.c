
void FUN_02d8f284(undefined8 param_1,undefined8 *param_2)

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
  undefined8 local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_02d8f2e4:
    if (((DAT_05686be8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686be8), iVar1 != 0)) {
      DAT_05686b28 = PTR_DAT_04bb2020 + 0x10;
      DAT_05686b30 = "Share";
      DAT_05686b40 = &DAT_0407ebb1;
      DAT_05686b60 = &DAT_0407ebb1;
      DAT_05686b80 = &DAT_0407ebb1;
      DAT_05686b50 = "CategoryOnOff";
      DAT_05686b70 = "CategoryNum";
      DAT_05686b90 = "CategorySOnOff";
      DAT_05686bb0 = "CategoryNumS";
      DAT_05686ba0 = &DAT_0407ebb1;
      DAT_05686bc0 = &DAT_0407ebb1;
      DAT_05686bd0 = "ChangeScrollType";
      DAT_05686be0 = &DAT_0407ebb1;
      DAT_05686b38 = DAT_05686b28;
      DAT_05686b48 = DAT_05686b28;
      DAT_05686b58 = DAT_05686b28;
      DAT_05686b68 = DAT_05686b28;
      DAT_05686b78 = DAT_05686b28;
      DAT_05686b88 = DAT_05686b28;
      DAT_05686b98 = DAT_05686b28;
      DAT_05686ba8 = DAT_05686b28;
      DAT_05686bb8 = DAT_05686b28;
      DAT_05686bc8 = DAT_05686b28;
      DAT_05686bd8 = DAT_05686b28;
      __cxa_guard_release(&DAT_05686be8);
    }
    if (((DAT_05686c00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686c00), iVar1 != 0)) {
      DAT_05686bf0 = 0x600000002;
      DAT_05686bf8 = &DAT_05686b28;
      __cxa_guard_release(&DAT_05686c00);
    }
    if (((DAT_05686c38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686c38), iVar1 != 0)) {
      DAT_05686c08 = PTR_DAT_04bb2020 + 0x10;
      DAT_05686c10 = "@T_L_00";
      DAT_05686c30 = "@T_Icon_00";
      DAT_05686c20 = "@T_R_00";
      DAT_05686c18 = DAT_05686c08;
      DAT_05686c28 = DAT_05686c08;
      __cxa_guard_release(&DAT_05686c38);
    }
    if (((DAT_05686c60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686c60), iVar1 != 0)) {
      DAT_05686c40 = PTR_DAT_04bb2020 + 0x10;
      DAT_05686c48 = "N_Pos_00";
      DAT_05686c58 = "P_Icon_00";
      DAT_05686c50 = DAT_05686c40;
      __cxa_guard_release(&DAT_05686c60);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04ac3458;
    puStack_40 = &DAT_05686bf0;
    puStack_50 = &DAT_04ac3468;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_02d8f370;
  }
  if (*pcVar5 == '/') {
    if (((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'I')) ||
          ((pcVar5[4] != 't' || (pcVar5[5] != 'e')))) || (pcVar5[6] != 'm')) ||
        (((pcVar5[7] != 'B' || (pcVar5[8] != 'a')) ||
         ((pcVar5[9] != 'l' ||
          (((pcVar5[10] != 'l' || (pcVar5[0xb] != 'o')) || (pcVar5[0xc] != 'o')))))))) ||
       ((pcVar5[0xd] != 'n' || (pcVar5[0xe] != '_')))) goto LAB_02d8f4bc;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4fe0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fd8), (uVar3 & 1) == 0)) goto LAB_02d8f4bc;
    if (((DAT_05686cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686cc8), iVar1 != 0)) {
      DAT_05686c68 = PTR_DAT_04bb2020 + 0x10;
      DAT_05686c70 = "Guide";
      DAT_05686c80 = &DAT_0407ebb1;
      DAT_05686ca0 = &DAT_0407ebb1;
      DAT_05686cc0 = &DAT_0407ebb1;
      DAT_05686c90 = "NumRotate";
      DAT_05686cb0 = &DAT_04082ff4;
      DAT_05686c78 = DAT_05686c68;
      DAT_05686c88 = DAT_05686c68;
      DAT_05686c98 = DAT_05686c68;
      DAT_05686ca8 = DAT_05686c68;
      DAT_05686cb8 = DAT_05686c68;
      __cxa_guard_release(&DAT_05686cc8);
    }
    puVar8 = &DAT_05686cd0;
    if (((DAT_05686ce0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686ce0), iVar1 != 0)) {
      DAT_05686cd0 = 0x300000002;
      DAT_05686cd8 = &DAT_05686c68;
      __cxa_guard_release(&DAT_05686ce0);
    }
    if (((DAT_05686d08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686d08), iVar1 != 0)) {
      DAT_05686ce8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05686cf0 = "@T_Guide_00";
      DAT_05686d00 = "@T_Icon_00";
      DAT_05686cf8 = DAT_05686ce8;
      __cxa_guard_release(&DAT_05686d08);
    }
    if (((DAT_05686d20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686d20), iVar1 != 0)) {
      DAT_05686d10 = PTR_DAT_04bb2020 + 0x10;
      DAT_05686d18 = "P_TextSize_00";
      __cxa_guard_release(&DAT_05686d20);
    }
    local_48 = &DAT_04ac3478;
    puStack_50 = &DAT_04ac3488;
LAB_02d8f5c0:
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
    puStack_40 = puVar8;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_02d8f2e4;
LAB_02d8f4bc:
    pcVar5 = (char *)param_2[5];
    if (((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'G')))) &&
       ((((pcVar5[4] == 'e' && (pcVar5[5] == 'n')) && (pcVar5[6] == 'r')) &&
        ((pcVar5[7] == 'e' && (pcVar5[8] == '_')))))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) != 0)) {
        if (((DAT_05686d48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686d48), iVar1 != 0)) {
          DAT_05686d28 = PTR_DAT_04bb2020 + 0x10;
          DAT_05686d30 = "Select";
          DAT_05686d40 = &DAT_0407ebb1;
          DAT_05686d38 = DAT_05686d28;
          __cxa_guard_release(&DAT_05686d48);
        }
        puVar8 = &DAT_05686d50;
        if (((DAT_05686d60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686d60), iVar1 != 0)) {
          DAT_05686d50 = 0x100000002;
          DAT_05686d58 = &DAT_05686d28;
          __cxa_guard_release(&DAT_05686d60);
        }
        if (((DAT_05686d78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686d78), iVar1 != 0)) {
          DAT_05686d68 = PTR_DAT_04bb2020 + 0x10;
          DAT_05686d70 = "@T_Key_00";
          __cxa_guard_release(&DAT_05686d78);
        }
        if (((DAT_05686d90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686d90), iVar1 != 0)) {
          DAT_05686d80 = PTR_DAT_04bb2020 + 0x10;
          DAT_05686d88 = "P_Icon_00";
          __cxa_guard_release(&DAT_05686d90);
        }
        local_48 = &DAT_04ac3498;
        puStack_50 = &DAT_04ac34a8;
        goto LAB_02d8f5c0;
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
    if (((DAT_05686eb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686eb8), iVar1 != 0)) {
      DAT_05686d98 = PTR_DAT_04bb2020 + 0x10;
      DAT_05686da0 = "BtnListRandom";
      DAT_05686db0 = &DAT_0407ebb1;
      DAT_05686dd0 = &DAT_0407ebb1;
      DAT_05686df0 = &DAT_0407ebb1;
      DAT_05686dc0 = "Remake";
      DAT_05686de0 = "RemakePos";
      DAT_05686e00 = "IconOff";
      DAT_05686e20 = "IconType";
      DAT_05686e40 = "EditType";
      DAT_05686e60 = &DAT_0410025b;
      DAT_05686e80 = "WallType";
      DAT_05686e10 = &DAT_0407ebb1;
      DAT_05686e30 = &DAT_0407ebb1;
      DAT_05686e50 = &DAT_0407ebb1;
      DAT_05686e70 = &DAT_0407ebb1;
      DAT_05686e90 = &DAT_0407ebb1;
      DAT_05686ea0 = "BtnType";
      DAT_05686eb0 = &DAT_0407ebb1;
      DAT_05686da8 = DAT_05686d98;
      DAT_05686db8 = DAT_05686d98;
      DAT_05686dc8 = DAT_05686d98;
      DAT_05686dd8 = DAT_05686d98;
      DAT_05686de8 = DAT_05686d98;
      DAT_05686df8 = DAT_05686d98;
      DAT_05686e08 = DAT_05686d98;
      DAT_05686e18 = DAT_05686d98;
      DAT_05686e28 = DAT_05686d98;
      DAT_05686e38 = DAT_05686d98;
      DAT_05686e48 = DAT_05686d98;
      DAT_05686e58 = DAT_05686d98;
      DAT_05686e68 = DAT_05686d98;
      DAT_05686e78 = DAT_05686d98;
      DAT_05686e88 = DAT_05686d98;
      DAT_05686e98 = DAT_05686d98;
      DAT_05686ea8 = DAT_05686d98;
      __cxa_guard_release(&DAT_05686eb8);
    }
    if (((DAT_05686ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686ed0), iVar1 != 0)) {
      DAT_05686ec0 = 0x900000002;
      DAT_05686ec8 = &DAT_05686d98;
      __cxa_guard_release(&DAT_05686ed0);
    }
    if (((DAT_05686f08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686f08), iVar1 != 0)) {
      DAT_05686ed8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05686ee0 = "@T_SizeNumL_00";
      DAT_05686f00 = "@T_SizeMultiply_00";
      DAT_05686ef0 = "@T_SizeNumR_00";
      DAT_05686ee8 = DAT_05686ed8;
      DAT_05686ef8 = DAT_05686ed8;
      __cxa_guard_release(&DAT_05686f08);
    }
    if (((DAT_05686f20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05686f20), iVar1 != 0)) {
      DAT_05686f10 = PTR_DAT_04bb2020 + 0x10;
      DAT_05686f18 = "P_Icon_00";
      __cxa_guard_release(&DAT_05686f20);
    }
    local_58 = *param_2;
    local_48 = &DAT_04ac34b8;
    puStack_40 = &DAT_05686ec0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_50 = &DAT_04ac34c8;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x2c8;
  }
LAB_02d8f370:
  local_38 = 1;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

