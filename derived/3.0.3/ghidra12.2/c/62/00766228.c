
bool FUN_00766228(short *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = DAT_053274a0;
  if ((char)param_1[8] != '\0' && *param_1 == -2) {
    return true;
  }
  uVar1 = FUN_0277d6c4();
  if (DAT_053274a0 != 0) {
    lVar2 = *(long *)(lVar2 + 0x57e58);
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
    if (uVar1 < *(uint *)(lVar2 + 0x1d8)) {
      return *(long *)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar1 * 8) != 0;
    }
  }
  return false;
}

