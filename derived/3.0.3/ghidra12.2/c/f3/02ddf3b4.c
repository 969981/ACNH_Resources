
void FUN_02ddf3b4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_0568e040 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568e040), iVar1 != 0)) {
      DAT_0568dfe0 = PTR_DAT_04bb2020 + 0x10;
      DAT_0568dfe8 = &DAT_040fe5ab;
      DAT_0568dff8 = &DAT_0407ebb1;
      DAT_0568e018 = &DAT_0407ebb1;
      DAT_0568e038 = &DAT_0407ebb1;
      DAT_0568e008 = &DAT_0407359e;
      DAT_0568e028 = "NightMode";
      DAT_0568dff0 = DAT_0568dfe0;
      DAT_0568e000 = DAT_0568dfe0;
      DAT_0568e010 = DAT_0568dfe0;
      DAT_0568e020 = DAT_0568dfe0;
      DAT_0568e030 = DAT_0568dfe0;
      __cxa_guard_release(&DAT_0568e040);
    }
    if (((DAT_0568e058 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568e058), iVar1 != 0)) {
      DAT_0568e048 = 0x300000002;
      DAT_0568e050 = &DAT_0568dfe0;
      __cxa_guard_release(&DAT_0568e058);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_0568e048;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

