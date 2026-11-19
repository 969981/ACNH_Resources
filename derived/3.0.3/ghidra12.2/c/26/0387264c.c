
void FUN_0387264c(int *param_1)

{
  int iVar1;
  undefined1 auStack_50 [16];
  undefined *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    local_30 = 0;
    local_28 = 0;
    local_40 = PTR_DAT_04bcb840 + 0x10;
    uStack_38 = 0;
    FUN_002524c0(auStack_50,param_1 + 0x144c,&local_40);
  }
  else {
    if (iVar1 != 1) goto LAB_038726d0;
    local_30 = 0;
    local_28 = 0;
    local_40 = PTR_DAT_04bcb840 + 0x10;
    uStack_38 = 0;
    FUN_002cc058(auStack_50,param_1 + 0x836,&local_40);
  }
  iVar1 = *param_1;
LAB_038726d0:
  if (iVar1 == 2) {
    FUN_0022d52c(&local_40,param_1 + 0x1b4a,param_1 + 0x176a);
    FUN_0022d584(&local_40,param_1 + 0x1b4a,param_1 + 0x17da,param_1[0x834]);
  }
  else if (iVar1 == 1) {
    FUN_002cbc30(&local_40,param_1 + 0x918,param_1 + 8);
    FUN_002cbc90(&local_40,param_1 + 0x918,param_1 + 0x198,param_1[0x834]);
  }
  return;
}

