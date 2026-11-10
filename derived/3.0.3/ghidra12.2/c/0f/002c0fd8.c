
undefined8 FUN_002c0fd8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar2 = 1;
    *(undefined8 *)(param_1 + 0xc0) = param_2;
  }
  return uVar2;
}

