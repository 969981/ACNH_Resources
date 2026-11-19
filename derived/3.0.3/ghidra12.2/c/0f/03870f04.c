
void FUN_03870f04(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  
  iVar2 = *param_1;
  if (iVar2 == 2) {
    piVar1 = param_1 + 0x176a;
  }
  else {
    if (iVar2 != 1) goto LAB_03870f44;
    piVar1 = param_1 + 8;
  }
  FUN_002931a4(piVar1);
  iVar2 = *param_1;
LAB_03870f44:
  if (iVar2 == 2) {
    FUN_0022d52c(auStack_30,param_1 + 0x1b4a,param_1 + 0x176a);
    FUN_0022d584(auStack_30,param_1 + 0x1b4a,param_1 + 0x17da,param_1[0x834]);
  }
  else if (iVar2 == 1) {
    FUN_002cbc30(auStack_30,param_1 + 0x918,param_1 + 8);
    FUN_002cbc90(auStack_30,param_1 + 0x918,param_1 + 0x198,param_1[0x834]);
  }
  return;
}

