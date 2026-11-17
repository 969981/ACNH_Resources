
void FUN_02e51244(undefined8 param_1,undefined8 *param_2)

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
  undefined8 local_30;
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
      if (pcVar5[8] != 'B') {
        return;
      }
      if (pcVar5[9] != 'a') {
        return;
      }
      if (pcVar5[10] != 'l') {
        return;
      }
      if (pcVar5[0xb] != 'l') {
        return;
      }
      if (pcVar5[0xc] != 'o') {
        return;
      }
      if (pcVar5[0xd] != 'o') {
        return;
      }
      if (pcVar5[0xe] != 'n') {
        return;
      }
      if (pcVar5[0xf] != '_') {
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
      if (((DAT_05698580 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05698580), iVar1 != 0)) {
        DAT_05698560 = PTR_DAT_04bb2020 + 0x10;
        DAT_05698568 = "@T_Text_00";
        DAT_05698578 = "@T_Icon_00";
        DAT_05698570 = DAT_05698560;
        __cxa_guard_release(&DAT_05698580);
      }
      local_38 = &DAT_04ad5bb8;
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x208;
      goto LAB_02e512d0;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = (undefined *)0x0;
  uStack_48 = *param_2;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02e512d0:
  local_28 = 0;
  local_30 = 0;
  local_40 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

