
void FUN_03aa8bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  undefined *local_30;
  byte *local_28;
  
  FUN_03aa8d50(param_1,param_2,0,param_3);
  lVar5 = *(long *)(param_1 + 0x28);
  uVar1 = crc32b(0xffffffff,0x65,0x4c11db7);
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x62,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  uVar4 = crc32b(uVar1,0x65,0x4c11db7);
  *(uint *)(param_1 + 1000) = ~uVar4;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    plVar2 = (long *)(lVar5 + 8);
    if (*(long *)(lVar5 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(lVar5 + 0x10) + 0x10);
    }
    *plVar2 = param_1 + 0x3e0;
    *(long *)(lVar5 + 0x10) = param_1 + 0x3e0;
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    lVar5 = *(long *)(param_1 + 0x28);
  }
  local_30 = PTR_DAT_04bb2020;
  *(undefined1 *)(param_1 + 0x3f8) = 1;
  local_30 = local_30 + 0x10;
  local_28 = (byte *)0x40bd4c2;
  uVar3 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar3 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_30);
  }
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  (**(code **)(local_30 + 0x18))(&local_30);
  uVar4 = (uint)*local_28;
  if (*local_28 != 0) {
    uVar6 = 0xffffffff;
    pbVar7 = local_28;
    do {
      pbVar7 = pbVar7 + 1;
      uVar6 = crc32b(uVar6,uVar4,0x4c11db7);
      uVar4 = (uint)*pbVar7;
    } while (uVar4 != 0);
    uVar4 = ~uVar6;
  }
  *(uint *)(lVar5 + 0x1c) = uVar4;
  plVar2 = (long *)(param_1 + 0x218);
  if (*(long *)(param_1 + 0x220) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x220) + 0x20);
  }
  *plVar2 = lVar5;
  *(long *)(param_1 + 0x220) = lVar5;
  FUN_0393da40(param_1,0);
  *(undefined2 *)(param_1 + 0x418) = 0;
  *(undefined2 *)(param_1 + 0x48c) = 0;
  *(undefined2 *)(param_1 + 0x4b8) = 0x101;
  *(uint *)(param_1 + 0x41c) = *(uint *)(param_1 + 0x41c) & 0xfffffffe;
  *(uint *)(param_1 + 0x490) = *(uint *)(param_1 + 0x490) | 1;
  *(undefined4 *)(param_1 + 0x4b4) = 0x2020202;
  return;
}

