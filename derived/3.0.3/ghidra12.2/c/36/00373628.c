
void FUN_00373628(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x60);
  FUN_00367b6c();
  puVar1 = PTR_DAT_04bd0898;
  param_1[0xc] = lVar2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 2;
  FUN_003697c0(param_1,param_2,param_3,param_4,param_5,param_6);
  (**(code **)(*param_1 + 0xd0))(param_1,param_2);
  return;
}

