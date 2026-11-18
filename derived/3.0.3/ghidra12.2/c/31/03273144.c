
void FUN_03273144(undefined8 param_1,undefined8 *param_2)

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
      if (((((pcVar5[3] != 'B') || (pcVar5[4] != 't')) || (pcVar5[5] != 'n')) ||
          ((pcVar5[6] != 'L' || (pcVar5[7] != '_')))) &&
         ((((pcVar5[3] != 'B' || ((pcVar5[4] != 't' || (pcVar5[5] != 'n')))) || (pcVar5[6] != 'R'))
          || (pcVar5[7] != '_')))) {
        if (pcVar5[3] != 'B') {
          return;
        }
        if (pcVar5[4] != 't') {
          return;
        }
        if (pcVar5[5] != 'n') {
          return;
        }
        if (pcVar5[6] != 'C') {
          return;
        }
        if (pcVar5[7] != '_') {
          return;
        }
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
      if (((DAT_05728690 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05728690), iVar1 != 0)) {
        DAT_05728680 = PTR_DAT_04bb2020 + 0x10;
        DAT_05728688 = "@T_Text_00";
        __cxa_guard_release(&DAT_05728690);
      }
      local_38 = &DAT_04b168e8;
      puStack_30 = (undefined8 *)0x0;
      local_28 = 0;
      local_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = (undefined *)0x0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_0327322c;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05728610 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05728610), iVar1 != 0)) {
    DAT_057285d0 = PTR_DAT_04bb2020 + 0x10;
    DAT_057285d8 = &DAT_040fe5ab;
    DAT_057285e8 = &DAT_0407ebb1;
    DAT_05728608 = &DAT_0407ebb1;
    DAT_057285f8 = "TextType";
    DAT_057285e0 = DAT_057285d0;
    DAT_057285f0 = DAT_057285d0;
    DAT_05728600 = DAT_057285d0;
    __cxa_guard_release(&DAT_05728610);
  }
  if (((DAT_05728628 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05728628), iVar1 != 0)) {
    DAT_05728618 = 0x200000002;
    DAT_05728620 = &DAT_057285d0;
    __cxa_guard_release(&DAT_05728628);
  }
  if (((DAT_05728650 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05728650), iVar1 != 0)) {
    DAT_05728630 = PTR_DAT_04bb2020 + 0x10;
    DAT_05728638 = "@T_Text_01";
    DAT_05728648 = "@T_Text_00";
    DAT_05728640 = DAT_05728630;
    __cxa_guard_release(&DAT_05728650);
  }
  if (((DAT_05728678 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05728678), iVar1 != 0)) {
    DAT_05728658 = PTR_DAT_04bb2020 + 0x10;
    DAT_05728660 = "P_Photo_00";
    DAT_05728670 = "P_Base_00";
    DAT_05728668 = DAT_05728658;
    __cxa_guard_release(&DAT_05728678);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = *param_2;
  local_38 = &DAT_04b168c8;
  puStack_30 = &DAT_05728618;
  local_28 = 3;
  local_40 = &DAT_04b168d8;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_0327322c:
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

