
void FUN_00313d28(long param_1)

{
  undefined *puVar1;
  undefined *local_58;
  undefined1 local_50 [4];
  undefined8 local_4c;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  local_50[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_40 = local_50;
  uStack_38 = 0x10;
  local_58 = puVar1;
  FUN_0018b070(&local_58,&DAT_0407ebb1,0xffffffffffffffff);
  FUN_003140d0(param_1 + 0x10,6,&local_58);
  local_58 = puVar1;
  FUN_0018b1a0(&local_58);
  FUN_0018a58c(param_1 + 0x28,&DAT_0407ebb1);
  FUN_0018a58c(param_1 + 0x50,&DAT_0407ebb1);
  FUN_0018a58c(param_1 + 0x78,&DAT_0407ebb1);
  FUN_0018a58c(param_1 + 0xa0,&DAT_0407ebb1);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 200) = 0x101;
  *(undefined1 *)(param_1 + 0xca) = 1;
  *(undefined2 *)(param_1 + 0x100) = 0x101;
  *(undefined2 *)(param_1 + 0xd0) = 1;
  *(undefined4 *)(param_1 + 0x104) = 0;
  FUN_0018a58c(param_1 + 0x108,&DAT_0407ebb1);
  local_50[0] = 0;
  local_58 = PTR_DAT_04bc0fe8 + 0x10;
  local_4c = 0x14ffffffff;
  FUN_001fed98(param_1 + 0x130,&local_58);
  return;
}

