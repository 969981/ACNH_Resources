
uint FUN_00466f40(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong local_30;
  ulong uStack_28;
  
  local_30 = 0;
  (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_30);
  uVar1 = local_30;
  if (local_30 == 0) {
    return 0;
  }
  uVar3 = FUN_00427d00(param_1[1]);
  if ((uVar3 & 1) == 0) {
    local_30 = FUN_0043a320(uVar1,0);
    uStack_28 = 0;
  }
  else {
    uStack_28 = FUN_0043a310(uVar1,0);
    local_30 = -uStack_28;
    if (-1 < (long)uStack_28) {
      local_30 = uStack_28;
    }
    uStack_28 = uStack_28 >> 0x3f;
  }
  uVar2 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                    ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],&local_30);
  return ~uVar2 >> 0x1f;
}

