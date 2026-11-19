
void FUN_03870fc8(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    FUN_00244410(param_1 + 0x13be);
  }
  else {
    if (iVar2 == 2) {
      piVar1 = param_1 + 0x176a;
    }
    else {
      if (iVar2 != 1) goto LAB_0387101c;
      piVar1 = param_1 + 8;
    }
    FUN_002931c4(piVar1);
  }
  iVar2 = *param_1;
LAB_0387101c:
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

