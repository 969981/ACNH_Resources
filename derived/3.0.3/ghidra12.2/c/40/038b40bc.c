
long FUN_038b40bc(long *param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  if ((param_2 != 0) && ((char)param_1[0xf] != '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    if ((param_4 == 0) || ((uVar2 & 1) != 0)) {
      *(undefined4 *)(param_2 + 0x38) = param_5;
      lVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3,param_4);
      *(long *)(param_2 + 8) = lVar1;
      if (lVar1 != 0) {
        *(long **)(param_2 + 0x10) = param_1;
      }
    }
    else {
      lVar1 = 0;
    }
  }
  return lVar1;
}

