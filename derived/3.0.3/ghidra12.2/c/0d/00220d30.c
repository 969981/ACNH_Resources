
void FUN_00220d30(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_002212e4();
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_0022131c(param_1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*param_1 + 0x10))(param_1,0);
      iVar1 = (int)param_1[0xb];
      goto joined_r0x00220d84;
    }
    *(undefined1 *)(param_1 + 9) = 1;
    do {
      FUN_00227860(param_1,5);
      uVar2 = FUN_002212e4(param_1);
    } while ((uVar2 & 1) != 0);
  }
  iVar1 = (int)param_1[0xb];
joined_r0x00220d84:
  if (iVar1 == 1) {
    FUN_00221064(param_1 + 0xb);
  }
  FUN_00220f24(param_1 + 0xb);
  param_1[0x11] = 0;
  return;
}

