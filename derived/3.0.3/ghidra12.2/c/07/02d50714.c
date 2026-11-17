
void FUN_02d50714(undefined8 param_1,undefined8 *param_2)

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
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_02d50774:
    if (((DAT_05680938 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05680938), iVar1 != 0)) {
      DAT_05680918 = PTR_DAT_04bb2020 + 0x10;
      DAT_05680920 = "ChangeModeExterior";
      DAT_05680930 = &DAT_0407ebb1;
      DAT_05680928 = DAT_05680918;
      __cxa_guard_release(&DAT_05680938);
    }
    if (((DAT_05680950 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05680950), iVar1 != 0)) {
      DAT_05680940 = 0x100000002;
      DAT_05680948 = &DAT_05680918;
      __cxa_guard_release(&DAT_05680950);
    }
    if (((DAT_05680968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05680968), iVar1 != 0)) {
      DAT_05680958 = PTR_DAT_04bb2020 + 0x10;
      DAT_05680960 = "@T_Icon_01";
      __cxa_guard_release(&DAT_05680968);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04ac09a0;
    puStack_40 = &DAT_05680940;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if ((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'F')) &&
           ((pcVar5[4] == 'e' && (pcVar5[5] == 'n')))) &&
          ((pcVar5[6] == 'c' && ((pcVar5[7] == 'e' && (pcVar5[8] == 'G')))))) &&
         ((pcVar5[9] == 'u' &&
          ((((pcVar5[10] == 'i' && (pcVar5[0xb] == 'd')) && (pcVar5[0xc] == 'e')) &&
           (pcVar5[0xd] == '_')))))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4ff0);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) != 0)) {
          if (((DAT_05680990 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05680990), iVar1 != 0))
          {
            DAT_05680970 = PTR_DAT_04bb2020 + 0x10;
            DAT_05680978 = "Pattern";
            DAT_05680988 = &DAT_0407ebb1;
            DAT_05680980 = DAT_05680970;
            __cxa_guard_release(&DAT_05680990);
          }
          if (((DAT_056809a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056809a8), iVar1 != 0))
          {
            DAT_05680998 = 0x100000002;
            DAT_056809a0 = &DAT_05680970;
            __cxa_guard_release(&DAT_056809a8);
          }
          if (((DAT_056809c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056809c0), iVar1 != 0))
          {
            DAT_056809b0 = PTR_DAT_04bb2020 + 0x10;
            DAT_056809b8 = "@T_X_00";
            __cxa_guard_release(&DAT_056809c0);
          }
          if (((DAT_056809d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056809d8), iVar1 != 0))
          {
            DAT_056809c8 = PTR_DAT_04bb2020 + 0x10;
            DAT_056809d0 = "P_Icon_00";
            __cxa_guard_release(&DAT_056809d8);
          }
          local_58 = *param_2;
          local_38 = 1;
          local_48 = &DAT_04ac09b0;
          puStack_40 = &DAT_05680998;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_50 = &DAT_04ac09c0;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x208;
          goto LAB_02d507e4;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02d50774;
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
    if (pcVar5[3] != 'R') {
      return;
    }
    if (pcVar5[4] != 'o') {
      return;
    }
    if (pcVar5[5] != 'a') {
      return;
    }
    if (pcVar5[6] != 'd') {
      return;
    }
    if (pcVar5[7] != '_') {
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
    if (((DAT_05680a00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05680a00), iVar1 != 0)) {
      DAT_056809e0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056809e8 = "Share";
      DAT_056809f8 = &DAT_0407ebb1;
      DAT_056809f0 = DAT_056809e0;
      __cxa_guard_release(&DAT_05680a00);
    }
    if (((DAT_05680a18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05680a18), iVar1 != 0)) {
      DAT_05680a08 = 0x100000002;
      DAT_05680a10 = &DAT_056809e0;
      __cxa_guard_release(&DAT_05680a18);
    }
    if (((DAT_05680a30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05680a30), iVar1 != 0)) {
      DAT_05680a20 = PTR_DAT_04bb2020 + 0x10;
      DAT_05680a28 = "@T_Icon_00";
      __cxa_guard_release(&DAT_05680a30);
    }
    local_38 = 0;
    local_50 = (undefined *)0x0;
    local_48 = &DAT_04ac09d0;
    puStack_40 = &DAT_05680a08;
    lVar4 = puVar7[2];
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x2c8;
  }
LAB_02d507e4:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

