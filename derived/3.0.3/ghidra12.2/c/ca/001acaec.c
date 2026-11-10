
void FUN_001acaec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_80;
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  undefined1 *local_48;
  
  local_78[0] = 0;
  uStack_60 = 0x10;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_80 = puVar1;
  local_68 = local_78;
  FUN_0018b070(&local_80,&DAT_0410a6bc,0xffffffffffffffff);
  FUN_001dd950(param_1 + 0x30,&local_80);
  local_80 = puVar1;
  FUN_0018b1a0(&local_80);
  local_78[0] = 0;
  uStack_60 = 0x10;
  local_80 = puVar1;
  local_68 = local_78;
  FUN_0018b070(&local_80,&DAT_0410a6bc,0xffffffffffffffff);
  local_48 = (undefined1 *)&local_80;
  lVar2 = FUN_001dda60(param_1 + 0x30,&local_80,PTR_piecewise_construct_04bcbf80,&local_48,
                       &uStack_51);
  FUN_00189504(lVar2 + 0x48,param_2);
  local_80 = puVar1;
  FUN_0018b1a0(&local_80);
  return;
}

