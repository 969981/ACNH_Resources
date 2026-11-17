
void FUN_02fc11d4(undefined8 param_1,undefined8 *param_2)

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
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 != "") {
    if (*pcVar5 == '/') {
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
      if (((DAT_056cfd58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cfd58), iVar1 != 0)) {
        DAT_056cfd18 = PTR_DAT_04bb2020 + 0x10;
        DAT_056cfd20 = "BtnListRandom";
        DAT_056cfd30 = &DAT_0407ebb1;
        DAT_056cfd50 = &DAT_0407ebb1;
        DAT_056cfd40 = "Limited";
        DAT_056cfd28 = DAT_056cfd18;
        DAT_056cfd38 = DAT_056cfd18;
        DAT_056cfd48 = DAT_056cfd18;
        __cxa_guard_release(&DAT_056cfd58);
      }
      if (((DAT_056cfd70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cfd70), iVar1 != 0)) {
        DAT_056cfd60 = 0x200000002;
        DAT_056cfd68 = &DAT_056cfd18;
        __cxa_guard_release(&DAT_056cfd70);
      }
      if (((DAT_056cfd98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cfd98), iVar1 != 0)) {
        DAT_056cfd78 = PTR_DAT_04bb2020 + 0x10;
        DAT_056cfd80 = "@T_Limited_01";
        DAT_056cfd90 = "@T_Limited_00";
        DAT_056cfd88 = DAT_056cfd78;
        __cxa_guard_release(&DAT_056cfd98);
      }
      if (((DAT_056cfdb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cfdb0), iVar1 != 0)) {
        DAT_056cfda0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056cfda8 = "P_MsgCard_00";
        __cxa_guard_release(&DAT_056cfdb0);
      }
      local_58 = *param_2;
      local_38 = 1;
      local_48 = &DAT_04aed080;
      puStack_40 = &DAT_056cfd60;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_50 = &DAT_04aed090;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02fc127c;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056cfd10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cfd10), iVar1 != 0)) {
    DAT_056cfd00 = PTR_DAT_04bb2020 + 0x10;
    DAT_056cfd08 = "L_ItemBalloon_00";
    __cxa_guard_release(&DAT_056cfd10);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_58 = *param_2;
  local_38 = 0;
  local_48 = (undefined *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  puStack_50 = &DAT_04aed070;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02fc127c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

