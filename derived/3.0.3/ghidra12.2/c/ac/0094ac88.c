
void FUN_0094ac88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float local_78;
  undefined4 uStack_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar1 = PTR_DAT_04bb2150;
  FUN_0094a78c();
  local_68 = *(undefined4 *)(param_3 + 4);
  local_6c = 0x41200000;
  local_64 = 0x41200000;
  fVar3 = *(float *)(param_4 + 1);
  local_78 = (float)*param_4;
  fVar2 = local_78 + -10.0;
  uStack_74 = (undefined4)((ulong)*param_4 >> 0x20);
  local_70 = fVar3 + -10.0;
  local_78 = fVar2;
  FUN_0094a78c(param_1,param_2,&local_6c,puVar1,&local_78,0x100000,param_5);
  fVar3 = fVar3 + -10.0 + 20.0;
  local_70 = fVar3;
  FUN_0094a78c(param_1,param_2,&local_6c,puVar1,&local_78,0x100000,param_5);
  _local_78 = CONCAT44(uStack_74,fVar2 + 20.0);
  FUN_0094a78c(param_1,param_2,&local_6c,puVar1,&local_78,0x100000,param_5);
  local_70 = fVar3 + -20.0;
  FUN_0094a78c(param_1,param_2,&local_6c,puVar1,&local_78,0x100000,param_5);
  return;
}

