
void FUN_0281cb30(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  FUN_0281a400();
  FUN_0281a5b0(param_1);
  FUN_0281a7b0(param_1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 2);
    iVar3 = 0;
    do {
      FUN_026570b0(*(undefined4 *)(lVar2 + (long)iVar3 * 0x3c + 0x38));
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  FUN_0281b860(param_1);
  FUN_0281ba10(param_1);
  FUN_0281bf60(param_1);
  FUN_0281c0e0(param_1);
  FUN_0281c310(param_1);
  FUN_0281c5e0(param_1);
  FUN_02819f90(param_1);
  FUN_0281a130(param_1);
  FUN_0266eea0();
  FUN_0281c9e0(param_1);
  return;
}

