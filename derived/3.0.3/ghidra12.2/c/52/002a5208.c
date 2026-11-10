
void FUN_002a5208(undefined8 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  lVar1 = FUN_002aaa54();
  if (((lVar1 == 0) || (*(long *)(param_2 + 0x70) == 0)) ||
     (lVar1 = FUN_002aaa28(param_2), lVar1 == 0)) {
    local_34 = 0x10c08;
  }
  else {
    uVar2 = FUN_002aed20(*(undefined8 *)(param_2 + 0x70));
    if ((uVar2 & 1) == 0) {
      local_34 = 0x2c27;
    }
    else {
      uVar2 = FUN_002b1944(*(undefined8 *)(param_2 + 0x70),param_3);
      if ((uVar2 & 1) == 0) {
        local_34 = 0x4c0d;
      }
      else {
        local_34 = 0;
      }
    }
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

