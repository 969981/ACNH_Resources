
void FUN_002d4fd0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  long ****local_68;
  undefined8 local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_68 = (long ****)&local_68;
  local_58 = 0;
  local_60 = local_68;
  if ((long ****)(param_1 + 0x10) != local_68) {
    FUN_002e7620((long ****)(param_1 + 0x10),&local_68,&local_68);
    if (local_58 != 0) {
      ppplVar3 = *local_60;
      ppplVar3[1] = (long **)local_68[1];
      *local_68[1] = (long **)ppplVar3;
      local_58 = 0;
      if ((long *****)local_60 != &local_68) {
        pppplVar4 = local_60;
        do {
          pppplVar4 = (long ****)pppplVar4[1];
          FUN_00187e4c();
        } while ((long *****)pppplVar4 != &local_68);
      }
    }
  }
  puVar2 = PTR_DAT_04bc0ec8;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  local_60 = (long ****)((ulong)local_60 & 0xffffffffffffff00);
  uStack_48 = 0x10;
  ppplVar3 = (long ***)(puVar2 + 0x10);
  local_68 = (long ****)ppplVar3;
  local_50 = &local_60;
  FUN_0018b070(&local_68,&DAT_0407ebb1,0xffffffffffffffff);
  FUN_00189504(param_1 + 0x38,&local_68);
  local_68 = (long ****)ppplVar3;
  FUN_0018b1a0(&local_68);
  local_60 = (long ****)((ulong)local_60 & 0xffffffffffffff00);
  uStack_48 = 0x10;
  local_68 = (long ****)ppplVar3;
  local_50 = &local_60;
  FUN_0018b070(&local_68,&DAT_0407ebb1,0xffffffffffffffff);
  FUN_00189504(param_1 + 0x60,&local_68);
  local_68 = (long ****)ppplVar3;
  FUN_0018b1a0(&local_68);
  local_60 = (long ****)((ulong)local_60 & 0xffffffffffffff00);
  uStack_48 = 0x10;
  local_68 = (long ****)ppplVar3;
  local_50 = &local_60;
  FUN_00189504(param_1 + 0x88,&local_68);
  local_68 = (long ****)ppplVar3;
  FUN_0018b1a0(&local_68);
  puVar2 = PTR_DAT_04bce928;
  uVar1 = (uint)local_60;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  local_68 = (long ****)(puVar2 + 0x10);
  local_60 = (long ****)CONCAT44(3,uVar1 & 0xffffff00);
  FUN_00315694(param_1 + 0xb8,&local_68);
  return;
}

