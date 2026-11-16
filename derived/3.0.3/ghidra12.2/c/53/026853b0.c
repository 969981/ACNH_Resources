
/* WARNING: Removing unreachable block (ram,0x026853e8) */

long FUN_026853b0(ushort param_1)

{
  long lVar1;
  long lVar2;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
    lVar1 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
    lVar2 = 0;
    if ((param_1 < 500) && (lVar1 != 0)) {
      lVar2 = lVar1 + (ulong)param_1 * 0x2d48 + 0x4cc10;
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

