
int FUN_004221e0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  (**(code **)(*DAT_04c6f378 + 0x20))(DAT_04c6f378,1,param_1,param_2,param_3,param_4);
  iVar1 = (**(code **)(*DAT_04c6f258 + 0x20))(DAT_04c6f258,1,param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_00445340();
  }
  return iVar1;
}

