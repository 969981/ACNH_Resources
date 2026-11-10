
void FUN_0025ca88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_00227770();
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = param_2;
  *param_1 = &PTR_FUN_04844348;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x30,uVar1);
  if (lVar2 != 0) {
    FUN_00220ebc(lVar2);
  }
  param_1[0xc] = lVar2;
  return;
}

