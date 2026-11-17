
void FUN_02dd2284(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_0568cf08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568cf08), iVar1 != 0)) {
      DAT_0568cea8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0568ceb0 = &DAT_040fe5ab;
      DAT_0568cec0 = &DAT_0407ebb1;
      DAT_0568cee0 = &DAT_0407ebb1;
      DAT_0568cf00 = &DAT_0407ebb1;
      DAT_0568ced0 = &DAT_0407359e;
      DAT_0568cef0 = "NightMode";
      DAT_0568ceb8 = DAT_0568cea8;
      DAT_0568cec8 = DAT_0568cea8;
      DAT_0568ced8 = DAT_0568cea8;
      DAT_0568cee8 = DAT_0568cea8;
      DAT_0568cef8 = DAT_0568cea8;
      __cxa_guard_release(&DAT_0568cf08);
    }
    if (((DAT_0568cf20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568cf20), iVar1 != 0)) {
      DAT_0568cf10 = 0x300000002;
      DAT_0568cf18 = &DAT_0568cea8;
      __cxa_guard_release(&DAT_0568cf20);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_0568cf10;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

