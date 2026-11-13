
bool FUN_0122449c(byte *param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  
  if (((param_2 & 1) != 0) && (lVar4 = *DAT_0537d558, 1 < *(byte *)(lVar4 + 0x476))) {
    bVar2 = *(byte *)(lVar4 + 0x473);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar4 + 0x48);
      }
      if ((*pbVar1 >> 3 & 1) != 0) {
        if (*(byte *)(lVar4 + 0x472) != bVar2 || 7 < *param_1) {
          return false;
        }
        goto LAB_012244f8;
      }
    }
  }
  if (7 < *param_1) {
    return false;
  }
LAB_012244f8:
  uVar3 = FUN_02582d8c(param_1,1);
  if ((uVar3 < 8) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')
     ) {
    return *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0';
  }
  return false;
}

