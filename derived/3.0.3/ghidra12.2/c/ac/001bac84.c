
void FUN_001bac84(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *local_108 [5];
  undefined *local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  long local_d0;
  undefined8 uStack_c8;
  long local_b8;
  undefined1 auStack_a8 [48];
  undefined *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  
  *(undefined8 *)(param_1 + 8) = 0;
  lVar2 = FUN_00185a6c(0xd8);
  if (lVar2 != 0) {
    FUN_00193120(lVar2);
  }
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 8))();
  }
  *(long *)(param_1 + 8) = lVar2;
  local_70 = 1;
  local_6c = 0;
  puVar1 = PTR_DAT_04bcc018 + 0x10;
  local_78 = puVar1;
  uVar3 = FUN_00196a18();
  FUN_00196a24(&local_78,uVar3,0);
  FUN_00195b30(auStack_a8,&local_78);
  FUN_00187810(local_108);
  local_e0 = local_108[0];
  FUN_001967b0(auStack_a8,&local_e0,8,1);
  local_d8 = 1;
  local_d4 = 0;
  local_e0 = puVar1;
  uVar3 = FUN_00196a18();
  FUN_00196a24(&local_e0,uVar3,0);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),&local_78,&local_e0);
  FUN_0019c970(local_108,local_d0 + local_b8,uStack_c8);
  FUN_00194da8(*(undefined8 *)(param_1 + 8),local_108);
  FUN_0019cd34(local_108);
  FUN_00196ce0(&local_e0);
  FUN_00195bf0(auStack_a8);
  FUN_00196ce0(&local_78);
  return;
}

