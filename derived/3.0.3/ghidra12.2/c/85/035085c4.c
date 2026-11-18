
void FUN_035085c4(undefined8 param_1,undefined8 *param_2)

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
LAB_03508624:
    if (((DAT_057665d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057665d8), iVar1 != 0)) {
      DAT_05766558 = PTR_DAT_04bb2020 + 0x10;
      DAT_05766560 = "CategoryNum";
      DAT_05766570 = &DAT_0407ebb1;
      DAT_05766590 = &DAT_0407ebb1;
      DAT_057665b0 = &DAT_0407ebb1;
      DAT_05766580 = "Share";
      DAT_057665a0 = "Empty";
      DAT_057665c0 = &DAT_040fe5ab;
      DAT_057665d0 = &DAT_0407ebb1;
      DAT_05766568 = DAT_05766558;
      DAT_05766578 = DAT_05766558;
      DAT_05766588 = DAT_05766558;
      DAT_05766598 = DAT_05766558;
      DAT_057665a8 = DAT_05766558;
      DAT_057665b8 = DAT_05766558;
      DAT_057665c8 = DAT_05766558;
      __cxa_guard_release(&DAT_057665d8);
    }
    if (((DAT_057665f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057665f0), iVar1 != 0)) {
      DAT_057665e0 = 0x400000002;
      DAT_057665e8 = &DAT_05766558;
      __cxa_guard_release(&DAT_057665f0);
    }
    if (((DAT_05766628 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05766628), iVar1 != 0)) {
      DAT_057665f8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05766600 = "@T_L_00";
      DAT_05766620 = "@T_Empty_00";
      DAT_05766610 = "@T_R_00";
      DAT_05766608 = DAT_057665f8;
      DAT_05766618 = DAT_057665f8;
      __cxa_guard_release(&DAT_05766628);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04b33c68;
    local_40 = &DAT_057665e0;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
    goto LAB_03508694;
  }
  if (*pcVar5 == '/') {
    if (((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'I')) &&
        ((pcVar5[4] == 't' && (pcVar5[5] == 'e')))) &&
       ((((pcVar5[6] == 'm' && ((pcVar5[7] == 'B' && (pcVar5[8] == 'a')))) && (pcVar5[9] == 'l')) &&
        ((((pcVar5[10] == 'l' && (pcVar5[0xb] == 'o')) && (pcVar5[0xc] == 'o')) &&
         ((pcVar5[0xd] == 'n' && (pcVar5[0xe] == '_')))))))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4fe0);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fd8), (uVar3 & 1) != 0)) {
        if (((DAT_05766670 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05766670), iVar1 != 0)) {
          DAT_05766630 = PTR_DAT_04bb2020 + 0x10;
          DAT_05766638 = "Guide";
          DAT_05766648 = &DAT_0407ebb1;
          DAT_05766668 = &DAT_0407ebb1;
          DAT_05766658 = "NumRotate";
          DAT_05766640 = DAT_05766630;
          DAT_05766650 = DAT_05766630;
          DAT_05766660 = DAT_05766630;
          __cxa_guard_release(&DAT_05766670);
        }
        if (((DAT_05766688 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05766688), iVar1 != 0)) {
          DAT_05766678 = 0x200000002;
          DAT_05766680 = &DAT_05766630;
          __cxa_guard_release(&DAT_05766688);
        }
        if (((DAT_057666b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057666b0), iVar1 != 0)) {
          DAT_05766690 = PTR_DAT_04bb2020 + 0x10;
          DAT_05766698 = "@T_Guide_00";
          DAT_057666a8 = "@T_Icon_00";
          DAT_057666a0 = DAT_05766690;
          __cxa_guard_release(&DAT_057666b0);
        }
        if (((DAT_057666c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057666c8), iVar1 != 0)) {
          DAT_057666b8 = PTR_DAT_04bb2020 + 0x10;
          DAT_057666c0 = "P_TextSize_00";
          __cxa_guard_release(&DAT_057666c8);
        }
        local_58 = *param_2;
        local_38 = 1;
        local_48 = &DAT_04b33c78;
        local_40 = &DAT_05766678;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_50 = &DAT_04b33c88;
        lVar4 = puVar7[2];
        lVar2 = lVar4 + 0x208;
        goto LAB_03508694;
      }
    }
  }
  else if (*pcVar5 == '\0') goto LAB_03508624;
  pcVar5 = (char *)param_2[5];
  if ((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')))) &&
      (((pcVar5[4] == 't' && (pcVar5[5] == 'n')) && (pcVar5[6] == 'L')))) &&
     (((((pcVar5[7] == 'i' && (pcVar5[8] == 's')) &&
        (((pcVar5[9] == 't' &&
          (((((pcVar5[10] == '2' && (pcVar5[0xb] == 'x')) && (pcVar5[0xc] == '2')) &&
            ((pcVar5[0xd] == '_' && (pcVar5[0xe] == '0')))) && (pcVar5[0xf] == '0')))) &&
         ((pcVar5[0x10] == '/' && (pcVar5[0x11] == 'L')))))) &&
       ((pcVar5[0x12] == '_' &&
        (((pcVar5[0x13] == 'B' && (pcVar5[0x14] == 't')) && (pcVar5[0x15] == 'n')))))) &&
      (pcVar5[0x16] == '_')))) {
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) == 0)) goto LAB_03508998;
    if (((DAT_057666e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057666e0), iVar1 != 0)) {
      DAT_057666d0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057666d8 = "P_Icon_00";
      __cxa_guard_release(&DAT_057666e0);
    }
    local_50 = &DAT_04b33c98;
    local_58 = *param_2;
    local_38 = 1;
    local_40 = (undefined8 *)0x0;
  }
  else {
LAB_03508998:
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
    if (((DAT_05766728 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05766728), iVar1 != 0)) {
      DAT_057666e8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057666f0 = "Remake";
      DAT_05766700 = &DAT_0407ebb1;
      DAT_05766720 = &DAT_0407ebb1;
      DAT_05766710 = "IconType";
      DAT_057666f8 = DAT_057666e8;
      DAT_05766708 = DAT_057666e8;
      DAT_05766718 = DAT_057666e8;
      __cxa_guard_release(&DAT_05766728);
    }
    if (((DAT_05766740 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05766740), iVar1 != 0)) {
      DAT_05766730 = 0x200000002;
      DAT_05766738 = &DAT_057666e8;
      __cxa_guard_release(&DAT_05766740);
    }
    if (((DAT_05766768 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05766768), iVar1 != 0)) {
      DAT_05766748 = PTR_DAT_04bb2020 + 0x10;
      DAT_05766750 = "P_Icon_00";
      DAT_05766760 = "P_Icon_01";
      DAT_05766758 = DAT_05766748;
      __cxa_guard_release(&DAT_05766768);
    }
    local_50 = &DAT_04b33ca8;
    local_58 = *param_2;
    local_38 = 2;
    local_40 = &DAT_05766730;
  }
  local_48 = (undefined *)0x0;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x2c8;
LAB_03508694:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

