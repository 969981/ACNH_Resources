
void FUN_0322bcc4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05722cf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05722cf0), iVar1 != 0)) {
      DAT_05722c90 = PTR_DAT_04bb2020 + 0x10;
      DAT_05722c98 = "State";
      DAT_05722ca8 = &DAT_0407ebb1;
      DAT_05722cc8 = &DAT_0407ebb1;
      DAT_05722ce8 = &DAT_0407ebb1;
      DAT_05722cb8 = "Flash";
      DAT_05722cd8 = "FlashFriend";
      DAT_05722ca0 = DAT_05722c90;
      DAT_05722cb0 = DAT_05722c90;
      DAT_05722cc0 = DAT_05722c90;
      DAT_05722cd0 = DAT_05722c90;
      DAT_05722ce0 = DAT_05722c90;
      __cxa_guard_release(&DAT_05722cf0);
    }
    if (((DAT_05722d08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05722d08), iVar1 != 0)) {
      DAT_05722cf8 = 0x300000002;
      DAT_05722d00 = &DAT_05722c90;
      __cxa_guard_release(&DAT_05722d08);
    }
    if (((DAT_05722d20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05722d20), iVar1 != 0)) {
      DAT_05722d10 = PTR_DAT_04bb2020 + 0x10;
      DAT_05722d18 = "@T_ZL_00";
      __cxa_guard_release(&DAT_05722d20);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b11998;
      puStack_30 = &DAT_05722cf8;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

