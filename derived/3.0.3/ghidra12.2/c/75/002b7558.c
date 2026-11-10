
void FUN_002b7558(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (((*(long *)(param_2 + 0x70) == 0) || (lVar1 = FUN_002aaa28(), lVar1 == 0)) ||
     ((*(uint *)(param_2 + 0x78) < 0xb &&
      ((1 << (ulong)(*(uint *)(param_2 + 0x78) & 0x1f) & 0x736U) != 0)))) {
    local_30 = 0x10c08;
  }
  else {
    local_30 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

