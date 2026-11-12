
undefined2 FUN_0068aa0c(long *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[2] != -1) {
    puVar1 = (undefined8 *)(*(long *)(param_1[1] + 0x38) + (long)(int)param_1[2] * 0x20);
    param_1 = (long *)(*(long *)(*(long *)*puVar1 + 0x30) +
                       (ulong)*(ushort *)((long)puVar1 + 0x14) * 0x28 + 0x10);
  }
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined2 *)(*param_1 + 2);
}

