
undefined1  [16] FUN_0068aa58(long *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 auVar3 [16];
  
  if ((int)param_1[2] != -1) {
    puVar1 = (undefined8 *)(*(long *)(param_1[1] + 0x38) + (long)(int)param_1[2] * 0x20);
    param_1 = (long *)(*(long *)(*(long *)*puVar1 + 0x30) +
                       (ulong)*(ushort *)((long)puVar1 + 0x14) * 0x28 + 0x10);
  }
  puVar2 = *(undefined2 **)(*(long *)(*param_1 + 8) + (long)param_2 * 0x10 + 0x20);
  auVar3._0_8_ = puVar2 + 1;
  auVar3._8_2_ = *puVar2;
  auVar3._10_6_ = 0;
  return auVar3;
}

