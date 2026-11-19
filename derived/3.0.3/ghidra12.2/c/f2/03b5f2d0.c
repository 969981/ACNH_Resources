
void FUN_03b5f2d0(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined2 local_38 [2];
  undefined4 local_34;
  
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
    if ((*(uint *)((long)param_1 + (ulong)(uVar2 >> 5 & 0x7ff) * 4 + 0x10) >> (ulong)(uVar2 & 0x1f)
        & 1) == 0) {
      uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
      lVar1 = (ulong)(uVar2 >> 5 & 0x7ff) * 4;
      *(uint *)((long)param_1 + lVar1 + 0x10) =
           1 << (ulong)(uVar2 & 0x1f) | *(uint *)((long)param_1 + lVar1 + 0x10);
      (**(code **)(*param_1 + 0x30))(param_1,param_1 + 1);
      local_38[0] = (**(code **)(*param_2 + 0x48))(param_2);
      local_34 = 0;
      FUN_03b56150(param_1 + 5,local_38,0);
    }
  }
  return;
}

