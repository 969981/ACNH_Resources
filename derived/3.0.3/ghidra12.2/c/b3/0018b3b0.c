
long FUN_0018b3b0(byte *param_1)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = 1;
    do {
      if ((byte)(bVar1 + 0x3e) < 0x1e) {
        param_1 = param_1 + 1;
      }
      else if ((bVar1 & 0xf0) == 0xe0) {
        param_1 = param_1 + 2;
      }
      else if (((bVar1 & 0xfc) == 0xf8) ||
              ((bVar1 - 0xc0 < 0x40 &&
               ((1L << ((ulong)(bVar1 - 0xc0) & 0x3f) & 0xf0ff000000000003U) != 0)))) {
        return 0;
      }
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      lVar2 = lVar2 + 1;
    } while (bVar1 != 0);
  }
  return lVar2;
}

