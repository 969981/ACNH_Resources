
void FUN_0039e9d0(long param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = *(byte *)(param_1 + 0x9c);
  if ((ulong)bVar2 != 0) {
    lVar3 = 0;
    do {
      pcVar1 = (char *)(*(long *)(param_1 + 0x38) + lVar3);
      if (*pcVar1 != '\0') {
        FUN_0034d6e0(pcVar1,param_2);
        FUN_0034d620(pcVar1);
      }
      lVar3 = lVar3 + 0x78;
    } while ((ulong)bVar2 * 0x78 != lVar3);
  }
  return;
}

