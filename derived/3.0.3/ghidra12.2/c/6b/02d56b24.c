
void FUN_02d56b24(undefined8 param_1,undefined8 *param_2)

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
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_02d56b84:
    if (((DAT_05682400 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682400), iVar1 != 0)) {
      DAT_056822a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056822a8 = &DAT_040fe5ab;
      DAT_056822b8 = &DAT_0407ebb1;
      DAT_056822d8 = &DAT_0407ebb1;
      DAT_056822f8 = &DAT_0407ebb1;
      DAT_056822c8 = "CategoryType";
      DAT_056822e8 = "Share";
      DAT_05682308 = "Empty";
      DAT_05682328 = "GuideType";
      DAT_05682348 = "VisibleOff";
      DAT_05682368 = "VisibleOn";
      DAT_05682388 = "ContentsOut";
      DAT_056823a8 = "ContentsIn";
      DAT_056823c8 = "MyDesignIn";
      DAT_05682318 = &DAT_0407ebb1;
      DAT_05682338 = &DAT_0407ebb1;
      DAT_05682358 = &DAT_0407ebb1;
      DAT_05682378 = &DAT_0407ebb1;
      DAT_05682398 = &DAT_0407ebb1;
      DAT_056823b8 = &DAT_0407ebb1;
      DAT_056823d8 = &DAT_0407ebb1;
      DAT_056823e8 = "MyDesignOut";
      DAT_056823f8 = &DAT_0407ebb1;
      DAT_056822b0 = DAT_056822a0;
      DAT_056822c0 = DAT_056822a0;
      DAT_056822d0 = DAT_056822a0;
      DAT_056822e0 = DAT_056822a0;
      DAT_056822f0 = DAT_056822a0;
      DAT_05682300 = DAT_056822a0;
      DAT_05682310 = DAT_056822a0;
      DAT_05682320 = DAT_056822a0;
      DAT_05682330 = DAT_056822a0;
      DAT_05682340 = DAT_056822a0;
      DAT_05682350 = DAT_056822a0;
      DAT_05682360 = DAT_056822a0;
      DAT_05682370 = DAT_056822a0;
      DAT_05682380 = DAT_056822a0;
      DAT_05682390 = DAT_056822a0;
      DAT_056823a0 = DAT_056822a0;
      DAT_056823b0 = DAT_056822a0;
      DAT_056823c0 = DAT_056822a0;
      DAT_056823d0 = DAT_056822a0;
      DAT_056823e0 = DAT_056822a0;
      DAT_056823f0 = DAT_056822a0;
      __cxa_guard_release(&DAT_05682400);
    }
    if (((DAT_05682418 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682418), iVar1 != 0)) {
      DAT_05682408 = 0xb00000002;
      DAT_05682410 = &DAT_056822a0;
      __cxa_guard_release(&DAT_05682418);
    }
    if (((DAT_05682460 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682460), iVar1 != 0)) {
      DAT_05682420 = PTR_DAT_04bb2020 + 0x10;
      DAT_05682428 = "@T_L_00";
      DAT_05682458 = "@T_Empty_00";
      DAT_05682438 = "@T_R_00";
      DAT_05682448 = "@T_Title_00";
      DAT_05682430 = DAT_05682420;
      DAT_05682440 = DAT_05682420;
      DAT_05682450 = DAT_05682420;
      __cxa_guard_release(&DAT_05682460);
    }
    if (((DAT_05682488 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682488), iVar1 != 0)) {
      DAT_05682468 = PTR_DAT_04bb2020 + 0x10;
      DAT_05682470 = "N_Icon_00";
      DAT_05682480 = "N_SubWin_00";
      DAT_05682478 = DAT_05682468;
      __cxa_guard_release(&DAT_05682488);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04ac0ef0;
    puStack_40 = &DAT_05682408;
    local_38 = 0;
    local_50 = &DAT_04ac0f00;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_02d56c0c;
  }
  if (*pcVar5 == '/') {
    if (((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'I')) ||
          ((pcVar5[4] != 't' || (pcVar5[5] != 'e')))) || (pcVar5[6] != 'm')) ||
        (((pcVar5[7] != 'B' || (pcVar5[8] != 'a')) ||
         ((pcVar5[9] != 'l' ||
          (((pcVar5[10] != 'l' || (pcVar5[0xb] != 'o')) || (pcVar5[0xc] != 'o')))))))) ||
       ((pcVar5[0xd] != 'n' || (pcVar5[0xe] != '_')))) goto LAB_02d56d80;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4fe0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fd8), (uVar3 & 1) == 0)) goto LAB_02d56d80;
    if (((DAT_056824f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056824f0), iVar1 != 0)) {
      DAT_05682490 = PTR_DAT_04bb2020 + 0x10;
      DAT_05682498 = "Guide";
      DAT_056824a8 = &DAT_0407ebb1;
      DAT_056824c8 = &DAT_0407ebb1;
      DAT_056824e8 = &DAT_0407ebb1;
      DAT_056824b8 = "NumRotate";
      DAT_056824d8 = &DAT_04082ff4;
      DAT_056824a0 = DAT_05682490;
      DAT_056824b0 = DAT_05682490;
      DAT_056824c0 = DAT_05682490;
      DAT_056824d0 = DAT_05682490;
      DAT_056824e0 = DAT_05682490;
      __cxa_guard_release(&DAT_056824f0);
    }
    if (((DAT_05682508 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682508), iVar1 != 0)) {
      DAT_056824f8 = 0x300000002;
      DAT_05682500 = &DAT_05682490;
      __cxa_guard_release(&DAT_05682508);
    }
    if (((DAT_05682530 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682530), iVar1 != 0)) {
      DAT_05682510 = PTR_DAT_04bb2020 + 0x10;
      DAT_05682518 = "@T_Guide_00";
      DAT_05682528 = "@T_Icon_00";
      DAT_05682520 = DAT_05682510;
      __cxa_guard_release(&DAT_05682530);
    }
    if (((DAT_05682548 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682548), iVar1 != 0)) {
      DAT_05682538 = PTR_DAT_04bb2020 + 0x10;
      DAT_05682540 = "P_TextSize_00";
      __cxa_guard_release(&DAT_05682548);
    }
    local_58 = *param_2;
    local_38 = 1;
    local_48 = &DAT_04ac0f10;
    puStack_40 = &DAT_056824f8;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04ac0f20;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_02d56b84;
