
ulong FUN_0035c880(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN_0034fb50(&local_50);
  local_50 = CONCAT44(8,(undefined4)local_50);
  lVar1 = FUN_00347a58(param_1,&local_50);
  local_50 = 0;
  uStack_48 = 0;
  FUN_0034fb50(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar2 = FUN_00347a58(param_1,&local_50);
  local_50 = 0;
  uStack_48 = 0;
  FUN_0034fb50(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar3 = FUN_00347a58(param_1,&local_50);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_0034fb74(&local_50);
  lVar4 = FUN_003490ac(param_1,&local_50);
  return (((lVar1 + 0x6fU & -lVar1) + lVar2 + 0xb & -lVar2) + lVar3 + 3 & -lVar3) + lVar4 + 3 &
         -lVar4;
}

