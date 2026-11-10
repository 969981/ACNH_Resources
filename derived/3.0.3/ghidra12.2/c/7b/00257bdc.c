
void FUN_00257bdc(long *param_1)

{
  long lVar1;
  
  FUN_00257ca0();
  lVar1 = param_1[0x89];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    param_1[0x89] = 0;
  }
  lVar1 = param_1[0x87];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    param_1[0x87] = 0;
  }
  lVar1 = param_1[0x85];
  if (lVar1 != 0) {
    FUN_00220f6c(lVar1);
    FUN_00285dc0(lVar1);
    param_1[0x85] = 0;
  }
  lVar1 = param_1[0xa8];
  if (lVar1 != 0) {
    FUN_00220f6c(lVar1);
    FUN_00285dc0(lVar1);
    param_1[0xa8] = 0;
  }
  if (param_1[0x6e] != 0) {
    (**(code **)(*param_1 + 0x220))(param_1);
    param_1[0x6e] = 0;
  }
  lVar1 = param_1[0x68];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    param_1[0x68] = 0;
  }
  return;
}

