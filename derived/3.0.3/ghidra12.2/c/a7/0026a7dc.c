
void FUN_0026a7dc(int *param_1,long param_2)

{
  int *piVar1;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  piVar1 = (int *)(param_2 + 0xd8);
  if (*piVar1 == 1) {
    local_24 = 0;
    local_34 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
    FUN_002296c4(param_1,&local_34);
  }
  else {
    if (*(int *)(param_2 + 0x108) != 0) {
      FUN_00220f24(piVar1);
      *(undefined4 *)(param_2 + 0x108) = 0;
    }
    FUN_0026a6d4(param_1,param_2,piVar1);
    if (*param_1 == 0) {
      *(undefined4 *)(param_2 + 0x108) = 1;
      return;
    }
  }
  return;
}

