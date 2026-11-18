
void FUN_03524604(undefined8 param_1,undefined8 *param_2)

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
  undefined *local_38;
  undefined8 *puStack_30;
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
      if (pcVar5[3] != 'I') {
        return;
      }
      if (pcVar5[4] != 't') {
        return;
      }
      if (pcVar5[5] != 'e') {
        return;
      }
      if (pcVar5[6] != 'm') {
        return;
      }
      if (pcVar5[7] != '_') {
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
      if (((DAT_057680e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057680e8), iVar1 != 0)) {
        DAT_057680d8 = PTR_DAT_04bb2020 + 0x10;
        DAT_057680e0 = "P_Icon_00";
        __cxa_guard_release(&DAT_057680e8);
      }
      local_48 = *param_2;
      local_38 = (undefined *)0x0;
      puStack_30 = (undefined8 *)0x0;
      local_28 = 1;
      local_40 = &DAT_04b358e0;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x208;
      goto LAB_035246d0;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05768080 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05768080), iVar1 != 0)) {
    DAT_05768040 = PTR_DAT_04bb2020 + 0x10;
    DAT_05768048 = &DAT_040fe5ab;
    DAT_05768058 = &DAT_0407ebb1;
    DAT_05768078 = &DAT_0407ebb1;
    DAT_05768068 = "NPCIconType";
    DAT_05768050 = DAT_05768040;
    DAT_05768060 = DAT_05768040;
    DAT_05768070 = DAT_05768040;
    __cxa_guard_release(&DAT_05768080);
  }
  if (((DAT_05768098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05768098), iVar1 != 0)) {
    DAT_05768088 = 0x200000002;
    DAT_05768090 = &DAT_05768040;
    __cxa_guard_release(&DAT_05768098);
  }
  if (((DAT_057680d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057680d0), iVar1 != 0)) {
    DAT_057680a0 = PTR_DAT_04bb2020 + 0x10;
    DAT_057680a8 = "@T_Theme_00";
    DAT_057680c8 = "@T_Name_01";
    DAT_057680b8 = "@T_Name_00";
    DAT_057680b0 = DAT_057680a0;
    DAT_057680c0 = DAT_057680a0;
    __cxa_guard_release(&DAT_057680d0);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_28 = 0;
  local_38 = &DAT_04b358d0;
  puStack_30 = &DAT_05768088;
  local_40 = (undefined *)0x0;
  local_48 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_035246d0:
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

