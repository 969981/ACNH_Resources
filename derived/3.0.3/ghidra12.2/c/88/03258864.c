
void FUN_03258864(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_032588c0:
    if (((DAT_05725680 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725680), iVar1 != 0)) {
      DAT_05725660 = PTR_DAT_04bb2020 + 0x10;
      DAT_05725668 = "CorporationIn";
      DAT_05725678 = &DAT_0407ebb1;
      DAT_05725670 = DAT_05725660;
      __cxa_guard_release(&DAT_05725680);
    }
    if (((DAT_05725698 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725698), iVar1 != 0)) {
      DAT_05725688 = 0x100000002;
      DAT_05725690 = &DAT_05725660;
      __cxa_guard_release(&DAT_05725698);
    }
    if (((DAT_057256c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057256c0), iVar1 != 0)) {
      DAT_057256a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057256a8 = "@T_Staff_00";
      DAT_057256b8 = "@T_Corporation_00";
      DAT_057256b0 = DAT_057256a0;
      __cxa_guard_release(&DAT_057256c0);
    }
    if (((DAT_05725708 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725708), iVar1 != 0)) {
      DAT_057256c8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057256d0 = "N_SpaceS_00";
      DAT_05725700 = "N_Staff_00";
      DAT_057256e0 = "N_SpaceM_00";
      DAT_057256f0 = "N_SpaceL_00";
      DAT_057256d8 = DAT_057256c8;
      DAT_057256e8 = DAT_057256c8;
      DAT_057256f8 = DAT_057256c8;
      __cxa_guard_release(&DAT_05725708);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_48 = *param_2;
    local_38 = &DAT_04b15328;
    puStack_30 = &DAT_05725688;
    puStack_40 = &DAT_04b15338;
    local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_03258948;
  }
  if (*pcVar5 == '/') {
    if ((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'R')) ||
         ((pcVar5[4] != 'o' || (pcVar5[5] != 'l')))) || (pcVar5[6] != 'e')) || (pcVar5[7] != '_'))
    goto LAB_03258a38;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0)) goto LAB_03258a38;
    if (((DAT_05725720 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725720), iVar1 != 0)) {
      DAT_05725710 = PTR_DAT_04bb2020 + 0x10;
      DAT_05725718 = "@T_Text_00";
      __cxa_guard_release(&DAT_05725720);
    }
    if (((DAT_05725738 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725738), iVar1 != 0)) {
      DAT_05725728 = PTR_DAT_04bb2020 + 0x10;
      DAT_05725730 = "T_Text_00";
      __cxa_guard_release(&DAT_05725738);
    }
    local_38 = &DAT_04b15348;
    puStack_40 = &DAT_04b15358;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_032588c0;
LAB_03258a38:
    pcVar5 = (char *)param_2[5];
    if (((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'N'))))
         && ((((pcVar5[4] == 'a' && (pcVar5[5] == 'm')) && (pcVar5[6] == 'e')) &&
             ((pcVar5[7] == 'D' && (pcVar5[8] == 'o')))))) &&
        ((pcVar5[9] == 'u' &&
         (((pcVar5[10] == 'b' && (pcVar5[0xb] == 'l')) && (pcVar5[0xc] == 'e')))))) &&
       (pcVar5[0xd] == '_')) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) != 0)) {
        if (((DAT_05725760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725760), iVar1 != 0)) {
          DAT_05725740 = PTR_DAT_04bb2020 + 0x10;
          DAT_05725748 = "@T_Text_00";
          DAT_05725758 = "@T_Text_01";
          DAT_05725750 = DAT_05725740;
          __cxa_guard_release(&DAT_05725760);
        }
        if (((DAT_05725788 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725788), iVar1 != 0)) {
          DAT_05725768 = PTR_DAT_04bb2020 + 0x10;
          DAT_05725770 = "T_Text_00";
          DAT_05725780 = "T_Text_01";
          DAT_05725778 = DAT_05725768;
          __cxa_guard_release(&DAT_05725788);
        }
        local_38 = &DAT_04b15368;
        puStack_40 = &DAT_04b15378;
        goto LAB_03258a14;
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
    if (pcVar5[3] != 'N') {
      return;
    }
    if (pcVar5[4] != 'a') {
      return;
    }
    if (pcVar5[5] != 'm') {
      return;
    }
    if (pcVar5[6] != 'e') {
      return;
    }
    if (pcVar5[7] != 'S') {
      return;
    }
    if (pcVar5[8] != 'i') {
      return;
    }
    if (pcVar5[9] != 'n') {
      return;
    }
    if (pcVar5[10] != 'g') {
      return;
    }
    if (pcVar5[0xb] != 'l') {
      return;
    }
    if (pcVar5[0xc] != 'e') {
      return;
    }
    if (pcVar5[0xd] != '_') {
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
    if (((DAT_057257a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057257a0), iVar1 != 0)) {
      DAT_05725790 = PTR_DAT_04bb2020 + 0x10;
      DAT_05725798 = "@T_Text_00";
      __cxa_guard_release(&DAT_057257a0);
    }
    if (((DAT_057257b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057257b8), iVar1 != 0)) {
      DAT_057257a8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057257b0 = "T_Text_00";
      __cxa_guard_release(&DAT_057257b8);
    }
    local_38 = &DAT_04b15388;
    puStack_40 = &DAT_04b15398;
  }
LAB_03258a14:
  local_48 = *param_2;
  puStack_30 = (undefined8 *)0x0;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
LAB_03258948:
  local_28 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

