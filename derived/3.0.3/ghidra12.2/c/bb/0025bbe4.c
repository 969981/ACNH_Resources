
void FUN_0025bbe4(int *param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (param_3 == 0) {
    local_34 = 0x10c07;
  }
  else {
    if ((*(int *)(param_2 + 0x4f0) != 1) &&
       (uVar2 = FUN_002212e4(*(undefined8 *)(param_2 + 0x3d0)), (uVar2 & 1) == 0)) {
      iVar1 = FUN_002212bc(*(undefined8 *)(param_2 + 0x3d0));
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_2 + 0x3d0) + 0x10))(*(long **)(param_2 + 0x3d0),1);
      }
      FUN_0025cb50(param_1,*(undefined8 *)(param_2 + 0x3d0),param_3,0);
      if (*param_1 == 0) {
        FUN_002211bc(*(undefined8 *)(param_2 + 0x3d0),0);
        return;
      }
      return;
    }
    local_34 = 0x10c08;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

