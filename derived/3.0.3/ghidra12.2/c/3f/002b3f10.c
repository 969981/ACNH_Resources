
undefined8 FUN_002b3f10(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    if (*(char *)(param_1 + 0x38) != -3) {
      uVar1 = FUN_002b3650(*(long *)(param_1 + 0x50),*(char *)(param_1 + 0x38),param_2);
      return uVar1;
    }
  }
  return 0xffffffff;
}

