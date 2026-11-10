
void FUN_0014a624(byte *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen((char *)param_1);
  if (0xfe < sVar2) {
    sVar2 = 0xff;
  }
  for (; sVar2 != 0; sVar2 = sVar2 - 1) {
    iVar1 = tolower((uint)*param_1);
    *param_3 = (char)iVar1;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  }
  FUN_001460b8(param_3,7,&DAT_0408f1f2,param_2);
  return;
}

