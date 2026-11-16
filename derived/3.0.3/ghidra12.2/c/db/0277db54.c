
bool FUN_0277db54(void)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = DAT_05150358;
  if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
     (((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
    uVar2 = FUN_0277d6c4();
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if (uVar2 < *(uint *)(lVar1 + 0x1d8)) {
      return *(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar2 * 8) != 0;
    }
  }
  return false;
}

