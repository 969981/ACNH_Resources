
void FUN_0027fa1c(long param_1,byte param_2)

{
  byte *pbVar1;
  
  if ((param_2 < 0x20) &&
     (pbVar1 = (byte *)(param_1 + (ulong)param_2 + 0x80),
     (ushort)*pbVar1 < *(ushort *)(param_1 + 0xa0))) {
    *pbVar1 = 0xff;
  }
  return;
}

