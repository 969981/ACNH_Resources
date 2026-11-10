
undefined8 FUN_00143150(long param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  if ((*(byte *)(param_1 + 0xf64) >> 6 & 1) == 0) {
    pcVar2 = "CONNECT_ONLY is required!";
  }
  else {
    iVar1 = FUN_00158cf4(param_1,param_3);
    *param_2 = iVar1;
    if (iVar1 != -1) {
      return 0;
    }
    pcVar2 = "Failed to get recent socket";
  }
  FUN_0014d5f8(param_1,pcVar2);
  return 1;
}

