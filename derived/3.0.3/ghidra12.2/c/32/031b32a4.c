
void FUN_031b32a4(undefined8 param_1,undefined8 *param_2)

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
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_031b3304:
    if (param_2[1] == 0) {
      return;
    }
    local_40 = (undefined8 *)0x0;
    local_48 = (undefined *)0x0;
    uStack_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_031b3334;
  }
  if (*pcVar5 == '/') {
    if (((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'K')) ||
          ((pcVar5[4] != 'e' || (pcVar5[5] != 'y')))) ||
         ((pcVar5[6] != 'G' || ((pcVar5[7] != 'u' || (pcVar5[8] != 'i')))))) || (pcVar5[9] != 'd'))
       || ((pcVar5[10] != 'e' || (pcVar5[0xb] != '_')))) goto LAB_031b3470;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0)) goto LAB_031b3470;
    if (((DAT_057149e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057149e8), iVar1 != 0)) {
      DAT_057149a8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057149b0 = &DAT_040fe5ab;
      DAT_057149c0 = &DAT_0407ebb1;
      DAT_057149e0 = &DAT_0407ebb1;
      DAT_057149d0 = "Share";
      DAT_057149b8 = DAT_057149a8;
      DAT_057149c8 = DAT_057149a8;
      DAT_057149d8 = DAT_057149a8;
      __cxa_guard_release(&DAT_057149e8);
    }
    puVar8 = &DAT_057149f0;
    if (((DAT_05714a00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05714a00), iVar1 != 0)) {
      DAT_057149f0 = 0x200000002;
      DAT_057149f8 = &DAT_057149a8;
      __cxa_guard_release(&DAT_05714a00);
    }
    if (((DAT_05714db8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05714db8), iVar1 != 0)) {
      DAT_05714a08 = PTR_DAT_04bb2020 + 0x10;
      DAT_05714a10 = "@T_A_00";
      DAT_05714a20 = "@T_B_00";
      DAT_05714a30 = "@T_B_01";
      DAT_05714a40 = "@T_C_00";
      DAT_05714a60 = "@T_C_02";
      DAT_05714a70 = "@T_C_03";
      DAT_05714a90 = "@T_D_00";
      DAT_05714aa0 = "@T_D_01";
      DAT_05714ac0 = "@T_D_03";
      DAT_05714ad0 = "@T_D_04";
      DAT_05714af0 = "@T_D_06";
      DAT_05714b00 = "@T_D_07";
      DAT_05714b20 = "@T_E_01";
      DAT_05714b30 = "@T_E_02";
      DAT_05714b50 = "@T_F_00";
      DAT_05714b60 = "@T_F_01";
      DAT_05714b80 = "@T_F_03";
      DAT_05714b90 = "@T_G_00";
      DAT_05714bb0 = "@T_G_02";
      DAT_05714bc0 = "@T_G_03";
      DAT_05714be0 = "@T_G_05";
      DAT_05714bf0 = "@T_ShareA_00";
      DAT_05714c10 = "@T_ShareB_01";
      DAT_05714c20 = "@T_ShareC_00";
      DAT_05714c30 = "@T_ShareC_01";
      DAT_05714c40 = "@T_ShareC_02";
      DAT_05714c50 = "@T_ShareD_00";
      DAT_05714c60 = "@T_ShareD_01";
      DAT_05714c70 = "@T_ShareD_02";
      DAT_05714c80 = "@T_ShareD_03";
      DAT_05714c90 = "@T_ShareD_04";
      DAT_05714ca0 = "@T_ShareD_05";
      DAT_05714cb0 = "@T_ShareD_06";
      DAT_05714cc0 = "@T_ShareD_07";
      DAT_05714cd0 = "@T_ShareE_00";
      DAT_05714ce0 = "@T_ShareE_01";
      DAT_05714cf0 = "@T_ShareE_02";
      DAT_05714d00 = "@T_ShareE_03";
      DAT_05714d10 = "@T_ShareF_00";
      DAT_05714d20 = "@T_ShareF_01";
      DAT_05714d30 = "@T_ShareF_02";
      DAT_05714d40 = "@T_ShareF_03";
      DAT_05714d50 = "@T_ShareG_00";
      DAT_05714d60 = "@T_ShareG_01";
      DAT_05714d70 = "@T_ShareG_02";
      DAT_05714d80 = "@T_ShareG_03";
      DAT_05714d90 = "@T_ShareG_04";
      DAT_05714da0 = "@T_ShareG_05";
      DAT_05714a50 = "@T_C_01";
      DAT_05714a80 = "@T_C_07";
      DAT_05714ab0 = "@T_D_02";
      DAT_05714ae0 = "@T_D_05";
      DAT_05714b10 = "@T_E_00";
      DAT_05714b40 = "@T_E_03";
      DAT_05714b70 = "@T_F_02";
      DAT_05714ba0 = "@T_G_01";
      DAT_05714bd0 = "@T_G_04";
      DAT_05714c00 = "@T_ShareB_00";
      DAT_05714db0 = "@T_Text_00";
      DAT_05714a18 = DAT_05714a08;
      DAT_05714a28 = DAT_05714a08;
      DAT_05714a38 = DAT_05714a08;
      DAT_05714a48 = DAT_05714a08;
      DAT_05714a58 = DAT_05714a08;
      DAT_05714a68 = DAT_05714a08;
      DAT_05714a78 = DAT_05714a08;
      DAT_05714a88 = DAT_05714a08;
      DAT_05714a98 = DAT_05714a08;
      DAT_05714aa8 = DAT_05714a08;
      DAT_05714ab8 = DAT_05714a08;
      DAT_05714ac8 = DAT_05714a08;
      DAT_05714ad8 = DAT_05714a08;
      DAT_05714ae8 = DAT_05714a08;
      DAT_05714af8 = DAT_05714a08;
      DAT_05714b08 = DAT_05714a08;
      DAT_05714b18 = DAT_05714a08;
      DAT_05714b28 = DAT_05714a08;
      DAT_05714b38 = DAT_05714a08;
      DAT_05714b48 = DAT_05714a08;
      DAT_05714b58 = DAT_05714a08;
      DAT_05714b68 = DAT_05714a08;
      DAT_05714b78 = DAT_05714a08;
      DAT_05714b88 = DAT_05714a08;
      DAT_05714b98 = DAT_05714a08;
      DAT_05714ba8 = DAT_05714a08;
      DAT_05714bb8 = DAT_05714a08;
      DAT_05714bc8 = DAT_05714a08;
      DAT_05714bd8 = DAT_05714a08;
      DAT_05714be8 = DAT_05714a08;
      DAT_05714bf8 = DAT_05714a08;
      DAT_05714c08 = DAT_05714a08;
      DAT_05714c18 = DAT_05714a08;
      DAT_05714c28 = DAT_05714a08;
      DAT_05714c38 = DAT_05714a08;
      DAT_05714c48 = DAT_05714a08;
      DAT_05714c58 = DAT_05714a08;
      DAT_05714c68 = DAT_05714a08;
      DAT_05714c78 = DAT_05714a08;
      DAT_05714c88 = DAT_05714a08;
      DAT_05714c98 = DAT_05714a08;
      DAT_05714ca8 = DAT_05714a08;
      DAT_05714cb8 = DAT_05714a08;
      DAT_05714cc8 = DAT_05714a08;
      DAT_05714cd8 = DAT_05714a08;
      DAT_05714ce8 = DAT_05714a08;
      DAT_05714cf8 = DAT_05714a08;
      DAT_05714d08 = DAT_05714a08;
      DAT_05714d18 = DAT_05714a08;
      DAT_05714d28 = DAT_05714a08;
      DAT_05714d38 = DAT_05714a08;
      DAT_05714d48 = DAT_05714a08;
      DAT_05714d58 = DAT_05714a08;
      DAT_05714d68 = DAT_05714a08;
      DAT_05714d78 = DAT_05714a08;
      DAT_05714d88 = DAT_05714a08;
      DAT_05714d98 = DAT_05714a08;
      DAT_05714da8 = DAT_05714a08;
      __cxa_guard_release(&DAT_05714db8);
    }
    local_48 = &DAT_04b09440;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_031b3304;
