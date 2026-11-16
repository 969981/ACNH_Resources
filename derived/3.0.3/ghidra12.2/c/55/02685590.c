
/* WARNING: Removing unreachable block (ram,0x026855cc) */

long FUN_02685590(uint param_1)

{
  long lVar1;
  long lVar2;
  
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
  lVar1 = lVar2 + 0x49d78 + (ulong)param_1 * 0xb60;
  if (3 < param_1) {
    lVar1 = lVar2 + 0x49d78;
  }
  return lVar1;
}

