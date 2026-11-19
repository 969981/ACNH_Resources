
void FUN_0387220c(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    FUN_0025fa58(param_1 + 0x13b0,param_3 & 1);
  }
  else if (iVar1 == 2) {
    FUN_00242abc(param_1 + (long)param_2 * 0x9a + 0x17da,param_3 & 1);
  }
  else {
    if (iVar1 != 1) goto LAB_03872280;
    FUN_0030aa58(param_1 + (long)param_2 * 0x34e + 0x198,param_3 & 1);
  }
  iVar1 = *param_1;
LAB_03872280:
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

