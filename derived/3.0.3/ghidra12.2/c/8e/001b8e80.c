
void FUN_001b8e80(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined1 *local_58;
  
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_001b8590(param_2);
  }
  local_88[0] = 0;
  uStack_70 = 0x10;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_90 = puVar1;
  local_78 = local_88;
  FUN_0018b070(&local_90,param_3,0xffffffffffffffff);
  FUN_001dd950(param_2 + 0x30,&local_90);
  local_90 = puVar1;
  FUN_0018b1a0(&local_90);
  local_88[0] = 0;
  uStack_70 = 0x10;
  local_90 = puVar1;
  local_78 = local_88;
  FUN_0018b070(&local_90,param_3,0xffffffffffffffff);
  local_58 = (undefined1 *)&local_90;
  lVar2 = FUN_001ddce0(param_2 + 0x18,&local_90,PTR_piecewise_construct_04bcbf80,&local_58,
                       &uStack_61);
  *(undefined8 *)(lVar2 + 0x48) = param_4;
  local_90 = puVar1;
  FUN_0018b1a0(&local_90);
  *(undefined1 *)(param_2 + 0x69) = 0;
  local_90 = (undefined *)CONCAT44(local_90._4_4_,0x10001);
  FUN_0018aa70(param_1,&local_90);
  return;
}

