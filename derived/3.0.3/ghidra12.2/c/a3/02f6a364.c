
void FUN_02f6a364(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
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
      if (((DAT_056c7ad0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c7ad0), iVar1 != 0)) {
        DAT_056c7a90 = PTR_DAT_04bb2020 + 0x10;
        DAT_056c7a98 = &DAT_040fe5ab;
        DAT_056c7aa8 = &DAT_0407ebb1;
        DAT_056c7ac8 = &DAT_0407ebb1;
        DAT_056c7ab8 = "State";
        DAT_056c7aa0 = DAT_056c7a90;
        DAT_056c7ab0 = DAT_056c7a90;
        DAT_056c7ac0 = DAT_056c7a90;
        __cxa_guard_release(&DAT_056c7ad0);
      }
      if (((DAT_056c7ae8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c7ae8), iVar1 != 0)) {
        DAT_056c7ad8 = 0x200000002;
        DAT_056c7ae0 = &DAT_056c7a90;
        __cxa_guard_release(&DAT_056c7ae8);
      }
      if (((DAT_056c7b00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c7b00), iVar1 != 0)) {
        DAT_056c7af0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056c7af8 = "@T_Tips_00";
        __cxa_guard_release(&DAT_056c7b00);
      }
      local_48 = &DAT_04ae5bf8;
      puStack_40 = &DAT_056c7ad8;
      lVar4 = puVar7[2];
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02f6a434;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056c7a58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c7a58), iVar1 != 0)) {
    DAT_056c7a38 = PTR_DAT_04bb2020 + 0x10;
    DAT_056c7a40 = "Empty";
    DAT_056c7a50 = &DAT_0407ebb1;
    DAT_056c7a48 = DAT_056c7a38;
    __cxa_guard_release(&DAT_056c7a58);
  }
  if (((DAT_056c7a70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c7a70), iVar1 != 0)) {
    DAT_056c7a60 = 0x100000002;
    DAT_056c7a68 = &DAT_056c7a38;
    __cxa_guard_release(&DAT_056c7a70);
  }
  if (((DAT_056c7a88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c7a88), iVar1 != 0)) {
    DAT_056c7a78 = PTR_DAT_04bb2020 + 0x10;
    DAT_056c7a80 = "@T_Empty_00";
    __cxa_guard_release(&DAT_056c7a88);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04ae5be8;
  puStack_40 = &DAT_056c7a60;
  uStack_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02f6a434:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

