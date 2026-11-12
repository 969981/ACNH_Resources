
uint FUN_00699e44(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  char local_30 [16];
  
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  nn::util::SNPrintf(local_30,0xc,"%d",param_3 & 0xffffffff);
  uVar1 = FUN_00699cc0(param_1,param_2,local_30,0);
  return uVar1 & 1;
}

