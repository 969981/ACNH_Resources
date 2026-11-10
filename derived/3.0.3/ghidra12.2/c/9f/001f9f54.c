
void FUN_001f9f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined **local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  long local_a0;
  undefined8 uStack_98;
  long local_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [16];
  undefined8 local_50;
  
  FUN_00195a88(auStack_60);
  uVar1 = FUN_0019cd8c(param_2);
  lVar2 = FUN_001932e0(param_2);
  FUN_00195d60(auStack_60,uVar1,lVar2 << 3);
  uVar1 = FUN_0019cd8c(param_3);
  lVar2 = FUN_001932e0(param_3);
  FUN_00195d60(auStack_60,uVar1,lVar2 << 3);
  FUN_00194e34(auStack_78);
  local_a8 = 1;
  local_a4 = 0;
  local_b0 = &PTR_FUN_048393d8;
  uVar1 = FUN_00196a18();
  FUN_00196a24(&local_b0,uVar1,0);
  FUN_00194e64(auStack_78,local_50,&local_b0);
  FUN_0019c970(param_1,local_a0 + local_88,uStack_98);
  FUN_00196ce0(&local_b0);
  FUN_0019302c(auStack_78);
  FUN_00195bf0(auStack_60);
  return;
}

