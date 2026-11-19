
void FUN_03871310(int *param_1)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  iVar1 = *param_1;
  if (iVar1 == 2) {
    FUN_0022cfb0(auStack_30,param_1 + 0x176a);
  }
  else {
    if (iVar1 != 1) goto LAB_0387135c;
    FUN_002bdb48(auStack_30,param_1 + 8);
  }
  iVar1 = *param_1;
LAB_0387135c:
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

