
void FUN_0349da44(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pcVar6 = (char *)param_2[5];
  if (pcVar6 == "") {
LAB_0349daa4:
    if (((DAT_05760460 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760460), iVar1 != 0)) {
      DAT_05760440 = PTR_DAT_04bb2020 + 0x10;
      DAT_05760448 = &DAT_040fe5ab;
      DAT_05760458 = &DAT_0407ebb1;
      DAT_05760450 = DAT_05760440;
      __cxa_guard_release(&DAT_05760460);
    }
    if (((DAT_05760478 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760478), iVar1 != 0)) {
      DAT_05760468 = 0x100000002;
      DAT_05760470 = &DAT_05760440;
      __cxa_guard_release(&DAT_05760478);
    }
    if (((DAT_05760490 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760490), iVar1 != 0)) {
      DAT_05760480 = PTR_DAT_04bb2020 + 0x10;
      DAT_05760488 = "@T_Header_00";
      __cxa_guard_release(&DAT_05760490);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04b2e6d8;
    local_40 = &DAT_05760468;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar5 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar5 + 0x200;
    goto LAB_0349db14;
  }
  if (*pcVar6 == '/') {
    if ((((((pcVar6[1] == 'L') && (pcVar6[2] == '_')) && (pcVar6[3] == 'I')) &&
         ((pcVar6[4] == 't' && (pcVar6[5] == 'e')))) &&
        ((pcVar6[6] == 'm' && ((pcVar6[7] == 'B' && (pcVar6[8] == 'a')))))) &&
       ((pcVar6[9] == 'l' &&
        ((((pcVar6[10] == 'l' && (pcVar6[0xb] == 'o')) && (pcVar6[0xc] == 'o')) &&
         ((pcVar6[0xd] == 'n' && (pcVar6[0xe] == '_')))))))) {
      puVar8 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4fe0);
      }
      if ((puVar8 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4fd8), (uVar3 & 1) != 0)) {
        if (((DAT_057604f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057604f8), iVar1 != 0)) {
          DAT_05760498 = PTR_DAT_04bb2020 + 0x10;
          DAT_057604a0 = "Guide";
          DAT_057604b0 = &DAT_0407ebb1;
          DAT_057604d0 = &DAT_0407ebb1;
          DAT_057604f0 = &DAT_0407ebb1;
          DAT_057604c0 = "NumRotate";
          DAT_057604e0 = "MyDesignGuide";
          DAT_057604a8 = DAT_05760498;
          DAT_057604b8 = DAT_05760498;
          DAT_057604c8 = DAT_05760498;
          DAT_057604d8 = DAT_05760498;
          DAT_057604e8 = DAT_05760498;
          __cxa_guard_release(&DAT_057604f8);
        }
        if (((DAT_05760510 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760510), iVar1 != 0)) {
          DAT_05760500 = 0x300000002;
          DAT_05760508 = &DAT_05760498;
          __cxa_guard_release(&DAT_05760510);
        }
        if (((DAT_05760548 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760548), iVar1 != 0)) {
          DAT_05760518 = PTR_DAT_04bb2020 + 0x10;
          DAT_05760520 = "@T_Guide_00";
          DAT_05760540 = "@T_text_00";
          DAT_05760530 = "@T_Icon_00";
          DAT_05760528 = DAT_05760518;
          DAT_05760538 = DAT_05760518;
          __cxa_guard_release(&DAT_05760548);
        }
        if (((DAT_05760560 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760560), iVar1 != 0)) {
          DAT_05760550 = PTR_DAT_04bb2020 + 0x10;
          DAT_05760558 = "P_TextSize_00";
          __cxa_guard_release(&DAT_05760560);
        }
        local_58 = *param_2;
        local_38 = 1;
        local_48 = &DAT_04b2e6e8;
        local_40 = &DAT_05760500;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_50 = &DAT_04b2e6f8;
        lVar5 = puVar8[2];
        lVar2 = lVar5 + 0x208;
        goto LAB_0349db14;
      }
    }
  }
  else if (*pcVar6 == '\0') goto LAB_0349daa4;
  pcVar6 = (char *)param_2[5];
  if (((((*pcVar6 == '/') && (((pcVar6[1] == 'L' && (pcVar6[2] == '_')) && (pcVar6[3] == 'M')))) &&
       (((pcVar6[4] == 'y' && (pcVar6[5] == 'C')) && (pcVar6[6] == 'o')))) &&
      ((pcVar6[7] == 'l' && (pcVar6[8] == 'o')))) &&
     ((pcVar6[9] == 'r' &&
      ((((pcVar6[10] == 'B' && (pcVar6[0xb] == 't')) && (pcVar6[0xc] == 'n')) &&
       (pcVar6[0xd] == '_')))))) {
    puVar8 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar8 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e38), (uVar3 & 1) == 0)) goto LAB_0349ddd0;
    if (((DAT_05760588 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760588), iVar1 != 0)) {
      DAT_05760568 = PTR_DAT_04bb2020 + 0x10;
      DAT_05760570 = "MyColor";
      DAT_05760580 = &DAT_0407ebb1;
      DAT_05760578 = DAT_05760568;
      __cxa_guard_release(&DAT_05760588);
    }
    puVar9 = &DAT_05760590;
    if (((DAT_057605a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057605a0), iVar1 != 0)) {
      DAT_05760590 = 0x100000002;
      DAT_05760598 = &DAT_05760568;
      puVar4 = &DAT_057605a0;
      goto LAB_0349e0f0;
    }
  }
  else {
LAB_0349ddd0:
    pcVar6 = (char *)param_2[5];
    if (*pcVar6 != '/') {
      return;
    }
    if (pcVar6[1] != 'L') {
      return;
    }
    if (pcVar6[2] != '_') {
      return;
    }
    if (pcVar6[3] != 'M') {
      return;
    }
    if (pcVar6[4] != 'y') {
      return;
    }
    if (pcVar6[5] != 'C') {
      return;
    }
    if (pcVar6[6] != 'o') {
      return;
    }
    if (pcVar6[7] != 'l') {
      return;
    }
    if (pcVar6[8] != 'o') {
      return;
    }
    if (pcVar6[9] != 'r') {
      return;
    }
    if (pcVar6[10] != 'D') {
      return;
    }
    if (pcVar6[0xb] != 'e') {
      return;
    }
    if (pcVar6[0xc] != 'c') {
      return;
    }
    if (pcVar6[0xd] != 'o') {
      return;
    }
    if (pcVar6[0xe] != 'B') {
      return;
    }
    if (pcVar6[0xf] != 't') {
      return;
    }
    if (pcVar6[0x10] != 'n') {
      return;
    }
    if (pcVar6[0x11] != '_') {
      return;
    }
    puVar8 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e38);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_057605e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057605e8), iVar1 != 0)) {
      DAT_057605a8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057605b0 = "MyColorDeco";
      DAT_057605c0 = &DAT_0407ebb1;
      DAT_057605e0 = &DAT_0407ebb1;
      DAT_057605d0 = "State";
      DAT_057605b8 = DAT_057605a8;
      DAT_057605c8 = DAT_057605a8;
      DAT_057605d8 = DAT_057605a8;
      __cxa_guard_release(&DAT_057605e8);
    }
    puVar9 = &DAT_057605f0;
    if (((DAT_05760600 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760600), iVar1 != 0)) {
      puVar4 = &DAT_05760600;
      DAT_057605f0 = 0x200000002;
      DAT_057605f8 = &DAT_057605a8;
LAB_0349e0f0:
      __cxa_guard_release(puVar4);
    }
  }
  local_38 = 0;
  local_50 = (undefined *)0x0;
  local_48 = (undefined *)0x0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar5 = puVar8[2];
  lVar2 = lVar5 + 0x2c8;
  local_40 = puVar9;
LAB_0349db14:
  FUN_0386e230(lVar2,lVar5,&local_60);
  return;
}

