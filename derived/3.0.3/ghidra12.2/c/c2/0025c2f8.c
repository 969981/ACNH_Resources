
void FUN_0025c2f8(int *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    local_40 = 0x10c07;
  }
  else {
    if ((*(int *)(param_2 + 0x4f0) != 1) &&
       (uVar2 = FUN_002212e4(*(undefined8 *)(param_2 + 0x3d8)), (uVar2 & 1) == 0)) {
      iVar1 = FUN_002212bc(*(undefined8 *)(param_2 + 0x3d8));
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_2 + 0x3d8) + 0x10))(*(long **)(param_2 + 0x3d8),1);
      }
      *(undefined4 *)(param_2 + 0x488) = 0;
      (**(code **)(**(long **)(param_2 + 0x3d8) + 0x30))
                (param_1,*(long **)(param_2 + 0x3d8),param_3,param_4);
      if (*param_1 == 0) {
        FUN_002211bc(*(undefined8 *)(param_2 + 0x3d8),0);
        return;
      }
      return;
    }
    local_40 = 0x10c08;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

