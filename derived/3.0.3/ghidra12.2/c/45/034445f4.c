
void FUN_034445f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  long lVar4;
  undefined *local_598;
  undefined1 *puStack_590;
  undefined4 local_588;
  undefined1 local_584 [63];
  undefined1 local_545;
  undefined8 local_540;
  undefined *local_538;
  undefined1 *puStack_530;
  undefined4 local_528;
  undefined1 local_524;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined4 local_510;
  undefined *local_508;
  undefined1 *puStack_500;
  undefined4 local_4f8;
  undefined1 local_4f4 [63];
  undefined1 local_4b5;
  undefined *local_4b0;
  undefined1 *puStack_4a8;
  undefined4 local_4a0;
  undefined1 local_49c [63];
  undefined1 local_45d;
  undefined1 auStack_458 [2];
  undefined4 auStack_456 [255];
  undefined4 local_58 [2];
  
  (**(code **)(*(long *)(param_1 + 8) + 0x18))((long *)(param_1 + 8));
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    local_524 = 0;
    local_528 = 0x200;
    local_520 = 0xffffffff;
    uStack_518 = 0xffffffff00000000;
    uVar3 = *(undefined2 *)(param_1 + 0x30);
    local_510 = 0xffffffff;
    puStack_500 = local_4f4;
    local_4f8 = 0x40;
    local_4b5 = 0;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    local_4f4[0] = 0;
    local_4a0 = 0x40;
    local_45d = 0;
    local_49c[0] = 0;
    puStack_4a8 = local_49c;
    local_538 = &DAT_04a3e468;
    puStack_530 = auStack_458;
    local_508 = puVar1;
    local_4b0 = puVar1;
    memset(auStack_458,0,0x400);
    puVar2 = local_58;
    if (local_58 <= auStack_456) {
      puVar2 = auStack_456;
    }
    memset(auStack_458,0,(long)puVar2 + (-0xe0 - (long)&local_538));
    local_58[0] = 0;
    FUN_01c0c818(&local_538,uVar3,lVar4);
    local_588 = 0x40;
    puStack_590 = local_584;
    local_545 = 0;
    local_584[0] = 0;
    local_598 = puVar1;
    local_540 = param_2;
    FUN_034632e0(&local_598,&local_538);
  }
  return;
}

