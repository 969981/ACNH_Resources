
void FUN_0324c7a4(undefined8 param_1,undefined8 *param_2)

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
      if (pcVar5[6] != '_') {
        return;
      }
      if (pcVar5[7] != '0') {
        return;
      }
      if (pcVar5[8] != '0') {
        return;
      }
      if (pcVar5[9] != '/') {
        return;
      }
      if (pcVar5[10] != 'L') {
        return;
      }
      if (pcVar5[0xb] != '_') {
        return;
      }
      if (pcVar5[0xc] != 'R') {
        return;
      }
      if (pcVar5[0xd] != 'e') {
        return;
      }
      if (pcVar5[0xe] != 's') {
        return;
      }
      if (pcVar5[0xf] != 'u') {
        return;
      }
      if (pcVar5[0x10] != 'l') {
        return;
      }
      if (pcVar5[0x11] != 't') {
        return;
      }
      if (pcVar5[0x12] != 'B') {
        return;
      }
      if (pcVar5[0x13] != 't') {
        return;
      }
      if (pcVar5[0x14] != 'n') {
        return;
      }
      if (pcVar5[0x15] != '_') {
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
      if (((DAT_05725430 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725430), iVar1 != 0)) {
        DAT_05725370 = PTR_DAT_04bb2020 + 0x10;
        DAT_05725378 = "CardType";
        DAT_05725388 = &DAT_0407ebb1;
        DAT_057253a8 = &DAT_0407ebb1;
        DAT_057253c8 = &DAT_0407ebb1;
        DAT_05725398 = "Clear";
        DAT_057253b8 = &DAT_040734ad;
        DAT_057253d8 = "Invalid";
        DAT_057253f8 = &DAT_040fe5ab;
        DAT_057253e8 = &DAT_0407ebb1;
        DAT_05725408 = &DAT_0407ebb1;
        DAT_05725418 = "StampNum";
        DAT_05725428 = &DAT_0407ebb1;
        DAT_05725380 = DAT_05725370;
        DAT_05725390 = DAT_05725370;
        DAT_057253a0 = DAT_05725370;
        DAT_057253b0 = DAT_05725370;
        DAT_057253c0 = DAT_05725370;
        DAT_057253d0 = DAT_05725370;
        DAT_057253e0 = DAT_05725370;
        DAT_057253f0 = DAT_05725370;
        DAT_05725400 = DAT_05725370;
        DAT_05725410 = DAT_05725370;
        DAT_05725420 = DAT_05725370;
        __cxa_guard_release(&DAT_05725430);
      }
      if (((DAT_05725448 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725448), iVar1 != 0)) {
        DAT_05725438 = 0x600000002;
        DAT_05725440 = &DAT_05725370;
        __cxa_guard_release(&DAT_05725448);
      }
      if (((DAT_057254a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057254a0), iVar1 != 0)) {
        DAT_05725450 = PTR_DAT_04bb2020 + 0x10;
        DAT_05725458 = "@T_Clear_00";
        DAT_05725468 = "@T_Title_00";
        DAT_05725478 = "@T_New_00";
        DAT_05725488 = "@T_Guide_00";
        DAT_05725498 = "@T_Icon_00";
        DAT_05725460 = DAT_05725450;
        DAT_05725470 = DAT_05725450;
        DAT_05725480 = DAT_05725450;
        DAT_05725490 = DAT_05725450;
        __cxa_guard_release(&DAT_057254a0);
      }
      local_48 = &DAT_04b14ad0;
      local_40 = &DAT_05725438;
      lVar4 = puVar7[2];
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = lVar4 + 0x2c8;
      goto LAB_0324c85c;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05725350 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725350), iVar1 != 0)) {
    DAT_057252b0 = PTR_DAT_04bb2020 + 0x10;
    DAT_057252b8 = "WindowIn";
    DAT_057252c8 = &DAT_0407ebb1;
    DAT_057252e8 = &DAT_0407ebb1;
    DAT_05725308 = &DAT_0407ebb1;
    DAT_057252d8 = &DAT_040fe5ab;
    DAT_057252f8 = "PageDown";
    DAT_05725318 = "PageUp";
    DAT_05725328 = &DAT_0407ebb1;
    DAT_05725338 = "WindouOut";
    DAT_05725348 = &DAT_0407ebb1;
    DAT_057252c0 = DAT_057252b0;
    DAT_057252d0 = DAT_057252b0;
    DAT_057252e0 = DAT_057252b0;
    DAT_057252f0 = DAT_057252b0;
    DAT_05725300 = DAT_057252b0;
    DAT_05725310 = DAT_057252b0;
    DAT_05725320 = DAT_057252b0;
    DAT_05725330 = DAT_057252b0;
    DAT_05725340 = DAT_057252b0;
    __cxa_guard_release(&DAT_05725350);
  }
  if (((DAT_05725368 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725368), iVar1 != 0)) {
    DAT_05725358 = 0x500000002;
    DAT_05725360 = &DAT_057252b0;
    __cxa_guard_release(&DAT_05725368);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = (undefined *)0x0;
  uStack_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_40 = &DAT_05725358;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_0324c85c:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

