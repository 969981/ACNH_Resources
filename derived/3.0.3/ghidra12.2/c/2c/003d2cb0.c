
undefined8 FUN_003d2cb0(long param_1,undefined8 *param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  if ((puVar1 == (uint *)0x0) || (*puVar1 <= param_3)) {
    return 0;
  }
  *param_2 = *(undefined8 *)((long)puVar1 + (long)(int)puVar1[(ulong)param_3 * 2 + 2]);
  return 1;
}

