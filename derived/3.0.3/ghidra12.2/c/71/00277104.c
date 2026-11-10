
void FUN_00277104(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34 [4];
  undefined1 local_24 [4];
  
  local_38 = 0;
  local_3c = 0x1000000;
  uVar1 = FUN_002aaa54();
  local_34[0] = (**(code **)(*param_1 + 0x18))(param_1);
  lVar2 = FUN_002a9fb0(uVar1,local_34,param_2,1,&local_3c);
  if (lVar2 != 0) {
    local_24[0] = 3;
    FUN_002a9f34(local_34,uVar1,local_24);
  }
  return;
}

