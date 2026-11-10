
long FUN_0027fc70(long param_1,char param_2)

{
  long lVar1;
  char *pcVar2;
  
  if ((ulong)*(ushort *)(param_1 + 0xe6) != 0) {
    lVar1 = 0;
    pcVar2 = *(char **)(param_1 + 0xb0);
    do {
      if (*pcVar2 == param_2) {
        return *(long *)(param_1 + 0xa8) + lVar1;
      }
      lVar1 = lVar1 + 0x80;
      pcVar2 = pcVar2 + 1;
    } while ((ulong)*(ushort *)(param_1 + 0xe6) * 0x80 != lVar1);
  }
  return 0;
}

