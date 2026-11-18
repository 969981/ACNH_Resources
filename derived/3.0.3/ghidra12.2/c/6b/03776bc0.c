
/* WARNING: Removing unreachable block (ram,0x03776c40) */

long FUN_03776bc0(uint param_1)

{
  long lVar1;
  long lVar2;
  
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (9 < param_1)) || (DAT_05ab7608 == 0)) {
    lVar2 = 0;
    if (DAT_05574040 != 0) {
      if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar1 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
      }
      else {
        lVar1 = 0;
      }
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = lVar1 + 0xa8;
      }
    }
    lVar1 = 0;
    if (param_1 < 0x26) {
      lVar1 = lVar2 + (ulong)param_1 * 0x16c0 + 0x4d0;
    }
  }
  else {
    lVar1 = *(long *)(DAT_05ab7608 + (ulong)param_1 * 8 + 0x38) + 0x11b0;
  }
  return lVar1;
}

