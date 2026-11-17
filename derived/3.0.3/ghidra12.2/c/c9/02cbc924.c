
void FUN_02cbc924(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_056672d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056672d0), iVar1 != 0)) {
      DAT_056671d0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056671d8 = "ColorInOut_00";
      DAT_056671e8 = &DAT_0407ebb1;
      DAT_05667208 = &DAT_0407ebb1;
      DAT_05667228 = &DAT_0407ebb1;
      DAT_056671f8 = "ColorInOut_01";
      DAT_05667218 = "ColorInOut_02";
      DAT_05667238 = "ColorInOut_03";
      DAT_05667258 = "ColorInOut_04";
      DAT_05667278 = "ColorInOut_05";
      DAT_05667298 = "ColorInOut_06";
      DAT_05667248 = &DAT_0407ebb1;
      DAT_05667268 = &DAT_0407ebb1;
      DAT_05667288 = &DAT_0407ebb1;
      DAT_056672a8 = &DAT_0407ebb1;
      DAT_056672b8 = "ColorInOut_07";
      DAT_056672c8 = &DAT_0407ebb1;
      DAT_056671e0 = DAT_056671d0;
      DAT_056671f0 = DAT_056671d0;
      DAT_05667200 = DAT_056671d0;
      DAT_05667210 = DAT_056671d0;
      DAT_05667220 = DAT_056671d0;
      DAT_05667230 = DAT_056671d0;
      DAT_05667240 = DAT_056671d0;
      DAT_05667250 = DAT_056671d0;
      DAT_05667260 = DAT_056671d0;
      DAT_05667270 = DAT_056671d0;
      DAT_05667280 = DAT_056671d0;
      DAT_05667290 = DAT_056671d0;
      DAT_056672a0 = DAT_056671d0;
      DAT_056672b0 = DAT_056671d0;
      DAT_056672c0 = DAT_056671d0;
      __cxa_guard_release(&DAT_056672d0);
    }
    if (((DAT_056672e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056672e8), iVar1 != 0)) {
      DAT_056672d8 = 0x800000002;
      DAT_056672e0 = &DAT_056671d0;
      __cxa_guard_release(&DAT_056672e8);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_056672d8;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

