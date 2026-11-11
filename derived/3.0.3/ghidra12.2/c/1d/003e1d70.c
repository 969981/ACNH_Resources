
undefined8
FUN_003e1d70(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
            undefined8 param_5,undefined4 *param_6,long param_7)

{
  ulong uVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  long lStack_40;
  undefined4 local_34;
  
  uVar1 = FUN_003b8704(param_2,param_4,&local_34);
  if ((uVar1 & 1) == 0) {
    return 3;
  }
  local_48 = FUN_003e0344(param_3,*param_6);
  if (local_48 == 0) {
    return 8;
  }
  lStack_40 = FUN_003d21f4(param_3 + 0x18,local_34);
  if (lStack_40 == 0) {
    return 9;
  }
  uStack_4c = *(undefined4 *)(param_7 + 0x10);
  local_50 = local_34;
  FUN_003e2190(param_5,&local_50);
  return 0;
}

