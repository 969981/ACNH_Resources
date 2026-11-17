
void FUN_0319d154(undefined8 param_1,undefined8 *param_2)

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
  undefined *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_0319d1b4:
    if (((DAT_05702568 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05702568), iVar1 != 0)) {
      DAT_057024a8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057024b0 = "FavoriteOn";
      DAT_057024c0 = &DAT_0407ebb1;
      DAT_057024e0 = &DAT_0407ebb1;
      DAT_05702500 = &DAT_0407ebb1;
      DAT_057024d0 = "FavoriteOff";
      DAT_057024f0 = "Present";
      DAT_05702510 = "Wrapping";
      DAT_05702530 = "GetPresent";
      DAT_05702520 = &DAT_0407ebb1;
      DAT_05702540 = &DAT_0407ebb1;
      DAT_05702550 = "Delete";
      DAT_05702560 = &DAT_0407ebb1;
      DAT_057024b8 = DAT_057024a8;
      DAT_057024c8 = DAT_057024a8;
      DAT_057024d8 = DAT_057024a8;
      DAT_057024e8 = DAT_057024a8;
      DAT_057024f8 = DAT_057024a8;
      DAT_05702508 = DAT_057024a8;
      DAT_05702518 = DAT_057024a8;
      DAT_05702528 = DAT_057024a8;
      DAT_05702538 = DAT_057024a8;
      DAT_05702548 = DAT_057024a8;
      DAT_05702558 = DAT_057024a8;
      __cxa_guard_release(&DAT_05702568);
    }
    if (((DAT_05702580 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05702580), iVar1 != 0)) {
      DAT_05702570 = 0x600000002;
      DAT_05702578 = &DAT_057024a8;
      __cxa_guard_release(&DAT_05702580);
    }
    if (((DAT_05702598 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05702598), iVar1 != 0)) {
      DAT_05702588 = PTR_DAT_04bb2020 + 0x10;
      DAT_05702590 = "N_SubWin";
      __cxa_guard_release(&DAT_05702598);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = (undefined *)0x0;
    local_40 = &DAT_05702570;
    local_38 = 0;
    local_50 = &DAT_04b07bc0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_0319d224;
  }
  if (*pcVar5 == '/') {
    if ((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'M')) ||
         ((pcVar5[4] != 's' || (pcVar5[5] != 'g')))) ||
        ((pcVar5[6] != 'C' || ((pcVar5[7] != 'a' || (pcVar5[8] != 'r')))))) ||
       ((pcVar5[9] != 'd' || (pcVar5[10] != '_')))) goto LAB_0319d35c;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0)) goto LAB_0319d35c;
    if (((DAT_057025c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057025c0), iVar1 != 0)) {
      DAT_057025a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057025a8 = &DAT_040fe5ab;
      DAT_057025b8 = &DAT_0407ebb1;
      DAT_057025b0 = DAT_057025a0;
      __cxa_guard_release(&DAT_057025c0);
    }
    if (((DAT_057025d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057025d8), iVar1 != 0)) {
      DAT_057025c8 = 0x100000002;
      DAT_057025d0 = &DAT_057025a0;
      __cxa_guard_release(&DAT_057025d8);
    }
    if (((DAT_05702610 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05702610), iVar1 != 0)) {
      DAT_057025e0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057025e8 = "@T_Header_00";
      DAT_05702608 = "@T_Footer_00";
      DAT_057025f8 = "@T_Main_00";
      DAT_057025f0 = DAT_057025e0;
      DAT_05702600 = DAT_057025e0;
      __cxa_guard_release(&DAT_05702610);
    }
    if (((DAT_05702698 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05702698), iVar1 != 0)) {
      DAT_05702618 = PTR_DAT_04bb2020 + 0x10;
      DAT_05702620 = "P_MsgCard_00";
      DAT_05702630 = "P_Picture_00";
      DAT_05702640 = "T_Header_00";
      DAT_05702650 = "T_Main_00";
      DAT_05702660 = "T_Footer_00";
      DAT_05702670 = "W_Header_00";
      DAT_05702680 = "W_Footer_00";
      DAT_05702690 = "W_Main_00";
      DAT_05702628 = DAT_05702618;
      DAT_05702638 = DAT_05702618;
      DAT_05702648 = DAT_05702618;
      DAT_05702658 = DAT_05702618;
      DAT_05702668 = DAT_05702618;
      DAT_05702678 = DAT_05702618;
      DAT_05702688 = DAT_05702618;
      __cxa_guard_release(&DAT_05702698);
    }
    local_58 = *param_2;
    local_38 = 2;
    local_48 = &DAT_04b07bd0;
    local_40 = &DAT_057025c8;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04b07be0;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_0319d1b4;
LAB_0319d35c:
    pcVar5 = (char *)param_2[5];
    if (*pcVar5 != '/') {
      return;
    }
    if (pcVar5[1] != 'L') {
      return;
    }
    if (pcVar5[2] != '_') {
      return;
    }
    if (pcVar5[3] != 'W') {
      return;
    }
    if (pcVar5[4] != 'r') {
      return;
    }
    if (pcVar5[5] != 'a') {
      return;
    }
    if (pcVar5[6] != 'p') {
      return;
    }
    if (pcVar5[7] != 'p') {
      return;
    }
    if (pcVar5[8] != 'i') {
      return;
    }
    if (pcVar5[9] != 'n') {
      return;
    }
    if (pcVar5[10] != 'g') {
      return;
    }
    if (pcVar5[0xb] != '_') {
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
    if (((DAT_057026c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057026c0), iVar1 != 0)) {
      DAT_057026a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057026a8 = &DAT_040fe5ab;
      DAT_057026b8 = &DAT_0407ebb1;
      DAT_057026b0 = DAT_057026a0;
      __cxa_guard_release(&DAT_057026c0);
    }
    if (((DAT_057026d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057026d8), iVar1 != 0)) {
      DAT_057026c8 = 0x100000002;
      DAT_057026d0 = &DAT_057026a0;
      __cxa_guard_release(&DAT_057026d8);
    }
    local_58 = *param_2;
    local_50 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    local_38 = 0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_40 = &DAT_057026c8;
  }
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
LAB_0319d224:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

