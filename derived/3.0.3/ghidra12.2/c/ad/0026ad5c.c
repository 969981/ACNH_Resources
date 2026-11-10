
void FUN_0026ad5c(int *param_1,long param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  piVar1 = (int *)(param_2 + 0xd8);
  if (*piVar1 == 1) {
    local_24 = 0;
    local_40 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
    FUN_002296c4(param_1,&local_40);
  }
  else {
    if (*(int *)(param_2 + 0x108) != 0) {
      FUN_00220f24(piVar1);
      *(undefined4 *)(param_2 + 0x108) = 0;
    }
    FUN_0026a910(param_1,param_2,piVar1,param_3);
    if (*param_1 == 0) {
      *(undefined4 *)(param_2 + 0x108) = 2;
      return;
    }
  }
  return;
}

