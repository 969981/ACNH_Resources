
long FUN_003dc474(long param_1,undefined8 param_2,long param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  long local_38;
  
  FUN_003dd544();
  local_38 = 0;
  iVar1 = nn::fs::ReadFile(&local_38,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),
                           param_2,param_3);
  if (iVar1 == 0) {
    uVar2 = (uint)(local_38 != param_3);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + local_38;
  }
  else {
    uVar2 = 0x81000000;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar2;
  }
  return local_38;
}

