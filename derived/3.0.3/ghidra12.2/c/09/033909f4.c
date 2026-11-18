
void FUN_033909f4(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  
  if (DAT_05739db8 != 0) {
    lVar2 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar2 = 0;
    }
    pcVar1 = (char *)(lVar2 + 0x68);
    pcVar3 = pcVar1 + (ulong)param_2 * 2;
    if (0x34 < param_2) {
      pcVar3 = pcVar1;
    }
    if (*pcVar3 != '\0') {
      pcVar3 = pcVar1 + (ulong)param_2 * 2;
      if (0x34 < param_2) {
        pcVar3 = pcVar1;
      }
      pcVar3[1] = '\x01';
      return;
    }
  }
  return;
}

