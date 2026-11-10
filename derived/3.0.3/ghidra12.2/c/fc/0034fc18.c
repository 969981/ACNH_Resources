
void FUN_0034fc18(undefined4 *param_1)

{
  param_1[4] = 0;
  *param_1 = 0x3020002;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 6) = 0;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfff0;
  *(ushort *)((long)param_1 + 0x1a) = *(ushort *)((long)param_1 + 0x1a) & 0xfffe;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0xffffffff;
  return;
}

