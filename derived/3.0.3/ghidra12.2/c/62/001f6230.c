
long FUN_001f6230(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x11) >> 1 & 1) == 0) {
    lVar2 = FUN_001f6550();
    FUN_001f6520(*(undefined8 *)(param_1 + 0x88));
  }
  else {
    iVar1 = FUN_001f6570(*(undefined8 *)(param_1 + 0x88));
    while( true ) {
      if (iVar1 != 0) {
        return 0;
      }
      lVar2 = FUN_001f6550(*(undefined8 *)(param_1 + 0x88));
      FUN_001f6520(*(undefined8 *)(param_1 + 0x88));
      if (*(char *)(lVar2 + 1) == '\b') break;
      FUN_001f4e60(*(undefined8 *)(lVar2 + 8));
      FUN_001f4e60(lVar2);
      iVar1 = FUN_001f6570(*(undefined8 *)(param_1 + 0x88));
    }
  }
  return lVar2;
}

