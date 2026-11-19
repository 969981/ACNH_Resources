
void FUN_038710a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    FUN_002be2b4(param_1 + 8);
    FUN_002cc0f4(param_1 + 0x836,param_2);
    iVar1 = *param_1;
  }
  if (iVar1 == 2) {
    FUN_0022d52c(auStack_30,param_1 + 0x1b4a,param_1 + 0x176a);
    FUN_0022d584(auStack_30,param_1 + 0x1b4a,param_1 + 0x17da,param_1[0x834]);
  }
  else if (iVar1 == 1) {
    FUN_002cbc30(auStack_30,param_1 + 0x918,param_1 + 8);
    FUN_002cbc90(auStack_30,param_1 + 0x918,param_1 + 0x198,param_1[0x834]);
  }
  return;
}

