
bool FUN_00356370(long param_1,ushort param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*(byte *)(param_1 + (ulong)param_2 + 0x1888);
  if (uVar2 == 0) {
    return false;
  }
  pbVar3 = *(byte **)(param_1 + (ulong)param_2 * 8 + 0x18a8);
  if (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)*pbVar3) != '\0') {
    return true;
  }
  uVar1 = 1;
  do {
    uVar4 = uVar1;
    if (uVar2 == uVar4) break;
    uVar1 = uVar4 + 1;
  } while (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)pbVar3[uVar4]) == '\0');
  return uVar4 < uVar2;
}

