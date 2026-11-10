
void FUN_0025f220(undefined8 *param_1,void *param_2,ushort param_3,undefined4 param_4)

{
  memcpy((void *)*param_1,param_2,(ulong)param_3);
  *(ushort *)((long)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  return;
}

