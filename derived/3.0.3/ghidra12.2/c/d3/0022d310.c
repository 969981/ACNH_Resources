
void FUN_0022d310(undefined8 param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  uVar2 = FUN_0021f6f8(param_3);
  if ((uVar2 & 1) == 0) {
    local_34 = 0x10c07;
  }
  else {
    FUN_0021f54c(param_2 + 1,param_3);
    uVar1 = *(undefined1 *)(param_3 + 0x28);
    param_2[5] = *(long *)(param_3 + 0x20);
    *(undefined1 *)(param_2 + 6) = uVar1;
    if (*param_2 != 0) {
      FUN_0023c824(param_1,*param_2,param_3,(char)param_2[7]);
      return;
    }
    local_34 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

