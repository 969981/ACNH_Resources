
void FUN_03872304(int *param_1,undefined8 param_2)

{
  int iVar1;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_30 [4];
  
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)local_30);
  iVar1 = *param_1;
  if (iVar1 == 0) {
    FUN_00244758(param_1 + 0x144c,param_2);
  }
  else if (iVar1 == 2) {
    FUN_0022d6dc(param_1 + 0x190e,param_2);
  }
  else {
    if (iVar1 != 1) goto LAB_03872388;
    FUN_002cc03c(param_1 + 0x836,param_2);
  }
  iVar1 = *param_1;
LAB_03872388:
  if (iVar1 == 2) {
    FUN_0022d52c(local_30,param_1 + 0x1b4a,param_1 + 0x176a);
    FUN_0022d584(local_30,param_1 + 0x1b4a,param_1 + 0x17da,param_1[0x834]);
  }
  else if (iVar1 == 1) {
    FUN_002cbc30(local_30,param_1 + 0x918,param_1 + 8);
    FUN_002cbc90(local_30,param_1 + 0x918,param_1 + 0x198,param_1[0x834]);
  }
  return;
}

