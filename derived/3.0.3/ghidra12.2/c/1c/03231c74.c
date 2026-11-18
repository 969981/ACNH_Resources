
void FUN_03231c74(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_05723a28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723a28), iVar1 != 0)) {
      DAT_057239c8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057239d0 = "WindowIn";
      DAT_057239e0 = &DAT_0407ebb1;
      DAT_05723a00 = &DAT_0407ebb1;
      DAT_05723a20 = &DAT_0407ebb1;
      DAT_057239f0 = &DAT_040fe5ab;
      DAT_05723a10 = "WindowOut";
      DAT_057239d8 = DAT_057239c8;
      DAT_057239e8 = DAT_057239c8;
      DAT_057239f8 = DAT_057239c8;
      DAT_05723a08 = DAT_057239c8;
      DAT_05723a18 = DAT_057239c8;
      __cxa_guard_release(&DAT_05723a28);
    }
    if (((DAT_05723a40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723a40), iVar1 != 0)) {
      DAT_05723a30 = 0x300000002;
      DAT_05723a38 = &DAT_057239c8;
      __cxa_guard_release(&DAT_05723a40);
    }
    if (((DAT_05723a68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723a68), iVar1 != 0)) {
      DAT_05723a48 = PTR_DAT_04bb2020 + 0x10;
      DAT_05723a50 = "@T_Guide_00";
      DAT_05723a60 = "@T_Icon_00";
      DAT_05723a58 = DAT_05723a48;
      __cxa_guard_release(&DAT_05723a68);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b123a8;
      puStack_30 = &DAT_05723a30;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

