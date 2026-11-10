
undefined8
FUN_001430c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  uVar1 = FUN_0014a004();
  if ((uVar1 & 1) == 0) {
    local_34 = 0;
    local_48 = 0;
    local_40 = 0;
    uVar2 = FUN_00143150(param_1,&local_34,&local_48);
    if ((int)uVar2 == 0) {
      *param_4 = 0;
      uVar2 = FUN_0014dcbc(local_48,local_34,param_2,param_3,&local_40);
      if ((int)uVar2 == 0) {
        *param_4 = local_40;
      }
    }
  }
  else {
    uVar2 = 0x5d;
  }
  return uVar2;
}

