
bool FUN_003b9c50(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_003b9178(*(undefined8 *)(param_1 + 0x40));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    *(long *)(param_3 + 2) = (long)puVar1 + (long)(int)puVar1[3];
  }
  return puVar1 != (undefined4 *)0x0;
}

