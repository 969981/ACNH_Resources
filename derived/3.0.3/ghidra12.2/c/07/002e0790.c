
void FUN_002e0790(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  FUN_002df7a0(&local_40);
  if (local_40 == 0) {
    FUN_002d4ed0(*(undefined8 *)(param_2 + 0xc0));
    FUN_0031450c(*(long *)(param_2 + 0xc0) + 0x10,*(undefined8 *)(param_2 + 0x80));
    uVar2 = FUN_002be2ec(param_3);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_2 + 0xc0);
      uVar1 = FUN_002be2e4(param_3);
      *(undefined4 *)(lVar3 + 0x17c) = uVar1;
    }
    local_40 = 0;
  }
  else {
    local_40 = 0x10c08;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

