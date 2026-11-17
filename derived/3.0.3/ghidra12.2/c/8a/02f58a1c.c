
void FUN_02f58a1c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 *local_30;
  undefined4 local_28;
  
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 != "") {
    if (*pcVar5 == '/') {
      if (pcVar5[1] != 'L') {
        return;
      }
      if (pcVar5[2] != '_') {
        return;
      }
      if ((((((pcVar5[3] != 'P') || (pcVar5[4] != 'a')) || (pcVar5[5] != 'g')) ||
           ((pcVar5[6] != 'e' || (pcVar5[7] != '0')))) ||
          ((pcVar5[8] != '0' || ((pcVar5[9] != 'B' || (pcVar5[10] != 't')))))) ||
         ((pcVar5[0xb] != 'n' || (pcVar5[0xc] != '_')))) {
        if (pcVar5[3] != 'P') {
          return;
        }
        if (pcVar5[4] != 'a') {
          return;
        }
        if (pcVar5[5] != 'g') {
          return;
        }
        if (pcVar5[6] != 'e') {
          return;
        }
        if (pcVar5[7] != '0') {
          return;
        }
        if (pcVar5[8] != '1') {
          return;
        }
        if (pcVar5[9] != 'B') {
          return;
        }
        if (pcVar5[10] != 't') {
          return;
        }
        if (pcVar5[0xb] != 'n') {
          return;
        }
        if (pcVar5[0xc] != '_') {
          return;
        }
      }
      puVar6 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e38);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_056c5c80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c5c80), iVar1 != 0)) {
        DAT_056c5be0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056c5be8 = &DAT_040fe5ab;
        DAT_056c5bf8 = &DAT_0407ebb1;
        DAT_056c5c18 = &DAT_0407ebb1;
        DAT_056c5c38 = &DAT_0407ebb1;
        DAT_056c5c08 = "State";
        DAT_056c5c28 = "Normal";
        DAT_056c5c48 = "DemoInstall00";
        DAT_056c5c58 = &DAT_0407ebb1;
        DAT_056c5c68 = "DemoInstall01";
        DAT_056c5c78 = &DAT_0407ebb1;
        DAT_056c5bf0 = DAT_056c5be0;
        DAT_056c5c00 = DAT_056c5be0;
        DAT_056c5c10 = DAT_056c5be0;
        DAT_056c5c20 = DAT_056c5be0;
        DAT_056c5c30 = DAT_056c5be0;
        DAT_056c5c40 = DAT_056c5be0;
        DAT_056c5c50 = DAT_056c5be0;
        DAT_056c5c60 = DAT_056c5be0;
        DAT_056c5c70 = DAT_056c5be0;
        __cxa_guard_release(&DAT_056c5c80);
      }
      if (((DAT_056c5c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c5c98), iVar1 != 0)) {
        DAT_056c5c88 = 0x500000002;
        DAT_056c5c90 = &DAT_056c5be0;
        __cxa_guard_release(&DAT_056c5c98);
      }
      local_48 = *param_2;
      local_40 = (undefined *)0x0;
      local_38 = (undefined *)0x0;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_30 = &DAT_056c5c88;
      lVar4 = puVar6[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02f58b00;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056c5b30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c5b30), iVar1 != 0)) {
    DAT_056c5a90 = PTR_DAT_04bb2020 + 0x10;
    DAT_056c5a98 = "DemoStart";
    DAT_056c5aa8 = &DAT_0407ebb1;
    DAT_056c5ac8 = &DAT_0407ebb1;
    DAT_056c5ae8 = &DAT_0407ebb1;
    DAT_056c5ab8 = "DemoInstall";
    DAT_056c5ad8 = "VisibleOff";
    DAT_056c5af8 = "VisibleOn";
    DAT_056c5b08 = &DAT_0407ebb1;
    DAT_056c5b18 = &DAT_04090f49;
    DAT_056c5b28 = &DAT_0407ebb1;
    DAT_056c5aa0 = DAT_056c5a90;
    DAT_056c5ab0 = DAT_056c5a90;
    DAT_056c5ac0 = DAT_056c5a90;
    DAT_056c5ad0 = DAT_056c5a90;
    DAT_056c5ae0 = DAT_056c5a90;
    DAT_056c5af0 = DAT_056c5a90;
    DAT_056c5b00 = DAT_056c5a90;
    DAT_056c5b10 = DAT_056c5a90;
    DAT_056c5b20 = DAT_056c5a90;
    __cxa_guard_release(&DAT_056c5b30);
  }
  if (((DAT_056c5b48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c5b48), iVar1 != 0)) {
    DAT_056c5b38 = 0x500000002;
    DAT_056c5b40 = &DAT_056c5a90;
    __cxa_guard_release(&DAT_056c5b48);
  }
  if (((DAT_056c5bb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c5bb0), iVar1 != 0)) {
    DAT_056c5b50 = PTR_DAT_04bb2020 + 0x10;
    DAT_056c5b58 = "@T_Title_00";
    DAT_056c5b78 = "@T_Minute_00";
    DAT_056c5b68 = "@T_Text_00";
    DAT_056c5b88 = "@T_Colon_00";
    DAT_056c5b98 = "@T_Hour_00";
    DAT_056c5ba8 = "@T_Ampm_00";
    DAT_056c5b60 = DAT_056c5b50;
    DAT_056c5b70 = DAT_056c5b50;
    DAT_056c5b80 = DAT_056c5b50;
    DAT_056c5b90 = DAT_056c5b50;
    DAT_056c5ba0 = DAT_056c5b50;
    __cxa_guard_release(&DAT_056c5bb0);
  }
  if (((DAT_056c5bd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c5bd8), iVar1 != 0)) {
    DAT_056c5bb8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056c5bc0 = "N_Page_00";
    DAT_056c5bd0 = "N_Page_01";
    DAT_056c5bc8 = DAT_056c5bb8;
    __cxa_guard_release(&DAT_056c5bd8);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = *param_2;
  local_38 = &DAT_04ae4e70;
  local_30 = &DAT_056c5b38;
  local_40 = &DAT_04ae4e80;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02f58b00:
  local_28 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

