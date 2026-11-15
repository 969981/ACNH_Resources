
bool FUN_0243b378(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  
  if ((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) {
    return true;
  }
  bVar3 = *(byte *)(param_1 + 0x1ee8);
  pbVar1 = PTR_DAT_04bb32e0;
  if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
    pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
  }
  bVar2 = *pbVar1;
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  return bVar2 == bVar3;
}

