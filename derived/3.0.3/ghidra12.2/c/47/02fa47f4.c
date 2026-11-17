
void FUN_02fa47f4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_056cc2c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cc2c0), iVar1 != 0)) {
      DAT_056cc200 = PTR_DAT_04bb2020 + 0x10;
      DAT_056cc208 = "AnimeA";
      DAT_056cc218 = &DAT_0407ebb1;
      DAT_056cc238 = &DAT_0407ebb1;
      DAT_056cc258 = &DAT_0407ebb1;
      DAT_056cc228 = "AnimeB";
      DAT_056cc248 = "AnimeC";
      DAT_056cc268 = &DAT_040f601a;
      DAT_056cc288 = &DAT_040fe5ab;
      DAT_056cc278 = &DAT_0407ebb1;
      DAT_056cc298 = &DAT_0407ebb1;
      DAT_056cc2a8 = "Pattern";
      DAT_056cc2b8 = &DAT_0407ebb1;
      DAT_056cc210 = DAT_056cc200;
      DAT_056cc220 = DAT_056cc200;
      DAT_056cc230 = DAT_056cc200;
      DAT_056cc240 = DAT_056cc200;
      DAT_056cc250 = DAT_056cc200;
      DAT_056cc260 = DAT_056cc200;
      DAT_056cc270 = DAT_056cc200;
      DAT_056cc280 = DAT_056cc200;
      DAT_056cc290 = DAT_056cc200;
      DAT_056cc2a0 = DAT_056cc200;
      DAT_056cc2b0 = DAT_056cc200;
      __cxa_guard_release(&DAT_056cc2c0);
    }
    if (((DAT_056cc2d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cc2d8), iVar1 != 0)) {
      DAT_056cc2c8 = 0x600000002;
      DAT_056cc2d0 = &DAT_056cc200;
      __cxa_guard_release(&DAT_056cc2d8);
    }
    if (((DAT_056cc360 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cc360), iVar1 != 0)) {
      DAT_056cc2e0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056cc2e8 = "@T_Num_00";
      DAT_056cc2f8 = "@T_Hatena_00";
      DAT_056cc308 = "@T_Num_01";
      DAT_056cc318 = "@T_NumOneCard_00";
      DAT_056cc328 = "@T_Mark_00";
      DAT_056cc338 = "@T_Mark_01";
      DAT_056cc348 = "@T_Mark_02";
      DAT_056cc358 = "@T_Mark_03";
      DAT_056cc2f0 = DAT_056cc2e0;
      DAT_056cc300 = DAT_056cc2e0;
      DAT_056cc310 = DAT_056cc2e0;
      DAT_056cc320 = DAT_056cc2e0;
      DAT_056cc330 = DAT_056cc2e0;
      DAT_056cc340 = DAT_056cc2e0;
      DAT_056cc350 = DAT_056cc2e0;
      __cxa_guard_release(&DAT_056cc360);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04ae8e98;
      puStack_30 = &DAT_056cc2c8;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

