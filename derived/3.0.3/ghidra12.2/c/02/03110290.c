
undefined8 FUN_03110290(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 0x210);
  puVar2 = puVar1 + param_2;
  if (0x21 < param_2) {
    puVar2 = puVar1;
  }
  return *puVar2;
}

