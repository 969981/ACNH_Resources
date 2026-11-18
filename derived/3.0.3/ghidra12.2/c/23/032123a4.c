
void FUN_032123a4(undefined8 param_1,undefined8 *param_2)

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
LAB_03212404:
    if (((DAT_057209b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057209b0), iVar1 != 0)) {
      DAT_05720970 = PTR_DAT_04bb2020 + 0x10;
      DAT_05720978 = "TailorTicket";
      DAT_05720988 = &DAT_0407ebb1;
      DAT_057209a8 = &DAT_0407ebb1;
      DAT_05720998 = "Share";
      DAT_05720980 = DAT_05720970;
      DAT_05720990 = DAT_05720970;
      DAT_057209a0 = DAT_05720970;
      __cxa_guard_release(&DAT_057209b0);
    }
    if (((DAT_057209c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057209c8), iVar1 != 0)) {
      DAT_057209b8 = 0x200000002;
      DAT_057209c0 = &DAT_05720970;
      __cxa_guard_release(&DAT_057209c8);
    }
    if (((DAT_057209f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057209f0), iVar1 != 0)) {
      DAT_057209d0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057209d8 = "@T_R_00";
      DAT_057209e8 = "@T_L_00";
      DAT_057209e0 = DAT_057209d0;
      __cxa_guard_release(&DAT_057209f0);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04b105c0;
    local_40 = &DAT_057209b8;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
    goto LAB_03212474;
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
        if (((DAT_05720a58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05720a58), iVar1 != 0)) {
          DAT_057209f8 = PTR_DAT_04bb2020 + 0x10;
          DAT_05720a00 = "BtnListRandom";
          DAT_05720a10 = &DAT_0407ebb1;
          DAT_05720a30 = &DAT_0407ebb1;
          DAT_05720a50 = &DAT_0407ebb1;
          DAT_05720a20 = "TicketIn";
          DAT_05720a40 = "TicketOut";
          DAT_05720a08 = DAT_057209f8;
          DAT_05720a18 = DAT_057209f8;
          DAT_05720a28 = DAT_057209f8;
          DAT_05720a38 = DAT_057209f8;
          DAT_05720a48 = DAT_057209f8;
          __cxa_guard_release(&DAT_05720a58);
        }
        if (((DAT_05720a70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05720a70), iVar1 != 0)) {
          DAT_05720a60 = 0x300000002;
          DAT_05720a68 = &DAT_057209f8;
          __cxa_guard_release(&DAT_05720a70);
        }
        if (((DAT_05720a98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05720a98), iVar1 != 0)) {
          DAT_05720a78 = PTR_DAT_04bb2020 + 0x10;
          DAT_05720a80 = "@T_Price_00";
          DAT_05720a90 = "@T_Ticket_00";
          DAT_05720a88 = DAT_05720a78;
          __cxa_guard_release(&DAT_05720a98);
        }
        if (((DAT_05720ac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05720ac0), iVar1 != 0)) {
          DAT_05720aa0 = PTR_DAT_04bb2020 + 0x10;
          DAT_05720aa8 = "P_Icon_00";
          DAT_05720ab8 = "P_Icon_01";
          DAT_05720ab0 = DAT_05720aa0;
          __cxa_guard_release(&DAT_05720ac0);
        }
        local_58 = *param_2;
        local_38 = 2;
        local_48 = &DAT_04b105d0;
        local_40 = &DAT_05720a60;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_50 = &DAT_04b105e0;
        lVar4 = puVar7[2];
        lVar2 = lVar4 + 0x2c8;
        goto LAB_03212474;
      }
    }
  }
  else if (*pcVar5 == '\0') goto LAB_03212404;
  pcVar5 = (char *)param_2[5];
  if ((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'T')))) &&
      ((((pcVar5[4] == 'o' && (pcVar5[5] == 't')) && (pcVar5[6] == 'a')) &&
       ((pcVar5[7] == 'l' && (pcVar5[8] == 'B')))))) &&
     ((pcVar5[9] == 'e' && (((pcVar5[10] == 'l' && (pcVar5[0xb] == 'l')) && (pcVar5[0xc] == '_')))))
     ) {
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc5288 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5288), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc5280 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc5288);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5280), (uVar3 & 1) == 0)) goto LAB_03212770;
    if (((DAT_05720ae8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05720ae8), iVar1 != 0)) {
      DAT_05720ac8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05720ad0 = "Color";
      DAT_05720ae0 = &DAT_0407ebb1;
      DAT_05720ad8 = DAT_05720ac8;
      __cxa_guard_release(&DAT_05720ae8);
    }
    if (((DAT_05720b00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05720b00), iVar1 != 0)) {
      DAT_05720af0 = 0x100000002;
      DAT_05720af8 = &DAT_05720ac8;
      __cxa_guard_release(&DAT_05720b00);
    }
    if (((DAT_05720b28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05720b28), iVar1 != 0)) {
      DAT_05720b08 = PTR_DAT_04bb2020 + 0x10;
      DAT_05720b10 = "@T_Bell_00";
      DAT_05720b20 = "@T_TotalText_00";
      DAT_05720b18 = DAT_05720b08;
      __cxa_guard_release(&DAT_05720b28);
    }
    local_48 = &DAT_04b105f0;
    local_58 = *param_2;
    local_40 = &DAT_05720af0;
  }
  else {
LAB_03212770:
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
    if (pcVar5[3] != 'T') {
      return;
    }
    if (pcVar5[4] != 'a') {
      return;
    }
    if (pcVar5[5] != 'i') {
      return;
    }
    if (pcVar5[6] != 'l') {
      return;
    }
    if (pcVar5[7] != 'o') {
      return;
    }
    if (pcVar5[8] != 'r') {
      return;
    }
    if (pcVar5[9] != 'T') {
      return;
    }
    if (pcVar5[10] != 'i') {
      return;
    }
    if (pcVar5[0xb] != 'c') {
      return;
    }
    if (pcVar5[0xc] != 'k') {
      return;
    }
    if (pcVar5[0xd] != 'e') {
      return;
    }
    if (pcVar5[0xe] != 't') {
      return;
    }
    if (pcVar5[0xf] != '_') {
      return;
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc5288 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5288), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc5280 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc5288);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5280);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_05720b40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05720b40), iVar1 != 0)) {
      DAT_05720b30 = PTR_DAT_04bb2020 + 0x10;
      DAT_05720b38 = "@T_Tailor_00";
      __cxa_guard_release(&DAT_05720b40);
    }
    local_48 = &DAT_04b10600;
    local_58 = *param_2;
    local_40 = (undefined8 *)0x0;
  }
  local_38 = 0;
  local_50 = (undefined *)0x0;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
LAB_03212474:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

