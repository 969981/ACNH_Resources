
void FUN_01dae990(void)

{
  long lVar1;
  byte local_4 [4];
  
  if (DAT_053cfba8 != 0) {
    FUN_0205ed4c();
  }
  lVar1 = DAT_04da7238;
  if (DAT_04da7238 != 0) {
    *(undefined2 *)(DAT_04da7238 + 0x65ad4) = 0xffff;
    *(undefined2 *)(lVar1 + 0x65ad8) = 0;
    *(undefined1 *)(lVar1 + 0x65ade) = 0;
    *(undefined1 *)(lVar1 + 0x65ad6) = 0xff;
    *(undefined4 *)(lVar1 + 0x65ada) = 0x101;
  }
  FUN_01c7373c(DAT_05351250);
  lVar1 = DAT_05351250;
  *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
       *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 2;
  if (*(char *)(lVar1 + 0x198) != '\0') {
    FUN_0092ae80(lVar1 + 0x148);
    *(undefined1 *)(lVar1 + 0x198) = 0;
  }
  FUN_0252d11c(local_4);
  if (local_4[0] < 8) {
    FUN_0092eb10(local_4);
  }
  return;
}

