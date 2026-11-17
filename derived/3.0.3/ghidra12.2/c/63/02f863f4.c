
void FUN_02f863f4(undefined8 param_1,undefined8 *param_2)

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
LAB_02f86454:
    if (((DAT_056c99f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c99f0), iVar1 != 0)) {
      DAT_056c9910 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c9918 = "Replace";
      DAT_056c9928 = &DAT_0407ebb1;
      DAT_056c9938 = "TextIn";
      DAT_056c9958 = "TextOut";
      DAT_056c9978 = "WindowOut";
      DAT_056c9998 = "WindowOut";
      DAT_056c9948 = &DAT_0407ebb1;
      DAT_056c9968 = &DAT_0407ebb1;
      DAT_056c9988 = "$G_InOut_00";
      DAT_056c99a8 = "$G_Replace_00";
      DAT_056c99b8 = "WindowIn";
      DAT_056c99c8 = "$G_InOut_00";
      DAT_056c99d8 = "WindowIn";
      DAT_056c99e8 = "$G_Replace_00";
      DAT_056c9920 = DAT_056c9910;
      DAT_056c9930 = DAT_056c9910;
      DAT_056c9940 = DAT_056c9910;
      DAT_056c9950 = DAT_056c9910;
      DAT_056c9960 = DAT_056c9910;
      DAT_056c9970 = DAT_056c9910;
      DAT_056c9980 = DAT_056c9910;
      DAT_056c9990 = DAT_056c9910;
      DAT_056c99a0 = DAT_056c9910;
      DAT_056c99b0 = DAT_056c9910;
      DAT_056c99c0 = DAT_056c9910;
      DAT_056c99d0 = DAT_056c9910;
      DAT_056c99e0 = DAT_056c9910;
      __cxa_guard_release(&DAT_056c99f0);
    }
    if (((DAT_056c9a08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c9a08), iVar1 != 0)) {
      DAT_056c99f8 = 0x700000002;
      DAT_056c9a00 = &DAT_056c9910;
      __cxa_guard_release(&DAT_056c9a08);
    }
    if (((DAT_056c9a20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c9a20), iVar1 != 0)) {
      DAT_056c9a10 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c9a18 = "@T_Text_00";
      __cxa_guard_release(&DAT_056c9a20);
    }
    if (((DAT_056c9a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c9a38), iVar1 != 0)) {
      DAT_056c9a28 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c9a30 = "P_Photo_00";
      __cxa_guard_release(&DAT_056c9a38);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04ae74a0;
    local_40 = &DAT_056c99f8;
    local_38 = 1;
    local_50 = &DAT_04ae74b0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_02f864e0;
  }
  if (*pcVar5 == '/') {
    if (((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'B')) ||
        ((pcVar5[4] != 't' || (pcVar5[5] != 'n')))) || (pcVar5[6] != '_')) goto LAB_02f865d8;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) == 0)) goto LAB_02f865d8;
    if (((DAT_056c9a80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c9a80), iVar1 != 0)) {
      DAT_056c9a40 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c9a48 = "Replace";
      DAT_056c9a58 = &DAT_0407ebb1;
      DAT_056c9a78 = &DAT_0407ebb1;
      DAT_056c9a68 = "EquipIn";
      DAT_056c9a50 = DAT_056c9a40;
      DAT_056c9a60 = DAT_056c9a40;
      DAT_056c9a70 = DAT_056c9a40;
      __cxa_guard_release(&DAT_056c9a80);
    }
    if (((DAT_056c9a98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c9a98), iVar1 != 0)) {
      DAT_056c9a88 = 0x200000002;
      DAT_056c9a90 = &DAT_056c9a40;
      __cxa_guard_release(&DAT_056c9a98);
    }
    if (((DAT_056c9ab0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c9ab0), iVar1 != 0)) {
      DAT_056c9aa0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c9aa8 = "P_Photo_00";
      __cxa_guard_release(&DAT_056c9ab0);
    }
    local_58 = *param_2;
    local_48 = (undefined *)0x0;
    local_40 = &DAT_056c9a88;
    local_38 = 1;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04ae74c0;
LAB_02f865cc:
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x2c8;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_02f86454;
LAB_02f865d8:
    pcVar5 = (char *)param_2[5];
    if ((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'P')))) &&
        ((((pcVar5[4] == 'h' && (pcVar5[5] == 'o')) && (pcVar5[6] == 't')) &&
         ((pcVar5[7] == 'o' && (pcVar5[8] == 'B')))))) &&
       ((pcVar5[9] == 't' && ((pcVar5[10] == 'n' && (pcVar5[0xb] == '_')))))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
        if (((DAT_056c9ac8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c9ac8), iVar1 != 0)) {
          DAT_056c9ab8 = PTR_DAT_04bb2020 + 0x10;
          DAT_056c9ac0 = "@T_Text_00";
          __cxa_guard_release(&DAT_056c9ac8);
        }
        local_58 = *param_2;
        local_38 = 0;
        local_48 = &DAT_04ae74d0;
        local_40 = (undefined8 *)0x0;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_50 = (undefined *)0x0;
        goto LAB_02f865cc;
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
    if (pcVar5[4] != 'g') {
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
    local_40 = (undefined8 *)0x0;
    local_50 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_38 = 0;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_02f864e0:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