LAB_031b3470:
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
    if (pcVar5[3] != 'J') {
      return;
    }
    if (pcVar5[4] != 'o') {
      return;
    }
    if (pcVar5[5] != 'y') {
      return;
    }
    if (pcVar5[6] != 'C') {
      return;
    }
    if (pcVar5[7] != 'o') {
      return;
    }
    if (pcVar5[8] != 'n') {
      return;
    }
    if (pcVar5[9] != 'G') {
      return;
    }
    if (pcVar5[10] != 'u') {
      return;
    }
    if (pcVar5[0xb] != 'i') {
      return;
    }
    if (pcVar5[0xc] != 'd') {
      return;
    }
    if (pcVar5[0xd] != 'e') {
      return;
    }
    if (pcVar5[0xe] != '_') {
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
    if (((DAT_05714de0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05714de0), iVar1 != 0)) {
      DAT_05714dc0 = PTR_DAT_04bb2020 + 0x10;
      DAT_05714dc8 = &DAT_040fe5ab;
      DAT_05714dd8 = &DAT_0407ebb1;
      DAT_05714dd0 = DAT_05714dc0;
      __cxa_guard_release(&DAT_05714de0);
    }
    puVar8 = &DAT_05714de8;
    if (((DAT_05714df8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05714df8), iVar1 != 0)) {
      DAT_05714de8 = 0x100000002;
      DAT_05714df0 = &DAT_05714dc0;
      __cxa_guard_release(&DAT_05714df8);
    }
    if (((DAT_05714e10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05714e10), iVar1 != 0)) {
      DAT_05714e00 = PTR_DAT_04bb2020 + 0x10;
      DAT_05714e08 = "@T_Text_00";
      __cxa_guard_release(&DAT_05714e10);
    }
    local_48 = &DAT_04b09450;
  }
  uStack_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
  local_40 = puVar8;
LAB_031b3334:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

