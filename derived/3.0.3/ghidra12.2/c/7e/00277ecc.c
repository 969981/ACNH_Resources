
void FUN_00277ecc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_00227770();
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_048453c8;
  param_1[0xb] = 0;
  param_1[0xc] = 10000;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x30,uVar1);
  if (lVar2 != 0) {
    FUN_00220ebc(lVar2);
  }
  param_1[0xe] = lVar2;
  return;
}

