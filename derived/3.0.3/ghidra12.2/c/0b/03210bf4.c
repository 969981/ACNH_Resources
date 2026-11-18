
void FUN_03210bf4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05720840 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05720840), iVar1 != 0)) {
      DAT_05720820 = PTR_DAT_04bb2020 + 0x10;
      DAT_05720828 = &DAT_040fe5ab;
      DAT_05720838 = &DAT_0407ebb1;
      DAT_05720830 = DAT_05720820;
      __cxa_guard_release(&DAT_05720840);
    }
    if (((DAT_05720858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05720858), iVar1 != 0)) {
      DAT_05720848 = 0x100000002;
      DAT_05720850 = &DAT_05720820;
      __cxa_guard_release(&DAT_05720858);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_05720848;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

