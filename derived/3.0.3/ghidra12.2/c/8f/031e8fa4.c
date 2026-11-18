
void FUN_031e8fa4(undefined8 param_1,undefined8 *param_2)

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
  undefined8 local_48;
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
      if (pcVar5[3] != 'S') {
        return;
      }
      if (pcVar5[4] != 'e') {
        return;
      }
      if (pcVar5[5] != 'l') {
        return;
      }
      if (pcVar5[6] != 'e') {
        return;
      }
      if (pcVar5[7] != 'c') {
        return;
      }
      if (pcVar5[8] != 't') {
        return;
      }
      if (pcVar5[9] != 'B') {
        return;
      }
      if (pcVar5[10] != 't') {
        return;
      }
      if (pcVar5[0xb] != 'n') {
        return;
      }
      if (pcVar5[0xc] != '_') {
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
      if (((DAT_0571cda8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571cda8), iVar1 != 0)) {
        DAT_0571cd88 = PTR_DAT_04bb2020 + 0x10;
        DAT_0571cd90 = "Empty";
        DAT_0571cda0 = &DAT_0407ebb1;
        DAT_0571cd98 = DAT_0571cd88;
        __cxa_guard_release(&DAT_0571cda8);
      }
      if (((DAT_0571cdc0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571cdc0), iVar1 != 0)) {
        DAT_0571cdb0 = 0x100000002;
        DAT_0571cdb8 = &DAT_0571cd88;
        __cxa_guard_release(&DAT_0571cdc0);
      }
      local_50 = (undefined *)0x0;
      local_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_0571cdb0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_031e904c;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_0571cd80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571cd80), iVar1 != 0)) {
    DAT_0571cd70 = PTR_DAT_04bb2020 + 0x10;
    DAT_0571cd78 = "L_ItemName_00";
    __cxa_guard_release(&DAT_0571cd80);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_58 = *param_2;
  local_40 = (undefined8 *)0x0;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_50 = &DAT_04b0d348;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_031e904c:
  local_38 = 0;
  local_48 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

