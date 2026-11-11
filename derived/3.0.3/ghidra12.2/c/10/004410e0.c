
undefined4 FUN_004410e0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00427110(*(undefined8 *)(param_2 + 8),param_1[1]);
  if ((uVar2 & 1) == 0) {
    return 0x80040200;
  }
  uVar1 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x48))
                    ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],param_2);
  return uVar1;
}

