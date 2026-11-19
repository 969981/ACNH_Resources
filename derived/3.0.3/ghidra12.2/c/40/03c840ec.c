
byte FUN_03c840ec(long param_1,long param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  undefined **local_3d8;
  ulong local_3d0;
  long *local_3c8 [2];
  undefined ***local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined *local_2b0;
  undefined ***pppuStack_2a8;
  long **local_2a0;
  undefined *puStack_298;
  undefined ***local_290;
  char local_288;
  undefined *local_280;
  undefined *puStack_278;
  undefined1 *local_270;
  undefined4 local_268;
  undefined1 local_264 [511];
  undefined1 local_65;
  long local_60;
  char *local_58;
  undefined **local_50;
  undefined4 local_48;
  
  puVar2 = PTR_PTR_04bb8620;
  (**(code **)(*(long *)PTR_PTR_04bb8620 + 0x18))(PTR_PTR_04bb8620);
  local_50 = *(undefined ***)(puVar2 + 8);
  local_3c8[0] = (long *)CONCAT44(local_3c8[0]._4_4_,0xffffffff);
  local_3d8 = (undefined **)0x0;
  local_3d0 = 0;
  if ((*param_3 >> 1 & 1) != 0) {
    local_3c8[0] = (long *)CONCAT44(local_3c8[0]._4_4_,(int)*(undefined8 *)(param_3 + 0x18));
  }
  (**(code **)(**(long **)(param_2 + 0x18) + 0x10))
            (*(long **)(param_2 + 0x18),&local_3d8,*(undefined8 *)(param_1 + 0xe0),
             *(undefined8 *)(param_2 + 0x20),param_1,*(undefined8 *)(param_3 + 8));
  if (local_3d8 != (undefined **)0x0) {
    local_50 = local_3d8;
  }
  uVar1 = 0;
  if (local_3d8 != (undefined **)0x0) {
    uVar1 = (undefined4)local_3d0;
  }
  if ((DAT_05aefad0 == 3) && (uVar4 = (*(code *)DAT_05aefad8[2])(&DAT_05aefad8), (uVar4 & 1) != 0))
  {
    local_3d0 = CONCAT44(local_3d0._4_4_,uVar1);
    local_3d8 = local_50;
    bVar3 = (*(code *)*DAT_05aefad8)(&DAT_05aefad8,&local_3d8);
  }
  else {
    local_3d8 = &PTR_LAB_04b849e8;
    local_3a8 = 0;
    uStack_3a0 = 0;
    local_398 = 0;
    uStack_390 = 0;
    local_388 = 0;
    uStack_380 = 0;
    local_378 = 0;
    uStack_370 = 0;
    local_368 = 0;
    uStack_360 = 0;
    local_358 = 0;
    uStack_350 = 0;
    local_348 = 0;
    uStack_340 = 0;
    uStack_330 = 0;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    uStack_308 = 0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_2f0 = 0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    local_3c8[0] = (long *)(PTR_DAT_04bd38c0 + 0x18);
    local_3c8[1] = (long *)(PTR_DAT_04bd38c0 + 0x40);
    local_2b0 = PTR_DAT_04bd38e0 + 0x10;
    local_328 = 0;
    local_338 = 0;
    puStack_298 = PTR_DAT_04bd38b8 + 0x10;
    local_288 = '\0';
    local_270 = local_264;
    local_264[0] = 0;
    local_268 = 0x200;
    puStack_278 = PTR_DAT_04bb2d90 + 0x10;
    local_65 = 0;
    local_280 = PTR_DAT_04bd38e8 + 0x10;
    local_3d0 = local_3d0 & 0xffffff0000000000;
    local_58 = "CMFinder";
    local_2b8 = 1;
    local_3b8 = &local_50;
    uStack_3b0 = 0;
    pppuStack_2a8 = &local_3d8;
    local_2a0 = local_3c8;
    local_290 = &local_3d8;
    local_60 = param_1;
    local_48 = uVar1;
    FUN_03c879f4(&puStack_298);
    plVar5 = (long *)(*(code *)local_3d8[2])(&local_3d8);
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)(*(code *)local_3d8[3])(&local_3d8);
    (**(code **)(*plVar5 + 0x18))();
    *(int *)((long)local_3c8 + local_3c8[0][-3]) = *(int *)((long)local_3c8 + local_3c8[0][-3]) + -1
    ;
    bVar3 = local_288 != '\0';
  }
  return bVar3 & 1;
}

