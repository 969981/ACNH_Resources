
void FUN_0308e754(undefined8 param_1,undefined8 *param_2)

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
      if (((DAT_056e4610 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e4610), iVar1 != 0)) {
        DAT_056e45f0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056e45f8 = "IconType";
        DAT_056e4608 = &DAT_0407ebb1;
        DAT_056e4600 = DAT_056e45f0;
        __cxa_guard_release(&DAT_056e4610);
      }
      if (((DAT_056e4628 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e4628), iVar1 != 0)) {
        DAT_056e4618 = 0x100000002;
        DAT_056e4620 = &DAT_056e45f0;
        __cxa_guard_release(&DAT_056e4628);
      }
      local_48 = (undefined *)0x0;
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_056e4618;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_0308e824;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056e4598 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e4598), iVar1 != 0)) {
    DAT_056e4538 = PTR_DAT_04bb2020 + 0x10;
    DAT_056e4540 = "Change";
    DAT_056e4550 = &DAT_0407ebb1;
    DAT_056e4570 = &DAT_0407ebb1;
    DAT_056e4590 = &DAT_0407ebb1;
    DAT_056e4560 = "Share";
    DAT_056e4580 = "CategoryNum";
    DAT_056e4548 = DAT_056e4538;
    DAT_056e4558 = DAT_056e4538;
    DAT_056e4568 = DAT_056e4538;
    DAT_056e4578 = DAT_056e4538;
    DAT_056e4588 = DAT_056e4538;
    __cxa_guard_release(&DAT_056e4598);
  }
  if (((DAT_056e45b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e45b0), iVar1 != 0)) {
    DAT_056e45a0 = 0x300000002;
    DAT_056e45a8 = &DAT_056e4538;
    __cxa_guard_release(&DAT_056e45b0);
  }
  if (((DAT_056e45e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e45e8), iVar1 != 0)) {
    DAT_056e45b8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056e45c0 = "@T_R_00";
    DAT_056e45e0 = "@T_Header_00";
    DAT_056e45d0 = "@T_L_00";
    DAT_056e45c8 = DAT_056e45b8;
    DAT_056e45d8 = DAT_056e45b8;
    __cxa_guard_release(&DAT_056e45e8);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04af92b8;
  local_40 = &DAT_056e45a0;
  uStack_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_0308e824:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

