
uint FUN_00466d40(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long local_30;
  undefined1 local_28;
  
  local_30 = 0;
  local_28 = 0;
  (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_30);
  uVar1 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                    ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],local_30 != 0);
  return ~uVar1 >> 0x1f;
}

