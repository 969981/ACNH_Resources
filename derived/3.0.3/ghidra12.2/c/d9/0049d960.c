
void FUN_0049d960(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_004715a0(param_1 + 0x18);
  FUN_0049e2c0(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  do {
    iVar1 = FUN_0049f630(param_1 + 0x50);
  } while (iVar1 == 4);
  switch(iVar1) {
  case 0:
    uVar2 = FUN_0049d390(param_1);
    *(undefined4 *)(param_1 + 200) = uVar2;
    return;
  case 1:
    uVar2 = FUN_0049d7c0(param_1);
    *(undefined4 *)(param_1 + 200) = uVar2;
    return;
  case 2:
    *(undefined4 *)(param_1 + 200) = 4;
    return;
  case 3:
    *(undefined4 *)(param_1 + 200) = 5;
    return;
  default:
    *(undefined4 *)(param_1 + 200) = 6;
    return;
  case 5:
    *(undefined4 *)(param_1 + 200) = 7;
    return;
  }
}

