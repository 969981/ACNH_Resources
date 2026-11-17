
void FUN_03047754(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_030477b0:
    if (((DAT_056dc880 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dc880), iVar1 != 0)) {
      DAT_056dc840 = PTR_DAT_04bb2020 + 0x10;
      DAT_056dc848 = "State";
      DAT_056dc858 = &DAT_0407ebb1;
      DAT_056dc878 = &DAT_0407ebb1;
      DAT_056dc868 = "BtnType";
      DAT_056dc850 = DAT_056dc840;
      DAT_056dc860 = DAT_056dc840;
      DAT_056dc870 = DAT_056dc840;
      __cxa_guard_release(&DAT_056dc880);
    }
    if (((DAT_056dc898 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dc898), iVar1 != 0)) {
      DAT_056dc888 = 0x200000002;
      DAT_056dc890 = &DAT_056dc840;
      __cxa_guard_release(&DAT_056dc898);
    }
    if (((DAT_056dc900 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dc900), iVar1 != 0)) {
      DAT_056dc8a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056dc8a8 = "@T_Header_00";
      DAT_056dc8c8 = "@T_MyDesignIDTitle_00";
      DAT_056dc8b8 = "@T_Information_00";
      DAT_056dc8d8 = "@T_MyDesignIDColon_00";
      DAT_056dc8e8 = "@T_MyDesignIDNum_00";
      DAT_056dc8f8 = "@T_TextLast_00";
      DAT_056dc8b0 = DAT_056dc8a0;
      DAT_056dc8c0 = DAT_056dc8a0;
      DAT_056dc8d0 = DAT_056dc8a0;
      DAT_056dc8e0 = DAT_056dc8a0;
      DAT_056dc8f0 = DAT_056dc8a0;
      __cxa_guard_release(&DAT_056dc900);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = &DAT_04af61d8;
    puStack_30 = &DAT_056dc888;
    uStack_48 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
    goto LAB_03047820;
  }
  if (*pcVar5 == '/') {
    if ((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'M')) ||
         ((pcVar5[4] != 'e' || (pcVar5[5] != 'n')))) ||
        ((pcVar5[6] != 'u' || ((pcVar5[7] != 'B' || (pcVar5[8] != 't')))))) ||
       ((pcVar5[9] != 'n' || (pcVar5[10] != '_')))) goto LAB_03047920;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) == 0)) goto LAB_03047920;
    if (((DAT_056dc918 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dc918), iVar1 != 0)) {
      DAT_056dc908 = PTR_DAT_04bb2020 + 0x10;
      DAT_056dc910 = "@T_Text_00";
      __cxa_guard_release(&DAT_056dc918);
    }
    local_38 = &DAT_04af61e8;
    uStack_48 = *param_2;
    local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = puVar7[2];
  }
  else {
    if (*pcVar5 == '\0') goto LAB_030477b0;
LAB_03047920:
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
    if (pcVar5[3] != 'M') {
      return;
    }
    if (pcVar5[4] != 'e') {
      return;
    }
    if (pcVar5[5] != 'n') {
      return;
    }
    if (pcVar5[6] != 'u') {
      return;
    }
    if (pcVar5[7] != 'B') {
      return;
    }
    if (pcVar5[8] != 't') {
      return;
    }
    if (pcVar5[9] != 'n') {
      return;
    }
    if (pcVar5[10] != 'S') {
      return;
    }
    if (pcVar5[0xb] != 'u') {
      return;
    }
    if (pcVar5[0xc] != 'b') {
      return;
    }
    if (pcVar5[0xd] != '_') {
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
    if (((DAT_056dc930 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dc930), iVar1 != 0)) {
      DAT_056dc920 = PTR_DAT_04bb2020 + 0x10;
      DAT_056dc928 = "@T_Text_00";
      __cxa_guard_release(&DAT_056dc930);
    }
    local_38 = &DAT_04af61f8;
    uStack_48 = *param_2;
    local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = puVar7[2];
  }
  puStack_30 = (undefined8 *)0x0;
  lVar2 = lVar4 + 0x2c8;
LAB_03047820:
  local_28 = 0;
  local_40 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

