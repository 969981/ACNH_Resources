
undefined1  [16] FUN_0068bc94(long *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  ushort *puVar3;
  long *plVar4;
  ushort *local_30;
  ulong uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_20 = 0;
  local_18 = 0;
  plVar4 = param_1;
  if ((int)param_1[2] != -1) {
    puVar1 = (undefined8 *)(*(long *)(param_1[1] + 0x38) + (long)(int)param_1[2] * 0x20);
    plVar4 = (long *)(*(long *)(*(long *)*puVar1 + 0x30) +
                      (ulong)*(ushort *)((long)puVar1 + 0x14) * 0x28 + 0x10);
  }
  puVar3 = *(ushort **)(*(long *)(*plVar4 + 8) + (long)param_2 * 0x10 + 0x20);
  local_30 = puVar3 + 1;
  uStack_28 = (ulong)*puVar3;
  FUN_0068bd20(param_1,&local_20,&local_30);
  auVar2._8_4_ = local_18;
  auVar2._0_8_ = local_20;
  auVar2._12_4_ = uStack_14;
  return auVar2;
}

