
/* WARNING: Removing unreachable block (ram,0x02701bf0) */

long FUN_02701b70(long param_1)

{
  dword *pdVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_48 [9];
  
  puVar3 = local_48;
  lVar2 = 0;
  if (*(char *)(param_1 + 0x12) != '\0') {
    lVar2 = 0xc5c000;
  }
  lVar4 = 0x48;
  do {
    if (*(char *)*puVar3 != '\0') {
      pdVar1 = (dword *)0x16c000;
      if (((char *)*puVar3)[1] != '\0') {
        pdVar1 = &fde_04518000;
      }
      lVar2 = (long)pdVar1 + lVar2;
    }
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -8;
  } while (lVar4 != 0);
  if (*(char *)(param_1 + 0x10) != '\0') {
    lVar2 = lVar2 + 0x7c000;
  }
  return lVar2 + 0x184000;
}

