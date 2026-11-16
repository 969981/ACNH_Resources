
/* WARNING: Removing unreachable block (ram,0x028beeb8) */

byte FUN_028bee80(void)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = 0;
  if (DAT_05574040 != 0) {
    uVar1 = *(uint *)(DAT_05574040 + 0x120);
    if (*(int *)(DAT_05574040 + 0x124) != 1 || ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)
    {
      uVar1 = 0xffffffff;
    }
    if (uVar1 < 8) {
      lVar3 = FUN_026ef080();
      bVar2 = 0;
      if (lVar3 != 0) {
        bVar2 = *(byte *)(lVar3 + 0x70464) & 1;
      }
    }
    else {
      bVar2 = 0;
    }
  }
  return bVar2;
}

