
void FUN_002804d4(long param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = 0;
  memset(*(void **)(param_1 + 0x68),0,
         (ulong)*(ushort *)(param_1 + 0x58) * (ulong)*(ushort *)(param_1 + 0x58));
  memset(*(void **)(param_1 + 0x70),0,(ulong)*(ushort *)(param_1 + 0x58) << 2);
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}

