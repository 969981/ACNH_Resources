
void FUN_002a2eb8(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  
  if (param_3 == (long *)0x0) {
    uVar2 = 0x10c08;
  }
  else {
    uVar1 = FUN_002aed20(param_3);
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_002b1944(param_3,param_4);
      if ((uVar1 & 1) == 0) {
        local_2c = 0;
        local_34 = 0x2000000000000;
        (**(code **)(*param_3 + 0x30))(param_3,&local_34);
        local_34 = CONCAT44(local_34._4_4_,0x4c0d);
      }
      else {
        local_34 = (ulong)local_34._4_4_ << 0x20;
      }
      goto LAB_002a2f1c;
    }
    uVar2 = 0x10c0c;
  }
  local_34 = CONCAT44(local_34._4_4_,uVar2);
LAB_002a2f1c:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_34 + 4),(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

