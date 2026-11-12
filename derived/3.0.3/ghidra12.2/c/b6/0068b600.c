
undefined1 FUN_0068b600(long *param_1,int param_2)

{
  undefined8 *puVar1;
  ushort *puVar2;
  long *plVar3;
  ushort *local_28;
  ulong uStack_20;
  undefined1 local_14 [4];
  
  plVar3 = param_1;
  if ((int)param_1[2] != -1) {
    puVar1 = (undefined8 *)(*(long *)(param_1[1] + 0x38) + (long)(int)param_1[2] * 0x20);
    plVar3 = (long *)(*(long *)(*(long *)*puVar1 + 0x30) +
                      (ulong)*(ushort *)((long)puVar1 + 0x14) * 0x28 + 0x10);
  }
  puVar2 = *(ushort **)(*(long *)(*plVar3 + 8) + (long)param_2 * 0x10 + 0x20);
  local_28 = puVar2 + 1;
  uStack_20 = (ulong)*puVar2;
  FUN_0068b680(param_1,local_14,&local_28);
  return local_14[0];
}

