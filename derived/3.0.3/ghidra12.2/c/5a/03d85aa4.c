
void FUN_03d85aa4(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *local_38;
  char *pcStack_30;
  undefined4 local_24;
  
  local_24 = 1;
  if ((*(byte *)((long)param_1 + 0x2c4) & 1) == 0) {
    lVar2 = param_1[0x54];
    if (lVar2 != 0) {
      uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      *(undefined4 *)(lVar2 + 0x40) = uVar1;
    }
    if (param_1[0x55] != 0) {
      *(undefined4 *)(param_1[0x55] + 0x40) = local_24;
    }
    local_38 = PTR_DAT_04bb2020 + 0x10;
    pcStack_30 = "Select";
    FUN_03d66950(param_1,&local_38,param_1[0x51]);
  }
  else {
    *(byte *)((long)param_1 + 0x2c4) = *(byte *)((long)param_1 + 0x2c4) & 0xfe;
  }
  return;
}

