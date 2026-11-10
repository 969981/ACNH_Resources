
void FUN_00283cf0(undefined8 param_1,long param_2)

{
  int *piVar1;
  undefined8 in_x4;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40 [4];
  undefined4 local_24;
  
  piVar1 = &local_50;
  FUN_00283d90(local_40);
  if (local_40[0] == 0) {
    FUN_00227418(*(undefined8 *)(param_2 + 0x30),in_x4);
    **(undefined1 **)(param_2 + 0x28) = 0xfd;
    local_50 = 0;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
  }
  else {
    piVar1 = local_40;
  }
  FUN_002296c4(param_1,piVar1);
  return;
}

