
bool FUN_003dba50(long param_1)

{
  short sVar1;
  ulong uVar2;
  short *psVar3;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x10);
  if (uVar2 == 0) {
    return false;
  }
  psVar3 = (short *)(param_1 + 0x14);
  do {
    uVar2 = uVar2 - 1;
    sVar1 = *psVar3;
    psVar3 = psVar3 + 6;
  } while (sVar1 != 0x4003 && uVar2 != 0);
  return sVar1 == 0x4003;
}

