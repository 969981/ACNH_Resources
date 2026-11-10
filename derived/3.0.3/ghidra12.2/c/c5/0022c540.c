
void FUN_0022c540(long *param_1,undefined8 *param_2,void *param_3,uint param_4)

{
  ulong uVar1;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  
  if ((param_2 == (undefined8 *)0x0) || (param_4 == 0)) {
    *param_1 = 0;
    return;
  }
  *param_1 = (long)param_2;
  if (param_4 < 0x41) {
    uVar1 = (ulong)param_4;
    memcpy(&local_60,param_3,uVar1);
  }
  else {
    (**(code **)*param_2)(param_2);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_3,param_4);
    (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,&local_60);
    uVar1 = (**(code **)(*(long *)*param_1 + 0x10))();
    uVar1 = uVar1 & 0xffffffff;
  }
  if (uVar1 < 0x40) {
    memset((void *)((long)&local_60 + uVar1),0,0x40 - uVar1);
  }
  *(uint *)(param_1 + 1) = local_60 ^ 0x36363636;
  *(uint *)((long)param_1 + 0xc) = uStack_5c ^ 0x36363636;
  *(uint *)(param_1 + 9) = local_60 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x4c) = uStack_5c ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 10) = local_58 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x54) = uStack_54 ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 2) = local_58 ^ 0x36363636;
  *(uint *)((long)param_1 + 0x14) = uStack_54 ^ 0x36363636;
  *(uint *)(param_1 + 0xb) = local_50 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x5c) = uStack_4c ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 3) = local_50 ^ 0x36363636;
  *(uint *)((long)param_1 + 0x1c) = uStack_4c ^ 0x36363636;
  *(uint *)(param_1 + 0xc) = local_48 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 100) = uStack_44 ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 4) = local_48 ^ 0x36363636;
  *(uint *)((long)param_1 + 0x24) = uStack_44 ^ 0x36363636;
  *(uint *)(param_1 + 0xd) = local_40 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x6c) = uStack_3c ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 5) = local_40 ^ 0x36363636;
  *(uint *)((long)param_1 + 0x2c) = uStack_3c ^ 0x36363636;
  *(uint *)(param_1 + 0xe) = local_38 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x74) = uStack_34 ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 6) = local_38 ^ 0x36363636;
  *(uint *)((long)param_1 + 0x34) = uStack_34 ^ 0x36363636;
  *(uint *)(param_1 + 0xf) = local_30 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x7c) = uStack_2c ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 7) = local_30 ^ 0x36363636;
  *(uint *)((long)param_1 + 0x3c) = uStack_2c ^ 0x36363636;
  *(uint *)(param_1 + 8) = local_28 ^ 0x36363636;
  *(uint *)((long)param_1 + 0x44) = uStack_24 ^ 0x36363636;
  *(uint *)(param_1 + 0x10) = local_28 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x84) = uStack_24 ^ 0x5c5c5c5c;
  return;
}

