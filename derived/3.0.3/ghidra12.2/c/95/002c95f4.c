
void FUN_002c95f4(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_40;
  undefined4 local_38;
  
  lVar1 = FUN_002ca200(param_1 + 0x180);
  if ((((lVar1 == 0) || (*(int *)(lVar1 + 0x9c) == -1)) &&
      (lVar1 = FUN_002ca260(param_1 + 0x180,param_2), lVar1 == 0)) || (lVar1 == 0)) {
    return;
  }
  lVar3 = (long)DAT_04be24f4;
  plVar2 = (long *)FUN_00228380();
  lVar4 = *plVar2;
  local_40 = 0;
  FUN_002282f0(&local_40);
  *(undefined4 *)(lVar1 + 0xa4) = 0;
  *(undefined1 *)(lVar1 + 0x99) = 0;
  lVar3 = local_40 + lVar4 * lVar3;
  local_40 = 0;
  *(long *)(lVar1 + 0x90) = lVar3;
  FUN_002282f0(&local_40);
  local_38 = 0;
  *(long *)(lVar1 + 0x88) = local_40;
  local_40 = 0x80000;
  (**(code **)(*param_2 + 0x20))(param_2,&local_40);
  return;
}

