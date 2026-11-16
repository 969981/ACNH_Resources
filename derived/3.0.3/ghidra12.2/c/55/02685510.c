
/* WARNING: Removing unreachable block (ram,0x02685548) */

long FUN_02685510(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if (DAT_05574040 != 0) {
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar1 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar1 = 0;
    }
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = lVar1 + 0xa8;
    }
  }
  return lVar2 + 0x428;
}

