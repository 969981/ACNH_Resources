
void FUN_030079cc(undefined8 param_1,undefined8 *param_2)

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
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_03007a2c:
    if (((DAT_056d6a60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6a60), iVar1 != 0)) {
      DAT_056d6a30 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d6a38 = "@T_Text_00";
      DAT_056d6a58 = "@T_Text_02";
      DAT_056d6a48 = "@T_Text_01";
      DAT_056d6a40 = DAT_056d6a30;
      DAT_056d6a50 = DAT_056d6a30;
      __cxa_guard_release(&DAT_056d6a60);
    }
    if (((DAT_056d6a78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6a78), iVar1 != 0)) {
      DAT_056d6a68 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d6a70 = "P_NowColor_00";
      __cxa_guard_release(&DAT_056d6a78);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04af1b10;
    puStack_40 = (undefined8 *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_50 = &DAT_04af1b20;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_03007a90;
  }
  if (*pcVar5 == '/') {
    if ((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'C')) ||
         ((pcVar5[4] != 'o' || (pcVar5[5] != 'l')))) || (pcVar5[6] != 'o')) ||
       (((pcVar5[7] != 'r' || (pcVar5[8] != 'B')) ||
        ((pcVar5[9] != 'a' ||
         (((pcVar5[10] != 'r' || (pcVar5[0xb] != 'H')) || (pcVar5[0xc] != '_'))))))))
    goto LAB_03007ba8;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc52c8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc52c8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc52c0 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc52c8);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc52c0), (uVar3 & 1) == 0)) goto LAB_03007ba8;
    if (((DAT_056d6ac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6ac0), iVar1 != 0)) {
      DAT_056d6a80 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d6a88 = "Invalid";
      DAT_056d6a98 = &DAT_0407ebb1;
      DAT_056d6ab8 = &DAT_0407ebb1;
      DAT_056d6aa8 = "Volume";
      DAT_056d6a90 = DAT_056d6a80;
      DAT_056d6aa0 = DAT_056d6a80;
      DAT_056d6ab0 = DAT_056d6a80;
      __cxa_guard_release(&DAT_056d6ac0);
    }
    puVar8 = &DAT_056d6ac8;
    if (((DAT_056d6ad8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6ad8), iVar1 != 0)) {
      DAT_056d6ac8 = 0x200000002;
      DAT_056d6ad0 = &DAT_056d6a80;
      __cxa_guard_release(&DAT_056d6ad8);
    }
    if (((DAT_056d6af0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6af0), iVar1 != 0)) {
      DAT_056d6ae0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d6ae8 = "P_ScrollBar_00";
      __cxa_guard_release(&DAT_056d6af0);
    }
    puStack_50 = &DAT_04af1b30;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_03007a2c;
LAB_03007ba8:
    pcVar5 = (char *)param_2[5];
    if ((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'C')))) &&
        ((((pcVar5[4] == 'o' && (pcVar5[5] == 'l')) && (pcVar5[6] == 'o')) &&
         ((pcVar5[7] == 'r' && (pcVar5[8] == 'B')))))) &&
       ((pcVar5[9] == 'a' && (((pcVar5[10] == 'r' && (pcVar5[0xb] == 'S')) && (pcVar5[0xc] == '_')))
        ))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc52c8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc52c8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc52c0 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc52c8);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc52c0), (uVar3 & 1) != 0)) {
        if (((DAT_056d6b38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6b38), iVar1 != 0)) {
          DAT_056d6af8 = PTR_DAT_04bb2020 + 0x10;
          DAT_056d6b00 = "Invalid";
          DAT_056d6b10 = &DAT_0407ebb1;
          DAT_056d6b30 = &DAT_0407ebb1;
          DAT_056d6b20 = "Volume";
          DAT_056d6b08 = DAT_056d6af8;
          DAT_056d6b18 = DAT_056d6af8;
          DAT_056d6b28 = DAT_056d6af8;
          __cxa_guard_release(&DAT_056d6b38);
        }
        puVar8 = &DAT_056d6b40;
        if (((DAT_056d6b50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6b50), iVar1 != 0)) {
          DAT_056d6b40 = 0x200000002;
          DAT_056d6b48 = &DAT_056d6af8;
          __cxa_guard_release(&DAT_056d6b50);
        }
        if (((DAT_056d6b68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6b68), iVar1 != 0)) {
          DAT_056d6b58 = PTR_DAT_04bb2020 + 0x10;
          DAT_056d6b60 = "P_ScrollBar_00";
          __cxa_guard_release(&DAT_056d6b68);
        }
        puStack_50 = &DAT_04af1b40;
        goto LAB_03007ddc;
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
    if (pcVar5[3] != 'C') {
      return;
    }
    if (pcVar5[4] != 'o') {
      return;
    }
    if (pcVar5[5] != 'l') {
      return;
    }
    if (pcVar5[6] != 'o') {
      return;
    }
    if (pcVar5[7] != 'r') {
      return;
    }
    if (pcVar5[8] != 'B') {
      return;
    }
    if (pcVar5[9] != 'a') {
      return;
    }
    if (pcVar5[10] != 'r') {
      return;
    }
    if (pcVar5[0xb] != 'V') {
      return;
    }
    if (pcVar5[0xc] != '_') {
      return;
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc52c8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc52c8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc52c0 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc52c8);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc52c0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_056d6bb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6bb0), iVar1 != 0)) {
      DAT_056d6b70 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d6b78 = "Invalid";
      DAT_056d6b88 = &DAT_0407ebb1;
      DAT_056d6ba8 = &DAT_0407ebb1;
      DAT_056d6b98 = "Volume";
      DAT_056d6b80 = DAT_056d6b70;
      DAT_056d6b90 = DAT_056d6b70;
      DAT_056d6ba0 = DAT_056d6b70;
      __cxa_guard_release(&DAT_056d6bb0);
    }
    puVar8 = &DAT_056d6bb8;
    if (((DAT_056d6bc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6bc8), iVar1 != 0)) {
      DAT_056d6bb8 = 0x200000002;
      DAT_056d6bc0 = &DAT_056d6b70;
      __cxa_guard_release(&DAT_056d6bc8);
    }
    if (((DAT_056d6be0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6be0), iVar1 != 0)) {
      DAT_056d6bd0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d6bd8 = "P_ScrollBar_00";
      __cxa_guard_release(&DAT_056d6be0);
    }
    puStack_50 = &DAT_04af1b50;
  }
LAB_03007ddc:
  local_58 = *param_2;
  local_48 = (undefined *)0x0;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x2c8;
  puStack_40 = puVar8;
LAB_03007a90:
  local_38 = 1;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

