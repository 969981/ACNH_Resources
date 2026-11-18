
void FUN_03220784(undefined8 param_1,undefined8 *param_2)

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
LAB_032207e4:
    if (((DAT_05721cb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05721cb0), iVar1 != 0)) {
      DAT_05721c30 = PTR_DAT_04bb2020 + 0x10;
      DAT_05721c38 = "CaptionIn";
      DAT_05721c48 = &DAT_0407ebb1;
      DAT_05721c68 = &DAT_0407ebb1;
      DAT_05721c88 = &DAT_0407ebb1;
      DAT_05721c58 = "Share";
      DAT_05721c78 = "CategoryNum";
      DAT_05721c98 = &DAT_040fe5ab;
      DAT_05721ca8 = &DAT_0407ebb1;
      DAT_05721c40 = DAT_05721c30;
      DAT_05721c50 = DAT_05721c30;
      DAT_05721c60 = DAT_05721c30;
      DAT_05721c70 = DAT_05721c30;
      DAT_05721c80 = DAT_05721c30;
      DAT_05721c90 = DAT_05721c30;
      DAT_05721ca0 = DAT_05721c30;
      __cxa_guard_release(&DAT_05721cb0);
    }
    if (((DAT_05721cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05721cc8), iVar1 != 0)) {
      DAT_05721cb8 = 0x400000002;
      DAT_05721cc0 = &DAT_05721c30;
      __cxa_guard_release(&DAT_05721cc8);
    }
    if (((DAT_05721d50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05721d50), iVar1 != 0)) {
      DAT_05721cd0 = PTR_DAT_04bb2020 + 0x10;
      DAT_05721cd8 = "@T_L_00";
      DAT_05721ce8 = "@T_R_00";
      DAT_05721cf8 = "@T_TextLast_00";
      DAT_05721d08 = "@T_Text_00";
      DAT_05721d18 = "@T_Name_00";
      DAT_05721d28 = "@T_Delivery_00";
      DAT_05721d38 = "@T_Mail_00";
      DAT_05721d48 = "@T_RightNow_00";
      DAT_05721ce0 = DAT_05721cd0;
      DAT_05721cf0 = DAT_05721cd0;
      DAT_05721d00 = DAT_05721cd0;
      DAT_05721d10 = DAT_05721cd0;
      DAT_05721d20 = DAT_05721cd0;
      DAT_05721d30 = DAT_05721cd0;
      DAT_05721d40 = DAT_05721cd0;
      __cxa_guard_release(&DAT_05721d50);
    }
    if (((DAT_05721d68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05721d68), iVar1 != 0)) {
      DAT_05721d58 = PTR_DAT_04bb2020 + 0x10;
      DAT_05721d60 = "N_3D_00";
      __cxa_guard_release(&DAT_05721d68);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04b11278;
    puStack_40 = &DAT_05721cb8;
    local_38 = 0;
    local_50 = &DAT_04b11288;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'P')) &&
          ((pcVar5[4] == 'r' && (pcVar5[5] == 'i')))) &&
         ((pcVar5[6] == 'c' && ((pcVar5[7] == 'e' && (pcVar5[8] == '_')))))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4ff0);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) != 0)) {
          if (((DAT_05721d90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05721d90), iVar1 != 0))
          {
            DAT_05721d70 = PTR_DAT_04bb2020 + 0x10;
            DAT_05721d78 = "State";
            DAT_05721d88 = &DAT_0407ebb1;
            DAT_05721d80 = DAT_05721d70;
            __cxa_guard_release(&DAT_05721d90);
          }
          if (((DAT_05721da8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05721da8), iVar1 != 0))
          {
            DAT_05721d98 = 0x100000002;
            DAT_05721da0 = &DAT_05721d70;
            __cxa_guard_release(&DAT_05721da8);
          }
          if (((DAT_05721dd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05721dd0), iVar1 != 0))
          {
            DAT_05721db0 = PTR_DAT_04bb2020 + 0x10;
            DAT_05721db8 = "@T_NotForSale_00";
            DAT_05721dc8 = "@T_Price_00";
            DAT_05721dc0 = DAT_05721db0;
            __cxa_guard_release(&DAT_05721dd0);
          }
          local_38 = 0;
          local_50 = (undefined *)0x0;
          local_48 = &DAT_04b11298;
          puStack_40 = &DAT_05721d98;
          local_58 = *param_2;
          lVar4 = puVar7[2];
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          lVar2 = lVar4 + 0x208;
          goto LAB_0322086c;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_032207e4;
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
    if (((DAT_05721df8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05721df8), iVar1 != 0)) {
      DAT_05721dd8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05721de0 = "State";
      DAT_05721df0 = &DAT_0407ebb1;
      DAT_05721de8 = DAT_05721dd8;
      __cxa_guard_release(&DAT_05721df8);
    }
    if (((DAT_05721e10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05721e10), iVar1 != 0)) {
      DAT_05721e00 = 0x100000002;
      DAT_05721e08 = &DAT_05721dd8;
      __cxa_guard_release(&DAT_05721e10);
    }
    if (((DAT_05721e48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05721e48), iVar1 != 0)) {
      DAT_05721e18 = PTR_DAT_04bb2020 + 0x10;
      DAT_05721e20 = "@T_OnlyMember_00";
      DAT_05721e40 = "@T_Name_00";
      DAT_05721e30 = "@T_Price_00";
      DAT_05721e28 = DAT_05721e18;
      DAT_05721e38 = DAT_05721e18;
      __cxa_guard_release(&DAT_05721e48);
    }
    if (((DAT_05721e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05721e60), iVar1 != 0)) {
      DAT_05721e50 = PTR_DAT_04bb2020 + 0x10;
      DAT_05721e58 = "P_Icon_00";
      __cxa_guard_release(&DAT_05721e60);
    }
    local_58 = *param_2;
    local_38 = 1;
    local_48 = &DAT_04b112a8;
    puStack_40 = &DAT_05721e00;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04b112b8;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x2c8;
  }
LAB_0322086c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

