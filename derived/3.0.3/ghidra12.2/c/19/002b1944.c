
bool FUN_002b1944(long param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = FUN_002aed20();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (*(ushort *)(param_1 + 0x660) != 0) {
      uVar2 = (param_2 - 1U) / (uint)*(ushort *)(param_1 + 0x660);
    }
    uVar2 = uVar2 + 1;
  }
  return uVar2 <= *(int *)(param_1 + 0x28) - (uint)*(ushort *)(param_1 + 0x32);
}

