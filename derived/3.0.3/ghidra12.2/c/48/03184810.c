
undefined8 FUN_03184810(long param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2 < 0x14) {
    puVar1 = (undefined8 *)(param_1 + 0x590) + param_2;
    if (0x13 < param_2) {
      puVar1 = (undefined8 *)(param_1 + 0x590);
    }
    return *puVar1;
  }
  if (param_2 < 0x28) {
    return *(undefined8 *)(param_1 + (ulong)(param_2 - 0x14) * 8 + 0x630);
  }
  if (param_2 == 0x28) {
    return *(undefined8 *)(param_1 + 0x6d0);
  }
  if (param_2 < 0x2a) {
    return *(undefined8 *)(param_1 + 0x6d8);
  }
  if (param_2 == 0x2a) {
    return *(undefined8 *)(param_1 + 0x6e0);
  }
  return 0;
}

