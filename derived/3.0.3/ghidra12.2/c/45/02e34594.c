
void FUN_02e34594(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_05696350 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05696350), iVar1 != 0)) {
      DAT_05696210 = PTR_DAT_04bb2020 + 0x10;
      DAT_05696218 = "PhotoTransition";
      DAT_05696228 = &DAT_0407ebb1;
      DAT_05696248 = &DAT_0407ebb1;
      DAT_05696268 = &DAT_0407ebb1;
      DAT_05696238 = "PhotoPosition";
      DAT_05696258 = &DAT_040fe5ab;
      DAT_05696278 = "BeatAnim";
      DAT_05696298 = "MeasureAnim";
      DAT_056962b8 = "2DDecorationIn";
      DAT_056962d8 = "PhotoTextIn";
      DAT_056962f8 = "PhotoTextOut";
      DAT_05696318 = "FacilityType";
      DAT_05696288 = &DAT_0407ebb1;
      DAT_056962a8 = &DAT_0407ebb1;
      DAT_056962c8 = &DAT_0407ebb1;
      DAT_056962e8 = &DAT_0407ebb1;
      DAT_05696308 = &DAT_0407ebb1;
      DAT_05696328 = &DAT_0407ebb1;
      DAT_05696338 = "PhotoRandomRotate";
      DAT_05696348 = &DAT_0407ebb1;
      DAT_05696220 = DAT_05696210;
      DAT_05696230 = DAT_05696210;
      DAT_05696240 = DAT_05696210;
      DAT_05696250 = DAT_05696210;
      DAT_05696260 = DAT_05696210;
      DAT_05696270 = DAT_05696210;
      DAT_05696280 = DAT_05696210;
      DAT_05696290 = DAT_05696210;
      DAT_056962a0 = DAT_05696210;
      DAT_056962b0 = DAT_05696210;
      DAT_056962c0 = DAT_05696210;
      DAT_056962d0 = DAT_05696210;
      DAT_056962e0 = DAT_05696210;
      DAT_056962f0 = DAT_05696210;
      DAT_05696300 = DAT_05696210;
      DAT_05696310 = DAT_05696210;
      DAT_05696320 = DAT_05696210;
      DAT_05696330 = DAT_05696210;
      DAT_05696340 = DAT_05696210;
      __cxa_guard_release(&DAT_05696350);
    }
    if (((DAT_05696368 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05696368), iVar1 != 0)) {
      DAT_05696358 = 0xa00000002;
      DAT_05696360 = &DAT_05696210;
      __cxa_guard_release(&DAT_05696368);
    }
    if (((DAT_05696410 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05696410), iVar1 != 0)) {
      DAT_05696370 = PTR_DAT_04bb2020 + 0x10;
      DAT_05696378 = "@T_Theme_00";
      DAT_056963a8 = "@T_CastNpcName_00";
      DAT_05696388 = "@T_NpcName_00";
      DAT_05696398 = "@T_CastName_00";
      DAT_056963b8 = "@T_CastName_01";
      DAT_056963c8 = "@T_CastNpcName_01";
      DAT_056963d8 = "@T_CastName_02";
      DAT_056963e8 = "@T_CastNpcName_02";
      DAT_056963f8 = "@T_CastName_03";
      DAT_05696408 = "@T_CastNpcName_03";
      DAT_05696380 = DAT_05696370;
      DAT_05696390 = DAT_05696370;
      DAT_056963a0 = DAT_05696370;
      DAT_056963b0 = DAT_05696370;
      DAT_056963c0 = DAT_05696370;
      DAT_056963d0 = DAT_05696370;
      DAT_056963e0 = DAT_05696370;
      DAT_056963f0 = DAT_05696370;
      DAT_05696400 = DAT_05696370;
      __cxa_guard_release(&DAT_05696410);
    }
    if (((DAT_05696438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05696438), iVar1 != 0)) {
      DAT_05696418 = PTR_DAT_04bb2020 + 0x10;
      DAT_05696420 = "P_Photo_00";
      DAT_05696430 = "P_Photo_01";
      DAT_05696428 = DAT_05696418;
      __cxa_guard_release(&DAT_05696438);
    }
    if (param_2[1] != 0) {
      local_48 = *param_2;
      local_38 = &DAT_04ad4548;
      puStack_30 = &DAT_05696358;
      local_28 = 2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_40 = &DAT_04ad4558;
      lVar2 = *(long *)(param_2[1] + 0x10);
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

