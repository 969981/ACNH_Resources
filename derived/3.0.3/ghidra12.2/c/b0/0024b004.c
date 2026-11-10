
void FUN_0024b004(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if ((*(ushort *)(param_2 + 0x29a) < 0x31 &&
       (1L << ((ulong)*(ushort *)(param_2 + 0x29a) & 0x3f) & 0x1111000000843U) != 0) &&
     ((uVar1 = FUN_0025946c(*(undefined8 *)(param_2 + 0x70)), (uVar1 & 1) != 0 ||
      (*(long *)(param_2 + 0x290) != 0)))) {
    local_30 = 0;
  }
  else {
    local_30 = 0x10c07;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