LAB_02d56d80:
    pcVar5 = (char *)param_2[5];
    if (((*pcVar5 != '/') || (((pcVar5[1] != 'L' || (pcVar5[2] != '_')) || (pcVar5[3] != 'E')))) ||
       (((((pcVar5[4] != 'x' || (pcVar5[5] != 'c')) || (pcVar5[6] != 'h')) ||
         ((pcVar5[7] != 'S' || (pcVar5[8] != 'w')))) ||
        ((pcVar5[9] != 'i' ||
         ((((pcVar5[10] != 't' || (pcVar5[0xb] != 'c')) || (pcVar5[0xc] != 'h')) ||
          (pcVar5[0xd] != '_')))))))) {
LAB_02d56ed8:
      pcVar5 = (char *)param_2[5];
      if ((((((*pcVar5 == '/') && (pcVar5[1] == 'L')) && (pcVar5[2] == '_')) &&
           (((pcVar5[3] == 'F' && (pcVar5[4] == 'a')) &&
            ((pcVar5[5] == 'b' && ((pcVar5[6] == 'r' && (pcVar5[7] == 'i')))))))) &&
          ((pcVar5[8] == 'c' &&
           (((pcVar5[9] == 'S' && (pcVar5[10] == 'w')) && (pcVar5[0xb] == 'i')))))) &&
         (((pcVar5[0xc] == 't' && (pcVar5[0xd] == 'c')) &&
          ((pcVar5[0xe] == 'h' && (pcVar5[0xf] == '_')))))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4ff0);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) != 0)) {
          if (((DAT_05682608 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682608), iVar1 != 0))
          {
            DAT_056825c8 = PTR_DAT_04bb2020 + 0x10;
            DAT_056825d0 = "Decide";
            DAT_056825e0 = &DAT_0407ebb1;
            DAT_05682600 = &DAT_0407ebb1;
            DAT_056825f0 = "Share";
            DAT_056825d8 = DAT_056825c8;
            DAT_056825e8 = DAT_056825c8;
            DAT_056825f8 = DAT_056825c8;
            __cxa_guard_release(&DAT_05682608);
          }
          puVar8 = &DAT_05682610;
          if (((DAT_05682620 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682620), iVar1 != 0))
          {
            DAT_05682610 = 0x200000002;
            DAT_05682618 = &DAT_056825c8;
            __cxa_guard_release(&DAT_05682620);
          }
          if (((DAT_05682638 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682638), iVar1 != 0))
          {
            DAT_05682628 = PTR_DAT_04bb2020 + 0x10;
            DAT_05682630 = "@T_Icon_00";
            __cxa_guard_release(&DAT_05682638);
          }
          local_48 = &DAT_04ac0f40;
          goto LAB_02d56eb0;
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
      if (((DAT_05682740 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682740), iVar1 != 0)) {
        DAT_05682640 = PTR_DAT_04bb2020 + 0x10;
        DAT_05682648 = "Check";
        DAT_05682658 = &DAT_0407ebb1;
        DAT_05682678 = &DAT_0407ebb1;
        DAT_05682698 = &DAT_0407ebb1;
        DAT_05682668 = &DAT_040d4018;
        DAT_05682688 = "Cloth";
        DAT_056826a8 = &DAT_040fe5ab;
        DAT_056826c8 = "Shake";
        DAT_056826e8 = "IconType";
        DAT_05682708 = "UploadType";
        DAT_056826b8 = &DAT_0407ebb1;
        DAT_056826d8 = &DAT_0407ebb1;
        DAT_056826f8 = &DAT_0407ebb1;
        DAT_05682718 = &DAT_0407ebb1;
        DAT_05682728 = "CheckIconType";
        DAT_05682738 = &DAT_0407ebb1;
        DAT_05682650 = DAT_05682640;
        DAT_05682660 = DAT_05682640;
        DAT_05682670 = DAT_05682640;
        DAT_05682680 = DAT_05682640;
        DAT_05682690 = DAT_05682640;
        DAT_056826a0 = DAT_05682640;
        DAT_056826b0 = DAT_05682640;
        DAT_056826c0 = DAT_05682640;
        DAT_056826d0 = DAT_05682640;
        DAT_056826e0 = DAT_05682640;
        DAT_056826f0 = DAT_05682640;
        DAT_05682700 = DAT_05682640;
        DAT_05682710 = DAT_05682640;
        DAT_05682720 = DAT_05682640;
        DAT_05682730 = DAT_05682640;
        __cxa_guard_release(&DAT_05682740);
      }
      if (((DAT_05682758 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682758), iVar1 != 0)) {
        DAT_05682748 = 0x800000002;
        DAT_05682750 = &DAT_05682640;
        __cxa_guard_release(&DAT_05682758);
      }
      if (((DAT_05682770 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682770), iVar1 != 0)) {
        DAT_05682760 = PTR_DAT_04bb2020 + 0x10;
        DAT_05682768 = "P_Tex_00";
        __cxa_guard_release(&DAT_05682770);
      }
      local_58 = *param_2;
      local_48 = (undefined *)0x0;
      puStack_40 = &DAT_05682748;
      local_38 = 1;
      local_50 = &DAT_04ac0f50;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02d56c0c;
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0)) goto LAB_02d56ed8;
    if (((DAT_05682590 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05682590), iVar1 != 0)) {
      DAT_05682550 = PTR_DAT_04bb2020 + 0x10;
      DAT_05682558 = "Decide";
      DAT_05682568 = &DAT_0407ebb1;
      DAT_05682588 = &DAT_0407ebb1;
      DAT_05682578 = "Share";
      DAT_05682560 = DAT_05682550;
      DAT_05682570 = DAT_05682550;
      DAT_05682580 = DAT_05682550;
      __cxa_guard_release(&DAT_05682590);
    }
    puVar8 = &DAT_05682598;
    if (((DAT_056825a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056825a8), iVar1 != 0)) {
      DAT_05682598 = 0x200000002;
      DAT_056825a0 = &DAT_05682550;
      __cxa_guard_release(&DAT_056825a8);
    }
    if (((DAT_056825c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056825c0), iVar1 != 0)) {
      DAT_056825b0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056825b8 = "@T_Icon_00";
      __cxa_guard_release(&DAT_056825c0);
    }
    local_48 = &DAT_04ac0f30;
LAB_02d56eb0:
    local_58 = *param_2;
    local_38 = 0;
    local_50 = (undefined *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_40 = puVar8;
  }
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
LAB_02d56c0c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

