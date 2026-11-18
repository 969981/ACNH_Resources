
undefined2 FUN_036848f0(long param_1,long param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(param_2 + 0x2a) + *(uint *)(param_1 + 8);
  if (1 < *(uint *)(param_1 + 8)) {
    puVar1 = (undefined2 *)(param_2 + 0x2a);
  }
  return *puVar1;
}

