
void FUN_02db7c74(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_0568a0e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568a0e8), iVar1 != 0)) {
      DAT_0568a088 = PTR_DAT_04bb2020 + 0x10;
      DAT_0568a090 = &DAT_040fe5ab;
      DAT_0568a0a0 = &DAT_0407ebb1;
      DAT_0568a0c0 = &DAT_0407ebb1;
      DAT_0568a0e0 = &DAT_0407ebb1;
      DAT_0568a0b0 = "InAppClose";
      DAT_0568a0d0 = "OutAppClose";
      DAT_0568a098 = DAT_0568a088;
      DAT_0568a0a8 = DAT_0568a088;
      DAT_0568a0b8 = DAT_0568a088;
      DAT_0568a0c8 = DAT_0568a088;
      DAT_0568a0d8 = DAT_0568a088;
      __cxa_guard_release(&DAT_0568a0e8);
    }
    if (((DAT_0568a100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568a100), iVar1 != 0)) {
      DAT_0568a0f0 = 0x300000002;
      DAT_0568a0f8 = &DAT_0568a088;
      __cxa_guard_release(&DAT_0568a100);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_0568a0f0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

