
undefined8 FUN_03899304(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_8;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    if (*(char *)(param_1 + 8) == '\0') {
      return 1;
    }
    local_8 = FUN_0018774c(param_1 + 0x10);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)&local_30,(ErrorCode *)&local_8);
    uVar1 = 7;
  }
  else {
    local_8 = FUN_001877d0(*(undefined4 *)(param_1 + 0x34));
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)&local_30,(ErrorCode *)&local_8);
    uVar1 = 8;
  }
  *(undefined8 *)(param_2 + 1) = local_30;
  *(undefined8 *)(param_2 + 5) = 0;
  *param_2 = 2;
  param_2[3] = local_28;
  param_2[4] = uVar1;
  return 0;
}

