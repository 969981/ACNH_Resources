
void FUN_03871820(int *param_1)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    FUN_00244594(auStack_30,param_1 + 0x13be);
  }
  else if (iVar1 == 2) {
    FUN_0022ce2c(auStack_30,param_1 + 0x176a);
  }
  else {
    if (iVar1 != 1) goto LAB_03871884;
    FUN_002bdc10(auStack_30,param_1 + 8);
  }
  iVar1 = *param_1;
LAB_03871884:
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

