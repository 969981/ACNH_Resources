
void FUN_01318a10(long param_1,undefined4 param_2)

{
  uint uVar1;
  float fVar2;
  undefined **local_20;
  int local_18;
  int iStack_14;
  
  local_20 = &PTR_FUN_048f9730;
  fVar2 = (float)*(int *)(param_1 + 8) * 0.5;
  uVar1 = 0;
  if (fVar2 != (float)(int)fVar2) {
    uVar1 = (uint)(fVar2 < 0.0);
  }
  local_18 = (int)fVar2 - uVar1;
  fVar2 = (float)*(int *)(param_1 + 0xc) * 0.5;
  uVar1 = 0;
  if (fVar2 != (float)(int)fVar2) {
    uVar1 = (uint)(fVar2 < 0.0);
  }
  iStack_14 = (int)fVar2 - uVar1;
  FUN_01318aa0(&local_20,param_2);
  return;
}

