
/* WARNING: Removing unreachable block (ram,0x03775628) */

long FUN_037755f0(void)

{
  long lVar1;
  long lVar2;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
    lVar2 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
  }
  else {
    lVar2 = 0;
  }
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x5d3cb0;
  }
  return lVar1;
}

