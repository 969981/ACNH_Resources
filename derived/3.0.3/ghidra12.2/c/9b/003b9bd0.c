
bool FUN_003b9bd0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_003b90f4(*(undefined8 *)(param_1 + 0x40));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}

