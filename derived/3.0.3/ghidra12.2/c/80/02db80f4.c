
void FUN_02db80f4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_0568a1e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568a1e0), iVar1 != 0)) {
      DAT_0568a140 = PTR_DAT_04bb2020 + 0x10;
      DAT_0568a148 = "InInterior";
      DAT_0568a158 = &DAT_0407ebb1;
      DAT_0568a178 = &DAT_0407ebb1;
      DAT_0568a198 = &DAT_0407ebb1;
      DAT_0568a168 = "OutInterior";
      DAT_0568a188 = "InNormal";
      DAT_0568a1a8 = "OutNormal";
      DAT_0568a1b8 = &DAT_0407ebb1;
      DAT_0568a1c8 = &DAT_040fe5ab;
      DAT_0568a1d8 = &DAT_0407ebb1;
      DAT_0568a150 = DAT_0568a140;
      DAT_0568a160 = DAT_0568a140;
      DAT_0568a170 = DAT_0568a140;
      DAT_0568a180 = DAT_0568a140;
      DAT_0568a190 = DAT_0568a140;
      DAT_0568a1a0 = DAT_0568a140;
      DAT_0568a1b0 = DAT_0568a140;
      DAT_0568a1c0 = DAT_0568a140;
      DAT_0568a1d0 = DAT_0568a140;
      __cxa_guard_release(&DAT_0568a1e0);
    }
    if (((DAT_0568a1f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568a1f8), iVar1 != 0)) {
      DAT_0568a1e8 = 0x500000002;
      DAT_0568a1f0 = &DAT_0568a140;
      __cxa_guard_release(&DAT_0568a1f8);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_0568a1e8;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

