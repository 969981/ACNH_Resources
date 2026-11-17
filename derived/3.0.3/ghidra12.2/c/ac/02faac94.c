
void FUN_02faac94(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_056cc550 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cc550), iVar1 != 0)) {
      DAT_056cc530 = PTR_DAT_04bb2020 + 0x10;
      DAT_056cc538 = &DAT_040fe5ab;
      DAT_056cc548 = &DAT_0407ebb1;
      DAT_056cc540 = DAT_056cc530;
      __cxa_guard_release(&DAT_056cc550);
    }
    if (((DAT_056cc568 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cc568), iVar1 != 0)) {
      DAT_056cc558 = 0x100000002;
      DAT_056cc560 = &DAT_056cc530;
      __cxa_guard_release(&DAT_056cc568);
    }
    if (((DAT_056cc580 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cc580), iVar1 != 0)) {
      DAT_056cc570 = PTR_DAT_04bb2020 + 0x10;
      DAT_056cc578 = &DAT_04093659;
      __cxa_guard_release(&DAT_056cc580);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04ae9e18;
      puStack_30 = &DAT_056cc558;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

