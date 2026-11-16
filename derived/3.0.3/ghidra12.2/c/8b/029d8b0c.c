
undefined8 FUN_029d8b0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined **local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined ***local_90;
  undefined *puStack_88;
  char *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  char *local_60;
  long lStack_58;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_a8 = uVar1;
  FUN_029d4670(param_1 + 0x968,&local_a8);
  uVar4 = nn::os::GetSystemTick();
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)(param_1 + 0x8b8) = uVar4;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x8bc) = uVar4;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x8c0) = uVar4;
  *(uint *)(param_1 + 0x8c4) = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  uVar4 = nn::os::GetSystemTick();
  uVar3 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = uVar3 ^ uVar3 * 0x800;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xa08) = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0xa0c) = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  *(uint *)(param_1 + 0xa10) = uVar3;
  uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
  *(uint *)(param_1 + 0xa14) = uVar4;
  *(byte *)(param_1 + 0xa2c) = (byte)uVar4 & 1;
  local_a8 = uVar1;
  local_a0 = uVar2;
  FUN_029e179c(param_1 + 0x10,&local_a8);
  local_a8 = uVar1;
  FUN_029d64c0(param_1 + 0x30,&local_a8);
  FUN_029d8074();
  local_70 = PTR_DAT_04bb2120;
  puStack_d0 = PTR_DAT_04bb2020 + 0x10;
  local_b8 = PTR_DAT_04bb2120;
  uStack_b0 = 0;
  local_d8 = &PTR_LAB_04a98798;
  local_c8 = PTR_DAT_04bb2120;
  if ((*(byte *)(param_1 + 0xa40) >> 1 & 1) == 0) {
    *(byte *)(param_1 + 0xa40) = *(byte *)(param_1 + 0xa40) | 2;
    local_a0 = param_1 + 0xa40;
    local_a8 = CONCAT62(local_a8._2_6_,1);
    uStack_98 = 0;
    local_90 = &local_d8;
    local_80 = "Bgm_DJ";
    lStack_58 = param_1 + 0xa50;
    local_60 = "KKFesWetObject";
    puStack_c0 = puStack_d0;
    puStack_88 = puStack_d0;
    puStack_78 = puStack_d0;
    puStack_68 = puStack_d0;
    FUN_03839ca0(*(undefined8 *)PTR_DAT_04bcb3d8,&local_a8,0);
  }
  return 1;
}

