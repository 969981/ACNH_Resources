
byte FUN_0207fa5c(undefined8 *param_1,long param_2,int *param_3,undefined4 *param_4,byte param_5)

{
  byte bVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  byte local_2c;
  undefined8 *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  
  local_2c = param_5 & 1;
  local_18 = *param_3;
  if (local_18 - 2U < 4 || local_18 == 7) {
    local_40 = *param_1;
    local_20 = *(undefined4 *)(param_2 + 8);
    uStack_1c = *(undefined4 *)(param_2 + 0xc);
    local_38 = *(undefined4 *)(param_1 + 1);
    local_28 = &DAT_048f9750;
    local_34 = *param_4;
    uStack_30 = 0x41200000;
    bVar1 = FUN_015233e0(*(undefined8 *)PTR_DAT_04bb4c80,&local_40);
  }
  else {
    local_40 = *param_1;
    local_38 = *(undefined4 *)(param_1 + 1);
    local_20 = *(undefined4 *)(param_2 + 8);
    uStack_1c = *(undefined4 *)(param_2 + 0xc);
    local_28 = &DAT_048f9750;
    local_34 = *param_4;
    uStack_30 = 0x41200000;
    bVar1 = FUN_01521d80(*(undefined8 *)PTR_DAT_04bb4c80,&local_40);
  }
  return bVar1 & local_2c != 0;
}

