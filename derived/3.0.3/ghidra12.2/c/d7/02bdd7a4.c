
void FUN_02bdd7a4(undefined8 param_1,undefined8 *param_2)

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
  undefined8 *local_40;
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
      if (pcVar5[3] != 'I') {
        return;
      }
      if (pcVar5[4] != 'n') {
        return;
      }
      if (pcVar5[5] != 'd') {
        return;
      }
      if (pcVar5[6] != 'i') {
        return;
      }
      if (pcVar5[7] != 'c') {
        return;
      }
      if (pcVar5[8] != 'a') {
        return;
      }
      if (pcVar5[9] != 't') {
        return;
      }
      if (pcVar5[10] != 'o') {
        return;
      }
      if (pcVar5[0xb] != 'r') {
        return;
      }
      if (pcVar5[0xc] != '_') {
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
      if (((DAT_05646bd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05646bd0), iVar1 != 0)) {
        DAT_05646bb0 = PTR_DAT_04bb2020 + 0x10;
        DAT_05646bb8 = "Indicator";
        DAT_05646bc8 = &DAT_0407ebb1;
        DAT_05646bc0 = DAT_05646bb0;
        __cxa_guard_release(&DAT_05646bd0);
      }
      if (((DAT_05646be8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05646be8), iVar1 != 0)) {
        DAT_05646bd8 = 0x100000002;
        DAT_05646be0 = &DAT_05646bb0;
        __cxa_guard_release(&DAT_05646be8);
      }
      local_48 = (undefined *)0x0;
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_05646bd8;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x208;
      goto LAB_02bdd874;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05646b78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05646b78), iVar1 != 0)) {
    DAT_05646b58 = PTR_DAT_04bb2020 + 0x10;
    DAT_05646b60 = "Guide";
    DAT_05646b70 = &DAT_0407ebb1;
    DAT_05646b68 = DAT_05646b58;
    __cxa_guard_release(&DAT_05646b78);
  }
  if (((DAT_05646b90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05646b90), iVar1 != 0)) {
    DAT_05646b80 = 0x100000002;
    DAT_05646b88 = &DAT_05646b58;
    __cxa_guard_release(&DAT_05646b90);
  }
  if (((DAT_05646ba8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05646ba8), iVar1 != 0)) {
    DAT_05646b98 = PTR_DAT_04bb2020 + 0x10;
    DAT_05646ba0 = "@T_Text_00";
    __cxa_guard_release(&DAT_05646ba8);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04aaa758;
  local_40 = &DAT_05646b80;
  uStack_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02bdd874:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

