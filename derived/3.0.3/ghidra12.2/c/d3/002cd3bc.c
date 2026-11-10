
void FUN_002cd3bc(undefined8 param_1,undefined8 param_2,char *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  uint local_18;
  undefined4 local_14;
  
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    local_18 = 0;
    iVar2 = nn::socket::InetAton(param_3,(InAddr *)&local_18);
    if (iVar2 != 0) {
      uVar1 = (local_18 & 0xff00ff00) >> 8 | (local_18 & 0xff00ff) << 8;
      FUN_0021f5a0(param_4,uVar1 >> 0x10 | uVar1 << 0x10);
      local_30 = 0;
      goto LAB_002cd410;
    }
  }
  local_30 = 0x10c07;
LAB_002cd410:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

