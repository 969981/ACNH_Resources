
undefined8 FUN_02e441bc(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if ((int)param_2 < 6) {
    puVar1 = (uint *)(param_1 + 0xd0);
    puVar2 = puVar1 + (ulong)param_2 * 4;
    if (5 < param_2) {
      puVar2 = puVar1;
    }
    if ((int)param_3 < (int)*puVar2) {
      puVar2 = puVar1 + (ulong)param_2 * 4;
      if (5 < param_2) {
        puVar2 = puVar1;
      }
      if (param_3 < *puVar2) {
        return *(undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)param_3 * 8);
      }
    }
  }
  return 0;
}

