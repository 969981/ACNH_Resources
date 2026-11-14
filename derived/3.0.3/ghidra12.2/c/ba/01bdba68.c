
void FUN_01bdba68(uint *param_1,long param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined **local_670;
  undefined8 *local_668;
  undefined8 local_660;
  undefined *local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined4 local_644;
  undefined *local_640;
  long local_638;
  undefined8 local_630;
  undefined *local_628;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined *local_5f8;
  undefined1 local_5ed;
  undefined *local_5e8;
  long lStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined *local_5c8;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined *local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined *local_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined1 auStack_550 [8];
  undefined8 local_548;
  undefined8 uStack_540;
  undefined *local_538;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined *local_508;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined *local_4d8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined *local_4a8;
  undefined4 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined4 local_470;
  uint local_46c;
  undefined4 local_468;
  undefined1 local_464;
  undefined1 *local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined1 auStack_44c [964];
  undefined *local_88;
  byte *local_80;
  undefined4 local_78;
  byte local_74 [31];
  undefined1 local_55;
  
  local_80 = (byte *)(param_2 + 0x12e);
  puVar6 = param_1 + 2;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,0xf0);
  (**(code **)(*(long *)puVar6 + 0x38))(puVar6);
  puVar3 = PTR_DAT_04bc0cd8;
  local_658 = (undefined *)0x0;
  uStack_650 = 0;
  local_660 = 0;
  local_648 = CONCAT31(local_648._1_3_,1);
  local_644 = 0;
  local_670 = (undefined **)(PTR_DAT_04bc0cd8 + 0x10);
  local_668 = (undefined8 *)0x0;
  FUN_02906b00(&local_670,puVar6,&local_88);
  bVar2 = *(byte *)(param_2 + 0xb8);
  pbVar7 = (byte *)(param_2 + 0x60);
  if (bVar2 == 1) {
    local_80 = local_74;
    local_55 = 0;
    local_78 = 0x20;
    local_74[0] = 0;
    local_88 = PTR_DAT_04bb2028 + 0x10;
    FUN_038d1270(&local_88,"-----");
    if ((ulong)*pbVar7 < 0x23) {
      FUN_038d1270(&local_88,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar7 * 8 + 0xb0),
                   *(undefined1 *)(param_2 + 0x61));
    }
    (**(code **)(local_88 + 0x18))(&local_88);
    pbVar4 = local_80;
    local_658 = (undefined *)0xffffffff;
    uStack_650 = 0xffffffff00000000;
    local_638 = (long)&local_630 + 4;
    local_660 = CONCAT35(local_660._5_3_,0x20);
    local_668 = &local_590;
    local_648 = 0xffffffff;
    local_5ed = 0;
    local_630 = CONCAT35(local_630._5_3_,0x40);
    local_640 = PTR_DAT_04bb2bc0 + 0x10;
    local_598._0_4_ = (uint)(uint3)local_598;
    local_5d8 = CONCAT35(local_5d8._5_3_,0x40);
    lStack_5e0 = (long)&local_5d8 + 4;
    local_670 = (undefined **)(PTR_DAT_04bb4e10 + 0x10);
    local_590 = 0;
    uStack_588 = 0;
    local_580 = 0;
    local_578 = 0;
    local_570 = 0;
    local_568 = (undefined *)0x0;
    local_560 = 0;
    uStack_558 = 0;
    puVar1 = auStack_550;
    if (auStack_550 <= (undefined1 *)((long)&local_590 + 2U)) {
      puVar1 = (undefined1 *)((long)&local_590 + 2U);
    }
    local_5e8 = local_640;
    memset(local_668,0,(size_t)(puVar1 + (-0xe0 - (long)&local_670)));
    FUN_01c0e6b4(&local_670,pbVar4,PTR_DAT_04bb2df0);
    (**(code **)(*(long *)(param_1 + 0xb2) + 0x28))(param_1 + 0xb2,&local_670);
    (**(code **)(*(long *)(param_1 + 0xb2) + 0x30))(param_1 + 0xb2,&local_670);
    bVar2 = *(byte *)(param_2 + 0xb8);
  }
  uVar5 = (uint)bVar2;
  local_670 = (undefined **)CONCAT44(local_670._4_4_,uVar5);
  if (uVar5 != 0) {
    if (uVar5 != 1) goto LAB_01bdbcd0;
    pbVar7 = (byte *)(param_2 + 100);
  }
  local_80 = pbVar7 + 4;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,10);
  (**(code **)(*(long *)(param_1 + 0xfa) + 0x38))(param_1 + 0xfa);
  local_644 = 0;
  local_648 = CONCAT31(local_648._1_3_,1);
  local_670 = (undefined **)(puVar3 + 0x10);
  local_658 = (undefined *)0x0;
  uStack_650 = 0;
  local_668 = (undefined8 *)0x0;
  local_660 = 0;
  FUN_02906b00(&local_670,param_1 + 0xfa,&local_88);
  uVar5 = 2;
  if (pbVar7[0x18] < 4) {
    uVar5 = (uint)pbVar7[0x18];
  }
  param_1[0x138] = uVar5;
LAB_01bdbcd0:
  uVar5 = *param_1;
  memset(&local_668,0,0x1e0);
  local_670 = &PTR_LAB_04a3cd38;
  local_488 = 0xffffffff;
  local_470 = 0;
  local_638 = 0;
  local_630 = 0;
  local_658 = PTR_DAT_04bb2d80 + 0x10;
  local_608 = 0;
  uStack_600 = 0;
  local_460 = auStack_44c;
  local_458 = 0x78;
  local_468 = 3;
  if ((uVar5 & 0xfffffffe) == 0xe) {
    local_468 = 4;
  }
  local_464 = 0;
  local_450 = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_578 = 0;
  local_570 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_480 = 0;
  uStack_478 = 0;
  local_628 = local_658;
  local_5f8 = local_658;
  local_5c8 = local_658;
  local_598 = local_658;
  local_568 = local_658;
  local_538 = local_658;
  local_508 = local_658;
  local_4d8 = local_658;
  local_4a8 = local_658;
  local_46c = uVar5;
  FUN_01bd9dd0(&local_670,param_1 + 0x13a,puVar6);
  return;
}

