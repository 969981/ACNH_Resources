
void FUN_003a8484(undefined8 *param_1)

{
  *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 4;
  memset((void *)*param_1,0,(ulong)*(ushort *)((long)param_1 + 10) * 0x50);
  return;
}

