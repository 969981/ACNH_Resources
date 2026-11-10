
void FUN_002d5154(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_70;
  undefined1 local_68 [8];
  undefined1 **local_60;
  undefined1 *local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  *(undefined8 *)(param_1 + 0xc) = 0;
  memset(auStack_48,0,0x18);
  FUN_002e7bd0(param_1 + 0x18,auStack_48,auStack_48 + 0x18,6);
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_001a2ac0(param_1 + 0x38,0,0,0);
  local_70 = PTR_DAT_04bce920;
  *(undefined1 *)(param_1 + 0x50) = 100;
  local_60 = &local_58;
  local_68[0] = 0;
  local_58 = (undefined1 *)0x0;
  uStack_50 = 0;
  local_70 = local_70 + 0x10;
  FUN_00314f0c(param_1 + 0x58,&local_70);
  local_70 = PTR_DAT_04bce970 + 0x10;
  FUN_00202558(&local_60,local_58);
  puVar2 = PTR_DAT_04bc0ec8;
  local_68[0] = 0;
  uStack_50 = 0x10;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_70 = puVar1;
  local_58 = local_68;
  FUN_00189504(param_1 + 0x88,&local_70);
  local_70 = puVar1;
  FUN_0018b1a0(&local_70);
  FUN_001865b0(param_1 + 0x80,*(undefined8 *)PTR_DAT_04bc13b8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  local_68[0] = 0;
  uStack_50 = 0x10;
  local_70 = puVar1;
  local_58 = local_68;
  FUN_00189504(param_1 + 0xb8,&local_70);
  local_70 = puVar1;
  FUN_0018b1a0(&local_70);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  local_68[0] = 0;
  uStack_50 = 0x10;
  local_70 = puVar1;
  local_58 = local_68;
  FUN_0018b070(&local_70,&DAT_0407ebb1,0xffffffffffffffff);
  lVar3 = FUN_0018b798(&local_70);
  if (lVar3 == 0) {
    FUN_0018a58c(param_1 + 0xf0,&DAT_0407ebb1);
  }
  else {
    uVar4 = FUN_00313c4c(&local_70);
    if ((uVar4 & 1) != 0) {
      FUN_00189504(param_1 + 0xf0,&local_70);
    }
  }
  local_70 = puVar2 + 0x10;
  FUN_0018b1a0(&local_70);
  return;
}

