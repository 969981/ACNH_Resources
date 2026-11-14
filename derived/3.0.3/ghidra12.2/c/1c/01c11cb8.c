
void FUN_01c11cb8(long *param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_70 [2];
  long local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  local_68 = param_2 + 0x20;
  local_70[0] = 10;
  (**(code **)(*param_1 + 0x38))();
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_38 = 1;
  local_34 = 0;
  local_60 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_58 = 0;
  FUN_02906b00(&local_60,param_1,local_70);
  iVar1 = *(int *)(param_2 + 0x34);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x40))(param_1);
  uVar3 = 1;
  if (iVar1 == 1) {
    uVar3 = 2;
  }
  *puVar2 = uVar3;
  return;
}

