
void FUN_0304c4f4(undefined8 param_1,undefined8 *param_2)

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
LAB_0304c554:
    if (((DAT_056dcb00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcb00), iVar1 != 0)) {
      DAT_056dcaf0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056dcaf8 = "@T_Header_00";
      __cxa_guard_release(&DAT_056dcb00);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_48 = &DAT_04af6798;
    local_40 = (undefined8 *)0x0;
    uStack_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_0304c59c;
  }
  if (*pcVar5 == '/') {
    if (((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'B')) ||
        ((pcVar5[4] != 't' || (pcVar5[5] != 'n')))) || (pcVar5[6] != '_')) goto LAB_0304c668;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) == 0)) goto LAB_0304c668;
    if (((DAT_056dcb18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcb18), iVar1 != 0)) {
      DAT_056dcb08 = PTR_DAT_04bb2020 + 0x10;
      DAT_056dcb10 = "@T_Text_00";
      __cxa_guard_release(&DAT_056dcb18);
    }
    local_48 = &DAT_04af67a8;
    uStack_58 = *param_2;
    local_40 = (undefined8 *)0x0;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_0304c554;
LAB_0304c668:
    pcVar5 = (char *)param_2[5];
    if ((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'T')))) &&
        ((((pcVar5[4] == 'y' && (pcVar5[5] == 'p')) && (pcVar5[6] == 'e')) &&
         ((pcVar5[7] == 'B' && (pcVar5[8] == 't')))))) &&
       ((pcVar5[9] == 'n' && (pcVar5[10] == '_')))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar7 == (undefined8 *)0x0) ||
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) == 0))
      goto LAB_0304c76c;
      if (((DAT_056dcb40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcb40), iVar1 != 0)) {
        DAT_056dcb20 = PTR_DAT_04bb2020 + 0x10;
        DAT_056dcb28 = "IconType";
        DAT_056dcb38 = &DAT_0407ebb1;
        DAT_056dcb30 = DAT_056dcb20;
        __cxa_guard_release(&DAT_056dcb40);
      }
      puVar8 = &DAT_056dcb48;
      if (((DAT_056dcb58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcb58), iVar1 != 0)) {
        DAT_056dcb48 = 0x100000002;
        DAT_056dcb50 = &DAT_056dcb20;
        __cxa_guard_release(&DAT_056dcb58);
      }
      if (((DAT_056dcbb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcbb0), iVar1 != 0)) {
        DAT_056dcb60 = PTR_DAT_04bb2020 + 0x10;
        DAT_056dcb68 = "@T_NotSpecified_00";
        DAT_056dcb78 = "@T_UseName_00";
        DAT_056dcb88 = "@T_UseType_00";
        DAT_056dcb98 = "@T_Title_00";
        DAT_056dcba8 = "@T_UseTypePro_00";
        DAT_056dcb70 = DAT_056dcb60;
        DAT_056dcb80 = DAT_056dcb60;
        DAT_056dcb90 = DAT_056dcb60;
        DAT_056dcba0 = DAT_056dcb60;
        __cxa_guard_release(&DAT_056dcbb0);
      }
      local_48 = &DAT_04af67b8;
    }
    else {
LAB_0304c76c:
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
      if (pcVar5[3] != 'S') {
        return;
      }
      if (pcVar5[4] != 'w') {
        return;
      }
      if (pcVar5[5] != 'k') {
        return;
      }
      if (pcVar5[6] != 'b') {
        return;
      }
      if (pcVar5[7] != 'd') {
        return;
      }
      if (pcVar5[8] != 'B') {
        return;
      }
      if (pcVar5[9] != 't') {
        return;
      }
      if (pcVar5[10] != 'n') {
        return;
      }
      if (pcVar5[0xb] != '_') {
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
      if (((DAT_056dcbd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcbd8), iVar1 != 0)) {
        DAT_056dcbb8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056dcbc0 = "State";
        DAT_056dcbd0 = &DAT_0407ebb1;
        DAT_056dcbc8 = DAT_056dcbb8;
        __cxa_guard_release(&DAT_056dcbd8);
      }
      puVar8 = &DAT_056dcbe0;
      if (((DAT_056dcbf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcbf0), iVar1 != 0)) {
        DAT_056dcbe0 = 0x100000002;
        DAT_056dcbe8 = &DAT_056dcbb8;
        __cxa_guard_release(&DAT_056dcbf0);
      }
      if (((DAT_056dcc28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcc28), iVar1 != 0)) {
        DAT_056dcbf8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056dcc00 = "@T_Title_00";
        DAT_056dcc20 = "@T_Keyword_00";
        DAT_056dcc10 = "@T_Empty_00";
        DAT_056dcc08 = DAT_056dcbf8;
        DAT_056dcc18 = DAT_056dcbf8;
        __cxa_guard_release(&DAT_056dcc28);
      }
      local_48 = (undefined *)0x4af67c8;
    }
    uStack_58 = *param_2;
    local_40 = puVar8;
  }
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x2c8;
LAB_0304c59c:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

