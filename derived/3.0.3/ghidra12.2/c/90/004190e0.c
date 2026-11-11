
void FUN_004190e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined8 uStack_58;
  
  puVar3 = PTR_DAT_04bd2a60;
  puVar2 = PTR_DAT_04bc0ec8;
  local_98[0] = 0;
  local_88 = local_98;
  uStack_80 = 0x10;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_b0 = PTR_DAT_04bd2a60 + 0x10;
  local_a8 = 0;
  local_a0 = puVar1;
  FUN_0018a58c(&local_a0,&DAT_0407ebb1);
  puVar4 = PTR_DAT_04bd2bf8;
  local_70[0] = 0;
  local_b0 = PTR_DAT_04bd2bf8 + 0x10;
  local_60 = local_70;
  uStack_58 = 0x10;
  local_78 = puVar1;
  uVar5 = FUN_0041ca50(&local_b0,param_3);
  if ((uVar5 & 1) == 0) {
    local_b4 = 0x80720003;
    FUN_0018aa70(param_1,&local_b4);
  }
  else {
    FUN_0041cc80(param_1,local_a8);
  }
  local_b0 = puVar4 + 0x10;
  local_78 = puVar2 + 0x10;
  FUN_0018b1a0(&local_78);
  local_b0 = puVar3 + 0x10;
  local_a0 = puVar2 + 0x10;
  FUN_0018b1a0(&local_a0);
  return;
}

