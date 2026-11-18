
void FUN_034caaf4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05762790 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05762790), iVar1 != 0)) {
      DAT_05762730 = PTR_DAT_04bb2020 + 0x10;
      DAT_05762738 = "FadeIn";
      DAT_05762748 = &DAT_0407ebb1;
      DAT_05762768 = &DAT_0407ebb1;
      DAT_05762788 = &DAT_0407ebb1;
      DAT_05762758 = "FadeOut";
      DAT_05762778 = "TimeType";
      DAT_05762740 = DAT_05762730;
      DAT_05762750 = DAT_05762730;
      DAT_05762760 = DAT_05762730;
      DAT_05762770 = DAT_05762730;
      DAT_05762780 = DAT_05762730;
      __cxa_guard_release(&DAT_05762790);
    }
    if (((DAT_057627a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057627a8), iVar1 != 0)) {
      DAT_05762798 = 0x300000002;
      DAT_057627a0 = &DAT_05762730;
      __cxa_guard_release(&DAT_057627a8);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_05762798;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

