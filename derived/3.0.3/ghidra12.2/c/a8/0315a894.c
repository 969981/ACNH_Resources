
void FUN_0315a894(undefined8 param_1,undefined8 *param_2)

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
  if (pcVar5 == "") {
LAB_0315a8f4:
    if (((DAT_056fb398 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fb398), iVar1 != 0)) {
      DAT_056fb2f8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056fb300 = "CategoryNum";
      DAT_056fb310 = &DAT_0407ebb1;
      DAT_056fb330 = &DAT_0407ebb1;
      DAT_056fb350 = &DAT_0407ebb1;
      DAT_056fb320 = "Share";
      DAT_056fb340 = "CategorySOnOff";
      DAT_056fb360 = "CategoryNumS";
      DAT_056fb370 = &DAT_0407ebb1;
      DAT_056fb380 = "ChangeScrollType";
      DAT_056fb390 = &DAT_0407ebb1;
      DAT_056fb308 = DAT_056fb2f8;
      DAT_056fb318 = DAT_056fb2f8;
      DAT_056fb328 = DAT_056fb2f8;
      DAT_056fb338 = DAT_056fb2f8;
      DAT_056fb348 = DAT_056fb2f8;
      DAT_056fb358 = DAT_056fb2f8;
      DAT_056fb368 = DAT_056fb2f8;
      DAT_056fb378 = DAT_056fb2f8;
      DAT_056fb388 = DAT_056fb2f8;
      __cxa_guard_release(&DAT_056fb398);
    }
    if (((DAT_056fb3b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fb3b0), iVar1 != 0)) {
      DAT_056fb3a0 = 0x500000002;
      DAT_056fb3a8 = &DAT_056fb2f8;
      __cxa_guard_release(&DAT_056fb3b0);
    }
    if (((DAT_056fb3e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fb3e8), iVar1 != 0)) {
      DAT_056fb3b8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056fb3c0 = "@T_L_00";
      DAT_056fb3e0 = "@T_Icon_00";
      DAT_056fb3d0 = "@T_R_00";
      DAT_056fb3c8 = DAT_056fb3b8;
      DAT_056fb3d8 = DAT_056fb3b8;
      __cxa_guard_release(&DAT_056fb3e8);
    }
    if (((DAT_056fb410 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fb410), iVar1 != 0)) {
      DAT_056fb3f0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056fb3f8 = "N_Pos_00";
      DAT_056fb408 = "P_Icon_00";
      DAT_056fb400 = DAT_056fb3f0;
      __cxa_guard_release(&DAT_056fb410);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04b053b8;
    puStack_40 = &DAT_056fb3a0;
    puStack_50 = &DAT_04b053c8;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')) &&
            ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) &&
           (((pcVar5[6] == 'L' && ((pcVar5[7] == 'i' && (pcVar5[8] == 's')))) && (pcVar5[9] == 't'))
           )) && ((((pcVar5[10] == '_' && (pcVar5[0xb] == '0')) && (pcVar5[0xc] == '0')) &&
                  (((pcVar5[0xd] == '/' && (pcVar5[0xe] == 'L')) &&
                   ((pcVar5[0xf] == '_' && ((pcVar5[0x10] == 'B' && (pcVar5[0x11] == 't'))))))))))
         && ((pcVar5[0x12] == 'n' && (pcVar5[0x13] == '_')))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_056fb518 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fb518), iVar1 != 0))
          {
            DAT_056fb418 = PTR_DAT_04bb2020 + 0x10;
            DAT_056fb420 = "BtnListRandom";
            DAT_056fb430 = &DAT_0407ebb1;
            DAT_056fb450 = &DAT_0407ebb1;
            DAT_056fb470 = &DAT_0407ebb1;
            DAT_056fb440 = "Remake";
            DAT_056fb460 = "IconOff";
            DAT_056fb480 = "IconType";
            DAT_056fb4a0 = "EditType";
            DAT_056fb4c0 = "State";
            DAT_056fb4e0 = "WallType";
            DAT_056fb490 = &DAT_0407ebb1;
            DAT_056fb4b0 = &DAT_0407ebb1;
            DAT_056fb4d0 = &DAT_0407ebb1;
            DAT_056fb4f0 = &DAT_0407ebb1;
            DAT_056fb500 = "BtnType";
            DAT_056fb510 = &DAT_0407ebb1;
            DAT_056fb428 = DAT_056fb418;
            DAT_056fb438 = DAT_056fb418;
            DAT_056fb448 = DAT_056fb418;
            DAT_056fb458 = DAT_056fb418;
            DAT_056fb468 = DAT_056fb418;
            DAT_056fb478 = DAT_056fb418;
            DAT_056fb488 = DAT_056fb418;
            DAT_056fb498 = DAT_056fb418;
            DAT_056fb4a8 = DAT_056fb418;
            DAT_056fb4b8 = DAT_056fb418;
            DAT_056fb4c8 = DAT_056fb418;
            DAT_056fb4d8 = DAT_056fb418;
            DAT_056fb4e8 = DAT_056fb418;
            DAT_056fb4f8 = DAT_056fb418;
            DAT_056fb508 = DAT_056fb418;
            __cxa_guard_release(&DAT_056fb518);
          }
          if (((DAT_056fb530 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fb530), iVar1 != 0))
          {
            DAT_056fb520 = 0x800000002;
            DAT_056fb528 = &DAT_056fb418;
            __cxa_guard_release(&DAT_056fb530);
          }
          if (((DAT_056fb548 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fb548), iVar1 != 0))
          {
            DAT_056fb538 = PTR_DAT_04bb2020 + 0x10;
            DAT_056fb540 = "P_Icon_00";
            __cxa_guard_release(&DAT_056fb548);
          }
          local_58 = *param_2;
          local_48 = (undefined *)0x0;
          puStack_40 = &DAT_056fb520;
          puStack_50 = &DAT_04b053d8;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_0315a980;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_0315a8f4;
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
    if (pcVar5[3] != 'G') {
      return;
    }
    if (pcVar5[4] != 'e') {
      return;
    }
    if (pcVar5[5] != 'n') {
      return;
    }
    if (pcVar5[6] != 'r') {
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
    if (((DAT_056fb570 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fb570), iVar1 != 0)) {
      DAT_056fb550 = PTR_DAT_04bb2020 + 0x10;
      DAT_056fb558 = "Select";
      DAT_056fb568 = &DAT_0407ebb1;
      DAT_056fb560 = DAT_056fb550;
      __cxa_guard_release(&DAT_056fb570);
    }
    if (((DAT_056fb588 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fb588), iVar1 != 0)) {
      DAT_056fb578 = 0x100000002;
      DAT_056fb580 = &DAT_056fb550;
      __cxa_guard_release(&DAT_056fb588);
    }
    if (((DAT_056fb5a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fb5a0), iVar1 != 0)) {
      DAT_056fb590 = PTR_DAT_04bb2020 + 0x10;
      DAT_056fb598 = "@T_Key_00";
      __cxa_guard_release(&DAT_056fb5a0);
    }
    if (((DAT_056fb5b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fb5b8), iVar1 != 0)) {
      DAT_056fb5a8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056fb5b0 = "P_Icon_00";
      __cxa_guard_release(&DAT_056fb5b8);
    }
    local_58 = *param_2;
    local_48 = &DAT_04b053e8;
    puStack_40 = &DAT_056fb578;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_50 = &DAT_04b053f8;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_0315a980:
  local_38 = 1;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

