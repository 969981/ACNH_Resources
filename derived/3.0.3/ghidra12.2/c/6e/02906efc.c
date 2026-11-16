
void FUN_02906efc(long *param_1,undefined8 param_2)

{
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x38))();
    local_38 = 0;
    uStack_30 = 0;
    local_40 = 0;
    local_28 = 1;
    local_24 = 0;
    local_50 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_48 = 0;
    FUN_02906b00(&local_50,param_1,param_2);
  }
  return;
}

