
/* WARNING: Removing unreachable block (ram,0x00446870) */

uint FUN_00446840(long param_1,ulong param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = 0x811c9dc5;
  uVar2 = 0x811c9dc5;
  if (0 < (long)param_2) {
    if (param_2 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar2 = uVar3;
      do {
        pbVar1 = (byte *)(param_1 + lVar4);
        lVar4 = lVar4 + 2;
        uVar2 = ((uVar2 ^ *pbVar1) * 0x1000193 ^ (uint)pbVar1[1]) * 0x1000193;
      } while (param_2 - (param_2 & 1) != lVar4);
      if ((param_2 & 1) == 0) {
        return uVar2;
      }
    }
    uVar3 = (uVar2 ^ *(byte *)(param_1 + lVar4)) * 0x1000193;
  }
  return uVar3;
}

