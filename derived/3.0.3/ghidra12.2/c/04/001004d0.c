
int FUN_001004d0(byte *param_1)

{
  long lVar1;
  int iVar2;
  
  if (*(short *)param_1 == 0) {
    return 0;
  }
  iVar2 = 0;
  do {
    while( true ) {
      iVar2 = iVar2 + 1;
      if ((*param_1 & 0xfc) == 0xd8) break;
      param_1 = param_1 + 2;
      if (*(short *)param_1 == 0) {
        return iVar2;
      }
    }
    lVar1 = 1;
    if (*(short *)(param_1 + 2) != 0) {
      lVar1 = 2;
    }
    param_1 = param_1 + lVar1 * 2;
  } while (*(short *)param_1 != 0);
  return iVar2;
}

