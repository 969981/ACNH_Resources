
void FUN_002be540(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  lVar2 = param_1;
  do {
    *(undefined2 *)(lVar2 + 0x1d) = 0;
    lVar1 = lVar1 + 4;
    *(undefined1 *)(lVar2 + 0x1f) = 0;
    lVar2 = param_1 + lVar1;
    *(undefined1 *)(lVar2 + 0x1c) = 0;
  } while (lVar1 != 0x100);
  *(undefined8 *)(param_1 + 0x14) = 0;
  return;
}

