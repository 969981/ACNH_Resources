
void FUN_02ee20f4(undefined8 param_1,undefined8 *param_2)

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
      if (pcVar5[3] != 'G') {
        return;
      }
      if (pcVar5[4] != 'u') {
        return;
      }
      if (pcVar5[5] != 'i') {
        return;
      }
      if (pcVar5[6] != 'd') {
        return;
      }
      if (pcVar5[7] != 'e') {
        return;
      }
      if (pcVar5[8] != '_') {
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
      if (((DAT_056b3770 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b3770), iVar1 != 0)) {
        DAT_056b3730 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b3738 = &DAT_040fe5ab;
        DAT_056b3748 = &DAT_0407ebb1;
        DAT_056b3768 = &DAT_0407ebb1;
        DAT_056b3758 = "State";
        DAT_056b3740 = DAT_056b3730;
        DAT_056b3750 = DAT_056b3730;
        DAT_056b3760 = DAT_056b3730;
        __cxa_guard_release(&DAT_056b3770);
      }
      if (((DAT_056b3788 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b3788), iVar1 != 0)) {
        DAT_056b3778 = 0x200000002;
        DAT_056b3780 = &DAT_056b3730;
        __cxa_guard_release(&DAT_056b3788);
      }
      if (((DAT_056b37d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b37d0), iVar1 != 0)) {
        DAT_056b3790 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b3798 = "@T_Icon_00";
        DAT_056b37c8 = "@T_Slash_00";
        DAT_056b37a8 = "@T_Text_00";
        DAT_056b37b8 = "@T_IconR_00";
        DAT_056b37a0 = DAT_056b3790;
        DAT_056b37b0 = DAT_056b3790;
        DAT_056b37c0 = DAT_056b3790;
        __cxa_guard_release(&DAT_056b37d0);
      }
      local_48 = &DAT_04ade690;
      local_40 = &DAT_056b3778;
      lVar4 = puVar7[2];
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = lVar4 + 0x208;
      goto LAB_02ee2184;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (param_2[1] == 0) {
    return;
  }
  local_40 = (undefined8 *)0x0;
  local_48 = (undefined *)0x0;
  uStack_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02ee2184:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

