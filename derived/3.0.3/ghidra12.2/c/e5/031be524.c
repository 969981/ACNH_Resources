
void FUN_031be524(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
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
      if ((((pcVar5[3] != 'B') || (pcVar5[4] != 't')) || (pcVar5[5] != 'n')) ||
         ((pcVar5[6] != 'L' || (pcVar5[7] != '_')))) {
        if (pcVar5[3] != 'B') {
          return;
        }
        if (pcVar5[4] != 't') {
          return;
        }
        if (pcVar5[5] != 'n') {
          return;
        }
        if (pcVar5[6] != 'R') {
          return;
        }
        if (pcVar5[7] != '_') {
          return;
        }
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
      if (((DAT_05715cc0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05715cc0), iVar1 != 0)) {
        DAT_05715cb0 = PTR_DAT_04bb2020 + 0x10;
        DAT_05715cb8 = "@T_Text_00";
        __cxa_guard_release(&DAT_05715cc0);
      }
      local_38 = &DAT_04b09f28;
      puStack_30 = (undefined8 *)0x0;
      local_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = (undefined *)0x0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_031be608;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05715b10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05715b10), iVar1 != 0)) {
    DAT_05715ad0 = PTR_DAT_04bb2020 + 0x10;
    DAT_05715ad8 = &DAT_040fe5ab;
    DAT_05715ae8 = &DAT_0407ebb1;
    DAT_05715b08 = &DAT_0407ebb1;
    DAT_05715af8 = &DAT_040a0741;
    DAT_05715ae0 = DAT_05715ad0;
    DAT_05715af0 = DAT_05715ad0;
    DAT_05715b00 = DAT_05715ad0;
    __cxa_guard_release(&DAT_05715b10);
  }
  if (((DAT_05715b28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05715b28), iVar1 != 0)) {
    DAT_05715b18 = 0x200000002;
    DAT_05715b20 = &DAT_05715ad0;
    __cxa_guard_release(&DAT_05715b28);
  }
  if (((DAT_05715c50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05715c50), iVar1 != 0)) {
    DAT_05715b30 = PTR_DAT_04bb2020 + 0x10;
    DAT_05715b38 = "@T_Village_00";
    DAT_05715b58 = "@T_RegistColon_00";
    DAT_05715b48 = "@T_RegistTitle_00";
    DAT_05715b68 = "@T_RegistData_00";
    DAT_05715b78 = "@T_UploadTitle_00";
    DAT_05715b98 = "@T_UploadDate_00";
    DAT_05715ba8 = "@T_Name_00";
    DAT_05715bc8 = "@T_Name_02";
    DAT_05715b88 = "@T_UploadColon_00";
    DAT_05715bd8 = "@T_Name_03";
    DAT_05715bb8 = "@T_Name_01";
    DAT_05715bf8 = "@T_Name_05";
    DAT_05715be8 = "@T_Name_04";
    DAT_05715c08 = "@T_Name_06";
    DAT_05715c18 = "@T_SubText_01";
    DAT_05715c28 = "@T_SubText_00";
    DAT_05715c38 = "@T_UploadName_00";
    DAT_05715c48 = "@T_BirthDay_00";
    DAT_05715b40 = DAT_05715b30;
    DAT_05715b50 = DAT_05715b30;
    DAT_05715b60 = DAT_05715b30;
    DAT_05715b70 = DAT_05715b30;
    DAT_05715b80 = DAT_05715b30;
    DAT_05715b90 = DAT_05715b30;
    DAT_05715ba0 = DAT_05715b30;
    DAT_05715bb0 = DAT_05715b30;
    DAT_05715bc0 = DAT_05715b30;
    DAT_05715bd0 = DAT_05715b30;
    DAT_05715be0 = DAT_05715b30;
    DAT_05715bf0 = DAT_05715b30;
    DAT_05715c00 = DAT_05715b30;
    DAT_05715c10 = DAT_05715b30;
    DAT_05715c20 = DAT_05715b30;
    DAT_05715c30 = DAT_05715b30;
    DAT_05715c40 = DAT_05715b30;
    __cxa_guard_release(&DAT_05715c50);
  }
  if (((DAT_05715ca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05715ca8), iVar1 != 0)) {
    DAT_05715c58 = PTR_DAT_04bb2020 + 0x10;
    DAT_05715c60 = "N_IslandAlign_00";
    DAT_05715c70 = "N_Adjust_00";
    DAT_05715c80 = "N_Align_01";
    DAT_05715c90 = "N_AlignRegist_00";
    DAT_05715ca0 = "N_AlignUpDate_00";
    DAT_05715c68 = DAT_05715c58;
    DAT_05715c78 = DAT_05715c58;
    DAT_05715c88 = DAT_05715c58;
    DAT_05715c98 = DAT_05715c58;
    __cxa_guard_release(&DAT_05715ca8);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = *param_2;
  local_38 = &DAT_04b09f08;
  puStack_30 = &DAT_05715b18;
  local_40 = &DAT_04b09f18;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_031be608:
  local_28 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

