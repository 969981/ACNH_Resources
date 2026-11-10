
long FUN_0015ac8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  int local_4;
  
  local_4 = 0;
  if ((code *)param_5[0xba] != (code *)0x0) {
    lVar1 = (*(code *)param_5[0xba])(param_5,0,param_2,param_3,&local_4);
    if ((local_4 == 0x51) || (lVar1 == 0)) {
      return -0x1f8;
    }
    if (lVar1 != -1) {
      return lVar1;
    }
    FUN_0014d5f8(*param_5,"Failed sending HTTP2 data");
  }
  return -0x386;
}

