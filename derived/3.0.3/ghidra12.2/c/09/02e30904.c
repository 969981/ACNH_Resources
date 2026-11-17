
void FUN_02e30904(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05695f30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05695f30), iVar1 != 0)) {
      DAT_05695eb0 = PTR_DAT_04bb2020 + 0x10;
      DAT_05695eb8 = "TextIn";
      DAT_05695ec8 = &DAT_0407ebb1;
      DAT_05695ee8 = &DAT_0407ebb1;
      DAT_05695f08 = &DAT_0407ebb1;
      DAT_05695ed8 = "TextOut";
      DAT_05695ef8 = &DAT_040fe5ab;
      DAT_05695f18 = "MeasureAnim";
      DAT_05695f28 = &DAT_0407ebb1;
      DAT_05695ec0 = DAT_05695eb0;
      DAT_05695ed0 = DAT_05695eb0;
      DAT_05695ee0 = DAT_05695eb0;
      DAT_05695ef0 = DAT_05695eb0;
      DAT_05695f00 = DAT_05695eb0;
      DAT_05695f10 = DAT_05695eb0;
      DAT_05695f20 = DAT_05695eb0;
      __cxa_guard_release(&DAT_05695f30);
    }
    if (((DAT_05695f48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05695f48), iVar1 != 0)) {
      DAT_05695f38 = 0x400000002;
      DAT_05695f40 = &DAT_05695eb0;
      __cxa_guard_release(&DAT_05695f48);
    }
    if (((DAT_05695f70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05695f70), iVar1 != 0)) {
      DAT_05695f50 = PTR_DAT_04bb2020 + 0x10;
      DAT_05695f58 = "@T_Name_00";
      DAT_05695f68 = "@T_Role_00";
      DAT_05695f60 = DAT_05695f50;
      __cxa_guard_release(&DAT_05695f70);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04ad3b98;
      puStack_30 = &DAT_05695f38;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

