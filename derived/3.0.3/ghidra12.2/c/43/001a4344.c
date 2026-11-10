
void FUN_001a4344(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_1a0;
  undefined1 local_198 [16];
  undefined1 *local_188;
  undefined8 uStack_180;
  undefined *local_178;
  undefined1 local_170;
  undefined7 uStack_16f;
  undefined1 *local_160;
  undefined8 uStack_158;
  
  *(undefined1 *)(param_1 + 1) = 0;
  puVar2 = PTR_DAT_04bc0ec8;
  param_1[3] = (long)(param_1 + 1);
  param_1[4] = 0x10;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_00186330(&local_178,param_2 + 8,&DAT_040b8872);
  FUN_0018b50c(param_1,&local_178);
  local_178 = puVar2 + 0x10;
  FUN_0018b1a0(&local_178);
  lVar3 = FUN_0018b798(param_2 + 0x30);
  if (lVar3 != 0) {
    FUN_0018b50c(param_1,param_2 + 0x30);
    lVar3 = FUN_0018b798(param_2 + 0x58);
    if (lVar3 != 0) {
      FUN_00188940(&local_178,&DAT_040addd9,param_2 + 0x58);
      FUN_0018b50c(param_1,&local_178);
      local_178 = puVar2 + 0x10;
      FUN_0018b1a0(&local_178);
    }
    local_170 = 0;
    local_160 = &local_170;
    uStack_158 = 0x10;
    local_178 = puVar2 + 0x10;
    FUN_0018b070(&local_178,&DAT_040a3a35,0xffffffffffffffff);
    FUN_0018b50c(param_1,&local_178);
    local_178 = puVar2 + 0x10;
    FUN_0018b1a0(&local_178);
  }
  FUN_0018b50c(param_1,param_2 + 0x80);
  if (*(int *)(param_2 + 0xa8) != 0) {
    FUN_0018c3a4(&local_178);
    FUN_0018c5f0(&local_178,*(undefined4 *)(param_2 + 0xa8));
    local_198[0] = 0;
    puVar1 = puVar2 + 0x10;
    uStack_180 = 0x10;
    local_1a0 = puVar1;
    local_188 = local_198;
    FUN_0018b070(&local_1a0,&DAT_040addd9,0xffffffffffffffff);
    FUN_0018b50c(param_1,&local_1a0);
    local_1a0 = puVar1;
    FUN_0018b1a0(&local_1a0);
    local_198[0] = 0;
    uStack_180 = 0x10;
    local_1a0 = puVar1;
    local_188 = local_198;
    FUN_0018b070(&local_1a0,CONCAT71(uStack_16f,local_170),0xffffffffffffffff);
    FUN_0018b50c(param_1,&local_1a0);
    local_1a0 = puVar1;
    FUN_0018b1a0(&local_1a0);
    FUN_0018c3d4(&local_178);
  }
  FUN_0018b50c(param_1,param_2 + 0xb0);
  lVar3 = FUN_0018b798(param_2 + 0xd8);
  if (lVar3 != 0) {
    FUN_00188940(&local_178,&DAT_040995ce,param_2 + 0xd8);
    FUN_0018b50c(param_1,&local_178);
    local_178 = puVar2 + 0x10;
    FUN_0018b1a0(&local_178);
  }
  lVar3 = FUN_0018b798(param_2 + 0x100);
  if (lVar3 != 0) {
    FUN_00188940(&local_178,&DAT_0406a414,param_2 + 0x100);
    FUN_0018b50c(param_1,&local_178);
    local_178 = puVar2 + 0x10;
    FUN_0018b1a0(&local_178);
  }
  lVar3 = FUN_0018b798(param_2 + 0x128);
  if (lVar3 != 0) {
    FUN_00188940(&local_178,&DAT_04084559,param_2 + 0x128);
    FUN_0018b50c(param_1,&local_178);
    local_178 = puVar2 + 0x10;
    FUN_0018b1a0(&local_178);
  }
  return;
}

