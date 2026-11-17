
void FUN_02fabbc4(undefined8 param_1,undefined8 *param_2)

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
  undefined8 *local_30;
  undefined4 local_28;
  
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
      if (pcVar5[6] != '_') {
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
      if (((DAT_056cc6a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cc6a0), iVar1 != 0)) {
        DAT_056cc690 = PTR_DAT_04bb2020 + 0x10;
        DAT_056cc698 = "@Text";
        __cxa_guard_release(&DAT_056cc6a0);
      }
      local_38 = &DAT_04aea328;
      local_30 = (undefined8 *)0x0;
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02fabc78;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056cc670 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cc670), iVar1 != 0)) {
    DAT_056cc630 = PTR_DAT_04bb2020 + 0x10;
    DAT_056cc638 = &DAT_040f601a;
    DAT_056cc648 = &DAT_0407ebb1;
    DAT_056cc668 = &DAT_0407ebb1;
    DAT_056cc658 = "BtnNum";
    DAT_056cc640 = DAT_056cc630;
    DAT_056cc650 = DAT_056cc630;
    DAT_056cc660 = DAT_056cc630;
    __cxa_guard_release(&DAT_056cc670);
  }
  if (((DAT_056cc688 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cc688), iVar1 != 0)) {
    DAT_056cc678 = 0x200000002;
    DAT_056cc680 = &DAT_056cc630;
    __cxa_guard_release(&DAT_056cc688);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = (undefined *)0x0;
  uStack_48 = *param_2;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_30 = &DAT_056cc678;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02fabc78:
  local_28 = 0;
  local_40 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

