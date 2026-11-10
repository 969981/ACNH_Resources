
void FUN_003134f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  long local_d0;
  undefined8 uStack_c8;
  long local_b8;
  undefined *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  lVar3 = FUN_0018b798();
  if (lVar3 != 0) {
    if (DAT_04c61490 == 0) {
      lVar3 = FUN_00185a6c(0xd8);
      if (lVar3 != 0) {
        FUN_00193120(lVar3);
      }
      DAT_04c61490 = lVar3;
    }
    FUN_00194e34(auStack_70);
    local_a0 = 1;
    local_9c = 0;
    puVar1 = PTR_DAT_04bcc018 + 0x10;
    local_a8 = puVar1;
    uVar4 = FUN_00196a18();
    FUN_00196a24(&local_a8,uVar4,0);
    uVar2 = FUN_00195084(auStack_70);
    local_d8 = 1;
    local_d4 = 0;
    local_e0 = puVar1;
    FUN_00196a24(&local_e0,uVar2,0);
    FUN_00189050(param_1,&local_e8);
    uVar4 = local_e8;
    uVar5 = FUN_0018b798(param_1);
    FUN_00193030(&local_a8,uVar4,uVar5,0xffffffffffffffff);
    FUN_00189128(local_e8);
    FUN_00194e64(auStack_70,&local_a8,&local_e0);
    lVar3 = DAT_04c61490;
    FUN_0019c970(auStack_58,local_d0 + local_b8,uStack_c8);
    FUN_00194da8(lVar3,auStack_58);
    FUN_0019cd34(auStack_58);
    *PTR_DAT_04bcec78 = 1;
    FUN_00196ce0(&local_e0);
    FUN_00196ce0(&local_a8);
    FUN_0019302c(auStack_70);
  }
  return;
}

