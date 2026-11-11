
void FUN_003a0f60(long param_1,undefined8 param_2)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x5b);
  if ((ulong)bVar1 != 0) {
    lVar3 = 0;
    do {
      pcVar2 = *(char **)(*(long *)(param_1 + 0x18) + lVar3 + 0x10);
      if (*pcVar2 != '\0') {
        FUN_00347c8c(pcVar2,param_2);
        FUN_00347b98(pcVar2);
      }
      lVar3 = lVar3 + 0x38;
    } while ((ulong)bVar1 * 0x38 != lVar3);
  }
  return;
}

