
int FUN_00227e00(byte *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  
  bVar1 = *param_1;
  if (bVar1 == 0 || param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    pbVar3 = param_1;
    do {
      if ((char)bVar1 < '\0') {
        if ((byte)(bVar1 + 0x3e) < 0x1e) {
          lVar4 = 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          lVar4 = 3;
        }
        else if ((bVar1 & 0xf8) == 0xf0) {
          lVar4 = 4;
        }
        else if ((bVar1 & 0xfc) == 0xf8) {
          lVar4 = 5;
        }
        else {
          if ((bVar1 & 0xfe) != 0xfc) {
            return iVar2;
          }
          lVar4 = 6;
        }
      }
      else {
        lVar4 = 1;
      }
      pbVar3 = pbVar3 + lVar4;
      iVar2 = iVar2 + 1;
      bVar1 = *pbVar3;
    } while (bVar1 != 0 && (long)pbVar3 - (long)param_1 < (long)(ulong)param_2);
  }
  return iVar2;
}

