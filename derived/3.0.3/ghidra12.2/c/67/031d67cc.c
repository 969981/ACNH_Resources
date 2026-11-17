
void FUN_031d67cc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_031d682c:
    if (((DAT_05719a68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05719a68), iVar1 != 0)) {
      DAT_05719a58 = PTR_DAT_04bb2020 + 0x10;
      DAT_05719a60 = "L_RingMenu_00";
      __cxa_guard_release(&DAT_05719a68);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_38 = 0;
    puStack_40 = (undefined8 *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_50 = &DAT_04b0bab0;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if ((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'R')) &&
           ((pcVar5[4] == 'i' && (pcVar5[5] == 'n')))) &&
          ((((pcVar5[6] == 'g' && ((pcVar5[7] == 'M' && (pcVar5[8] == 'e')))) && (pcVar5[9] == 'n'))
           && ((((pcVar5[10] == 'u' && (pcVar5[0xb] == '_')) && (pcVar5[0xc] == '0')) &&
               (((pcVar5[0xd] == '0' && (pcVar5[0xe] == '/')) &&
                ((pcVar5[0xf] == 'L' && ((pcVar5[0x10] == '_' && (pcVar5[0x11] == 'B')))))))))))) &&
         ((pcVar5[0x12] == 't' && ((pcVar5[0x13] == 'n' && (pcVar5[0x14] == '_')))))) {
        puVar6 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar6 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_05719ad0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05719ad0), iVar1 != 0))
          {
            DAT_05719a70 = PTR_DAT_04bb2020 + 0x10;
            DAT_05719a78 = "InvAnim";
            DAT_05719a88 = &DAT_0407ebb1;
            DAT_05719aa8 = &DAT_0407ebb1;
            DAT_05719a98 = "Confirm";
            DAT_05719ab8 = "IconOff";
            DAT_05719ac8 = &DAT_0407ebb1;
            DAT_05719a80 = DAT_05719a70;
            DAT_05719a90 = DAT_05719a70;
            DAT_05719aa0 = DAT_05719a70;
            DAT_05719ab0 = DAT_05719a70;
            DAT_05719ac0 = DAT_05719a70;
            __cxa_guard_release(&DAT_05719ad0);
          }
          if (((DAT_05719ae8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05719ae8), iVar1 != 0))
          {
            DAT_05719ad8 = 0x300000002;
            DAT_05719ae0 = &DAT_05719a70;
            __cxa_guard_release(&DAT_05719ae8);
          }
          if (((DAT_05719b00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05719b00), iVar1 != 0))
          {
            DAT_05719af0 = PTR_DAT_04bb2020 + 0x10;
            DAT_05719af8 = "P_Icon_00";
            __cxa_guard_release(&DAT_05719b00);
          }
          local_58 = *param_2;
          puStack_40 = &DAT_05719ad8;
          local_38 = 1;
          puStack_50 = &DAT_04b0bac0;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          lVar4 = puVar6[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_031d6874;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_031d682c;
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
    if (pcVar5[4] != 'i') {
      return;
    }
    if (pcVar5[5] != 'n') {
      return;
    }
    if (pcVar5[6] != 'g') {
      return;
    }
    if (pcVar5[7] != 'M') {
      return;
    }
    if (pcVar5[8] != 'e') {
      return;
    }
    if (pcVar5[9] != 'n') {
      return;
    }
    if (pcVar5[10] != 'u') {
      return;
    }
    if (pcVar5[0xb] != '_') {
      return;
    }
    puVar6 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4fe8);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_05719c08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05719c08), iVar1 != 0)) {
      DAT_05719b08 = PTR_DAT_04bb2020 + 0x10;
      DAT_05719b10 = &DAT_0407913a;
      DAT_05719b20 = &DAT_0407ebb1;
      DAT_05719b40 = &DAT_0407ebb1;
      DAT_05719b60 = &DAT_0407ebb1;
      DAT_05719b30 = &DAT_040fb700;
      DAT_05719b50 = &DAT_040f677e;
      DAT_05719b70 = &DAT_040a2a40;
      DAT_05719b90 = &DAT_040e63fc;
      DAT_05719bb0 = &DAT_0407913f;
      DAT_05719bd0 = &DAT_040c6d58;
      DAT_05719b80 = &DAT_0407ebb1;
      DAT_05719ba0 = &DAT_0407ebb1;
      DAT_05719bc0 = &DAT_0407ebb1;
      DAT_05719be0 = &DAT_0407ebb1;
      DAT_05719bf0 = &DAT_040e6401;
      DAT_05719c00 = &DAT_0407ebb1;
      DAT_05719b18 = DAT_05719b08;
      DAT_05719b28 = DAT_05719b08;
      DAT_05719b38 = DAT_05719b08;
      DAT_05719b48 = DAT_05719b08;
      DAT_05719b58 = DAT_05719b08;
      DAT_05719b68 = DAT_05719b08;
      DAT_05719b78 = DAT_05719b08;
      DAT_05719b88 = DAT_05719b08;
      DAT_05719b98 = DAT_05719b08;
      DAT_05719ba8 = DAT_05719b08;
      DAT_05719bb8 = DAT_05719b08;
      DAT_05719bc8 = DAT_05719b08;
      DAT_05719bd8 = DAT_05719b08;
      DAT_05719be8 = DAT_05719b08;
      DAT_05719bf8 = DAT_05719b08;
      __cxa_guard_release(&DAT_05719c08);
    }
    if (((DAT_05719c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05719c20), iVar1 != 0)) {
      DAT_05719c10 = 0x800000002;
      DAT_05719c18 = &DAT_05719b08;
      __cxa_guard_release(&DAT_05719c20);
    }
    if (((DAT_05719c38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05719c38), iVar1 != 0)) {
      DAT_05719c28 = PTR_DAT_04bb2020 + 0x10;
      DAT_05719c30 = "N_RingSize_00";
      __cxa_guard_release(&DAT_05719c38);
    }
    local_58 = *param_2;
    local_38 = 0;
    puStack_40 = &DAT_05719c10;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_50 = &DAT_04b0bad0;
    lVar4 = puVar6[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_031d6874:
  local_48 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

