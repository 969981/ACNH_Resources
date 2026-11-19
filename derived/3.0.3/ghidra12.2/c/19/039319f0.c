
void FUN_039319f0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  long local_68;
  byte *local_60;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_006d8678(&local_68,"%s_type",param_2[1]);
  *(undefined8 *)(param_1 + 0x10) = 0;
  (**(code **)(local_68 + 0x18))(&local_68);
  uVar2 = (uint)*local_60;
  if (*local_60 != 0) {
    uVar3 = 0xffffffff;
    pbVar4 = local_60;
    do {
      pbVar4 = pbVar4 + 1;
      uVar3 = crc32b(uVar3,uVar2,0x4c11db7);
      uVar2 = (uint)*pbVar4;
    } while (uVar2 != 0);
    uVar2 = ~uVar3;
  }
  *(uint *)(param_1 + 8) = uVar2;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
    }
    *plVar1 = param_1;
    *(long *)(param_3 + 0x10) = param_1;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_006d8678(&local_68,"%s_range",param_2[1]);
  *(undefined8 *)(param_1 + 0x30) = 0;
  (**(code **)(local_68 + 0x18))(&local_68);
  uVar2 = (uint)*local_60;
  if (*local_60 != 0) {
    uVar3 = 0xffffffff;
    pbVar4 = local_60;
    do {
      pbVar4 = pbVar4 + 1;
      uVar3 = crc32b(uVar3,uVar2,0x4c11db7);
      uVar2 = (uint)*pbVar4;
    } while (uVar2 != 0);
    uVar2 = ~uVar3;
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
    }
    *plVar1 = param_1 + 0x20;
    *(long *)(param_3 + 0x10) = param_1 + 0x20;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x38) = 0x3f8000003e800000;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_006d8678(&local_68,"%s_scale",param_2[1]);
  *(undefined8 *)(param_1 + 0x50) = 0;
  (**(code **)(local_68 + 0x18))(&local_68);
  uVar2 = (uint)*local_60;
  if (*local_60 != 0) {
    uVar3 = 0xffffffff;
    pbVar4 = local_60;
    do {
      pbVar4 = pbVar4 + 1;
      uVar3 = crc32b(uVar3,uVar2,0x4c11db7);
      uVar2 = (uint)*pbVar4;
    } while (uVar2 != 0);
    uVar2 = ~uVar3;
  }
  *(uint *)(param_1 + 0x48) = uVar2;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
    }
    *plVar1 = param_1 + 0x40;
    *(long *)(param_3 + 0x10) = param_1 + 0x40;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  *(undefined1 **)(param_1 + 0x58) = &DAT_3f8000003f800000;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_006d8678(&local_68,"%s_trans",param_2[1]);
  *(undefined8 *)(param_1 + 0x70) = 0;
  (**(code **)(local_68 + 0x18))(&local_68);
  uVar2 = (uint)*local_60;
  if (*local_60 != 0) {
    uVar3 = 0xffffffff;
    do {
      local_60 = local_60 + 1;
      uVar3 = crc32b(uVar3,uVar2,0x4c11db7);
      uVar2 = (uint)*local_60;
    } while (uVar2 != 0);
    uVar2 = ~uVar3;
  }
  *(uint *)(param_1 + 0x68) = uVar2;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(param_3 + 0x10) + 0x10);
    }
    *plVar1 = param_1 + 0x60;
    *(long *)(param_3 + 0x10) = param_1 + 0x60;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}

