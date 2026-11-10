
void FUN_001ba3a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  size_t sVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined8 local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  long local_d8;
  size_t sStack_d0;
  long local_c0;
  undefined *local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 auStack_78 [24];
  byte *local_60;
  undefined1 auStack_58 [40];
  
  if (*(char *)(param_1 + 0xf7) != '\0') {
    FUN_00189050(param_2,&local_60);
    bVar2 = *local_60;
    if (bVar2 == 0) {
      uVar4 = 0;
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      iVar9 = 0;
      do {
        local_60 = local_60 + 1;
        iVar9 = (uint)bVar2 + iVar9;
        uVar4 = (undefined1)iVar9;
        iVar8 = iVar8 + (uint)bVar2;
        bVar2 = *local_60;
      } while (bVar2 != 0);
    }
    FUN_00189128();
    *(undefined1 *)(param_1 + 0x24) = uVar4;
    *(int *)(param_1 + 0x28) = iVar8;
    FUN_00194e34(auStack_78);
    local_a8 = 1;
    local_a4 = 0;
    puVar1 = PTR_DAT_04bcc018 + 0x10;
    local_b0 = puVar1;
    uVar5 = FUN_00196a18();
    FUN_00196a24(&local_b0,uVar5,0);
    uVar4 = FUN_00195084(auStack_78);
    local_e0 = 1;
    local_dc = 0;
    local_e8 = puVar1;
    FUN_00196a24(&local_e8,uVar4,0);
    FUN_00189050(param_2,&local_f0);
    uVar5 = local_f0;
    uVar6 = FUN_0018b798(param_2);
    FUN_00193030(&local_b0,uVar5,uVar6,0xffffffffffffffff);
    FUN_00189128(local_f0);
    FUN_00194e64(auStack_78,&local_b0,&local_e8);
    sVar3 = sStack_d0;
    memcpy((void *)(param_1 + 8),(void *)(local_d8 + local_c0),sStack_d0);
    *(size_t *)(param_1 + 0x18) = sVar3;
    lVar7 = *(long *)(param_1 + 0x100);
    if (lVar7 != 0) {
      FUN_0019c970(auStack_58,local_d8 + local_c0,sStack_d0);
      FUN_00194da8(lVar7,auStack_58);
      FUN_0019cd34(auStack_58);
    }
    FUN_00196ce0(&local_e8);
    FUN_00196ce0(&local_b0);
    FUN_0019302c(auStack_78);
  }
  return;
}

