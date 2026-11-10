
undefined8 FUN_00172c94(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_3 + 0xe6) == '\0') {
    return 0;
  }
  FUN_00173424(param_2 + 0x18,param_3 + 0x10);
  *(undefined1 *)(param_3 + 0xe6) = 0;
  uVar1 = FUN_00172cdc(param_1,param_3);
  return uVar1;
}

