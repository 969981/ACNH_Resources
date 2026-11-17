
void FUN_02fc54ac(undefined8 param_1,undefined8 *param_2)

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
      if (pcVar5[3] != 'M') {
        return;
      }
      if (pcVar5[4] != 's') {
        return;
      }
      if (pcVar5[5] != 'g') {
        return;
      }
      if (pcVar5[6] != 'C') {
        return;
      }
      if (pcVar5[7] != 'a') {
        return;
      }
      if (pcVar5[8] != 'r') {
        return;
      }
      if (pcVar5[9] != 'd') {
        return;
      }
      if (pcVar5[10] != '_') {
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
      if (((DAT_056cffa8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cffa8), iVar1 != 0)) {
        DAT_056cff88 = PTR_DAT_04bb2020 + 0x10;
        DAT_056cff90 = &DAT_040fe5ab;
        DAT_056cffa0 = &DAT_0407ebb1;
        DAT_056cff98 = DAT_056cff88;
        __cxa_guard_release(&DAT_056cffa8);
      }
      if (((DAT_056cffc0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cffc0), iVar1 != 0)) {
        DAT_056cffb0 = 0x100000002;
        DAT_056cffb8 = &DAT_056cff88;
        __cxa_guard_release(&DAT_056cffc0);
      }
      if (((DAT_056cfff8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cfff8), iVar1 != 0)) {
        DAT_056cffc8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056cffd0 = "@T_Header_00";
        DAT_056cfff0 = "@T_Footer_00";
        DAT_056cffe0 = "@T_Main_00";
        DAT_056cffd8 = DAT_056cffc8;
        DAT_056cffe8 = DAT_056cffc8;
        __cxa_guard_release(&DAT_056cfff8);
      }
      if (((DAT_056d0080 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d0080), iVar1 != 0)) {
        DAT_056d0000 = PTR_DAT_04bb2020 + 0x10;
        DAT_056d0008 = "P_MsgCard_00";
        DAT_056d0018 = "P_Picture_00";
        DAT_056d0028 = "T_Header_00";
        DAT_056d0038 = "T_Main_00";
        DAT_056d0048 = "T_Footer_00";
        DAT_056d0058 = "W_Header_00";
        DAT_056d0068 = "W_Footer_00";
        DAT_056d0078 = "W_Main_00";
        DAT_056d0010 = DAT_056d0000;
        DAT_056d0020 = DAT_056d0000;
        DAT_056d0030 = DAT_056d0000;
        DAT_056d0040 = DAT_056d0000;
        DAT_056d0050 = DAT_056d0000;
        DAT_056d0060 = DAT_056d0000;
        DAT_056d0070 = DAT_056d0000;
        __cxa_guard_release(&DAT_056d0080);
      }
      local_58 = *param_2;
      local_38 = 2;
      local_48 = &DAT_04aed690;
      puStack_40 = &DAT_056cffb0;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_50 = &DAT_04aed6a0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x208;
      goto LAB_02fc5554;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056cff80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cff80), iVar1 != 0)) {
    DAT_056cff70 = PTR_DAT_04bb2020 + 0x10;
    DAT_056cff78 = "N_Card_00";
    __cxa_guard_release(&DAT_056cff80);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_58 = *param_2;
  local_38 = 0;
  local_48 = (undefined *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  puStack_50 = &DAT_04aed680;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02fc5554:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

