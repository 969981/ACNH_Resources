
bool FUN_0073d7b0(long *param_1,undefined8 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[0x227];
  if (lVar1 != 0) {
    FUN_038501b0((float)param_3,lVar1,param_4);
    lVar2 = param_1[0x227];
    if (*(char *)(lVar2 + 0x2c0) != '\0') {
      *(undefined1 *)(lVar2 + 0x2c0) = 0;
      FUN_03855b20(lVar2 + 0xc0,0);
    }
    FUN_0384f8c0(lVar2,param_2,param_4,param_5 & 1);
    (**(code **)(*param_1 + 0x120))(param_1,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}

