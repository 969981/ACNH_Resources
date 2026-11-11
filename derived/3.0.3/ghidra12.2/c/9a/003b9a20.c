
undefined8 FUN_003b9a20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_003b8f80(*(long *)(param_1 + 0x38),1,param_2);
  return uVar1;
}

