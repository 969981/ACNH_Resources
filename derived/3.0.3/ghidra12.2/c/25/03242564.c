
void FUN_03242564(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_032425c4:
    if (((DAT_057243c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057243c8), iVar1 != 0)) {
      DAT_05724348 = PTR_DAT_04bb2020 + 0x10;
      DAT_05724350 = "KeyWordType";
      DAT_05724370 = "KeyWordType";
      DAT_05724360 = "$G_KeyWordType_01";
      DAT_05724390 = &DAT_040fe5ab;
      DAT_05724380 = "$G_KeyWordType_00";
      DAT_057243a0 = &DAT_0407ebb1;
      DAT_057243b0 = "ClearOut";
      DAT_057243c0 = &DAT_0407ebb1;
      DAT_05724358 = DAT_05724348;
      DAT_05724368 = DAT_05724348;
      DAT_05724378 = DAT_05724348;
      DAT_05724388 = DAT_05724348;
      DAT_05724398 = DAT_05724348;
      DAT_057243a8 = DAT_05724348;
      DAT_057243b8 = DAT_05724348;
      __cxa_guard_release(&DAT_057243c8);
    }
    if (((DAT_057243e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057243e0), iVar1 != 0)) {
      DAT_057243d0 = 0x400000002;
      DAT_057243d8 = &DAT_05724348;
      __cxa_guard_release(&DAT_057243e0);
    }
    if (((DAT_05724408 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05724408), iVar1 != 0)) {
      DAT_057243e8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057243f0 = "@T_GetTitle_00";
      DAT_05724400 = "@T_GetTitle_01";
      DAT_057243f8 = DAT_057243e8;
      __cxa_guard_release(&DAT_05724408);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_48 = &DAT_04b13ef0;
    puStack_40 = &DAT_057243d0;
    uStack_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
    goto LAB_03242634;
  }
  if (*pcVar5 == '/') {
    if ((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'K')) ||
         ((pcVar5[4] != 'e' || (pcVar5[5] != 'y')))) ||
        ((pcVar5[6] != 'w' || ((pcVar5[7] != 'o' || (pcVar5[8] != 'r')))))) ||
       ((pcVar5[9] != 'd' || ((pcVar5[10] != 'R' || (pcVar5[0xb] != '_')))))) goto LAB_03242740;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0)) goto LAB_03242740;
    if (((DAT_05724430 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05724430), iVar1 != 0)) {
      DAT_05724410 = PTR_DAT_04bb2020 + 0x10;
      DAT_05724418 = &DAT_040fe5ab;
      DAT_05724428 = &DAT_0407ebb1;
      DAT_05724420 = DAT_05724410;
      __cxa_guard_release(&DAT_05724430);
    }
    puVar8 = &DAT_05724438;
    if (((DAT_05724448 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05724448), iVar1 != 0)) {
      DAT_05724438 = 0x100000002;
      DAT_05724440 = &DAT_05724410;
      __cxa_guard_release(&DAT_05724448);
    }
    if (((DAT_05724460 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05724460), iVar1 != 0)) {
      DAT_05724450 = PTR_DAT_04bb2020 + 0x10;
      DAT_05724458 = "@T_Keyword_00";
      __cxa_guard_release(&DAT_05724460);
    }
    local_48 = &DAT_04b13f00;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_032425c4;
LAB_03242740:
    pcVar5 = (char *)param_2[5];
    if (((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')))) &&
       (((pcVar5[4] == 't' && (pcVar5[5] == 'n')) && (pcVar5[6] == '_')))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
        if (((DAT_057244e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057244e8), iVar1 != 0)) {
          DAT_05724468 = PTR_DAT_04bb2020 + 0x10;
          DAT_05724470 = "Bonus";
          DAT_05724480 = &DAT_0407ebb1;
          DAT_057244a0 = &DAT_0407ebb1;
          DAT_057244c0 = &DAT_0407ebb1;
          DAT_05724490 = "BonusType";
          DAT_057244b0 = "GetIn";
          DAT_057244d0 = "GetInShort";
          DAT_057244e0 = &DAT_0407ebb1;
          DAT_05724478 = DAT_05724468;
          DAT_05724488 = DAT_05724468;
          DAT_05724498 = DAT_05724468;
          DAT_057244a8 = DAT_05724468;
          DAT_057244b8 = DAT_05724468;
          DAT_057244c8 = DAT_05724468;
          DAT_057244d8 = DAT_05724468;
          __cxa_guard_release(&DAT_057244e8);
        }
        if (((DAT_05724500 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05724500), iVar1 != 0)) {
          DAT_057244f0 = 0x400000002;
          DAT_057244f8 = &DAT_05724468;
          __cxa_guard_release(&DAT_05724500);
        }
        if (((DAT_05724538 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05724538), iVar1 != 0)) {
          DAT_05724508 = PTR_DAT_04bb2020 + 0x10;
          DAT_05724510 = "@T_Point_00";
          DAT_05724530 = "@T_BonusNum_00";
          DAT_05724520 = "@T_BonusNumUnit_00";
          DAT_05724518 = DAT_05724508;
          DAT_05724528 = DAT_05724508;
          __cxa_guard_release(&DAT_05724538);
        }
        local_48 = &DAT_04b13f10;
        puStack_40 = &DAT_057244f0;
        uStack_58 = *param_2;
        lVar4 = puVar7[2];
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        lVar2 = lVar4 + 0x2c8;
        goto LAB_03242634;
      }
    }
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
    if (pcVar5[3] != 'K') {
      return;
    }
    if (pcVar5[4] != 'e') {
      return;
    }
    if (pcVar5[5] != 'y') {
      return;
    }
    if (pcVar5[6] != 'w') {
      return;
    }
    if (pcVar5[7] != 'o') {
      return;
    }
    if (pcVar5[8] != 'r') {
      return;
    }
    if (pcVar5[9] != 'd') {
      return;
    }
    if (pcVar5[10] != 'L') {
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
    if (((DAT_05724560 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05724560), iVar1 != 0)) {
      DAT_05724540 = PTR_DAT_04bb2020 + 0x10;
      DAT_05724548 = &DAT_040fe5ab;
      DAT_05724558 = &DAT_0407ebb1;
      DAT_05724550 = DAT_05724540;
      __cxa_guard_release(&DAT_05724560);
    }
    puVar8 = &DAT_05724568;
    if (((DAT_05724578 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05724578), iVar1 != 0)) {
      DAT_05724568 = 0x100000002;
      DAT_05724570 = &DAT_05724540;
      __cxa_guard_release(&DAT_05724578);
    }
    if (((DAT_05724590 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05724590), iVar1 != 0)) {
      DAT_05724580 = PTR_DAT_04bb2020 + 0x10;
      DAT_05724588 = "@T_Keyword_00";
      __cxa_guard_release(&DAT_05724590);
    }
    local_48 = &DAT_04b13f20;
  }
  uStack_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
  puStack_40 = puVar8;
LAB_03242634:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

