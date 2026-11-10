
void FUN_002e8850(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_00296e94();
  param_1[0x53] = 0;
  *param_1 = &PTR_FUN_04849a00;
  *(undefined1 *)(param_1 + 0x58) = 0xff;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x1958,uVar1);
  if (lVar2 != 0) {
    FUN_002ea1a0(lVar2);
  }
  param_1[0x59] = lVar2;
  return;
}

