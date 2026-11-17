
void FUN_02be0bf4(undefined8 param_1,undefined8 *param_2)

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
LAB_02be0c54:
    if (((DAT_056477f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056477f8), iVar1 != 0)) {
      DAT_05647758 = PTR_DAT_04bb2020 + 0x10;
      DAT_05647760 = "MusicOnOff";
      DAT_05647770 = &DAT_0407ebb1;
      DAT_05647790 = &DAT_0407ebb1;
      DAT_056477b0 = &DAT_0407ebb1;
      DAT_05647780 = "Volume";
      DAT_056477a0 = "TitleLoop";
      DAT_056477c0 = "ShuffleOnOff";
      DAT_056477d0 = &DAT_0407ebb1;
      DAT_056477e0 = "Empty";
      DAT_056477f0 = &DAT_0407ebb1;
      DAT_05647768 = DAT_05647758;
      DAT_05647778 = DAT_05647758;
      DAT_05647788 = DAT_05647758;
      DAT_05647798 = DAT_05647758;
      DAT_056477a8 = DAT_05647758;
      DAT_056477b8 = DAT_05647758;
      DAT_056477c8 = DAT_05647758;
      DAT_056477d8 = DAT_05647758;
      DAT_056477e8 = DAT_05647758;
      __cxa_guard_release(&DAT_056477f8);
    }
    if (((DAT_05647810 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05647810), iVar1 != 0)) {
      DAT_05647800 = 0x500000002;
      DAT_05647808 = &DAT_05647758;
      __cxa_guard_release(&DAT_05647810);
    }
    if (((DAT_05647838 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05647838), iVar1 != 0)) {
      DAT_05647818 = PTR_DAT_04bb2020 + 0x10;
      DAT_05647820 = "@T_Name_01";
      DAT_05647830 = "@T_Empty_00";
      DAT_05647828 = DAT_05647818;
      __cxa_guard_release(&DAT_05647838);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04aaaca8;
    puStack_40 = &DAT_05647800;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
    goto LAB_02be0cc4;
  }
  if (*pcVar5 == '/') {
    if (((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'B')) ||
          ((pcVar5[4] != 't' || (pcVar5[5] != 'n')))) ||
         (((pcVar5[6] != 'L' || ((pcVar5[7] != 'i' || (pcVar5[8] != 's')))) || (pcVar5[9] != 't'))))
        || ((((pcVar5[10] != '_' || (pcVar5[0xb] != '0')) || (pcVar5[0xc] != '0')) ||
            (((pcVar5[0xd] != '/' || (pcVar5[0xe] != 'L')) ||
             ((pcVar5[0xf] != '_' || ((pcVar5[0x10] != 'B' || (pcVar5[0x11] != 't')))))))))) ||
       ((pcVar5[0x12] != 'n' || (pcVar5[0x13] != '_')))) goto LAB_02be0e6c;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) == 0)) goto LAB_02be0e6c;
    if (((DAT_05647860 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05647860), iVar1 != 0)) {
      DAT_05647840 = PTR_DAT_04bb2020 + 0x10;
      DAT_05647848 = &DAT_040f4153;
      DAT_05647858 = &DAT_0407ebb1;
      DAT_05647850 = DAT_05647840;
      __cxa_guard_release(&DAT_05647860);
    }
    if (((DAT_05647878 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05647878), iVar1 != 0)) {
      DAT_05647868 = 0x100000002;
      DAT_05647870 = &DAT_05647840;
      __cxa_guard_release(&DAT_05647878);
    }
    if (((DAT_05647890 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05647890), iVar1 != 0)) {
      DAT_05647880 = PTR_DAT_04bb2020 + 0x10;
      DAT_05647888 = "@T_Text_00";
      __cxa_guard_release(&DAT_05647890);
    }
    if (((DAT_056478a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056478a8), iVar1 != 0)) {
      DAT_05647898 = PTR_DAT_04bb2020 + 0x10;
      DAT_056478a0 = "P_Icon_00";
      __cxa_guard_release(&DAT_056478a8);
    }
    local_58 = *param_2;
    local_38 = 1;
    local_48 = &DAT_04aaacb8;
    puStack_40 = &DAT_05647868;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04aaacc8;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_02be0c54;
LAB_02be0e6c:
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
    if (pcVar5[3] != 'V') {
      return;
    }
    if (pcVar5[4] != 'o') {
      return;
    }
    if (pcVar5[5] != 'l') {
      return;
    }
    if (pcVar5[6] != 'u') {
      return;
    }
    if (pcVar5[7] != 'm') {
      return;
    }
    if (pcVar5[8] != 'e') {
      return;
    }
    if (pcVar5[9] != '_') {
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
    if (((DAT_056478c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056478c0), iVar1 != 0)) {
      DAT_056478b0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056478b8 = "@T_Icon_00";
      __cxa_guard_release(&DAT_056478c0);
    }
    local_58 = *param_2;
    local_38 = 0;
    local_48 = &DAT_04aaacd8;
    puStack_40 = (undefined8 *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = (undefined *)0x0;
  }
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x2c8;
LAB_02be0cc4:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

