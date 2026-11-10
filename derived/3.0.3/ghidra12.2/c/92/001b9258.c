
void FUN_001b9258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined1 *local_28;
  
  local_58[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_48 = local_58;
  uStack_40 = 0x10;
  local_60 = puVar1;
  FUN_0018b070(&local_60,&DAT_0410a6c0,0xffffffffffffffff);
  local_28 = (undefined1 *)&local_60;
  lVar2 = FUN_001dda60(param_1 + 0x30,&local_60,PTR_piecewise_construct_04bcbf80,&local_28,
                       &uStack_31);
  FUN_00189504(lVar2 + 0x48,param_2);
  local_60 = puVar1;
  FUN_0018b1a0(&local_60);
  return;
}

