
void FUN_02d2a384(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_056780c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056780c8), iVar1 != 0)) {
      DAT_05678068 = PTR_DAT_04bb2020 + 0x10;
      DAT_05678070 = &DAT_040fe5ab;
      DAT_05678080 = &DAT_0407ebb1;
      DAT_056780a0 = &DAT_0407ebb1;
      DAT_056780c0 = &DAT_0407ebb1;
      DAT_05678090 = &DAT_0407359e;
      DAT_056780b0 = "NightMode";
      DAT_05678078 = DAT_05678068;
      DAT_05678088 = DAT_05678068;
      DAT_05678098 = DAT_05678068;
      DAT_056780a8 = DAT_05678068;
      DAT_056780b8 = DAT_05678068;
      __cxa_guard_release(&DAT_056780c8);
    }
    if (((DAT_056780e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056780e0), iVar1 != 0)) {
      DAT_056780d0 = 0x300000002;
      DAT_056780d8 = &DAT_05678068;
      __cxa_guard_release(&DAT_056780e0);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_056780d0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

