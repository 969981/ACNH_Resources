
void FUN_002294cc(undefined8 param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (param_3 == (undefined4 *)0x0) {
    local_34 = 0x10c07;
  }
  else if ((*(long *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x28) != 0)) {
    local_34 = 0x10c08;
  }
  else {
    iVar1 = FUN_00180b60(param_2 + 0x20,4);
    if (iVar1 == 1) {
      local_34 = 0;
      *param_3 = (int)*(undefined8 *)(param_2 + 0x48);
    }
    else {
      local_34 = 0xc0b;
    }
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

