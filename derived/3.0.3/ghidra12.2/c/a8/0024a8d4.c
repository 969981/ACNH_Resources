
void FUN_0024a8d4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if ((((*(ushort *)(param_2 + 0xc2) < 9) && (0xffffffce < *(byte *)(param_2 + 0x104) - 0x41)) &&
      (*(ushort *)(param_2 + 0x28c) < 0x31)) &&
     ((((1L << ((ulong)*(ushort *)(param_2 + 0x28c) & 0x3f) & 0x1111000000843U) != 0 &&
       (*(uint *)(param_2 + 0x288) < 0x171)) &&
      ((uVar1 = FUN_0025946c(*(undefined8 *)(param_2 + 0x70)), (uVar1 & 1) != 0 ||
       (*(long *)(param_2 + 0xb8) != 0)))))) {
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

