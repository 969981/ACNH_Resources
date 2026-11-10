
void FUN_00206bd8(undefined8 param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined **local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  
  lVar4 = *(long *)(param_2 + 0x10);
  FUN_001967c8(param_1,param_3 + 0x10);
  uVar1 = FUN_00189e50(0xffffffff);
  *param_4 = uVar1;
  FUN_00195a88(auStack_60);
  local_98 = *(undefined ***)(param_2 + 0x38);
  FUN_001967b0(auStack_60,&local_98,8,1);
  if (lVar4 == 0) {
    pppuVar3 = (undefined ***)&DAT_0410c854;
  }
  else {
    pppuVar3 = &local_98;
    local_98 = (undefined **)CONCAT44(local_98._4_4_,*(undefined4 *)(lVar4 + 0x18));
  }
  FUN_001967b0(auStack_60,pppuVar3,4,1);
  FUN_001967b0(auStack_60,param_4,4,1);
  local_90 = 1;
  local_8c = 0;
  local_98 = &PTR_FUN_048393d8;
  uVar2 = FUN_00196a18();
  FUN_00196a24(&local_98,uVar2,0);
  FUN_001f9ccc(*(undefined8 *)(param_2 + 0x28),local_50,&local_98,param_3 + 0x58);
  FUN_001967c8(param_1,&local_98);
  FUN_00196ce0(&local_98);
  FUN_00195bf0(auStack_60);
  return;
}

