
void FUN_0022957c(undefined8 param_1,int param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_2 - 0x1bU < 0xffffffe7) {
    local_24 = 0x10c07;
    goto LAB_00229600;
  }
  if (DAT_04c60394 < 0x1b) {
    if (DAT_04c60394 == 0) {
      if (param_2 == 2) goto LAB_002295f0;
    }
    else if (*(int *)((long)&DAT_04c60320 + (long)DAT_04c60394 * 4 + 4) <= param_2) {
LAB_002295f0:
      *(int *)(&DAT_04c60328 + (long)DAT_04c60394 * 4) = param_2;
      DAT_04c60394 = DAT_04c60394 + 1;
      local_24 = 0;
      goto LAB_00229600;
    }
  }
  local_24 = 0x10c08;
LAB_00229600:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

