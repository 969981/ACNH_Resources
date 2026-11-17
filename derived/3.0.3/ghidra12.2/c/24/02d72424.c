
void FUN_02d72424(undefined8 param_1,undefined8 *param_2)

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
  undefined *local_40;
  undefined8 local_38;
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
      if (((DAT_05684290 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05684290), iVar1 != 0)) {
        DAT_05684280 = PTR_DAT_04bb2020 + 0x10;
        DAT_05684288 = "P_Icon_00";
        __cxa_guard_release(&DAT_05684290);
      }
      local_48 = *param_2;
      local_30 = (undefined8 *)0x0;
      local_28 = 1;
      local_40 = &DAT_04ac1798;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02d724d8;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05684260 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05684260), iVar1 != 0)) {
    DAT_05684240 = PTR_DAT_04bb2020 + 0x10;
    DAT_05684248 = &DAT_040fe5ab;
    DAT_05684258 = &DAT_0407ebb1;
    DAT_05684250 = DAT_05684240;
    __cxa_guard_release(&DAT_05684260);
  }
  if (((DAT_05684278 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05684278), iVar1 != 0)) {
    DAT_05684268 = 0x100000002;
    DAT_05684270 = &DAT_05684240;
    __cxa_guard_release(&DAT_05684278);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_40 = (undefined *)0x0;
  local_28 = 0;
  local_48 = *param_2;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_30 = &DAT_05684268;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02d724d8:
  local_38 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

