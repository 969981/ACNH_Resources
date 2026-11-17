
void FUN_02c38d74(undefined8 param_1,undefined8 *param_2)

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
  undefined8 uStack_30;
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
      if (pcVar5[3] != 'M') {
        return;
      }
      if (pcVar5[4] != 'e') {
        return;
      }
      if (pcVar5[5] != 'n') {
        return;
      }
      if (pcVar5[6] != 'u') {
        return;
      }
      if (pcVar5[7] != '_') {
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
      if (((DAT_0565a070 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565a070), iVar1 != 0)) {
        DAT_0565a050 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565a058 = "@T_Name_00";
        DAT_0565a068 = "@T_Price_00";
        DAT_0565a060 = DAT_0565a050;
        __cxa_guard_release(&DAT_0565a070);
      }
      if (((DAT_0565a098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565a098), iVar1 != 0)) {
        DAT_0565a078 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565a080 = "N_ItemName_00";
        DAT_0565a090 = "P_Icon_00";
        DAT_0565a088 = DAT_0565a078;
        __cxa_guard_release(&DAT_0565a098);
      }
      local_48 = *param_2;
      local_28 = 1;
      local_38 = &DAT_04aafd38;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_04aafd48;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02c38e18;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_0565a048 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565a048), iVar1 != 0)) {
    DAT_0565a038 = PTR_DAT_04bb2020 + 0x10;
    DAT_0565a040 = "@T_Menu_00";
    __cxa_guard_release(&DAT_0565a048);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = &DAT_04aafd28;
  local_28 = 0;
  local_48 = *param_2;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_40 = (undefined *)0x0;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02c38e18:
  uStack_30 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

