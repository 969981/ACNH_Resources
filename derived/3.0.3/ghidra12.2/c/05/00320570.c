
void FUN_00320570(undefined8 param_1,long *param_2)

{
  if (DAT_04c61bb8 != 0) {
    FUN_0034f7c4(&DAT_04c61ad0,param_1);
    FUN_0034f968(&DAT_04c61a88,param_1);
    FUN_0034915c(&DAT_04c61968,param_1);
    (**(code **)(*param_2 + 0x18))(param_2,DAT_04c61bb8);
    DAT_04c61bb8 = 0;
  }
  return;
}

