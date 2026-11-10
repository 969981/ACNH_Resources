
undefined8 FUN_002a5ccc(long param_1,byte param_2)

{
  if ((param_2 == 0xfd) || (*(ushort *)(param_1 + 0x6ae) <= (ushort)param_2)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x538);
}

