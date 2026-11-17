
void FUN_02dc7944(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_0568bc80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568bc80), iVar1 != 0)) {
      DAT_0568bc20 = PTR_DAT_04bb2020 + 0x10;
      DAT_0568bc28 = &DAT_040fe5ab;
      DAT_0568bc38 = &DAT_0407ebb1;
      DAT_0568bc58 = &DAT_0407ebb1;
      DAT_0568bc78 = &DAT_0407ebb1;
      DAT_0568bc48 = &DAT_0407359e;
      DAT_0568bc68 = "FacilityType";
      DAT_0568bc30 = DAT_0568bc20;
      DAT_0568bc40 = DAT_0568bc20;
      DAT_0568bc50 = DAT_0568bc20;
      DAT_0568bc60 = DAT_0568bc20;
      DAT_0568bc70 = DAT_0568bc20;
      __cxa_guard_release(&DAT_0568bc80);
    }
    if (((DAT_0568bc98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568bc98), iVar1 != 0)) {
      DAT_0568bc88 = 0x300000002;
      DAT_0568bc90 = &DAT_0568bc20;
      __cxa_guard_release(&DAT_0568bc98);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_0568bc88;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

