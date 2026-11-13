
uint FUN_01185a1c(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **local_368;
  undefined4 local_360;
  undefined *local_358;
  undefined1 *puStack_350;
  undefined4 local_348;
  undefined1 local_344;
  undefined4 local_343;
  undefined8 local_33c;
  undefined4 local_334;
  undefined4 uStack_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 local_324;
  undefined4 uStack_320;
  undefined4 local_31c;
  undefined4 uStack_318;
  undefined8 local_314;
  undefined8 local_30c;
  undefined4 local_304;
  undefined *local_300;
  undefined1 *puStack_2f8;
  undefined *local_2f0;
  undefined1 *local_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc [127];
  undefined1 local_25d;
  undefined1 auStack_258 [536];
  
  local_25d = 0;
  plVar2 = (long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 9000) = 1;
  local_2e0 = 0x80;
  local_2dc[0] = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  local_2e8 = local_2dc;
  local_2f0 = PTR_DAT_04bb2d88 + 0x10;
  (**(code **)(*plVar2 + 0x18))(plVar2);
  FUN_038d1270(&local_2f0,"EventFlow/%s.bfevfl",*(undefined8 *)(param_1 + 0x20));
  local_360 = 1;
  local_348 = 0x1010100;
  local_343 = 0x1010101;
  local_344 = 0;
  local_324 = 0;
  local_358 = PTR_DAT_04bb2020 + 0x10;
  uStack_318 = 0;
  local_334 = 0;
  puStack_350 = &DAT_0419b684;
  uStack_328 = 0;
  local_33c = 0;
  local_314 = 0;
  local_30c = 0;
  local_368 = &PTR_LAB_04ba8a48;
  local_304 = 0;
  uStack_320 = (undefined4)uVar5;
  local_31c = (undefined4)((ulong)uVar5 >> 0x20);
  puStack_2f8 = &DAT_0419b684;
  uStack_330 = 0x50cc510;
  local_32c = 0;
  local_300 = local_358;
  if ((*(byte *)(param_1 + 0xe0) >> 1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xf0 | 2;
    FUN_03f33f70(*(undefined8 *)PTR_DAT_04bb49b8,param_1 + 0xd8,&local_2f0,&local_368);
  }
  else {
    lVar3 = *(long *)(param_1 + 0xe8);
    if (lVar3 == 0) {
      puVar4 = &DAT_0406a300;
    }
    else {
      (**(code **)(*(long *)(lVar3 + 0x360) + 0x18))(lVar3 + 0x360);
      puVar4 = *(undefined **)(lVar3 + 0x368);
    }
    (**(code **)(local_2f0 + 0x18))(&local_2f0);
    FUN_0156b428(auStack_258,&DAT_0406f6e3,puVar4,local_2e8);
    *(undefined4 *)(param_1 + 0xe4) = 8;
  }
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x20);
  uVar1 = FUN_01185be0(plVar2,param_1 + 0x70,param_1 + 200,param_1 + 9000,
                       *(undefined8 *)(param_1 + 0x10));
  return uVar1 & 1;
}

